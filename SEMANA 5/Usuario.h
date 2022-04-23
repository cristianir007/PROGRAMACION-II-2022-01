#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <vector>
#include "Contacto.h"

using namespace std;

string nombresU[3] = { "Antonella", "Isabel", "Pepe" };
string correosU[3] = { "antonella@gmail.com","isabel@gmail.com" ,"pepe@gmail.com" };

class Usuario{
private:
	string nombreU;
	string correoU;
	int celularU;
	int calificacion;
	vector<Contacto*> contactos;

public:
	Usuario(){
		nombreU = nombresU[rand() % 3];
		correoU = correosU[rand() % 3];
		celularU = rand() % 99999999 + 999000000;
		calificacion = 0;
	}
	~Usuario(){}

//--------------GET Y SET------------------------
	string getNombreU() { return nombreU; }
	string getCorreoU() { return correoU; }
	int    getCelularU() { return celularU; }
	int getCalificacion() { return calificacion; }

	void setNombreU(string nu) { nombreU = nu; }
	void setCorreoU(string cu) { correoU = cu; }
	void setCelularU(int celU) { celularU = celU; }
	void setCalificacion(int c) { calificacion = c; }

	void datoUsuario() {
		cout << "Nombre usuario: " << nombreU << endl;
		cout << "Correo usuario: " << correoU << endl;
		cout << "Celular usuario: " << celularU << endl;
		cout << "Calificacion a publicacion: " << calificacion << endl;
	}

//----------------------------------------------------------

	void agregarContacto() {
		Contacto* c = new Contacto();
		contactos.push_back(c);
	}

	void listarContactos() {
		datoUsuario();
		for (int i = 0; i < contactos.size(); i++){
			contactos[i]->datoContacto();
		}
	}

};