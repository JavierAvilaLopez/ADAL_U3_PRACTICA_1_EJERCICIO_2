#pragma once
#include <string>

// Estructura que representa un nodo de una lista enlazada
struct Nodo
{
	std::string elemento; // String para "BANG" o "CLACK"
	Nodo *anteriorNodo; // Puntero al nodo anterior de la lista enlazada
	Nodo *siguienteNodo; // Puntero al siguiente nodo de la lista enlazada
};

