//NO TOCAR ESTA CLASE HASTA UN SIGUIENTE AVANZE
#include "Transformador.h"
using namespace System;

List<Point>^ Transformador::EscalamientoFigura(List<Point>^ ListaPuntosFigura, float Escala) {
    List<Point>^ PuntosTransformados = gcnew List<Point>();
    for each(Point p in ListaPuntosFigura) {
        float nuevoX = System::Convert::ToSingle(p.X * Escala);
        float nuevoY = System::Convert::ToSingle(p.Y * Escala);
        PuntosTransformados->Add(Point(nuevoX, nuevoY));
    }
    return PuntosTransformados;
};


List<Point>^ Transformador::RotacionFigura(List<Point>^ ListaPuntosFigura, float anguloDegrees) {
    List<Point>^ PuntosTransformados = gcnew List<Point>();

    // Convertir grados a radianes
    float rad = anguloDegrees * (float)Math::PI / 180.0f;
    float cosA = (float)Math::Cos(rad);
    float sinA = (float)Math::Sin(rad);

    for each(Point p in ListaPuntosFigura) {
        float nuevoX = p.X * cosA - p.Y * sinA;
        float nuevoY = p.X * sinA + p.Y * cosA;
        PuntosTransformados->Add(Point((int)nuevoX, (int)nuevoY));
    }
    return PuntosTransformados;
};
//wea traslacion agregada por fin.... malditos cpps separados de los .h para algo existe el pragma once, ya no hay excusa de que puede haber errores por la doble agregacion crj!
List<Point>^ Transformador::TraslacionFigura(List<Point>^ ListaPuntosFigura, float deltaX, float deltaY) {
    List<Point>^ PuntosTransformados = gcnew List<Point>();
    for each(Point p in ListaPuntosFigura) {
        float nuevoX = p.X + deltaX;
        float nuevoY = p.Y + deltaY;
        PuntosTransformados->Add(Point((int)nuevoX, (int)nuevoY));
    }
    return PuntosTransformados;
};