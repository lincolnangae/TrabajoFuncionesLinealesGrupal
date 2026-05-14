//Clase que controla el entorno de la calculadora grafica
#include "ListaSimple.h"
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class Controlador {

public:
	ListaSimple <List<Point>^>^ Figuras;
	Point PuntoCentralFigura;
	float anguloAcumulado;

	Controlador() {
		anguloAcumulado = 0.0f;
		Figuras = gcnew ListaSimple<List<Point>^>();
	}
	~Controlador() {
		limpiarDibujo();
	}

	void limpiarDibujo() {
		PuntoCentralFigura.X = 0;
		PuntoCentralFigura.Y = 0;
		anguloAcumulado = 0.0f;
		Figuras->cabeza = nullptr;
		// Limpiar memoria
	}

	void GuardarEstadoActual(List<Point>^ puntosActuales) {
		List<Point>^ copia = gcnew List<Point>(puntosActuales);
		Nodo<List<Point>^>^ nuevoNodo = gcnew Nodo<List<Point>^>(copia);
		Figuras->AgregarALista(nuevoNodo);
	}

	//Funcioens de transformacion
	void SetPuntoCentral(int x, int y);
	void SetFigura(System::String^ nombre);
	void DibujarTodo(System::Drawing::Graphics^ g, int cX, int cY);
	void AplicarRotacionCentro(float angulo);
	void AplicarDesplazamiento(float deltaX, float deltaY);
	void AplicarEscala(float escala);
	void AplicarReflexionX();
	void AplicarReflexionY();
	void AplicarReflexionOrigen();

	//Aplicacion en Controlador.cpp
};