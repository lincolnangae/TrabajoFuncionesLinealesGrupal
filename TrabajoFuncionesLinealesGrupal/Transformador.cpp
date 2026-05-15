//NO TOCAR ESTA CLASE HASTA UN SIGUIENTE AVANZE
#include "Transformador.h"
using namespace System;

void Transformador::TraslacionFigura(List<Point>^ ListaPuntosFigura, float deltaX, float deltaY) {
    float Matriz[3][3] = {
        { 1, 0, deltaX  },
        { 0, 1, deltaY  },
        { 0, 0, 1       }
    };

    // Uso de un for tradicional para poder sobrescribir los valores
    for (int i = 0; i < ListaPuntosFigura->Count; i++) {
        float x = (float)ListaPuntosFigura[i].X;
        float y = (float)ListaPuntosFigura[i].Y;

        int nuevoX = (int)((x * Matriz[0][0]) + (y * Matriz[0][1]) + (1 * Matriz[0][2]));
        int nuevoY = (int)((x * Matriz[1][0]) + (y * Matriz[1][1]) + (1 * Matriz[1][2]));

        // Se sobrescribe el punto original en la lista
        ListaPuntosFigura[i] = Point(nuevoX, nuevoY);
    }
}

void Transformador::EscalamientoFigura(List<Point>^ ListaPuntosFigura, float Escala) {
    float Matriz[2][2] = {
        { Escala, 0,    },
        { 0,      Escala}
    };

    for (int i = 0; i < ListaPuntosFigura->Count; i++) {
        float x = (float)ListaPuntosFigura[i].X;
        float y = (float)ListaPuntosFigura[i].Y;

        int nuevoX = (int)(x * Matriz[0][0]);
        int nuevoY = (int)(y * Matriz[1][1]);

        ListaPuntosFigura[i] = Point(nuevoX, nuevoY);
    }
}

void Transformador::RotacionSobreCentro(List<Point>^ ListaPuntosFigura, float anguloDegrees) {
    float rad = anguloDegrees * (float)Math::PI / 180.0f;
    float cosA = (float)Math::Cos(rad);
    float sinA = (float)Math::Sin(rad);

    float Matriz[2][2] = {
        { cosA, -sinA},
        { sinA,  cosA}
    };

    for (int i = 0; i < ListaPuntosFigura->Count; i++) {
        float x = (float)ListaPuntosFigura[i].X;
        float y = (float)ListaPuntosFigura[i].Y;

        int nuevoX = (int)(x * Matriz[0][0] + y * Matriz[0][1]);
        int nuevoY = (int)(x * Matriz[1][0] + y * Matriz[1][1]);

        ListaPuntosFigura[i] = Point(nuevoX, nuevoY);
    }
}

void Transformador::RotacionSobreFigura(List<Point>^ ListaPuntosFigura, float anguloDegrees, Point pivote) {
    float rad = anguloDegrees * (float)Math::PI / 180.0f;
    float cosA = (float)Math::Cos(rad);
    float sinA = (float)Math::Sin(rad);

    // Matriz de Rotación Estándar
    float Matriz[2][2] = {
        { cosA, -sinA },
        { sinA,  cosA }
    };

    for (int i = 0; i < ListaPuntosFigura->Count; i++) {
        //Trasladar el punto al origen relativo al pivote
        float xRelativa = (float)ListaPuntosFigura[i].X - pivote.X;
        float yRelativa = (float)ListaPuntosFigura[i].Y - pivote.Y;

        float nx = (xRelativa * Matriz[0][0]) + (yRelativa * Matriz[0][1]);
        float ny = (xRelativa * Matriz[1][0]) + (yRelativa * Matriz[1][1]);

        int nuevoX = (int)(nx + pivote.X);
        int nuevoY = (int)(ny + pivote.Y);

        ListaPuntosFigura[i] = Point(nuevoX, nuevoY);
    }
}

void Transformador::ReflexionX(List<Point>^ ListaPuntos) {
    //Inversion de la coordenada Y
    float Matriz[2][2] = {
        { 1,  0},
        { 0, -1}
    };

    for (int i = 0; i < ListaPuntos->Count; i++) {
        int nx = (int)(ListaPuntos[i].X * Matriz[0][0]);
        int ny = (int)(ListaPuntos[i].Y * Matriz[1][1]);
        ListaPuntos[i] = Point(nx, ny);
    }
}

void Transformador::ReflexionY(List<Point>^ ListaPuntos) {
    //Inversion de la coordenada X
    float Matriz[2][2] = {
        { -1, 0},
        {  0, 1}
    };

    for (int i = 0; i < ListaPuntos->Count; i++) {
        int nx = (int)(ListaPuntos[i].X * Matriz[0][0]);
        int ny = (int)(ListaPuntos[i].Y * Matriz[1][1]);
        ListaPuntos[i] = Point(nx, ny);
    }
}

void Transformador::ReflexionOrigen(List<Point>^ ListaPuntos) {
    //Inversion de ambas coordenadas
    float Matriz[3][3] = {
        { -1,  0},
        {  0, -1}
    };

    for (int i = 0; i < ListaPuntos->Count; i++) {
        int nx = (int)(ListaPuntos[i].X * Matriz[0][0]);
        int ny = (int)(ListaPuntos[i].Y * Matriz[1][1]);
        ListaPuntos[i] = Point(nx, ny);
    }
}