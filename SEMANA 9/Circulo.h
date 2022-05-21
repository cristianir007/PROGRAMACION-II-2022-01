#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System::Drawing;

class Circulo{
private:
	int x, y;
	double radio;

public:
	Circulo(int x, int y, double radio){
		this->x = x;
		this->y = y;
		this->radio = radio;
	}
	~Circulo(){}

	void dibujar(Graphics^ g, Color c) {
		SolidBrush^ s = gcnew SolidBrush(c); //BROCHA DE COLOR PARA PINTAR EL ELIPSE
		g->FillEllipse(s, x, y, radio * 2, radio * 2);
	}

	double getArea() {
		return 3.14 * pow(radio, 2);
	}
};