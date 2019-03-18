#include "Home.h"
#include "CalculateStoreProfit.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Startap::Home form;
	Application::Run(%form);
}