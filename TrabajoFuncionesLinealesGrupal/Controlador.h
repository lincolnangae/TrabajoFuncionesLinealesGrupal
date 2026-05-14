//Clase que controla el entorno de la calculadora grafica
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

//no voy a crear un .h para poner solo esta wea.... la dejo por aqui... esto servira para la lista enlazada tipo pelicula

public ref struct NodoPelicula {
	List<Point>^ figuraGuardada;
	NodoPelicula^ siguiente;
};

public ref class Controlador {
private:
	List<Point>^ listaOriginal;
	List<Point>^ listaFigura;
	Point PuntoCentralFigura;

	float anguloAcumulado; // Para llevar el control del ángulo total de rotación aplicado
	bool reflexXActiva;
	bool reflexYActiva;
	bool reflexOrigenActiva;

	//weas necesarias.... me canse de comentar.... mentira.... solo no quiero explicar xd
	NodoPelicula^ historialCabeza;
	int cantidadNodos;
	void GuardarEnMemoria();

public:
	Controlador() {
		listaFigura = gcnew List<Point>(); // Inicializar
		reflexXActiva = false;
		reflexYActiva = false;
		reflexOrigenActiva = false;
		anguloAcumulado = 0.0f;
	}
	~Controlador() {}

	//zgregado 14/05/2026
	//método de desplazamiento declaradeichon
	void AplicarDesplazamiento(float deltaX, float deltaY);

	void limpiarDibujo() {
		PuntoCentralFigura.X = 0;
		PuntoCentralFigura.Y = 0;
		listaFigura->Clear();
		reflexXActiva = false;
		reflexYActiva = false;
		reflexOrigenActiva = false;
		anguloAcumulado = 0.0f;
		// Limpiar memoria
		historialCabeza = nullptr;
		cantidadNodos = 0;
	}

	//Declaracion de funcion
	void SetPuntoCentral(int x, int y);
	void SetFigura(System::String^ nombre);
	void DibujarTodo(System::Drawing::Graphics^ g, int cX, int cY);
	void AplicarRotacion(float angulo);






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