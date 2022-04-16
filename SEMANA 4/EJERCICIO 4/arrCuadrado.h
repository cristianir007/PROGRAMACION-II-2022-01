#pragma once
#include <vector>
#include "Cuadrado.h"

class arrCuadrado{
private:
	vector<Cuadrado*> cuadrados;

public:
	arrCuadrado(){}
	~arrCuadrado(){}

	void agregarCuadrado(Cuadrado* c) {
		cuadrados.push_back(c);
	}

	void insertarEnPosicion(Cuadrado* c, int pos) {
		cuadrados.insert(cuadrados.begin() + pos, c);
	}

	void eliminarCuadrado() {
		cuadrados.pop_back();
	}

	void eliminarEnPosicion(int pos) {
		cuadrados.erase(cuadrados.begin() + pos);
	}

	void borrar() {
		for (int i = 0; i < cuadrados.size(); i++){
			cuadrados.at(i)->borrar();
		}
	}

	void mover() {
		for (int i = 0; i < cuadrados.size(); i++){
			cuadrados[i]->mover();
		}
	}

	void dibujar() {
		for (int i = 0; i < cuadrados.size(); i++){
			cuadrados[i]->dibujar();
		}
	}

	void cambiarColores() {
		for (int i = 0; i < cuadrados.size(); i++){
			cuadrados[i]->cambiarColor();
		}
	}
};