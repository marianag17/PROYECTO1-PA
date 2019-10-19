#pragma once
#include <string>
#include "Nodo.h"
class Pila
{
private:
	Nodo* Head = nullptr;// siempre inicializar punteros en nulo
private:
	int NElementos = 0;
public:
	void Apilar(int valor); // Recibe carta para ingresar a la pila
public:
	int Desapilar(); //Sacar carta de la pila
public:
	int ObtenerCima(); //Obtener Carta en la cima sin sacarla
	System::String^ Imprimir();
	void BuscarNumero(int num);
public:
	Pila();
	~Pila();
};

