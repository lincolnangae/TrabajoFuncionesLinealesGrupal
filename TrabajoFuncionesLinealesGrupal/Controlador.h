//Clase que controla el entorno de la calculadora grafica
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class Controlador {
private:
	List<Point>^ listaOriginal;
	List<Point>^ listaFigura;
	Point PuntoCentralFigura;

	bool reflexXActiva;
	bool reflexYActiva;
	bool reflexOrigenActiva;

public:
	Controlador() {
		listaFigura = gcnew List<Point>(); // Inicializar
		reflexXActiva = false;
		reflexYActiva = false;
		reflexOrigenActiva = false;
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
		reflexXActiva = false;
		reflexYActiva = false;
		reflexOrigenActiva = false;
	}


	//Funciones de transformacion
	void AplicarEscala(float escala);

	bool reflexionX() {
		reflexXActiva = !reflexXActiva;
		return reflexXActiva;
	}

	bool reflexionY() {
		reflexYActiva = !reflexYActiva;
		return reflexYActiva;
	}

	bool reflexionOrigen() {
		reflexOrigenActiva = !reflexOrigenActiva;
		return reflexOrigenActiva;
	}

	bool GetReflexionXActiva() {
		return reflexXActiva;
	}

	bool GetReflexionYActiva() {
		return reflexYActiva;
	}

	bool GetReflexionOrigenActiva() {
		return reflexOrigenActiva;
	}

	//Aplicacion en Controlador.cpp
};