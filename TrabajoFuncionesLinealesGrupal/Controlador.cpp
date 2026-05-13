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
void Controlador::AplicarEscala(float escala) {
    if (listaOriginal != nullptr) {
        listaFigura = Transformador::EscalamientoFigura(listaOriginal, escala);
    }
}

void Controlador::AplicarRotacion(float angulo) {
    if (listaOriginal != nullptr) {
        anguloAcumulado += angulo;
        // Primero escalar si hay escala aplicada, luego rotar
        // Rotamos siempre desde listaOriginal para evitar distorsión acumulada
        listaFigura = Transformador::RotacionFigura(listaOriginal, anguloAcumulado);
    }
}