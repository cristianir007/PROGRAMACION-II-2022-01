#pragma once
#include "Movimiento.h"

class Bus : public Movimiento{
public:
	Bus() : Movimiento(){
		dx = rand() % 2 + 3;
		ancho = 14;
		alto = 3;
	}
	~Bus(){}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "             ";
		Console::SetCursorPosition(x, y + 1); cout << "             ";
		Console::SetCursorPosition(x, y + 2); cout << "             ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y);     cout << " _/_|[][][][]";
		Console::SetCursorPosition(x, y + 1); cout << "(           |";
		Console::SetCursorPosition(x, y + 2); cout << "=-OO     OO-=";
	}
};