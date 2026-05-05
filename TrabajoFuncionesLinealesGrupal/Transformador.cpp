//NO TOCAR ESTA CLASE HASTA UN SIGUIENTE AVANZE
#include "Transformador.h"

List<Point>^ Transformador::EscalamientoFigura(List<Point>^ ListaPuntosFigura, float Escala) {
	//FUNCION PARA ESCALAR
	List<Point>^ figuraEscalada = gcnew List<Point>();
	for (int i = 0; i < ListaPuntosFigura->Count; i++) {
		int nuevoX = (int)(ListaPuntosFigura[i].X * Escala);
		int nuevoY = (int)(ListaPuntosFigura[i].Y * Escala);
		figuraEscalada->Add(Point(nuevoX, nuevoY));
	}
	return figuraEscalada;
}