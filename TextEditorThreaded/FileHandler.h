#pragma once
#include "stdafx.h"

BOOL LoadTextFileToEdit(HWND hEdit, LPCTSTR pszFileName);

BOOL SaveTextFileFromEdit(HWND hEdit, LPCTSTR pszFileName);

void DoFileOpen(HWND hwnd);

void DoFileSave(HWND hwnd);