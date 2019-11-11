#ifndef __INCLUDE_OBJ_H__
#define __INCLUDE_OBJ_H__

#if !defined(__cplusplus)
#error C++ compiler required
#endif

#include <objbase.h>

class dmsoft
{
private:
    IDispatch * obj;

public:
    dmsoft();
    virtual ~dmsoft();

    virtual long SetRowGapNoDict(long row_gap);
    virtual CString Assemble(LONGLONG base_addr,long is_64bit);
    virtual long EnableMouseSync(long en,long time_out);
    virtual long LockMouseRect(long x1,long y1,long x2,long y2);
    virtual CString SortPosDistance(const TCHAR * all_pos,long tpe,long x,long y);
    virtual CString GetNetTimeSafe();
    virtual long DownCpu(long rate);
    virtual long UnBindWindow();
    virtual long InitCri();
    virtual long CheckInputMethod(long hwnd,const TCHAR * id);
    virtual double ReadDouble(long hwnd,const TCHAR * addr);
    virtual long SetDisplayDelay(long t);
    virtual long MoveFile(const TCHAR * src_file,const TCHAR * dst_file);
    virtual CString GetWindowProcessPath(long hwnd);
    virtual CString VirtualQueryEx(long hwnd,LONGLONG addr,long pmbi);
    virtual long WriteString(long hwnd,const TCHAR * addr,long tpe,const TCHAR * v);
    virtual long GetWindowState(long hwnd,long flag);
    virtual long FaqCaptureFromFile(long x1,long y1,long x2,long y2,const TCHAR * file_name,long quality);
    virtual long Play(const TCHAR * file_name);
    virtual long FaqCaptureString(const TCHAR * str);
    virtual CString FaqSend(const TCHAR * server,long handle,long request_type,long time_out);
    virtual CString FindMultiColorEx(long x1,long y1,long x2,long y2,const TCHAR * first_color,const TCHAR * offset_color,double sim,long dir);
    virtual long SetEnumWindowDelay(long delay);
    virtual long SetScreen(long width,long height,long depth);
    virtual CString GetDict(long index,long font_index);
    virtual CString FindPicMemE(long x1,long y1,long x2,long y2,const TCHAR * pic_info,const TCHAR * delta_color,double sim,long dir);
    virtual long DownloadFile(const TCHAR * url,const TCHAR * save_file,long timeout);
    virtual long delay(long mis);
    virtual long EnableGetColorByCapture(long en);
    virtual long FoobarFillRect(long hwnd,long x1,long y1,long x2,long y2,const TCHAR * color);
    virtual long ExitOs(long tpe);
    virtual CString FloatToData(float float_value);
    virtual CString BGR2RGB(const TCHAR * bgr_color);
    virtual long WriteDataFromBin(long hwnd,const TCHAR * addr,long data,long length);
    virtual CString ReadData(long hwnd,const TCHAR * addr,long length);
    virtual long FoobarTextRect(long hwnd,long x,long y,long w,long h);
    virtual long ReadDataAddrToBin(long hwnd,LONGLONG addr,long length);
    virtual long FindStr(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim,long * x,long * y);
    virtual long SetExactOcr(long exact_ocr);
    virtual long GetFileLength(const TCHAR * file_name);
    virtual CString FindStrS(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim,long * x,long * y);
    virtual long EnableKeypadPatch(long en);
    virtual double ReadDoubleAddr(long hwnd,LONGLONG addr);
    virtual long FoobarUnlock(long hwnd);
    virtual CString GetWordsNoDict(long x1,long y1,long x2,long y2,const TCHAR * color);
    virtual long EnableKeypadMsg(long en);
    virtual long LoadPicByte(long addr,long size,const TCHAR * name);
    virtual long SetExcludeRegion(long tpe,const TCHAR * info);
    virtual long WriteDouble(long hwnd,const TCHAR * addr,double v);
    virtual long FindWindowByProcess(const TCHAR * process_name,const TCHAR * class_name,const TCHAR * title_name);
    virtual long EncodeFile(const TCHAR * file_name,const TCHAR * pwd);
    virtual long SetMouseDelay(const TCHAR * tpe,long delay);
    virtual long SetMemoryHwndAsProcessId(long en);
    virtual long WheelDown();
    virtual long SwitchBindWindow(long hwnd);
    virtual long CreateFoobarCustom(long hwnd,long x,long y,const TCHAR * pic,const TCHAR * trans_color,double sim);
    virtual long DisablePowerSave();
    virtual long Delays(long min_s,long max_s);
    virtual long ClearDict(long index);
    virtual long GetScreenHeight();
    virtual long GetWordResultPos(const TCHAR * str,long index,long * x,long * y);
    virtual long FindWindow(const TCHAR * class_name,const TCHAR * title_name);
    virtual long GetWordResultCount(const TCHAR * str);
    virtual long DeleteFile(const TCHAR * file_name);
    virtual long SendStringIme2(long hwnd,const TCHAR * str,long mode);
    virtual long IsBind(long hwnd);
    virtual long CapturePre(const TCHAR * file_name);
    virtual LONGLONG ReadInt(long hwnd,const TCHAR * addr,long tpe);
    virtual long GetForegroundWindow();
    virtual long SetWordGapNoDict(long word_gap);
    virtual CString FindStrExS(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim);
    virtual CString FindInt(long hwnd,const TCHAR * addr_range,LONGLONG int_value_min,LONGLONG int_value_max,long tpe);
    virtual long ClientToScreen(long hwnd,long * x,long * y);
    virtual long EnableFakeActive(long en);
    virtual long WriteDoubleAddr(long hwnd,LONGLONG addr,double v);
    virtual CString GetCommandLine(long hwnd);
    virtual long FindColorBlock(long x1,long y1,long x2,long y2,const TCHAR * color,double sim,long count,long width,long height,long * x,long * y);
    virtual long KeyPressStr(const TCHAR * key_str,long delay);
    virtual long SetDisplayRefreshDelay(long t);
    virtual long SendStringIme(const TCHAR * str);
    virtual long EnableSpeedDx(long en);
    virtual long LockDisplay(long locks);
    virtual long GetResultPos(const TCHAR * str,long index,long * x,long * y);
    virtual long FindStrFast(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim,long * x,long * y);
    virtual CString IntToData(LONGLONG int_value,long tpe);
    virtual CString DoubleToData(double double_value);
    virtual long GetClientRect(long hwnd,long * x1,long * y1,long * x2,long * y2);
    virtual long FoobarSetTrans(long hwnd,long trans,const TCHAR * color,double sim);
    virtual long FoobarPrintText(long hwnd,const TCHAR * text,const TCHAR * color);
    virtual CString FindStrWithFontE(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim,const TCHAR * font_name,long font_size,long flag);
    virtual long FreeProcessMemory(long hwnd);
    virtual long CmpColor(long x,long y,const TCHAR * color,double sim);
    virtual long SetDictMem(long index,long addr,long size);
    virtual long KeyUp(long vk);
    virtual long GetPointWindow(long x,long y);
    virtual long EnableIme(long en);
    virtual CString EnumWindow(long parent,const TCHAR * title,const TCHAR * class_name,long filter);
    virtual CString GetPath();
    virtual CString GetCursorShape();
    virtual long FaqGetSize(long handle);
    virtual long MoveR(long rx,long ry);
    virtual long AsmClear();
    virtual CString FindStrFastEx(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim);
    virtual long FaqIsPosted();
    virtual CString FindPicE(long x1,long y1,long x2,long y2,const TCHAR * pic_name,const TCHAR * delta_color,double sim,long dir);
    virtual long GetScreenDataBmp(long x1,long y1,long x2,long y2,long * data,long * size);
    virtual long FaqPost(const TCHAR * server,long handle,long request_type,long time_out);
    virtual long SetWindowTransparent(long hwnd,long v);
    virtual long SetWindowSize(long hwnd,long width,long height);
    virtual CString FindStrFastS(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim,long * x,long * y);
    virtual long SetDisplayInput(const TCHAR * mode);
    virtual CString FindStrEx(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim);
    virtual long FindMultiColor(long x1,long y1,long x2,long y2,const TCHAR * first_color,const TCHAR * offset_color,double sim,long dir,long * x,long * y);
    virtual long KeyUpChar(const TCHAR * key_str);
    virtual CString FindDouble(long hwnd,const TCHAR * addr_range,double double_value_min,double double_value_max);
    virtual long IsFileExist(const TCHAR * file_name);
    virtual long SetDict(long index,const TCHAR * dict_name);
    virtual long GetDictCount(long index);
    virtual long FaqCapture(long x1,long y1,long x2,long y2,long quality,long delay,long time);
    virtual long GetLastError();
    virtual long CreateFoobarRoundRect(long hwnd,long x,long y,long w,long h,long rw,long rh);
    virtual long EnableBind(long en);
    virtual long ShowScrMsg(long x1,long y1,long x2,long y2,const TCHAR * msg,const TCHAR * color);
    virtual long GetDmCount();
    virtual CString MoveToEx(long x,long y,long w,long h);
    virtual LONGLONG AsmCallEx(long hwnd,long mode,const TCHAR * base_addr);
    virtual long KeyPress(long vk);
    virtual CString EnumProcess(const TCHAR * name);
    virtual long GetBindWindow();
    virtual CString GetCursorSpot();
    virtual long SetMinColGap(long col_gap);
    virtual long CheckFontSmooth();
    virtual long GetID();
    virtual CString EnumWindowByProcessId(long pid,const TCHAR * title,const TCHAR * class_name,long filter);
    virtual CString GetColorBGR(long x,long y);
    virtual long TerminateProcess(long pid);
    virtual long EnableMouseAccuracy(long en);
    virtual CString StringToData(const TCHAR * string_value,long tpe);
    virtual CString GetPicSize(const TCHAR * pic_name);
    virtual CString FaqFetch();
    virtual CString AppendPicAddr(const TCHAR * pic_info,long addr,long size);
    virtual long DeleteIniPwd(const TCHAR * section,const TCHAR * key,const TCHAR * file_name,const TCHAR * pwd);
    virtual CString GetAveHSV(long x1,long y1,long x2,long y2);
    virtual long FreeScreenData(long handle);
    virtual CString GetClipboard();
    virtual long GetCursorPos(long * x,long * y);
    virtual long EnableFontSmooth();
    virtual long AsmAdd(const TCHAR * asm_ins);
    virtual long LeftDown();
    virtual long GetScreenDepth();
    virtual long SetDisplayAcceler(long level);
    virtual long SetClipboard(const TCHAR * data);
    virtual long RightDown();
    virtual CString FindDoubleEx(long hwnd,const TCHAR * addr_range,double double_value_min,double double_value_max,long steps,long multi_thread,long mode);
    virtual long FoobarDrawLine(long hwnd,long x1,long y1,long x2,long y2,const TCHAR * color,long style,long width);
    virtual long SetMouseSpeed(long speed);
    virtual long WriteDataAddrFromBin(long hwnd,LONGLONG addr,long data,long length);
    virtual long FoobarDrawText(long hwnd,long x,long y,long w,long h,const TCHAR * text,const TCHAR * color,long align);
    virtual CString FindMultiColorE(long x1,long y1,long x2,long y2,const TCHAR * first_color,const TCHAR * offset_color,double sim,long dir);
    virtual CString ReadString(long hwnd,const TCHAR * addr,long tpe,long length);
    virtual long LeftUp();
    virtual long DmGuard(long en,const TCHAR * tpe);
    virtual long GetFps();
    virtual long WriteFloat(long hwnd,const TCHAR * addr,float v);
    virtual CString OcrEx(long x1,long y1,long x2,long y2,const TCHAR * color,double sim);
    virtual long GetKeyState(long vk);
    virtual long GetMousePointWindow();
    virtual CString GetMachineCodeNoMac();
    virtual CString ReadFile(const TCHAR * file_name);
    virtual CString EnumWindowSuper(const TCHAR * spec1,long flag1,long type1,const TCHAR * spec2,long flag2,long type2,long sort);
    virtual float ReadFloat(long hwnd,const TCHAR * addr);
    virtual long SetExportDict(long index,const TCHAR * dict_name);
    virtual long ActiveInputMethod(long hwnd,const TCHAR * id);
    virtual CString GetDictInfo(const TCHAR * str,const TCHAR * font_name,long font_size,long flag);
    virtual long ReleaseRef();
    virtual long GetWindowProcessId(long hwnd);
    virtual long SetWordLineHeight(long line_height);
    virtual long ForceUnBindWindow(long hwnd);
    virtual long GetMouseSpeed();
    virtual long StrStr(const TCHAR * s,const TCHAR * str);
    virtual long RegNoMac(const TCHAR * code,const TCHAR * Ver);
    virtual long FindInputMethod(const TCHAR * id);
    virtual long LoadPic(const TCHAR * pic_name);
    virtual long SetExitThread(long en);
    virtual long CreateFolder(const TCHAR * folder_name);
    virtual long SetMinRowGap(long row_gap);
    virtual long UseDict(long index);
    virtual LONGLONG GetModuleBaseAddr(long hwnd,const TCHAR * module_name);
    virtual long Int64ToInt32(LONGLONG v);
    virtual long GetScreenWidth();
    virtual long SetClientSize(long hwnd,long width,long height);
    virtual CString ReadIni(const TCHAR * section,const TCHAR * key,const TCHAR * file_name);
    virtual long KeyDown(long vk);
    virtual long AddDict(long index,const TCHAR * dict_info);
    virtual long FoobarUpdate(long hwnd);
    virtual long WriteStringAddr(long hwnd,LONGLONG addr,long tpe,const TCHAR * v);
    virtual long Is64Bit();
    virtual long FindWindowSuper(const TCHAR * spec1,long flag1,long type1,const TCHAR * spec2,long flag2,long type2);
    virtual CString FindPicEx(long x1,long y1,long x2,long y2,const TCHAR * pic_name,const TCHAR * delta_color,double sim,long dir);
    virtual CString FindPicExS(long x1,long y1,long x2,long y2,const TCHAR * pic_name,const TCHAR * delta_color,double sim,long dir);
    virtual CString GetWindowTitle(long hwnd);
    virtual CString ReadDataAddr(long hwnd,LONGLONG addr,long length);
    virtual CString ReadIniPwd(const TCHAR * section,const TCHAR * key,const TCHAR * file_name,const TCHAR * pwd);
    virtual long EnableShareDict(long en);
    virtual CString GetColor(long x,long y);
    virtual long CapturePng(long x1,long y1,long x2,long y2,const TCHAR * file_name);
    virtual CString MatchPicName(const TCHAR * pic_name);
    virtual long SetEnv(long index,const TCHAR * name,const TCHAR * value);
    virtual long GetScreenData(long x1,long y1,long x2,long y2);
    virtual CString GetColorHSV(long x,long y);
    virtual long SetParam64ToPointer();
    virtual CString Ver();
    virtual long SetWindowText(long hwnd,const TCHAR * text);
    virtual CString ReadFileData(const TCHAR * file_name,long start_pos,long end_pos);
    virtual CString FindShapeEx(long x1,long y1,long x2,long y2,const TCHAR * offset_color,double sim,long dir);
    virtual CString FindStringEx(long hwnd,const TCHAR * addr_range,const TCHAR * string_value,long tpe,long steps,long multi_thread,long mode);
    virtual CString GetWords(long x1,long y1,long x2,long y2,const TCHAR * color,double sim);
    virtual CString Md5(const TCHAR * str);
    virtual long DeleteFolder(const TCHAR * folder_name);
    virtual long FindStrWithFont(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim,const TCHAR * font_name,long font_size,long flag,long * x,long * y);
    virtual long MoveDD(long dx,long dy);
    virtual long FindMulColor(long x1,long y1,long x2,long y2,const TCHAR * color,double sim);
    virtual long RightUp();
    virtual long BindWindowEx(long hwnd,const TCHAR * display,const TCHAR * mouse,const TCHAR * keypad,const TCHAR * public_desc,long mode);
    virtual float ReadFloatAddr(long hwnd,LONGLONG addr);
    virtual long EnableDisplayDebug(long enable_debug);
    virtual long SetMemoryFindResultToFile(const TCHAR * file_name);
    virtual CString GetDir(long tpe);
    virtual CString SelectDirectory();
    virtual long SetUAC(long uac);
    virtual long FaqCancel();
    virtual CString EnumWindowByProcess(const TCHAR * process_name,const TCHAR * title,const TCHAR * class_name,long filter);
    virtual long SendPaste(long hwnd);
    virtual CString FindIntEx(long hwnd,const TCHAR * addr_range,LONGLONG int_value_min,LONGLONG int_value_max,long tpe,long steps,long multi_thread,long mode);
    virtual long GetDPI();
    virtual long LockInput(long locks);
    virtual long Beep(long fre,long delay);
    virtual long FoobarStartGif(long hwnd,long x,long y,const TCHAR * pic_name,long repeat_limit,long delay);
    virtual long WriteDataAddr(long hwnd,LONGLONG addr,const TCHAR * data);
    virtual LONGLONG AsmCall(long hwnd,long mode);
    virtual long CreateFoobarEllipse(long hwnd,long x,long y,long w,long h);
    virtual long FreePic(const TCHAR * pic_name);
    virtual CString Ocr(long x1,long y1,long x2,long y2,const TCHAR * color,double sim);
    virtual LONGLONG ReadIntAddr(long hwnd,LONGLONG addr,long tpe);
    virtual long FoobarTextLineGap(long hwnd,long gap);
    virtual CString FindColorBlockEx(long x1,long y1,long x2,long y2,const TCHAR * color,double sim,long count,long width,long height);
    virtual long DecodeFile(const TCHAR * file_name,const TCHAR * pwd);
    virtual long SendString(long hwnd,const TCHAR * str);
    virtual CString EnumIniKeyPwd(const TCHAR * section,const TCHAR * file_name,const TCHAR * pwd);
    virtual CString GetDisplayInfo();
    virtual long FoobarStopGif(long hwnd,long x,long y,const TCHAR * pic_name);
    virtual long DisableCloseDisplayAndSleep();
    virtual long WheelUp();
    virtual long FaqRelease(long handle);
    virtual long WriteIni(const TCHAR * section,const TCHAR * key,const TCHAR * v,const TCHAR * file_name);
    virtual long SetAero(long en);
    virtual long DisableFontSmooth();
    virtual long WaitKey(long key_code,long time_out);
    virtual long SetPath(const TCHAR * path);
    virtual long DelEnv(long index,const TCHAR * name);
    virtual long VirtualFreeEx(long hwnd,LONGLONG addr);
    virtual long ScreenToClient(long hwnd,long * x,long * y);
    virtual long RightClick();
    virtual CString SelectFile();
    virtual long WriteIntAddr(long hwnd,LONGLONG addr,long tpe,LONGLONG v);
    virtual CString GetAveRGB(long x1,long y1,long x2,long y2);
    virtual long CreateFoobarRect(long hwnd,long x,long y,long w,long h);
    virtual long CopyFile(const TCHAR * src_file,const TCHAR * dst_file,long over);
    virtual CString GetWordResultStr(const TCHAR * str,long index);
    virtual long GetCpuType();
    virtual long CaptureJpg(long x1,long y1,long x2,long y2,const TCHAR * file_name,long quality);
    virtual long FoobarClearText(long hwnd);
    virtual long FindPic(long x1,long y1,long x2,long y2,const TCHAR * pic_name,const TCHAR * delta_color,double sim,long dir,long * x,long * y);
    virtual long DisableScreenSave();
    virtual CString GetNetTime();
    virtual long GetWindow(long hwnd,long flag);
    virtual long EnterCri();
    virtual CString FindFloatEx(long hwnd,const TCHAR * addr_range,float float_value_min,float float_value_max,long steps,long multi_thread,long mode);
    virtual long SetDictPwd(const TCHAR * pwd);
    virtual long Log(const TCHAR * info);
    virtual CString GetMac();
    virtual long GetResultCount(const TCHAR * str);
    virtual long EnableRealMouse(long en,long mousedelay,long mousestep);
    virtual CString EnumIniSectionPwd(const TCHAR * file_name,const TCHAR * pwd);
    virtual long FindColor(long x1,long y1,long x2,long y2,const TCHAR * color,double sim,long dir,long * x,long * y);
    virtual CString ExcludePos(const TCHAR * all_pos,long tpe,long x1,long y1,long x2,long y2);
    virtual long FindWindowByProcessId(long process_id,const TCHAR * class_name,const TCHAR * title_name);
    virtual long SetKeypadDelay(const TCHAR * tpe,long delay);
    virtual long GetColorNum(long x1,long y1,long x2,long y2,const TCHAR * color,double sim);
    virtual long BindWindow(long hwnd,const TCHAR * display,const TCHAR * mouse,const TCHAR * keypad,long mode);
    virtual CString GetEnv(long index,const TCHAR * name);
    virtual CString FindPicMemEx(long x1,long y1,long x2,long y2,const TCHAR * pic_info,const TCHAR * delta_color,double sim,long dir);
    virtual long SaveDict(long index,const TCHAR * file_name);
    virtual long SetLocale();
    virtual CString FindStrWithFontEx(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim,const TCHAR * font_name,long font_size,long flag);
    virtual CString FindStrFastE(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim);
    virtual long EnablePicCache(long en);
    virtual long LeftClick();
    virtual long Stop(long id);
    virtual long KeyPressChar(const TCHAR * key_str);
    virtual long FindShape(long x1,long y1,long x2,long y2,const TCHAR * offset_color,double sim,long dir,long * x,long * y);
    virtual long LeftDoubleClick();
    virtual long FoobarDrawPic(long hwnd,long x,long y,const TCHAR * pic,const TCHAR * trans_color);
    virtual CString FindDataEx(long hwnd,const TCHAR * addr_range,const TCHAR * data,long steps,long multi_thread,long mode);
    virtual long GetWindowRect(long hwnd,long * x1,long * y1,long * x2,long * y2);
    virtual CString DisAssemble(const TCHAR * asm_code,LONGLONG base_addr,long is_64bit);
    virtual long WriteFile(const TCHAR * file_name,const TCHAR * content);
    virtual long Reg(const TCHAR * code,const TCHAR * Ver);
    virtual CString GetWindowClass(long hwnd);
    virtual long GetNowDict();
    virtual long VirtualProtectEx(long hwnd,LONGLONG addr,long size,long tpe,long old_protect);
    virtual CString GetProcessInfo(long pid);
    virtual CString EnumIniSection(const TCHAR * file_name);
    virtual long FindPicMem(long x1,long y1,long x2,long y2,const TCHAR * pic_info,const TCHAR * delta_color,double sim,long dir,long * x,long * y);
    virtual CString EnumIniKey(const TCHAR * section,const TCHAR * file_name);
    virtual CString FindShapeE(long x1,long y1,long x2,long y2,const TCHAR * offset_color,double sim,long dir);
    virtual long ReadDataToBin(long hwnd,const TCHAR * addr,long length);
    virtual CString ReadStringAddr(long hwnd,LONGLONG addr,long tpe,long length);
    virtual CString FindStrFastExS(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim);
    virtual long SetSimMode(long mode);
    virtual CString OcrExOne(long x1,long y1,long x2,long y2,const TCHAR * color,double sim);
    virtual long GetSpecialWindow(long flag);
    virtual CString FindNearestPos(const TCHAR * all_pos,long tpe,long x,long y);
    virtual long FoobarSetSave(long hwnd,const TCHAR * file_name,long en,const TCHAR * header);
    virtual long FoobarLock(long hwnd);
    virtual long OpenProcess(long pid);
    virtual long EnableMouseMsg(long en);
    virtual long SendString2(long hwnd,const TCHAR * str);
    virtual long FoobarSetFont(long hwnd,const TCHAR * font_name,long size,long flag);
    virtual long MoveWindow(long hwnd,long x,long y);
    virtual CString OcrInFile(long x1,long y1,long x2,long y2,const TCHAR * pic_name,const TCHAR * color,double sim);
    virtual CString FindColorEx(long x1,long y1,long x2,long y2,const TCHAR * color,double sim,long dir);
    virtual long GetForegroundFocus();
    virtual long WriteIniPwd(const TCHAR * section,const TCHAR * key,const TCHAR * v,const TCHAR * file_name,const TCHAR * pwd);
    virtual long RunApp(const TCHAR * path,long mode);
    virtual CString GetCursorShapeEx(long tpe);
    virtual CString FindString(long hwnd,const TCHAR * addr_range,const TCHAR * string_value,long tpe);
    virtual CString FindData(long hwnd,const TCHAR * addr_range,const TCHAR * data);
    virtual long CaptureGif(long x1,long y1,long x2,long y2,const TCHAR * file_name,long delay,long time);
    virtual long EnableKeypadSync(long en,long time_out);
    virtual CString FindFloat(long hwnd,const TCHAR * addr_range,float float_value_min,float float_value_max);
    virtual long WriteFloatAddr(long hwnd,LONGLONG addr,float v);
    virtual long ImageToBmp(const TCHAR * pic_name,const TCHAR * bmp_name);
    virtual long LeaveCri();
    virtual long SetPicPwd(const TCHAR * pwd);
    virtual CString FindColorE(long x1,long y1,long x2,long y2,const TCHAR * color,double sim,long dir);
    virtual long GetOsType();
    virtual long RegExNoMac(const TCHAR * code,const TCHAR * Ver,const TCHAR * ip);
    virtual long SetWordLineHeightNoDict(long line_height);
    virtual long WriteInt(long hwnd,const TCHAR * addr,long tpe,LONGLONG v);
    virtual long SetColGapNoDict(long col_gap);
    virtual long SetWordGap(long word_gap);
    virtual long DeleteIni(const TCHAR * section,const TCHAR * key,const TCHAR * file_name);
    virtual CString FindPicS(long x1,long y1,long x2,long y2,const TCHAR * pic_name,const TCHAR * delta_color,double sim,long dir,long * x,long * y);
    virtual long RegEx(const TCHAR * code,const TCHAR * Ver,const TCHAR * ip);
    virtual long SendCommand(const TCHAR * cmd);
    virtual long MoveTo(long x,long y);
    virtual LONGLONG VirtualAllocEx(long hwnd,LONGLONG addr,long size,long tpe);
    virtual long SetShowErrorMsg(long show);
    virtual long Capture(long x1,long y1,long x2,long y2,const TCHAR * file_name);
    virtual long KeyDownChar(const TCHAR * key_str);
    virtual CString FetchWord(long x1,long y1,long x2,long y2,const TCHAR * color,const TCHAR * word);
    virtual long MiddleClick();
    virtual CString FindStrE(long x1,long y1,long x2,long y2,const TCHAR * str,const TCHAR * color,double sim);
    virtual long GetLocale();
    virtual long WriteData(long hwnd,const TCHAR * addr,const TCHAR * data);
    virtual long CheckUAC();
    virtual CString GetDiskSerial();
    virtual long SetWindowState(long hwnd,long flag);
    virtual long FoobarTextPrintDir(long hwnd,long dir);
    virtual long MiddleUp();
    virtual long GetClientSize(long hwnd,long * width,long * height);
    virtual long FindWindowEx(long parent,const TCHAR * class_name,const TCHAR * title_name);
    virtual long IsFolderExist(const TCHAR * folder);
    virtual CString RGB2BGR(const TCHAR * rgb_color);
    virtual long FoobarClose(long hwnd);
    virtual long GetTime();
    virtual long EnableRealKeypad(long en);
    virtual CString GetNetTimeByIp(const TCHAR * ip);
    virtual long IsDisplayDead(long x1,long y1,long x2,long y2,long t);
    virtual CString GetMachineCode();
    virtual long MiddleDown();
    virtual CString GetBasePath();
};

#endif
