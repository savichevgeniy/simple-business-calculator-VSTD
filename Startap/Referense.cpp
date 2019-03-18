#include "Referense.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main1(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Startap::Referense form;
	Application::Run(%form);
}

