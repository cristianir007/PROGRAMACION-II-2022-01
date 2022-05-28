#pragma once
#include "Movimiento.h"

class Triangulo : public Movimiento{
public:
	Triangulo() : Movimiento(){
		ancho = 45;
		alto = 45;
		dx = rand() % 5 + 3;
		dy = rand() % 5 + 3;
	}
	~Triangulo(){}

	void dibujar(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::DarkOrange, 4);
		g->DrawLine(p, x, y, x + ancho, y + alto);
		g->DrawLine(p, x + ancho, y + alto, x, y + alto);
		g->DrawLine(p, x, y + alto, x, y);
	}
};