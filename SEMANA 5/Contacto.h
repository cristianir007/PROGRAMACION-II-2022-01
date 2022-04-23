#pragma once
#include "Usuario.h"

using namespace std;

string nombresC[3] = { "Maria", "Mariela", "Rodrigo" };
string correosC[3] = { "maria@gmail.com", "mariela@gmail.com", "rodrigo@gmail.com" };

class Contacto{
private:
	string nombreC;
	string correoC;
	int celularC;

public:
	Contacto(){
		nombreC = nombresC[rand() % 3];
		correoC = correosC[rand() % 3];
		celularC = rand() % 99999999 + 999000000;
	}
	~Contacto(){}

//-----------------GET Y SET----------------------
	string getNombreC() { return nombreC; }
	string getCorreoC() { return correoC; }
	int    getCelularC() { return celularC; }

	void setNombreC(string nc) { nombreC = nc; }
	void setCorreoC(string cc) { correoC = cc; }
	void setCelularC(int celC) { celularC = celC; }

	void datoContacto() {
		cout << "Nombre contacto: " << nombreC << endl;
		cout << "Correo contacto: " << correoC << endl;
		cout << "Celular contacto: " << celularC << endl;
	}
};