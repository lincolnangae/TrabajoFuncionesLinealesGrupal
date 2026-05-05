//NO TOCAR ESTA CLASE HASTA UN SIGUIENTE AVANZE
#include "Transformador.h"

List<Point>^ Transformador::EscalamientoFigura(List<Point>^ ListaPuntosFigura, float Escala) {
    List<Point>^ PuntosTransformados = gcnew List<Point>();
    for each(Point p in ListaPuntosFigura) {
        float nuevoX = System::Convert::ToSingle(p.X * Escala);
        float nuevoY = System::Convert::ToSingle(p.Y * Escala);
        PuntosTransformados->Add(Point(nuevoX, nuevoY));
    }
    return PuntosTransformados;
};