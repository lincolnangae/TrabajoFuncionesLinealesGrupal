#include "Program.h"
//Este codigo no se debe modificar nuevamente
using namespace System;
using namespace System::Windows::Forms;
//Este es un cambio para medir los pull y push desde la cuenta de mis compañeros
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Este es el formulario principal de la aplicación
	TrabajoFuncionesLinealesGrupal::Program form;
	Application::Run(% form);
	return 0;
}