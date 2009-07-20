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

#ifndef _SHELL32_APILIST_H
#define _SHELL32_APILIST_H

#include "kexcoresdk.h"

BOOL init_shell32();
extern const apilib_api_table apitable_shell32;

/*** AUTOGENERATED APILIST DECLARATIONS BEGIN ***/
HRESULT WINAPI SHGetFolderLocation_new(HWND hwndOwner, int nFolder, HANDLE hToken, DWORD dwReserved, LPVOID *_ppidl);
HRESULT WINAPI SHGetFolderPathA_new(HWND hwndOwner, int nFolder, HANDLE hToken, DWORD dwFlags, LPSTR pszPath);
HRESULT WINAPI SHGetFolderPathW_new(HWND hwndOwner, int nFolder, HANDLE hToken, DWORD dwFlags, LPWSTR pszPath);
FWDPROC DragQueryFileW_fwd;
FWDPROC ExtractIconExW_fwd;
FWDPROC ExtractIconW_fwd;
FWDPROC FindExecutableW_fwd;
FWDPROC SHBrowseForFolderW_fwd;
FWDPROC Shell_NotifyIconW_fwd;
FWDPROC ShellAboutW_fwd;
FWDPROC ShellExecuteExW_fwd;
FWDPROC ShellExecuteW_fwd;
FWDPROC SHFileOperationW_fwd;
FWDPROC SHGetFileInfoW_fwd;
FWDPROC SHGetNewLinkInfoW_fwd;
/*** AUTOGENERATED APILIST DECLARATIONS END ***/

#endif
