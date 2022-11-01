#include "FunctionsForm.h"
#include <Windows.h>

using namespace Graf;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew FunctionsForm);
	return 0;
}