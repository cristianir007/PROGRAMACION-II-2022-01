#pragma once
#include "Movimiento.h"

class Carro : public Movimiento{

public:
	Carro() : Movimiento(){
		dx = rand() % 2 + 2;
		ancho = 8; //RECORDAR CAMBIAR CUANDO SE DIBUJA
		alto = 3;
	}
	~Carro(){}

	void borrar() {
		Console::SetCursorPosition(x, y);   cout << "       ";
		Console::SetCursorPosition(x, y+1); cout << "       ";
		Console::SetCursorPosition(x, y+2); cout << "       ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << " __|~\_";
		Console::SetCursorPosition(x, y + 1); cout << "[__|_|-";
		Console::SetCursorPosition(x, y + 2); cout << "(_) (_)";
	}
};