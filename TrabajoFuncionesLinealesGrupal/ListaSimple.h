#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;
//En cli no es neecesario borrar memoria ,solo declararlo como nullptr cuando ya no lo usaremos
template <typename T>
ref class ListaSimple {
    int cantidadAct;
    int cantidadMax;

public:
    Nodo<T>^ cabeza;

    int GetCant() {
        return cantidadAct;
    }

    ListaSimple() {
        cantidadAct = 0;
        cantidadMax = 2;
        cabeza = nullptr;
    }

    void AgregarALista(Nodo<T>^ nuevo) {
        if (cabeza == nullptr) {
            cabeza = nuevo;
            cantidadAct++;
        }
        else {
            if (cantidadAct >= cantidadMax) {
                EliminarUltimo();
            }

            nuevo->siguiente = cabeza;
            cabeza = nuevo;

            cantidadAct++;
        }
    }

    void EliminarUltimo() {
        if (cabeza == nullptr) return;

        if (cabeza->siguiente == nullptr) {
            cabeza = nullptr;
        }
        else {
            Nodo<T>^ temp = cabeza;
            while (temp->siguiente->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nullptr;
        }
        cantidadAct--;
    }
};