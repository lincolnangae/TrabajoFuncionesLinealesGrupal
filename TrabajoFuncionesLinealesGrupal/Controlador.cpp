#include "Controlador.h"
#include "Transformador.h"
#include "PresetFigure.h"



void Controlador::SetPuntoCentral(int x, int y) {
    PuntoCentralFigura = Point(x, y);
}

void Controlador::SetFigura(System::String^ nombre) {
    listaOriginal = PresetFigure::ObtenerFigura(nombre, Point(0, 0));

    listaFigura = gcnew List<Point>(listaOriginal);
}

void Controlador::DibujarTodo(Graphics^ g, int cX, int cY) {
    //Dibujo del punto
    Brush^ pincel = gcnew SolidBrush(Color::Red);

    int dibujoX = cX + PuntoCentralFigura.X;
    int dibujoY = cY - PuntoCentralFigura.Y;

    g->FillEllipse(pincel, dibujoX - 1, dibujoY - 1, 4, 4);

    //Dibujo de figuras
    if (listaFigura != nullptr && listaFigura->Count > 1) {
        Pen^ lapiz = gcnew Pen(Color::Black, 3.0f);
        array<Point>^ puntosDibujo = gcnew array<Point>(listaFigura->Count);
        for (int i = 0; i < listaFigura->Count; i++) {
            // Se dibuja la figura sumándole el punto central
            // Usando lógica normal de Windows Forms (Y incrementa hacia abajo)
            int xPantalla = dibujoX + listaFigura[i].X;
            int yPantalla = dibujoY + listaFigura[i].Y;

            puntosDibujo[i] = Point(xPantalla, yPantalla);
        }
        g->DrawPolygon(lapiz, puntosDibujo);
     ////agregado papu
        NodoPelicula^ temp = historialCabeza;
        int opacidad = 100; 
        while (temp != nullptr) {
            if (temp->figuraGuardada != nullptr && temp->figuraGuardada->Count > 1) {
                Pen^ lapizFantasma = gcnew Pen(Color::FromArgb(opacidad, Color::Gray), 2.0f);
                lapizFantasma->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;

                array<Point>^ ptsFantasma = gcnew array<Point>(temp->figuraGuardada->Count);
                for (int i = 0; i < temp->figuraGuardada->Count; i++) {
                    int fx = dibujoX + temp->figuraGuardada[i].X;
                    int fy = dibujoY + temp->figuraGuardada[i].Y;
                    ptsFantasma[i] = Point(fx, fy);
                }
                g->DrawPolygon(lapizFantasma, ptsFantasma);
                opacidad -= 50; 
            }
            temp = temp->siguiente;
        }
    }
    if (reflexXActiva) {
        Pen^ penRefX = gcnew Pen(Color::OrangeRed, 2);
        SolidBrush^ brushRefX = gcnew SolidBrush(Color::OrangeRed);

        // Punto reflejado en X: mismo X, Y invertida respecto al eje X
        // En pantalla: dibujoY se refleja como (2*cY - dibujoY)
        int refPX = dibujoX;
        int refPY = 2 * cY - dibujoY;
        g->FillEllipse(brushRefX, refPX - 2, refPY - 2, 6, 6);

        if (listaFigura->Count > 1) {
            array<Point>^ pts = gcnew array<Point>(listaFigura->Count);
            for (int i = 0; i < listaFigura->Count; i++) {
                // Mismo calculo que el original, pero Y reflejada
                int fx = dibujoX + listaFigura[i].X;
                int fy = dibujoY + listaFigura[i].Y;
                fy = 2 * cY - fy; // reflejo en eje X
                pts[i] = Point(fx, fy);
            }
            g->DrawPolygon(penRefX, pts);
        }
    }

    if (reflexYActiva) {
        Pen^ penRefY = gcnew Pen(Color::MediumSeaGreen, 2);
        SolidBrush^ brushRefY = gcnew SolidBrush(Color::MediumSeaGreen);

        // Punto reflejado en Y: X invertida respecto al eje Y
        // En pantalla: dibujoX se refleja como (2*cX - dibujoX)
        int refPX = 2 * cX - dibujoX;
        int refPY = dibujoY;
        g->FillEllipse(brushRefY, refPX - 2, refPY - 2, 6, 6);

        if (listaFigura->Count > 1) {
            array<Point>^ pts = gcnew array<Point>(listaFigura->Count);
            for (int i = 0; i < listaFigura->Count; i++) {
                int fx = dibujoX + listaFigura[i].X;
                int fy = dibujoY + listaFigura[i].Y;
                fx = 2 * cX - fx; // reflejo en eje Y
                pts[i] = Point(fx, fy);
            }
            g->DrawPolygon(penRefY, pts);
        }
    }

    if (reflexOrigenActiva) {
        Pen^ penRefO = gcnew Pen(Color::DodgerBlue, 2);
        SolidBrush^ brushRefO = gcnew SolidBrush(Color::DodgerBlue);

        // Punto reflejado en origen: ambos ejes invertidos
        int refPX = 2 * cX - dibujoX;
        int refPY = 2 * cY - dibujoY;
        g->FillEllipse(brushRefO, refPX - 2, refPY - 2, 6, 6);

        if (listaFigura->Count > 1) {
            array<Point>^ pts = gcnew array<Point>(listaFigura->Count);
            for (int i = 0; i < listaFigura->Count; i++) {
                int fx = dibujoX + listaFigura[i].X;
                int fy = dibujoY + listaFigura[i].Y;
                fx = 2 * cX - fx; // reflejo en eje Y
                fy = 2 * cY - fy; // reflejo en eje X
                pts[i] = Point(fx, fy);
            }
            g->DrawPolygon(penRefO, pts);
        }
    }

}

//Funciones de transformacion



//
void Controlador::GuardarEnMemoria() {
    if (listaFigura == nullptr || listaFigura->Count == 0) return;

    // Crear nuevo nodo (Película) al inicio... como sea emmm se que por norma los comentarios van es... nisiquiera se el tipo de palabra pero dare ejemplos... generar, buscar etc etc, bueno la cosa es que... porque? xd parece muy soso
    NodoPelicula^ nuevoNodo = gcnew NodoPelicula();
    nuevoNodo->figuraGuardada = gcnew List<Point>(listaFigura);
    nuevoNodo->siguiente = historialCabeza;
    historialCabeza = nuevoNodo;
    cantidadNodos++;

    // Eliminamos el más antiguo si superamos 2 nodos  
    if (cantidadNodos > 2) {
        NodoPelicula^ temp = historialCabeza;
        while (temp != nullptr && temp->siguiente != nullptr && temp->siguiente->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        if (temp != nullptr) {
            temp->siguiente = nullptr;
        }
        cantidadNodos--;
    }
}

void Controlador::AplicarDesplazamiento(float deltaX, float deltaY) {
    if (listaOriginal != nullptr) {
        GuardarEnMemoria(); 
        listaOriginal = Transformador::TraslacionFigura(listaOriginal, deltaX, deltaY);
        listaFigura = Transformador::TraslacionFigura(listaFigura, deltaX, deltaY);
    }
}

void Controlador::AplicarEscala(float escala) {
    if (listaOriginal != nullptr) {
        GuardarEnMemoria(); 
        listaFigura = Transformador::EscalamientoFigura(listaOriginal, escala);
    }
}

void Controlador::AplicarRotacion(float angulo) {
    if (listaOriginal != nullptr) {
        GuardarEnMemoria(); 
        anguloAcumulado += angulo;
        listaFigura = Transformador::RotacionFigura(listaOriginal, anguloAcumulado);
    }
}