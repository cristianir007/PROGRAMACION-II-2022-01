#pragma once
#include "Rectangulo.h"
#include "Circulo.h"
#include <vector>

class Controlador{
private:
	vector<Circulo*> circulos;
	vector<Rectangulo*> rectangulos;

public:
	Controlador(){}
	~Controlador(){}

	void agregarCirculo(Circulo* c) {
		circulos.push_back(c);
	}

	void agregarRectangulo(Rectangulo* r) {
		rectangulos.push_back(r);
	}

	void dibujarTodo(Graphics^ g, Color c) {
		for (int i = 0; i < circulos.size(); i++){
			circulos[i]->dibujar(g, c);
		}
		for (int i = 0; i < rectangulos.size(); i++){
			rectangulos[i]->dibujar(g, c);
		}
	}
};