#include <iostream>
#include "ListaCircular.h"

using namespace std;

int main() {
	// Creamos una lista circular para las pruebas
	ListaCircular lista;
	cout << "Nueva ListaCircular creada:\n";

	// Prueba de inserción en lista vacía
	cout << "Inserto 'CLACK' con la lista vacía:\n";
	lista.insertar(0, "CLACK");

	// Prueba de inserción al final
	cout << "Inserto 'BANG' y 'CLACK' al final:\n";
	lista.insertar(1, "BANG");
	lista.insertar(2, "CLACK");

	// Prueba de inserción al principio
	cout << "Inserto 'CLACK' al principio:\n";
	lista.insertar(0, "CLACK");

	// Prueba de inserción en medio
	cout << "Inserto 'BANG' en la posición 2:\n";
	lista.insertar(2, "BANG");

	// Prueba de eliminación al principio
	cout << "Elimino el primer elemento:\n";
	lista.eliminar(0);

	// // Prueba de eliminación del final
	// cout << "Elimino el último elemento:\n";
	// lista.eliminar(lista.getN() - 1);

	// Prueba de eliminación del medio
	cout << "Elimino el elemento en la posición 1:\n";
	lista.eliminar(1);

	// Ver elementos
	cout << "Elemento en posición 0: " << lista.getElemento(0) << endl;
	cout << "Elemento en posición 1: " << lista.getElemento(1) << endl;

	// Simulación de la ruleta rusa
	cout << "\nSimulación de la ruleta rusa:\n";
	int N, posBala, giro;
	cin >> N >> posBala;

	ListaCircular tambor;

	// Inicializar tambor
	for (int i = 0; i < N; i++) {
		tambor.insertar(i, "CLACK");
	}
	tambor.insertar(posBala, "BANG");

	// Leer giros y jugar
	while (cin >> giro) {
		tambor.girar(giro);
		string resultado = tambor.getElemento(0);
		cout << resultado << endl;
		if (resultado == "BANG") break;
	}

	return 0;
}
