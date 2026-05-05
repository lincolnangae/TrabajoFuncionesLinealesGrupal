#include "Controlador.h"
#include "Transformador.h"
#include "PresetFigure.h"

void Controlador::SetPuntoCentral(int x, int y) {
    PuntoCentralFigura = Point(x, y);
}

void Controlador::SetFigura(System::String^ nombre) {
    listaOriginal = PresetFigure::ObtenerFigura(nombre, Point(0, 0));

    listaFigura = gcnew List<Point>(listaOriginal);
}

void Controlador::DibujarTodo(Graphics^ g, int cX, int cY) {
    //Dibujo del punto
    Brush^ pincel = gcnew SolidBrush(Color::Red);

    int dibujoX = cX + PuntoCentralFigura.X;
    int dibujoY = cY - PuntoCentralFigura.Y;

    g->FillEllipse(pincel, dibujoX - 1, dibujoY - 1, 4, 4);

    //Dibujo de figuras
    if (listaFigura != nullptr && listaFigura->Count > 1) {
        Pen^ lapiz = gcnew Pen(Color::Black, 3.0f);
        array<Point>^ puntosDibujo = gcnew array<Point>(listaFigura->Count);
        for (int i = 0; i < listaFigura->Count; i++) {
            // Se dibuja la figura sumándole el punto central
            // Usando lógica normal de Windows Forms (Y incrementa hacia abajo)
            int xPantalla = dibujoX + listaFigura[i].X;
            int yPantalla = dibujoY + listaFigura[i].Y;

            puntosDibujo[i] = Point(xPantalla, yPantalla);
        }
        g->DrawPolygon(lapiz, puntosDibujo);
    }
}

//Funciones de transformacion
void Controlador::AplicarEscala(float escala) {
    if (listaOriginal != nullptr) {
        listaFigura = Transformador::EscalamientoFigura(listaOriginal, escala);
    }
}