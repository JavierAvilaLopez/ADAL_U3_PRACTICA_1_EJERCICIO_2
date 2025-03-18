#pragma once
#include <iostream>
#include <utility>
using namespace std;

// Definición del nodo para la lista enlazada circular
struct Nodo {
  string valor;
  Nodo* siguienteNodo;

  explicit Nodo(string  val) : valor(std::move(val)), siguienteNodo(nullptr) {}
};

class ListaCircular {
private:
  Nodo* cabeza;  // Puntero al primer nodo de la lista circular
  int n;         // Número de elementos en la lista

public:
  // Constructor
  ListaCircular();

  // Inserta un elemento en la posición pos
  void insertar(int pos, const string& s);  // Pasamos `s` por referencia para evitar copias

  // Elimina el elemento en la posición pos
  void eliminar(int pos);

  // Devuelve el string que se encuentra en la posición pos
  [[nodiscard]] string getElemento(int pos) const;  // Agregamos `const` porque no modifica la clase

  // Gira la lista hacia la izquierda o derecha según el valor de g
  void girar(int g);

  // Destructor
  ~ListaCircular();
};
