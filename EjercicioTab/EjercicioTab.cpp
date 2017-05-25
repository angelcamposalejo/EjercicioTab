#include "stdafx.h"  //________________________________________ EjercicioTab.cpp
#include "EjercicioTab.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioTab app;
	return app.BeginDialog(IDI_EjercicioTab, hInstance);
}

void EjercicioTab::Window_Open(Win::Event& e)
{
	//________________________________________________________ tab1
	tab1.Items.Add(0, L"Mes");
	tab1.Items.Add(1, L"Progress Bar");

	//________________________________________________________ pb1
	pb1.SetRange(1, 50);
	pb1.Position = 25;
	pb1.StepIt();// Move it to 26

				 //________________________________________________________ dv1
	dv1.SelectedDate = Sys::Time::Now().AddDays(2);

	tab1.SelectedIndex = 0;
	dv1.Visible = true;
	pb1.Visible = false;
}

void EjercicioTab::tab1_SelChange(Win::Event& e)
{
	switch (tab1.SelectedIndex)
	{
	case 0:
		dv1.Visible = true;
		pb1.Visible = false;
		break;
	case 1:
		dv1.Visible = false;
		pb1.Visible = true;
		break;
	}
}

