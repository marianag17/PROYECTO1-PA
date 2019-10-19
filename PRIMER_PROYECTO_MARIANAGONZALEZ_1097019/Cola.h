#pragma once
#include "Nodo.h"

class Cola
{
public:
	Cola();
	~Cola();
public:
	
	Nodo*First = nullptr;
	Nodo* Last = nullptr;
	bool Vacio();
	void Encolar(int valor);
	int Desencolar();
	int Cima();
	void Empty();
	System::String^ Imprimir();
};

