#pragma once
#include "Movimiento.h"

class Circulo : public Movimiento{

public:
	Circulo() : Movimiento(){
		ancho = 30;
		alto = 30;
		dx = rand() % 4 + 3;
		dy = rand() % 4 + 3;
	}
	~Circulo(){}

	void dibujar(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::Red, 4);
		g->DrawEllipse(p, x, y, ancho, alto);
	}
};