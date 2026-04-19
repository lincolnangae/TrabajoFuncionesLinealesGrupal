#include "Controlador.h"
#include "Transformador.h"
#include "PresetFigure.h"

//Base lista para implementarse en la siguiente entrega
void Controlador::AplicarRotacion(float angulo) {
    listaFiguras = Transformador::RotacionAFigura(listaFiguras, angulo);
}

void Controlador::SetPuntoCentral(int x, int y) {
    PuntoCentralFigura = Point(x, y);
}



void Controlador::DibujarTodo(Graphics^ g, int cX, int cY) {
    //Dibujo del punto
    Brush^ pincel = gcnew SolidBrush(Color::Red);

    int dibujoX = cX + PuntoCentralFigura.X;
    int dibujoY = cY - PuntoCentralFigura.Y;

    g->FillEllipse(pincel, dibujoX - 1, dibujoY - 1, 4, 4);

    //Dibujo de figuras
}