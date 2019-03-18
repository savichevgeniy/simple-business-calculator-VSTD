#include "Author.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Startap::Author form;
	Application::Run(%form);
}
