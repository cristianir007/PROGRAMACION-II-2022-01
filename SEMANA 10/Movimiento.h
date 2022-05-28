#pragma once
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
using namespace System::Drawing;

class Movimiento{
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;

public:
	Movimiento(){
		x = rand() % 400 + 10;
		y = rand() % 400 + 10;
	}
	~Movimiento(){}

	virtual void dibujar(Graphics^ g){}

	void mover(Graphics^ g) {
		if (x < 2 || x + ancho > g->VisibleClipBounds.Width) dx *= -1;
		if (y < 2 || y + alto > g->VisibleClipBounds.Height) dy *= -1;
		x += dx;
		y += dy;
	}

	Rectangle getRectangle() {
		return Rectangle(x, y, ancho, alto);
	}
};