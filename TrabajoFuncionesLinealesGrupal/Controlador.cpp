#include "Controlador.h"
#include "Transformador.h"
#include "PresetFigure.h"

void Controlador::SetPuntoCentral(int x, int y) {
    PuntoCentralFigura = Point(x, y);
}

void Controlador::SetFigura(System::String^ nombre) {
    Figuras->cabeza = nullptr;
    List<Point>^ puntos = PresetFigure::ObtenerFigura(nombre, PuntoCentralFigura);

    Nodo<List<Point>^>^ nuevaFigura = gcnew Nodo<List<Point>^>(puntos);
    Figuras->AgregarALista(nuevaFigura);
}

void Controlador::DibujarTodo(Graphics^ g, int cX, int cY) {
    // Dibujo del origen absoluto del plano (0,0) en color Azul
    g->FillEllipse(gcnew SolidBrush(Color::Blue), cX - 3, cY - 3, 6, 6);

    // Dibujo del punto central de la figura (marcador Rojo)
    int centroPantallaX = cX + PuntoCentralFigura.X;
    int centroPantallaY = cY - PuntoCentralFigura.Y; // Resta para invertir eje Y
    g->FillEllipse(gcnew SolidBrush(Color::Red), centroPantallaX - 3, centroPantallaY - 3, 6, 6);

    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        Nodo<List<Point>^>^ temp = Figuras->cabeza;
        int contador = 0;

        while (temp != nullptr) {
            List<Point>^ puntos = temp->Dato;

            Color colorFigura = (contador == 0) ? Color::Black : Color::LightGray;
            float anchoLapiz = (contador == 0) ? 3.0f : 2.0f;
            Pen^ lapiz = gcnew Pen(colorFigura, anchoLapiz);

            if (puntos->Count > 1) {
                cli::array<Point>^ puntosDibujo = gcnew cli::array<Point>(puntos->Count);
                for (int i = 0; i < puntos->Count; i++) {
                    int xPantalla = cX + puntos[i].X;
                    int yPantalla = cY - puntos[i].Y;

                    puntosDibujo[i] = Point(xPantalla, yPantalla);
                }
                g->DrawPolygon(lapiz, puntosDibujo);
            }
            temp = temp->siguiente;
            contador++;
        }
    }
}
//Funciones de transformacion
void Controlador::AplicarDesplazamiento(float deltaX, float deltaY) {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaTemporalPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::TraslacionFigura(ListaTemporalPuntos, deltaX, deltaY);

        // Mover el punto central junto con la figura
        PuntoCentralFigura.X += (int)deltaX;
        PuntoCentralFigura.Y += (int)deltaY;

        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaTemporalPuntos));
    }
}

void Controlador::AplicarEscala(float escala) {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaTemporalPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::EscalamientoFigura(ListaTemporalPuntos, escala);

        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaTemporalPuntos));
    }
}

void Controlador::AplicarRotacionCentro(float angulo) {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaTemporalPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::RotacionFigura(ListaTemporalPuntos, angulo);

        // Rotar el punto central alrededor del origen (0,0)
        float rad = angulo * (float)Math::PI / 180.0f;
        float cosA = (float)Math::Cos(rad);
        float sinA = (float)Math::Sin(rad);
        int nx = (int)(PuntoCentralFigura.X * cosA - PuntoCentralFigura.Y * sinA);
        int ny = (int)(PuntoCentralFigura.X * sinA + PuntoCentralFigura.Y * cosA);
        PuntoCentralFigura = Point(nx, ny);

        anguloAcumulado += angulo;
        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaTemporalPuntos));
    }
}

void Controlador::AplicarReflexionX() {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaCopiaPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::ReflexionX(ListaCopiaPuntos);

        // Reflejar punto central en X (cambia signo de Y)
        PuntoCentralFigura.Y *= -1;

        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaCopiaPuntos));
    }
}

void Controlador::AplicarReflexionY() {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaCopiaPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::ReflexionY(ListaCopiaPuntos);

        // Reflejar punto central en Y (cambia signo de X)
        PuntoCentralFigura.X *= -1;

        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaCopiaPuntos));
    }
}

void Controlador::AplicarReflexionOrigen() {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaCopiaPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::ReflexionOrigen(ListaCopiaPuntos);

        // Reflejar punto central en ambos ejes
        PuntoCentralFigura.X *= -1;
        PuntoCentralFigura.Y *= -1;

        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaCopiaPuntos));
    }
}