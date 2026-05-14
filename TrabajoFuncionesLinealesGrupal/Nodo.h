#pragma once
using namespace System::IO;
#include <iostream>

using namespace std;

template <typename T>
ref class Nodo {
public:
	T Dato;
	Nodo<T>^ siguiente;
	Nodo(T dato): Dato(dato) {
		siguiente = nullptr;
	}
};