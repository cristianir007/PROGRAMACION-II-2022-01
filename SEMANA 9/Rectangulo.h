#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System::Drawing;

class Rectangulo{
private:
	int x, y;
	double base, altura;

public:
	Rectangulo(int x, int y, double base, double altura){
		this->x = x;
		this->y = y;
		this->base = base;
		this->altura = altura;
	}
	~Rectangulo(){}

	void dibujar(Graphics^ g, Color c) {
		SolidBrush^ s = gcnew SolidBrush(c);
		g->FillRectangle(s, x, y, base, altura);
	}

	double getArea() {
		return base * altura;
	}
};