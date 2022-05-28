#pragma once
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include <vector>

class Controlador{
private:
	vector<Triangulo*> triangulos;
	vector<Cuadrado*> cuadrados;
	vector<Circulo*> circulos;
	int cont;
public:
	Controlador(){
		cont = 0;
	}
	~Controlador(){}

	int getCont() { return cont; }

	void agregarCir() {
		Circulo* c = new Circulo();
		circulos.push_back(c);
	}
	void agregarCua() {
		Cuadrado* cuadrado = new Cuadrado();
		cuadrados.push_back(cuadrado);
	}
	void agregarTri() {
		Triangulo* triangulo = new Triangulo();
		triangulos.push_back(triangulo);
	}

	void dibujarTodo(Graphics^ g) {
		for (int i = 0; i < circulos.size(); i++){
			circulos[i]->dibujar(g);
		}
		for (int i = 0; i < cuadrados.size(); i++) {
			cuadrados[i]->dibujar(g);
		}
		for (int i = 0; i < triangulos.size(); i++) {
			triangulos[i]->dibujar(g);
		}
	}

	void moverTodo(Graphics^ g) {
		for (int i = 0; i < circulos.size(); i++) {
			circulos[i]->mover(g);
		}
		for (int i = 0; i < cuadrados.size(); i++) {
			cuadrados[i]->mover(g);
		}
		for (int i = 0; i < triangulos.size(); i++) {
			triangulos[i]->mover(g);
		}
	}

	void colision() {
		//COLISION ENTRE CIRCULO Y TRIANGULO
		for (int i = 0; i < circulos.size(); i++){
			for (int j = 0; j < triangulos.size(); j++){
				if (circulos[i]->getRectangle().IntersectsWith(triangulos[j]->getRectangle())) {
					circulos.erase(circulos.begin() + i);
					triangulos.erase(triangulos.begin() + j);
					cont++;
				}
			}
		}
	}
};