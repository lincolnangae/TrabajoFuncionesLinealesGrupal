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

void Controlador::SetFigura(System::String^ nombre) {
    listaFiguras = PresetFigure::ObtenerFigura(nombre, Point(0, 0));
}

void Controlador::DibujarTodo(Graphics^ g, int cX, int cY) {
    //Dibujo del punto
    Brush^ pincel = gcnew SolidBrush(Color::Red);

    int dibujoX = cX + PuntoCentralFigura.X;
    int dibujoY = cY - PuntoCentralFigura.Y;

    g->FillEllipse(pincel, dibujoX - 1, dibujoY - 1, 4, 4);

    //Dibujo de figuras
    if (listaFiguras != nullptr && listaFiguras->Count > 1) {
        Pen^ lapiz = gcnew Pen(Color::Black, 2.0f);
        array<Point>^ puntosDibujo = gcnew array<Point>(listaFiguras->Count);
        for (int i = 0; i < listaFiguras->Count; i++) {
            // Se dibuja la figura sumándole el punto central
            // Usando lógica normal de Windows Forms (Y incrementa hacia abajo)
            int xPantalla = dibujoX + listaFiguras[i].X;
            int yPantalla = dibujoY + listaFiguras[i].Y;

            puntosDibujo[i] = Point(xPantalla, yPantalla);
        }
        g->DrawPolygon(lapiz, puntosDibujo);
    }
}