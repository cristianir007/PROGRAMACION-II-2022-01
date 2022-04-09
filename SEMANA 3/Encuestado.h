#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

//string nombrePlatos[2] = { "Tacu tacu", "arepas" };

class Encuestado{
private:
	int dni;
	int lechePreferida;
	//string plato;

public:
	Encuestado() {
		dni = rand()% 99999999 + 900000000;
		lechePreferida = rand() % 5 + 1;
		//plato = nombrePlatos[rand() % 2];
	}

	Encuestado(int dni, int lechePreferencia) {
		this->dni = dni;
		lechePreferida = lechePreferencia;
	}
	~Encuestado(){}

//----------GET Y SET-----------------------
	int getDNI() { return dni; }
	int getLechePreferida() { return lechePreferida; }

	void setDNI(int d) { dni = d; }
	void setLechePreferida(int lp) { lechePreferida = lp; }

//-----MOSTRAR DATOS-----------
	void mostrarDatos() {
		cout << "DNI del encuestado: " << dni << endl;
		cout << "Eleccion de leche preferida: " << lechePreferida << endl;
	}
};