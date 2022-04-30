#pragma once
#include "Estudiante.h"

string nombresUniversidades[3] = { "UPC", "UP", "ESAN" };
string carreras[3] = { "Sistemas de informacion", "Software", "Ciencias de la computacion" };

class Universitario : public Estudiante{
protected:
	string nombreUniversidad;
	string carrera;
	int materiaInscrita;
	int ponderado;

public:
	Universitario() : Estudiante(){
		nombreUniversidad = nombresUniversidades[rand() % 3];
		carrera = carreras[rand() % 3];
		materiaInscrita = rand() % 5 + 3;
		ponderado = rand() % 12 + 8;
	}

	Universitario(string nombreP, int edad, int dni, string nivelEstudio, string nombreUniversidad, string carrera, int materiaInscrita, int ponderado) 
		    : Estudiante(nombreP, edad, dni, nivelEstudio){
		this->nombreUniversidad = nombreUniversidad;
		this->carrera = carrera;
		this->materiaInscrita = materiaInscrita;
		this->ponderado = ponderado;
	}
	~Universitario(){}

//----------------GETs Y SETs------------------------
	string getNombreUniversidad() { return nombreUniversidad; }
	string getCarrera() { return carrera; }
	int    getMateriaInscrita() { return materiaInscrita; }
	int    getPonderado() { return ponderado; }

	void setNombreUniversidad(string n) { nombreUniversidad = n; }
	void setCarrera(string c) { carrera = c; }
	void setMateriaInscrita(int m) { materiaInscrita = m; }
	void setPonderado(int p) { ponderado = p; }

//----------------DATO UNIVERSITARIO------------------
	void datoUniversitario() {
		datoEstudiante();
		cout << "Nombre de la universidad: " << nombreUniversidad << endl;
		cout << "Carrera: " << carrera << endl;
		cout << "Materias inscritas: " << materiaInscrita << endl;
		cout << "Ponderado: " << ponderado << endl;
	}
};