#pragma once  //______________________________________ EjercicioTab.h  
#include "Resource.h"
class EjercicioTab : public Win::Dialog
{
public:
	EjercicioTab()
	{
	}
	~EjercicioTab()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Tab tab1;
	Win::ProgressBar pb1;
	Win::DateView dv1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(470);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(379);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioTab";
		tab1.Create(NULL, NULL, WS_CHILD | WS_VISIBLE | TCS_SINGLELINE | TCS_TABS | TCS_RAGGEDRIGHT, 12, 10, 451, 362, hWnd, 1000);
		pb1.Create(NULL, NULL, WS_CHILD | WS_VISIBLE, 18, 322, 436, 32, hWnd, 1001);
		dv1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | MCS_NOTODAY, 31, 49, 419, 239, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		tab1.Font = fontArial014A;
		dv1.Font = fontArial014A;
	}
	//_________________________________________________
	void tab1_SelChange(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (tab1.IsEvent(e, TCN_SELCHANGE)) { tab1_SelChange(e); return true; }
		return false;
	}
};
