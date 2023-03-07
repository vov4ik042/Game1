#include "MyForm.h"
#include "Windows.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array <String^>^)
{

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Game::MyForm form;
	Application::Run(% form);
	return 0;
}
