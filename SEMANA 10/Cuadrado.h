#pragma once
#include "Movimiento.h"

class Cuadrado : public Movimiento{

public:
	Cuadrado() : Movimiento(){
		ancho = 40;
		alto = 40;
		dx = rand() % 10 + 3;
		dy = rand() % 10 + 3;
	}
	~Cuadrado(){}

	void dibujar(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::Crimson, 4);
		g->DrawRectangle(p, x, y, ancho, alto);
	}
};