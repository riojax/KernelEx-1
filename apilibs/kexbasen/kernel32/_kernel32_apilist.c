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
#include "_kernel32_apilist.h"

extern BOOL init_jemalloc();
extern BOOL init_exttls();
extern void uninit_jemalloc();
extern void detach_exttls();

BOOL init_kernel32()
{
	return init_jemalloc() && init_exttls();
}

void uninit_kernel32()
{
	uninit_jemalloc();
}

void detach_kernel32()
{
	detach_exttls();
}

static const apilib_named_api kernel32_named_apis[] = 
{
/*** AUTOGENERATED APILIST NAMED EXPORTS BEGIN ***/
	DECL_API("BuildCommDCBAndTimeoutsW", BuildCommDCBAndTimeoutsW_fwd),
	DECL_API("BuildCommDCBW", BuildCommDCBW_fwd),
	DECL_API("CallNamedPipeW", CallNamedPipeW_fwd),
	DECL_API("CommConfigDialogW", CommConfigDialogW_fwd),
	DECL_API("CreateEventW", CreateEventW_fwd),
	DECL_API("CreateFileMappingW", CreateFileMappingW_fwd),
	DECL_API("CreateMailslotW", CreateMailslotW_fwd),
	DECL_API("CreateMutexW", CreateMutexW_fwd),
	DECL_API("CreateProcessW", CreateProcessW_fwd),
	DECL_API("CreateSemaphoreW", CreateSemaphoreW_fwd),
	DECL_API("CreateTimerQueue", CreateTimerQueue_new),
	DECL_API("CreateTimerQueueTimer", CreateTimerQueueTimer_new),
	DECL_API("CreateWaitableTimerW", CreateWaitableTimerW_fwd),
	DECL_API("DelayLoadFailureHook", DelayLoadFailureHook_new),
	DECL_API("DeleteTimerQueue", DeleteTimerQueue_new),
	DECL_API("DeleteTimerQueueEx", DeleteTimerQueueEx_new),
	DECL_API("DeleteTimerQueueTimer", DeleteTimerQueueTimer_new),
	DECL_API("EnumCalendarInfoExW", EnumCalendarInfoExW_fwd),
	DECL_API("EnumCalendarInfoW", EnumCalendarInfoW_fwd),
	DECL_API("EnumDateFormatsExW", EnumDateFormatsExW_fwd),
	DECL_API("EnumDateFormatsW", EnumDateFormatsW_fwd),
	DECL_API("EnumSystemCodePagesW", EnumSystemCodePagesW_fwd),
	DECL_API("EnumSystemLocalesW", EnumSystemLocalesW_fwd),
	DECL_API("EnumTimeFormatsW", EnumTimeFormatsW_fwd),
	DECL_API("ExpandEnvironmentStringsW", ExpandEnvironmentStringsW_fwd),
	DECL_API("FatalAppExitW", FatalAppExitW_fwd),
	DECL_API("FillConsoleOutputCharacterW", FillConsoleOutputCharacterW_fwd),
	DECL_API("FormatMessageW", FormatMessageW_fwd),
	DECL_API("GetCPInfoExW", GetCPInfoExW_fwd),
	DECL_API("GetCalendarInfoW", GetCalendarInfoW_fwd),
	DECL_API("GetComputerNameW", GetComputerNameW_fwd),
	DECL_API("GetConsoleTitleW", GetConsoleTitleW_fwd),
	DECL_API("GetCurrencyFormatW", GetCurrencyFormatW_fwd),
	DECL_API("GetDateFormatW", GetDateFormatW_fwd),
	DECL_API("GetDriveTypeW", GetDriveTypeW_fwd),
	DECL_API("GetEnvironmentVariableW", GetEnvironmentVariableW_fwd),
	DECL_API("GetLocaleInfoW", GetLocaleInfoW_fwd),
	DECL_API("GetLogicalDriveStringsW", GetLogicalDriveStringsW_fwd),
	DECL_API("GetNamedPipeHandleStateW", GetNamedPipeHandleStateW_fwd),
	DECL_API("GetNumberFormatW", GetNumberFormatW_fwd),
	DECL_API("GetPrivateProfileIntW", GetPrivateProfileIntW_fwd),
	DECL_API("GetPrivateProfileSectionNamesW", GetPrivateProfileSectionNamesW_fwd),
	DECL_API("GetPrivateProfileSectionW", GetPrivateProfileSectionW_fwd),
	DECL_API("GetPrivateProfileStringW", GetPrivateProfileStringW_fwd),
	DECL_API("GetPrivateProfileStructW", GetPrivateProfileStructW_fwd),
	DECL_API("GetProfileIntW", GetProfileIntW_fwd),
	DECL_API("GetProfileSectionW", GetProfileSectionW_fwd),
	DECL_API("GetProfileStringW", GetProfileStringW_fwd),
	DECL_API("GetTimeFormatW", GetTimeFormatW_fwd),
	DECL_API("GetVolumeInformationW", GetVolumeInformationW_fwd),
	DECL_API("HeapAlloc", HeapAlloc_new),
	DECL_API("HeapCreate", HeapCreate_new),
	DECL_API("HeapDestroy", HeapDestroy_new),
	DECL_API("HeapFree", HeapFree_new),
	DECL_API("HeapReAlloc", HeapReAlloc_new),
	DECL_API("HeapSize", HeapSize_new),
	DECL_API("IsBadStringPtrW", IsBadStringPtrW_fwd),
	DECL_API("OpenEventW", OpenEventW_fwd),
	DECL_API("OpenFileMappingW", OpenFileMappingW_fwd),
	DECL_API("OpenMutexW", OpenMutexW_fwd),
	DECL_API("OpenSemaphoreW", OpenSemaphoreW_fwd),
	DECL_API("OpenWaitableTimerW", OpenWaitableTimerW_fwd),
	DECL_API("PeekConsoleInputW", PeekConsoleInputW_fwd),
	DECL_API("QueryDosDeviceW", QueryDosDeviceW_fwd),
	DECL_API("QueueUserWorkItem", QueueUserWorkItem_new),
	DECL_API("ReadConsoleInputW", ReadConsoleInputW_fwd),
	DECL_API("ReadConsoleOutputCharacterW", ReadConsoleOutputCharacterW_fwd),
	DECL_API("ReadConsoleOutputW", ReadConsoleOutputW_fwd),
	DECL_API("ReadConsoleW", ReadConsoleW_fwd),
	DECL_API("RegisterWaitForSingleObject", RegisterWaitForSingleObject_new),
	DECL_API("RegisterWaitForSingleObjectEx", RegisterWaitForSingleObjectEx_new),
	DECL_API("ScrollConsoleScreenBufferW", ScrollConsoleScreenBufferW_fwd),
	DECL_API("SetCalendarInfoW", SetCalendarInfoW_fwd),
	DECL_API("SetComputerNameW", SetComputerNameW_fwd),
	DECL_API("SetDefaultCommConfigW", SetDefaultCommConfigW_fwd),
	DECL_API("SetEnvironmentVariableW", SetEnvironmentVariableW_fwd),
	DECL_API("SetLocaleInfoW", SetLocaleInfoW_fwd),
	DECL_API("SetVolumeLabelW", SetVolumeLabelW_fwd),
	DECL_API("TlsAlloc", TlsAlloc_new),
	DECL_API("TlsFree", TlsFree_new),
	DECL_API("TlsGetValue", TlsGetValue_new2),
	DECL_API("TlsSetValue", TlsSetValue_new2),
	DECL_API("UnregisterWait", UnregisterWait_new),
	DECL_API("UnregisterWaitEx", UnregisterWaitEx_new),
	DECL_API("WaitNamedPipeW", WaitNamedPipeW_fwd),
	DECL_API("WriteConsoleInputW", WriteConsoleInputW_fwd),
	DECL_API("WriteConsoleOutputCharacterW", WriteConsoleOutputCharacterW_fwd),
	DECL_API("WriteConsoleOutputW", WriteConsoleOutputW_fwd),
	DECL_API("WriteConsoleW", WriteConsoleW_fwd),
	DECL_API("WritePrivateProfileSectionW", WritePrivateProfileSectionW_fwd),
	DECL_API("WritePrivateProfileStringW", WritePrivateProfileStringW_fwd),
	DECL_API("WritePrivateProfileStructW", WritePrivateProfileStructW_fwd),
	DECL_API("WriteProfileSectionW", WriteProfileSectionW_fwd),
	DECL_API("WriteProfileStringW", WriteProfileStringW_fwd),
/*** AUTOGENERATED APILIST NAMED EXPORTS END ***/
};

#if 0
static const apilib_unnamed_api kernel32_ordinal_apis[] =
{
/*** AUTOGENERATED APILIST ORDINAL EXPORTS BEGIN ***/
/*** AUTOGENERATED APILIST ORDINAL EXPORTS END ***/
};
#endif

const apilib_api_table apitable_kernel32 = DECL_TAB("KERNEL32.DLL", kernel32_named_apis, 0 /*kernel32_ordinal_apis*/);
