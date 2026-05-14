#include "Program.h" // Asegúrate de que este sea el nombre de tu archivo del Form

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // CRÍTICO: Necesario para que WinForms funcione correctamente
int main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TrabajoFuncionesLinealesGrupal::Program^ form = gcnew TrabajoFuncionesLinealesGrupal::Program();

	Application::Run(form);
	return 0;
}