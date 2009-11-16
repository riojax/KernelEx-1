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

#ifndef _KERNEL32_APILIST_H
#define _KERNEL32_APILIST_H

#include "kexcoresdk.h"

BOOL init_kernel32();
void uninit_kernel32();
void detach_kernel32();
extern const apilib_api_table apitable_kernel32;

/*** AUTOGENERATED APILIST DECLARATIONS BEGIN ***/
FARPROC WINAPI DelayLoadFailureHook_new(LPSTR pszDllName, LPSTR pszProcName);
BOOL WINAPI QueueUserWorkItem_new(LPTHREAD_START_ROUTINE Function, PVOID Context, ULONG Flags);
BOOL WINAPI RegisterWaitForSingleObject_new(PHANDLE phNewWaitObject, HANDLE hObject, WAITORTIMERCALLBACK Callback, PVOID Context, ULONG dwMilliseconds, ULONG dwFlags);
HANDLE WINAPI RegisterWaitForSingleObjectEx_new(HANDLE hObject, WAITORTIMERCALLBACK Callback, PVOID Context, ULONG dwMilliseconds, ULONG dwFlags);
BOOL WINAPI UnregisterWaitEx_new(HANDLE WaitHandle, HANDLE CompletionEvent);
BOOL WINAPI UnregisterWait_new(HANDLE WaitHandle);
DWORD WINAPI TlsAlloc_new(void);
BOOL WINAPI TlsFree_new(DWORD dwTlsIndex);
LPVOID WINAPI TlsGetValue_new2(DWORD dwTlsIndex);
BOOL WINAPI TlsSetValue_new2(DWORD dwTlsIndex, LPVOID lpTlsValue);
LPVOID WINAPI TlsGetValue_new2(DWORD dwTlsIndex);
BOOL WINAPI TlsSetValue_new2(DWORD dwTlsIndex, LPVOID lpTlsValue);
HANDLE WINAPI HeapCreate_new(DWORD flOptions, DWORD dwInitialSize, DWORD dwMaximumSize);
BOOL WINAPI HeapDestroy_new(HANDLE hHeap);
LPVOID WINAPI HeapAlloc_new(HANDLE hHeap, DWORD dwFlags, DWORD dwBytes);
BOOL WINAPI HeapFree_new(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
DWORD WINAPI HeapSize_new(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem);
LPVOID WINAPI HeapReAlloc_new(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, DWORD dwBytes);
FWDPROC BuildCommDCBAndTimeoutsW_fwd;
FWDPROC BuildCommDCBW_fwd;
FWDPROC CallNamedPipeW_fwd;
FWDPROC CommConfigDialogW_fwd;
FWDPROC CreateEventW_fwd;
FWDPROC CreateFileMappingW_fwd;
FWDPROC CreateMailslotW_fwd;
FWDPROC CreateMutexW_fwd;
FWDPROC CreateProcessW_fwd;
FWDPROC CreateSemaphoreW_fwd;
FWDPROC CreateWaitableTimerW_fwd;
FWDPROC EnumCalendarInfoExW_fwd;
FWDPROC EnumCalendarInfoW_fwd;
FWDPROC EnumDateFormatsExW_fwd;
FWDPROC EnumDateFormatsW_fwd;
FWDPROC EnumSystemCodePagesW_fwd;
FWDPROC EnumSystemLocalesW_fwd;
FWDPROC EnumTimeFormatsW_fwd;
FWDPROC ExpandEnvironmentStringsW_fwd;
FWDPROC FatalAppExitW_fwd;
FWDPROC FillConsoleOutputCharacterW_fwd;
FWDPROC FormatMessageW_fwd;
FWDPROC GetCPInfoExW_fwd;
FWDPROC GetCalendarInfoW_fwd;
FWDPROC GetComputerNameW_fwd;
FWDPROC GetConsoleTitleW_fwd;
FWDPROC GetCurrencyFormatW_fwd;
FWDPROC GetDateFormatW_fwd;
FWDPROC GetDriveTypeW_fwd;
FWDPROC GetEnvironmentVariableW_fwd;
FWDPROC GetLocaleInfoW_fwd;
FWDPROC GetLogicalDriveStringsW_fwd;
FWDPROC GetNamedPipeHandleStateW_fwd;
FWDPROC GetNumberFormatW_fwd;
FWDPROC GetPrivateProfileIntW_fwd;
FWDPROC GetPrivateProfileSectionNamesW_fwd;
FWDPROC GetPrivateProfileSectionW_fwd;
FWDPROC GetPrivateProfileStringW_fwd;
FWDPROC GetPrivateProfileStructW_fwd;
FWDPROC GetProfileIntW_fwd;
FWDPROC GetProfileSectionW_fwd;
FWDPROC GetProfileStringW_fwd;
FWDPROC GetTimeFormatW_fwd;
FWDPROC GetVolumeInformationW_fwd;
FWDPROC IsBadStringPtrW_fwd;
FWDPROC OpenEventW_fwd;
FWDPROC OpenFileMappingW_fwd;
FWDPROC OpenMutexW_fwd;
FWDPROC OpenSemaphoreW_fwd;
FWDPROC OpenWaitableTimerW_fwd;
FWDPROC PeekConsoleInputW_fwd;
FWDPROC QueryDosDeviceW_fwd;
FWDPROC ReadConsoleInputW_fwd;
FWDPROC ReadConsoleOutputCharacterW_fwd;
FWDPROC ReadConsoleOutputW_fwd;
FWDPROC ReadConsoleW_fwd;
FWDPROC ScrollConsoleScreenBufferW_fwd;
FWDPROC SetCalendarInfoW_fwd;
FWDPROC SetComputerNameW_fwd;
FWDPROC SetDefaultCommConfigW_fwd;
FWDPROC SetEnvironmentVariableW_fwd;
FWDPROC SetLocaleInfoW_fwd;
FWDPROC SetVolumeLabelW_fwd;
FWDPROC WaitNamedPipeW_fwd;
FWDPROC WriteConsoleInputW_fwd;
FWDPROC WriteConsoleOutputCharacterW_fwd;
FWDPROC WriteConsoleOutputW_fwd;
FWDPROC WriteConsoleW_fwd;
FWDPROC WritePrivateProfileSectionW_fwd;
FWDPROC WritePrivateProfileStringW_fwd;
FWDPROC WritePrivateProfileStructW_fwd;
FWDPROC WriteProfileSectionW_fwd;
FWDPROC WriteProfileStringW_fwd;
/*** AUTOGENERATED APILIST DECLARATIONS END ***/

#endif
