#pragma once
#include <string>
#include <utility> // Para std::move

// Estructura que representa un nodo de una lista enlazada circular
struct Nodo {
	std::string valor;  // Elemento que guarda el nodo ("BANG" o "CLACK")
	Nodo* siguienteNodo; // Puntero al siguiente nodo en la lista circular

	// Constructor explícito para evitar conversiones implícitas
	explicit Nodo(std::string val) : valor(std::move(val)), siguienteNodo(nullptr) {}
};
