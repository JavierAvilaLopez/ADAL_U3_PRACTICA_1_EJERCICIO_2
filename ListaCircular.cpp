#include "ListaCircular.h"

// Constructor: Inicializa una lista vacía
ListaCircular::ListaCircular() : cabeza(nullptr), n(0) {}

// Inserta un nuevo nodo en la posición especificada
void ListaCircular::insertar(int posicion, const std::string& s) {
    Nodo* nuevo = new Nodo(std::move(s)); // Usamos std::move para optimizar
    if (n == 0) {
        // Primera inserción: el nodo apunta a sí mismo
        cabeza = nuevo;
        cabeza->siguienteNodo = cabeza;
    } else {
        Nodo* temp = cabeza;
        for (int i = 0; i < posicion - 1; i++) {
            temp = temp->siguienteNodo;
        }
        nuevo->siguienteNodo = temp->siguienteNodo;
        temp->siguienteNodo = nuevo;

        if (posicion == 0) cabeza = nuevo; // Si insertamos en cabeza, la actualizamos
    }
    n++;
}

// Elimina el nodo en la posición especificada
void ListaCircular::eliminar(int posicion) {
    if (n == 0) return;

    Nodo* temp = cabeza;

    if (posicion == 0) {
        while (temp->siguienteNodo != cabeza) temp = temp->siguienteNodo; // Buscar el último nodo
        temp->siguienteNodo = cabeza->siguienteNodo;
        delete cabeza;
        cabeza = temp->siguienteNodo;
    } else {
        Nodo* prev = cabeza;
        for (int i = 0; i < posicion - 1; i++) prev = prev->siguienteNodo;
        Nodo* aEliminar = prev->siguienteNodo;
        prev->siguienteNodo = aEliminar->siguienteNodo;
        delete aEliminar;
    }
    n--;
}

// Devuelve el string en la posición especificada
std::string ListaCircular::getElemento(int posicion) const {
    Nodo* temp = cabeza;
    for (int i = 0; i < posicion; i++) {
        temp = temp->siguienteNodo;
    }
    return temp->valor;
}

// Gira la lista hacia la izquierda o derecha según el valor de g
void ListaCircular::girar(int g) {
    if (n == 0 || g == 0) return;
    int pasos = (g % n + n) % n; // Normalizamos los giros
    for (int i = 0; i < pasos; i++) {
        cabeza = cabeza->siguienteNodo;
    }
}

// Destructor: Libera toda la memoria de la lista circular
ListaCircular::~ListaCircular() {
    while (n > 0) eliminar(0);
}
