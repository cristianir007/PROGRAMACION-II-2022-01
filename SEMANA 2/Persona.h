#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

class Persona{
private:
	string nombre;
	int edad;
	int dni;
	char sexo;
	double peso;
	double altura;

public:
	Persona() {
		nombre = " ";
		edad = 0;
		dni = 0;
		sexo = 'H';
		peso = 0.0;
		altura = 0.0;
	}

	Persona(string nombre, int edad, char sexo) {
		this->nombre = nombre;
		this->edad = edad;
		this->sexo = sexo;
		generaDNI();
		peso = 0.0;
		altura = 0.0;
	}

	Persona(string nombre, int edad, char sexo, double peso, double altura) {
		this->nombre = nombre;
		this->edad = edad;
		this->sexo = sexo;
		generaDNI();
		this->peso = peso;
		this->altura = altura;
	}

	~Persona(){}

	//----FUNCIONES O METODOS----

	void generaDNI() {
		dni = rand() % 99999999 + 10000000;
	}

	int calcularIMC() {
		double pesoIdeal;

		pesoIdeal = peso / (altura*altura);

		if (pesoIdeal < 20) {
			return -1;
		}
		else {
			if (pesoIdeal >= 20 && pesoIdeal <= 25) {
				return 0;
			}
			else {
				return 1;
			}
		}
	}

	bool esMayordeEdad() {
		if (edad >= 18) {
			return true;
		}
		else {
			return false;
		}
	}

	void comprobarSexo(char sexo) {
		if (sexo != 'H' && sexo != 'M') {
			this->sexo = 'H';
			cout << "Las opciones para llenar el campo son 'H': Hombre; 'M': Mujer" << endl;
		}
		else{
			cout << "Se completo el sexo de manera correcta" << endl;
		}

	}

	void devolverInfo() {
		cout << "INFORMACION DE LAS PERSONA" << endl;
		cout << "Nombre de la persona es: " << nombre << endl;
		cout << "Edad de la persona es: " << edad << endl;
		cout << "El DNI de la persona es: " << dni << endl;
		cout << "El genero de la persona es: " << sexo << endl;
		cout << "El peso de la persona es: " << peso << endl;
		cout << "La altura de la persona es: " << altura << endl;
	}
};




