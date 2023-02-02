#include "MainForm.h"
#include <Windows.h>

using namespace GSA;

//int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
//{
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    Application::Run(gcnew MainForm);
//    return 0;
//}
//using namespace System;
//
//using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    GSA::MainForm form;

    Application::Run(% form);

}