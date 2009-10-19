/*
 *  KernelEx
 *  Copyright (C) 2008, Xeno86
 *
 *  This file is part of KernelEx source code.
 *
 *  KernelEx is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation; version 2 of the License.
 *
 *  KernelEx is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#include "common.h"
#include "kexcoresdk.h"
#include "_user32_apilist.h"
#include "thuni_layer.h"

IsHungThread_t IsHungThread_pfn;
DrawCaptionTempA_t DrawCaptionTempA_pfn;

BOOL init_user32()
{
	HMODULE hUser32 = GetModuleHandle("USER32.DLL");
	
	IsHungThread_pfn = (IsHungThread_t)GetProcAddress(hUser32, "IsHungThread");
	DrawCaptionTempA_pfn = (DrawCaptionTempA_t)GetProcAddress(hUser32, "DrawCaptionTempA");
	GetMouseMovePoints_pfn = (GetMouseMovePoints_t)GetProcAddress(hUser32, "GetMouseMovePoints");
	
	return IsHungThread_pfn && DrawCaptionTempA_pfn && GetMouseMovePoints_pfn && InitUniThunkLayer();
}

/* APIs which don't require Unicode implementations in thuni model
 * MAKE_EXPORT CallMsgFilterA=CallMsgFilterW
 * MAKE_EXPORT CopyAcceleratorTableA=CopyAcceleratorTableW
 * MAKE_EXPORT CreateAcceleratorTableA=CreateAcceleratorTableW
 * MAKE_EXPORT DispatchMessageA=DispatchMessageW
 * MAKE_EXPORT IsDialogMessageA=IsDialogMessageW
 * MAKE_EXPORT GetAltTabInfo=GetAltTabInfoA
 * MAKE_EXPORT RealGetWindowClass=RealGetWindowClassA
 * MAKE_EXPORT SetWindowsHookExA=SetWindowsHookExW
 * MAKE_EXPORT SetWindowsHookA=SetWindowsHookW
 * MAKE_EXPORT TranslateAcceleratorA=TranslateAcceleratorW
 */

/* Shell hook APIs. Can be implemented with shell, 
 * but would be too sensitive for cruel world.
 * MAKE_EXPORT IsWindow=DeregisterShellHookWindow
 * MAKE_EXPORT IsWindow=RegisterShellHookWindow
 */

