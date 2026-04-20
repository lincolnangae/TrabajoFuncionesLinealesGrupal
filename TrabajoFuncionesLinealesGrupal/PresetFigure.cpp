#include "PresetFigure.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Drawing;

List<Point>^ PresetFigure::ObtenerFigura(String^ nombre, Point centro) {
    List<Point>^ puntos = gcnew List<Point>();

    // Extraccion de coordenadas del centro
    int cx = centro.X;
    int cy = centro.Y;

    if (nombre == "Cuadrado") {
        puntos->Add(Point(cx - 40, cy - 40));
        puntos->Add(Point(cx + 40, cy - 40));
        puntos->Add(Point(cx + 40, cy + 40));
        puntos->Add(Point(cx - 40, cy + 40));
    }
    else if (nombre == "Triangulo") {
        puntos->Add(Point(cx, cy - 40));
        puntos->Add(Point(cx + 40, cy + 40));
        puntos->Add(Point(cx - 40, cy + 40));
    }
    //pueden añadir mas figuras aca, pero para las proxima entregas
    return puntos;
}