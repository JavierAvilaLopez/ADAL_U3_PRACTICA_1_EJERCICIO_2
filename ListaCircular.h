#pragma once
#include "Nodo.h"
#include <iostream>
#include <string>

class ListaCircular {
  private:

    Nodo* cabeza;
    int n;

    Nodo* getNodo(int posicion);

  public:
    ListaCircular();
    ~ListaCircular();

    void insertar(int posicion, std::string elemento);
    void eliminar(int posicion);
    std::string getElemento(int posicion);
    void girar (int g);
    void imprimir();
};