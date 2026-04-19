//Clase para el retorno de valores de figuras predeterminadas
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Drawing;

public ref class PresetFigure {
public:
    //Declaracion
    static List<Point>^ ObtenerFigura(System::String^ nombre, Point centro);

    //Aplicacion en PresetFigure.cpp
};