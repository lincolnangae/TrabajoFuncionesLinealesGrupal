//NO TOCAR ESTA CLASE HASTA UN SIGUIENTE AVANZE
#include "Transformador.h"

List<Point>^ Transformador::EscalamientoFigura(List<Point>^ ListaPuntosFigura, float Escala) {
    List<Point>^ PuntosTransformados = gcnew List<Point>();
    for each(Point p in ListaPuntosFigura) {
        int nuevoX = System::Convert::ToInt32(p.X * Escala);
        int nuevoY = System::Convert::ToInt32(p.Y * Escala);
        PuntosTransformados->Add(Point(nuevoX, nuevoY));
    }
    return PuntosTransformados;
};