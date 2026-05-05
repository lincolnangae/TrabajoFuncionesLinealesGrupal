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
    else if (nombre == "Estrella") {
        puntos->Add(Point(cx, cy - 50));
        puntos->Add(Point(cx + 15, cy - 15));
        puntos->Add(Point(cx + 50, cy - 15));
        puntos->Add(Point(cx + 20, cy + 10));
        puntos->Add(Point(cx + 30, cy + 45));
        puntos->Add(Point(cx, cy + 25));
        puntos->Add(Point(cx - 30, cy + 45));
        puntos->Add(Point(cx - 20, cy + 10));
        puntos->Add(Point(cx - 50, cy - 15));
        puntos->Add(Point(cx - 15, cy - 15));
    }
    else if (nombre == "Pentagono") {
        puntos->Add(Point(cx, cy - 45));
        puntos->Add(Point(cx + 45, cy - 10));
        puntos->Add(Point(cx + 30, cy + 45));
        puntos->Add(Point(cx - 30, cy + 45));
        puntos->Add(Point(cx - 45, cy - 10));
    }
    else if (nombre == "Rombo") {
        puntos->Add(Point(cx, cy - 50));
        puntos->Add(Point(cx + 30, cy));
        puntos->Add(Point(cx, cy + 50));
        puntos->Add(Point(cx - 30, cy));
    }
    return puntos;
}