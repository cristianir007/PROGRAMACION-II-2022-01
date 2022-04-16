#pragma once
//-------EJERCICIO 3-----------
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

class Reserva{
private:
	int codigoReserva;
	int costoReserva;

public:
	Reserva(){
		codigoReserva = rand() % 9999 + 1000;
		costoReserva = rand() % 500 + 200;
	}

	Reserva(int codigoReserva, int costoReserva) {
		this->codigoReserva = codigoReserva;
		this->costoReserva = costoReserva;
	}

	~Reserva(){}

	int getCodigoReserva() { return codigoReserva; }
	int getCostoReserva() { return costoReserva; }

	void setCodigoReserva(int codR) { codigoReserva = codR; }
	void setCostoReserva(int cosR) { costoReserva = cosR; }

	void datoReserva() {
		cout << "Codigo de reserva: " << codigoReserva << endl;
		cout << "Costo de reserva: " << costoReserva << endl;
	}
};