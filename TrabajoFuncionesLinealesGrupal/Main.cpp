#include "Program.h"
//Inicializador
using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabajoFuncionesLinealesGrupal::Program form;
	Application::Run(% form);
	return 0;
}