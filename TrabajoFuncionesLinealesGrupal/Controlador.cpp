#include "Controlador.h"
#include "Transformador.h"
#include "PresetFigure.h"

void Controlador::SetPuntoCentral(int x, int y) {
    PuntoCentralFigura = Point(x, y);
}

void Controlador::SetFigura(System::String^ nombre) {
    //Obtenemos los puntos de la figura predefinida
    List<Point>^ puntos = PresetFigure::ObtenerFigura(nombre, Point(0, 0));
    //Usamos gcnew para crear el objeto en memoria
    Nodo<List<Point>^>^ nuevaFigura = gcnew Nodo<List<Point>^>(puntos);
    //Lo agregamos a nuestra lista (Historial)
    Figuras->AgregarALista(nuevaFigura);
}

void Controlador::DibujarTodo(Graphics^ g, int cX, int cY) {
    int dibujoX = cX + PuntoCentralFigura.X;
    int dibujoY = cY - PuntoCentralFigura.Y;

    g->FillEllipse(gcnew SolidBrush(Color::Red), dibujoX - 2, dibujoY - 2, 4, 4);

    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        Nodo<List<Point>^>^ temp = Figuras->cabeza;
        int contador = 0;

        //No pasara al siguiente si este no tiene mas
        while (temp != nullptr) {
            //Temporal
            List<Point>^ puntos = temp->Dato;

            Color colorFigura = (contador == 0) ? Color::Black : Color::LightGray;
            float anchoLapiz = (contador == 0) ? 3.0f : 1.0f;
            Pen^ lapiz = gcnew Pen(colorFigura, anchoLapiz);

            if (puntos->Count > 1) {
                cli::array<Point>^ puntosDibujo = gcnew cli::array<Point>(puntos->Count);
                for (int i = 0; i < puntos->Count; i++) {
                    int xPantalla = dibujoX + puntos[i].X;
                    int yPantalla = dibujoY + puntos[i].Y;

                    puntosDibujo[i] = Point(xPantalla, yPantalla);
                }
                g->DrawPolygon(lapiz, puntosDibujo);
            }
            //Pasar al siguiente dato
            temp = temp->siguiente;
            contador++;
        }
    }
}
//Funciones de transformacion
void Controlador::AplicarDesplazamiento(float deltaX, float deltaY) {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        //Como esta en memoria, creamos un objeto desde 0, pero con los puntos obtenidos
        List<Point>^ ListaTemporalPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        
        Transformador::TraslacionFigura(ListaTemporalPuntos, deltaX, deltaY);

        //Creamos una figura que use los puntos
        Nodo<List<Point>^>^ nuevaFigura = gcnew Nodo<List<Point>^>(ListaTemporalPuntos);
        //Le los pasamos a la lista de figuras
        Figuras->AgregarALista(nuevaFigura);

    }
}

void Controlador::AplicarEscala(float escala) {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {

        List<Point>^ ListaTemporalPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::EscalamientoFigura(ListaTemporalPuntos, escala);

        Nodo<List<Point>^>^ nuevaFigura = gcnew Nodo<List<Point>^>(ListaTemporalPuntos);

        Figuras->AgregarALista(nuevaFigura);
    }
}

void Controlador::AplicarRotacion(float angulo) {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {

        List<Point>^ ListaTemporalPuntos = gcnew List<Point>(Figuras->cabeza->Dato);
        Transformador::RotacionFigura(ListaTemporalPuntos, angulo);

        anguloAcumulado += angulo;

        Nodo<List<Point>^>^ nuevaFigura = gcnew Nodo<List<Point>^>(ListaTemporalPuntos);

        Figuras->AgregarALista(nuevaFigura);
    }
}

void Controlador::AplicarReflexionX() {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaCopiaPuntos = gcnew List<Point>(Figuras->cabeza->Dato);

        Transformador::ReflexionX(ListaCopiaPuntos);

        Nodo<List<Point>^>^ nuevoNodo = gcnew Nodo<List<Point>^>(ListaCopiaPuntos);
        Figuras->AgregarALista(nuevoNodo);
    }
}

void Controlador::AplicarReflexionY() {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaCopiaPuntos = gcnew List<Point>(Figuras->cabeza->Dato);

        Transformador::ReflexionY(ListaCopiaPuntos);

        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaCopiaPuntos));
    }
}

void Controlador::AplicarReflexionOrigen() {
    if (Figuras != nullptr && Figuras->cabeza != nullptr) {
        List<Point>^ ListaCopiaPuntos = gcnew List<Point>(Figuras->cabeza->Dato);

        Transformador::ReflexionOrigen(ListaCopiaPuntos);

        Figuras->AgregarALista(gcnew Nodo<List<Point>^>(ListaCopiaPuntos));
    }
}