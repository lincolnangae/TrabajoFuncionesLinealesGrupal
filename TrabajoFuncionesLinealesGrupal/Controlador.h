//Clase que controla el entorno de la calculadora grafica
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class Controlador {
private:
	List<Point>^ listaFigura;
	Point PuntoCentralFigura;

public:
	Controlador() {
		listaFigura = gcnew List<Point>(); // Inicializar
	}
	~Controlador() {}

	//Declaracion de funcion
	void AplicarRotacion(float angulo);
	void SetPuntoCentral(int x, int y);
	void SetFigura(System::String^ nombre);
	void DibujarTodo(System::Drawing::Graphics^ g, int cX, int cY);

	void limpiarDibujo() {
		listaFigura->Clear();
	}
	void reflexionX() {
		PuntoCentralFigura.X = -PuntoCentralFigura.X;
	}
	void reflexionY() {
		PuntoCentralFigura.Y = -PuntoCentralFigura.Y;
	}

	//Aplicacion en Controlador.cpp
};