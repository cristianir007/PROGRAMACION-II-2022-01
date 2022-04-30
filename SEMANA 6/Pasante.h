#pragma once
#include "Empleado.h"
#include "Universitario.h"
#include <vector>

string nombresProyectos[3] = { "Proyecto Plin", "Proyecto Yape", "Proyecto Uber" };

class Pasante : public Empleado, public Universitario{
private:
	string nombreProyecto;
	int totalHora;
	int horaCompletada;
	vector<Empleado*> empleados;
	vector<Universitario*> universitarios;

public:
	Pasante() : Empleado(), Universitario(){
		nombreProyecto = nombresProyectos[rand() % 3];
		totalHora = rand() % 80 + 20;
		horaCompletada = rand() % 80 + 20;
	}
	Pasante(string nombreP, int edad, int sueldo, string puestoTrabajo,
		    int dni, string nivelEstudio, string nombreUniversidad, string carrera, int materiaInscrita, int ponderado,
		    string nombreProyecto, int totalHora, int horaCompletada)
		  : Empleado(nombreP, edad, sueldo, puestoTrabajo), 
		    Universitario(nombreP, edad, dni, nivelEstudio, nombreUniversidad, carrera, materiaInscrita, ponderado){
		this->nombreProyecto = nombreProyecto;
		this->totalHora = totalHora;
		this->horaCompletada = horaCompletada;

	}
	Pasante(string nombreP, int edad, int sueldo, string puestoTrabajo, 
		    string nombreProyecto, int totalHora, int horaCompletada)
		  : Empleado(nombreP, edad, sueldo, puestoTrabajo){
		this->nombreProyecto = nombreProyecto;
		this->totalHora = totalHora;
		this->horaCompletada = horaCompletada;
	}
	Pasante(string nombreP, int edad, int dni, string nivelEstudio, string nombreUniversidad, string carrera, int materiaInscrita, int ponderado,
		    string nombreProyecto, int totalHora, int horaCompletada)
		: Universitario(nombreP, edad, dni, nivelEstudio, nombreUniversidad, carrera, materiaInscrita, ponderado){
		this->nombreProyecto = nombreProyecto;
		this->totalHora = totalHora;
		this->horaCompletada = horaCompletada;
	}
	~Pasante(){}

//-------------GETs Y SETs---------------------------
	string getNombreProyecto() { return nombreProyecto; }
	int    getTotalHora() { return totalHora; }
	int    getHoraCompletada() { return horaCompletada; }

	void setNombreProyecto(string n) { nombreProyecto = n; }
	void setTotalHora(int t) { totalHora = t; }
	void setHoraCompletada(int h) { horaCompletada = h; }

//--------------------DATO PASANTE--------------------------
	void datoPasante() {
		cout << "Nombre proyecto: " << nombreProyecto << endl;
		cout << "Total horas: " << totalHora << endl;
		cout << "Horas completadas: " << horaCompletada << endl;
	}

	void datoPasanteEmpleado() {
		datoEmpleado();
		datoPasante();
	}

	void datoPasanteUniversitario() {
		datoUniversitario();
		datoPasante();
	}
//-------------------------REPORTES----------------------------
	void agregarEmpleado(Empleado* e) {
		empleados.push_back(e);
	}

	void agregarUniversitario() {
		Universitario* u = new Universitario();
		universitarios.push_back(u);
	}

	void listarEmpleado() {
		for (int i = 0; i < empleados.size(); i++){
			datoPasante();
			empleados[i]->datoEmpleado();
		}
	}

	void listarUniversitario() {
		for (int i = 0; i < universitarios.size(); i++) {
			datoPasante();
			universitarios[i]->datoUniversitario();
		}
	}

	void listarPonderado() {
		for (int i = 0; i < universitarios.size(); i++){
			cout << "Universitario " << i << endl;
			cout << "El ponderado es: " << universitarios[i]->getPonderado() << endl;
		}
	}

	void listarPasanteUniversidad(string universidad) {
		for (int i = 0; i < universitarios.size(); i++){
			if (universitarios[i]->getNombreUniversidad() == universidad) {
				universitarios[i]->datoUniversitario();
			}
		}
	}
};

