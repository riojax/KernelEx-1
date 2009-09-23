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

#ifndef _GDI32_APILIST_H
#define _GDI32_APILIST_H

#include "kexcoresdk.h"

BOOL init_gdi32();
extern const apilib_api_table apitable_gdi32;

/*** AUTOGENERATED APILIST DECLARATIONS BEGIN ***/
INT WINAPI AddFontResourceExA_new(LPCSTR str, DWORD fl, PVOID pdv);
BOOL WINAPI RemoveFontResourceExA_new(LPCSTR str, DWORD fl, PVOID pdv);
DWORD WINAPI GetGlyphOutlineA_fix(HDC hdc, UINT uChar, UINT uFormat, LPGLYPHMETRICS lpgm, DWORD cbBuffer, LPVOID lpvBuffer, CONST MAT2 *lpmat2);
DWORD WINAPI GetFontUnicodeRanges_new(HDC hdc, LPGLYPHSET lpgs);
int WINAPI SetGraphicsMode_NT(HDC hdc, int iMode);
BOOL WINAPI SetWorldTransform_9x(HDC hdc, CONST XFORM *lpXform);
int WINAPI GetRandomRgn_NT(HDC hdc, HRGN hrgn, INT iNum);
BOOL WINAPI SetWorldTransform_NT(HDC hdc, CONST XFORM *lpXform);
int WINAPI SetMapMode_NT(HDC hdc, int fnMapMode);
BOOL WINAPI GetTextMetricsA_NT(HDC hdc, LPTEXTMETRIC lptm);
BOOL WINAPI GetWorldTransform_NT(HDC hdc, LPXFORM lpXform);
BOOL WINAPI ModifyWorldTransform_NT(HDC hdc, CONST XFORM *lpXform, DWORD iMode);
BOOL WINAPI ExtTextOutA_new(HDC hdc, int X, int Y, UINT fuOptions, CONST RECT* lprc, LPCSTR lpString, UINT cbCount, CONST INT* lpDx);
BOOL WINAPI ExtTextOutW_new(HDC hdc, int X, int Y, UINT fuOptions, CONST RECT* lprc, LPCWSTR lpString, UINT cbCount, CONST INT* lpDx);
BOOL WINAPI PolyTextOutA_new(HDC hdc, const POLYTEXTA *pptxt, INT cStrings);
BOOL WINAPI PolyTextOutW_new(HDC hdc, const POLYTEXTW *pptxt, INT cStrings);
STUB SetDCBrushColor_stub;
STUB SetDCPenColor_stub;
STUB AddFontMemResourceEx_stub;
STUB RemoveFontMemResourceEx_stub;
INT WINAPI AddFontResourceExW_new(LPCWSTR strW, DWORD fl, PVOID pdv);
INT WINAPI AddFontResourceW_new(LPCWSTR strW);
int WINAPI EnumFontFamiliesExA_new(HDC hdc, LPLOGFONTA pLogfontA, FONTENUMPROCA pEnumFontFamExProc, LPARAM lParam, DWORD dwFlags);
int WINAPI EnumFontFamiliesExW_new(HDC hdc, LPLOGFONTW pLogfontW, FONTENUMPROCW pEnumFontFamExProc, LPARAM lParam, DWORD dwFlags);
int WINAPI EnumFontFamiliesW_new(HDC hdc, LPCWSTR lpszFamily, FONTENUMPROCW lpEnumFontFamProc, LPARAM lParam);
BOOL WINAPI RemoveFontResourceExW_new(LPCWSTR strW, DWORD fl, PVOID pdv);
BOOL WINAPI RemoveFontResourceW_new(LPCWSTR strW);
/*** AUTOGENERATED APILIST DECLARATIONS END ***/

#endif
