#pragma once
#include "Nodo.h"


// Se trata de una lista enlazada de nodos, en donde cada nodo tiene un elemento (un int), y un puntero al siguiente nodo
class ListaCircular
{
	
	Nodo *lista;

	int n;

	int posicionUltimoNodoAccedido;
	Nodo *punteroUltimoNodoAccedido;


	Nodo * getNodo (int posicion);

public:

	ListaCircular();

	int getValor(int posicion);

	
	void setValor(int posicion, int nuevoValor);


	int getN(); 


	void insertar (int posicion, int nuevoValor);

	
	void eliminar (int posicion);


	void concatenar(ListaCircular *listaAConcatenar);

	int buscar(int elementoABuscar);


	~ListaCircular();
};







