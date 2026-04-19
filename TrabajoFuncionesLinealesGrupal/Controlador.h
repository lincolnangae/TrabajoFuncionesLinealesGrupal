//Clase que controla el entorno de la calculadora grafica
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class Controlador {
private:
	List<Point>^ listaFiguras;
	Point PuntoCentralFigura;

public:
	Controlador() {
		listaFiguras = gcnew List<Point>(); // Inicializar
	}
	~Controlador() {}

	//Declaracion de funcion
	void AplicarRotacion(float angulo);
	void SetPuntoCentral(int x, int y);
	void DibujarTodo(System::Drawing::Graphics^ g, int cX, int cY);

	//Aplicacion en Controlador.cpp
};