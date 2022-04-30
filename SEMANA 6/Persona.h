#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

string nombresP[3] = { "Pepe", "Alexa", "Thiago" };

class Persona{
protected:
	string nombreP;
	int edad;

public:
	Persona(){
		nombreP = nombresP[rand() % 3];
		edad = rand() % 23 + 17;
	}

	Persona(string nombreP, int edad) {
		this->nombreP = nombreP;
		this->edad = edad;
	}
	~Persona(){}

//--------------GETs Y SETs-----------------
	string getNombreP() { return nombreP; }
	int    getEdad() { return edad; }

	void setNombreP(string n) { nombreP = n; }
	void setEdad(int e) { edad = e; }

//-----------------DATO PERSONA-------------
	void datoPersona() {
		cout << "Nombre: " << nombreP << endl;
		cout << "Edad: " << edad << endl;
	}
};