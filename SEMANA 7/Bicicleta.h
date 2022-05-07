#pragma once
#include "Movimiento.h"

class Bicicleta : public Movimiento{
public:
	Bicicleta() : Movimiento(){
		dx = 1;
		ancho = 7;
		alto = 2;
	}
	~Bicicleta(){}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "      ";
		Console::SetCursorPosition(x, y + 1); cout << "      ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << " .._\ ";
		Console::SetCursorPosition(x, y + 1); cout << "(o)(o)";
	}

};