#pragma once
#include "Persona.h"
#include "Bus.h"
#include "Bicicleta.h"
#include "Carro.h"
#include <vector>

class Controlador{
private:
	Persona* persona;
	vector<Bus*> buses;
	vector<Bicicleta*> bicicletas;
	vector<Carro*> carros;

public:
	Controlador(){//VOY A INICIALIZAR PERSONAS Y TRANSPORTES
		persona = new Persona(40, 50);
		for (int i = 0; i < 2; i++){
			buses.push_back(new Bus());
			carros.push_back(new Carro());
			bicicletas.push_back(new Bicicleta());
		}
	}
	~Controlador(){}

	void borrarTodo() {
		persona->borrar();
		for (int i = 0; i < buses.size(); i++){
			buses[i]->borrar();
		}
		for (int i = 0; i < carros.size(); i++) {
			carros[i]->borrar();
		}
		for (int i = 0; i < bicicletas.size(); i++) {
			bicicletas[i]->borrar();
		}
	}

	void moverTodo() {
		for (int i = 0; i < buses.size(); i++) {
			buses[i]->moverTransporte();
		}
		for (int i = 0; i < carros.size(); i++) {
			carros[i]->moverTransporte();
		}
		for (int i = 0; i < bicicletas.size(); i++) {
			bicicletas[i]->moverTransporte();
		}
	}

	void dibujarTodo() {
		persona->dibujar();
		for (int i = 0; i < buses.size(); i++) {
			buses[i]->dibujar();
		}
		for (int i = 0; i < carros.size(); i++) {
			carros[i]->dibujar();
		}
		for (int i = 0; i < bicicletas.size(); i++) {
			bicicletas[i]->dibujar();
		}
	}

	bool colisionCarro() {
		for (int i = 0; i < carros.size(); i++){
			if (persona->getRectangle().IntersectsWith(carros[i]->getRectangle())) {
				return true;
			}
		}
	}

	bool colisionBus() {
		for (int i = 0; i < buses.size(); i++) {
			if (persona->getRectangle().IntersectsWith(buses[i]->getRectangle())) {
				return true;
			}
		}
	}

	void colisionBicicleta() {
		for (int i = 0; i < bicicletas.size(); i++) {
			if (persona->getRectangle().IntersectsWith(bicicletas[i]->getRectangle())) {
				persona->setX(40);
				persona->setY(50);
			}
		}
	}

	Persona* getPersona() { return persona; }

};