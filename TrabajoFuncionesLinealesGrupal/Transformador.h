//Clase que aplica transformaciones a listas mediante operaciones
//NO TOCAR ESTA CLASE HASTA UN SIGUIENTE AVANZE
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class Transformador {
public:
    static List<Point>^ EscalamientoFigura(List<Point>^ ListaPuntosFigura, float escala);
    static List<Point>^ RotacionFigura(List<Point>^ ListaPuntosFigura, float anguloDegrees);
};
