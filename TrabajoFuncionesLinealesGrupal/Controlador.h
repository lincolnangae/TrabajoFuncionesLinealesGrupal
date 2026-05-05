//Clase que controla el entorno de la calculadora grafica
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class Controlador {
private:
	List<Point>^ listaOriginal;
	List<Point>^ listaFigura;
	Point PuntoCentralFigura;

public:
	Controlador() {
		listaFigura = gcnew List<Point>(); // Inicializar
	}
	~Controlador() {}

	//Declaracion de funcion
	void SetPuntoCentral(int x, int y);
	void SetFigura(System::String^ nombre);
	void DibujarTodo(System::Drawing::Graphics^ g, int cX, int cY);

	void limpiarDibujo() {
		PuntoCentralFigura.X = 0;
		PuntoCentralFigura.Y = 0;
		listaFigura->Clear();
	}


	//Funciones de transformacion
	void AplicarEscala(float escala);

	void reflexionX() {
		PuntoCentralFigura.X = -PuntoCentralFigura.X;
	}

	void reflexionY() {
		PuntoCentralFigura.Y = -PuntoCentralFigura.Y;
	}

	void reflexionOrigen() {
		PuntoCentralFigura.Y *= -1;
		PuntoCentralFigura.X *= -1;
	}
	//Aplicacion en Controlador.cpp
};