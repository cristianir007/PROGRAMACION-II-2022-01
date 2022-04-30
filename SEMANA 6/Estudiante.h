#pragma once
#include "Persona.h"

string nivelesEstudios[2] = { "Graduado", "Universidad incompleta" };

class Estudiante : public Persona {
protected:
	int dni;
	string nivelEstudio;

public:
	Estudiante() : Persona (){
		dni = rand() % 99999999 + 700000000;
		nivelEstudio = nivelesEstudios[rand() % 2];
	}
	Estudiante(string nombreP, int edad, int dni, string nivelEstudio) 
		   : Persona (nombreP, edad){
		this->dni = dni;
		this->nivelEstudio = nivelEstudio;
	}
	~Estudiante(){}
//---------------GETs Y SETs----------------------
	int    getDni() { return dni; }
	string getNivelEstudio() { return nivelEstudio; }

	void setDni(int d) { dni = d; }
	void setNivelEstudio(string n) { nivelEstudio = n; }

//----------------DATO ESTUDIANTE-------------------
	void datoEstudiante() {
		datoPersona();
		cout << "Dni: " << dni << endl;
		cout << "Nivel de estudio: " << nivelEstudio << endl;
	}
};
