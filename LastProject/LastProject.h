#pragma once
#include "Resource.h"
#include "framework.h"

class FindWords
{
public:
	FindWords(void);
public:
	~FindWords(void);
	static BOOL CALLBACK DlgProc(HWND hWnd, UINT mes, WPARAM wp, LPARAM lp);
	static FindWords* ptr;
	void Cls_OnClose(HWND hwnd);
	BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
	void Cls_OnTimer(HWND hwnd, UINT id);
};
