#pragma once
#include "Persona.h"

string puestosTrabajos[3] = { "Ingeniero", "Aquitecto", "Doctor" };

class Empleado : public Persona{
protected:
	int sueldo;
	string puestoTrabajo;

public:
	Empleado() : Persona(){
		sueldo = rand() % 2000 + 1500;
		puestoTrabajo = puestosTrabajos[rand() % 3];
	}

	Empleado(string nombreP, int edad, int sueldo, string puestoTrabajo) 
		  : Persona(nombreP, edad){
		this->sueldo = sueldo;
		this->puestoTrabajo = puestoTrabajo;
	}
	~Empleado(){}

//--------------GETs Y SETs---------------------
	int    getSueldo() { return sueldo; }
	string getPuestoTrabajo() { return puestoTrabajo; }

	void setSueldo(int s) { sueldo = s; }
	void setPuestoTrabajo(string p) { puestoTrabajo = p; }

//------------------DATO EMPLEADO---------------
	void datoEmpleado() {
		datoPersona();
		cout << "Sueldo: S/." << sueldo << endl;
		cout << "Puesto de trabajo: " << puestoTrabajo << endl;
	}

};