static const apilib_named_api user32_named_apis[] = 
{
/*** AUTOGENERATED APILIST NAMED EXPORTS BEGIN ***/
	DECL_API("AllowSetForegroundWindow", AllowSetForegroundWindow_98),
	DECL_API("CallMsgFilterW", CallMsgFilterA),
	DECL_API("CallWindowProcA", CallWindowProcA_fix),
	DECL_API("CallWindowProcW", CallWindowProcW_new),
	DECL_API("CharLowerBuffW", CharLowerBuffW_new),
	DECL_API("CharLowerW", CharLowerW_new),
	DECL_API("CharNextExW", CharNextExW_new),
	DECL_API("CharNextW", CharNextW_new),
	DECL_API("CharPrevExW", CharPrevExW_new),
	DECL_API("CharPrevW", CharPrevW_new),
	DECL_API("CharToOemBuffW", CharToOemBuffW_new),
	DECL_API("CharToOemW", CharToOemW_new),
	DECL_API("CharUpperBuffW", CharUpperBuffW_new),
	DECL_API("CharUpperW", CharUpperW_new),
	DECL_API("CopyAcceleratorTableW", CopyAcceleratorTableA),
	DECL_API("CreateAcceleratorTableW", CreateAcceleratorTableA),
	DECL_API("CreateDialogIndirectParamW", CreateDialogIndirectParamW_NEW),
	DECL_API("CreateDialogParamW", CreateDialogParamW_NEW),
	DECL_API("CreateMDIWindowW", CreateMDIWindowW_NEW),
	DECL_API("CreateWindowExW", CreateWindowExW_NEW),
	DECL_API("CreateWindowW", CreateWindowW_NEW),
	DECL_API("DefDlgProcW", DefDlgProcW_NEW),
	DECL_API("DefFrameProcW", DefFrameProcW_NEW),
	DECL_API("DefMDIChildProcW", DefMDIChildProcW_NEW),
	DECL_API("DefWindowProcW", DefWindowProcW_NEW),
	DECL_API("DeregisterShellHookWindow", IsWindow),
	DECL_API("DialogBoxIndirectParamW", DialogBoxIndirectParamW_NEW),
	DECL_API("DialogBoxParamW", DialogBoxParamW_NEW),
	DECL_API("DisableProcessWindowsGhosting", DisableProcessWindowsGhosting_new),
	DECL_API("DispatchMessageW", DispatchMessageA),
	DECL_API("DrawCaptionTempW", DrawCaptionTempW_new),
	DECL_API("EnableWindow", EnableWindow_new),
	DECL_API("GetAltTabInfoA", GetAltTabInfo),
	DECL_API("GetAncestor", GetAncestor_fix),
	DECL_API("GetClassInfoExW", GetClassInfoExW_NEW),
	DECL_API("GetClassInfoW", GetClassInfoW_NEW),
	DECL_API("GetClassLongW", GetClassLongW_NEW),
	DECL_API("GetDlgItemTextW", GetDlgItemTextW_NEW),
	DECL_API("GetLastInputInfo", GetLastInputInfo_NEW),
	DECL_API("GetMessageA", GetMessageA_NEW),
	DECL_API("GetMessageW", GetMessageW_NEW),
	DECL_API("GetMouseMovePointsEx", GetMouseMovePointsEx_98),
	DECL_API("GetNextDlgTabItem", GetNextDlgTabItem_fix),
	DECL_API("GetWindowLongA", GetWindowLongA_NEW),
	DECL_API("GetWindowLongW", GetWindowLongW_NEW),
	DECL_API("GetWindowTextLengthW", GetWindowTextLengthW_NEW),
	DECL_API("GetWindowTextW", GetWindowTextW_NEW),
	DECL_API("IsCharAlphaNumericW", IsCharAlphaNumericW_new),
	DECL_API("IsCharAlphaW", IsCharAlphaW_new),
	DECL_API("IsCharLowerW", IsCharLowerW_new),
	DECL_API("IsCharUpperW", IsCharUpperW_new),
	DECL_API("IsDialogMessageW", IsDialogMessageA),
	DECL_API("IsHungAppWindow", IsHungAppWindow_new),
	DECL_API("IsWindowUnicode", IsWindowUnicode_NEW),
	DECL_API("LoadStringW", LoadStringW_new),
	DECL_API("LockSetForegroundWindow", LockSetForegroundWindow_98),
	DECL_API("LockWorkStation", LockWorkStation_new),
	DECL_API("MapVirtualKeyA", MapVirtualKeyA_new),
	DECL_API("MapVirtualKeyExA", MapVirtualKeyExA_new),
	DECL_API("OemToCharBuffW", OemToCharBuffW_new),
	DECL_API("OemToCharW", OemToCharW_new),
	DECL_API("PeekMessageA", PeekMessageA_NEW),
	DECL_API("PeekMessageW", PeekMessageW_NEW),
	DECL_API("PostMessageW", PostMessageW_NEW),
	DECL_API("PostThreadMessageW", PostThreadMessageW_NEW),
	DECL_API("RealGetWindowClassA", RealGetWindowClass),
	DECL_API("RealGetWindowClassW", RealGetWindowClassW_new),
	DECL_API("RegisterClassExW", RegisterClassExW_NEW),
	DECL_API("RegisterClassW", RegisterClassW_NEW),
	DECL_API("RegisterShellHookWindow", IsWindow),
	DECL_API("SendDlgItemMessageW", SendDlgItemMessageW_NEW),
	DECL_API("SendMessageA", SendMessageA_fix),
	DECL_API("SendMessageCallbackW", SendMessageCallbackW_NEW),
	DECL_API("SendMessageTimeoutW", SendMessageTimeoutW_NEW),
	DECL_API("SendMessageW", SendMessageW_NEW),
	DECL_API("SendNotifyMessageW", SendNotifyMessageW_NEW),
	DECL_API("SetClassLongW", SetClassLongW_NEW),
	DECL_API("SetDlgItemTextW", SetDlgItemTextW_NEW),
	DECL_API("SetLayeredWindowAttributes", SetLayeredWindowAttributes_stub),
	DECL_API("SetWindowLongA", SetWindowLongA_NEW),
	DECL_API("SetWindowLongW", SetWindowLongW_NEW),
	DECL_API("SetWindowTextW", SetWindowTextW_NEW),
	DECL_API("SetWindowsHookExW", SetWindowsHookExA),
	DECL_API("SetWindowsHookW", SetWindowsHookA),
	DECL_API("ToUnicode", ToUnicode_new),
	DECL_API("ToUnicodeEx", ToUnicodeEx_new),
	DECL_API("TranslateAcceleratorW", TranslateAcceleratorA),
	DECL_API("UnregisterClassW", UnregisterClassW_NEW),
	DECL_API("UpdateLayeredWindow", UpdateLayeredWindow_new),
/*** AUTOGENERATED APILIST NAMED EXPORTS END ***/
};

#if 0
static const apilib_unnamed_api user32_ordinal_apis[] =
{
/*** AUTOGENERATED APILIST ORDINAL EXPORTS BEGIN ***/
/*** AUTOGENERATED APILIST ORDINAL EXPORTS END ***/
};
#endif

const apilib_api_table apitable_user32 = DECL_TAB("USER32.DLL", user32_named_apis, 0 /*user32_ordinal_apis*/);
