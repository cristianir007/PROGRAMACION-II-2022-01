#pragma once
#include <iostream>
#include  <conio.h>
#include <ctime>

using namespace std;
using namespace System;
using namespace System::Drawing;

class Movimiento{
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;

public:
	Movimiento(){//CONSTRUCTOR POSICIONES PARA TRANSPORTES
		x = rand() % 60 + 14;
		y = rand() % 50 + 6;
	}
	Movimiento(int x, int y){//POSICION ESPECIFICA PARA PERSONA
		this->x = x;
		this->y = y;
	}
	~Movimiento(){}

	void moverTransporte() {
		if (x <= 3 || x + ancho >= 100) dx *= -1;
		x += dx;
	}

	Rectangle getRectangle() {
		return Rectangle(x, y, ancho, alto);
	}

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
};