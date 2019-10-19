#include "Cola.h"



Cola::Cola()
{
}
bool Cola::Vacio()
{
	//Comprueba si el último elemento está vacío
	return First == nullptr;
}
void Cola::Encolar(int valor)
{
	Nodo* NewValue = new Nodo();
	NewValue->Valor = valor;
	if (Vacio())
	{
		//Si está vacía solo se le asigna el valor del primero y ultimo 
		Last = NewValue;
		First = NewValue;
	}
	else
	{
		//El apuntador apunte al nuevo elemento
		Last->Siguiente = NewValue;
		//El nuevo elemento es el último
		Last = NewValue;
	}
}
int Cola::Desencolar()
{
	if (Vacio())
	{
		return -1; //asumiendo que no hay negativos	
	}
	else {
		int ValueReturn = First->Valor;
		//Cambia el apuntador del primero al siguiente
		Nodo * elim = new Nodo();
		elim = First;
		First = First->Siguiente;		
		delete elim;
		return ValueReturn;
	}
}
int Cola::Cima()
{
	//Elegir el primer elemento
	if (Vacio()) {
		return -1;
	}
	else {
		return First->Valor;
	}
}
System::String^ Cola::Imprimir()
{
	System::String^ res = "";
	Nodo* recorrer;
	recorrer = First;

	if (First == nullptr) {
		res = "Pila vacía";
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

Cola::~Cola()
{
}
