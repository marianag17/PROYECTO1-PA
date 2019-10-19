#include "Pila.h"
#include <string>


Pila::Pila()
{
	NElementos = 0;
}


Pila::~Pila()
{
}
void Pila::Apilar(int valor) {
	Nodo * NodoNuevo = new Nodo();
	NodoNuevo->Valor = valor;// asignar la carta al nodo
	if (Head == nullptr)
	{
		Head = NodoNuevo;
	}
	else
	{
		Nodo* Aux = new Nodo();
		Aux = Head; //Guardamos el que era la cima anterior, que sera el siguiente
		Head = NodoNuevo; // la cima es el nuevo nodo
		Head->Siguiente = Aux; //Hacemos que auxiliar sea el siguiente nodo
	}
	NElementos++; // Aumentamos manualmente la cantidad de elementos para llevar control
}
int Pila::Desapilar() {
	if (Head == nullptr)
	{
		return *new int();
	}
	else
	{
		int valor = Head->Valor;
		Head = Head->Siguiente;
		NElementos--;
		return valor;

	}
}
int Pila::ObtenerCima() {
	if (Head == nullptr)
	{
		return *new int;
	}
	else
	{
		return Head->Valor;
	}
}
System::String^ Pila::Imprimir()
{
	System::String^ res = "";
	Nodo* recorrer;
	recorrer = Head;
	
	if (Head == nullptr) {
		res= "Pila vacía";
		return res;
	}
	else {
		while (recorrer != nullptr)
		{
			res += System::Convert::ToString(recorrer->Valor);
			res += "\r\n";
			recorrer = recorrer->Siguiente;
			
		}
		return res;
	}

	
}
void Pila::BuscarNumero(int num)
{
	int cont = 0;
	Pila* pilaaux = new Pila();
	while (ObtenerCima() != num)
	{
		pilaaux->Apilar(Desapilar());
		cont++;
	}
	
}

