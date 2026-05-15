//Clase que aplica transformaciones a listas mediante operaciones
//NO TOCAR ESTA CLASE HASTA UN SIGUIENTE AVANZE
#pragma once

using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class Transformador {
public:
    static void EscalamientoFigura(List<Point>^ ListaPuntosFigura, float escala);
    static void RotacionSobreCentro(List<Point>^ ListaPuntosFigura, float anguloDegrees);
    static void RotacionSobreFigura(List<Point>^ ListaPuntosFigura, float anguloDegrees, Point pivote);
    //cosas para translaciones agregada.... sigo diciendo que la traslacion no es una transformacion lineal per se y solo se le puede tratar como una por un truco que agrega dimensiones pero bueno....
    static void TraslacionFigura(List<Point>^ ListaPuntosFigura, float deltaX, float deltaY);
    static void ReflexionX(List<Point>^ puntos);
    static void ReflexionY(List<Point>^ puntos);
    static void ReflexionOrigen(List<Point>^ puntos);
};
