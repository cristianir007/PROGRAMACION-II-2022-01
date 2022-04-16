#pragma once
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
using namespace System;

class Cuadrado{
private:
	int x, y;
	int dx, dy;
	int rgb;

public:
	Cuadrado() {
		x = 2;
		y = 2;
		dx = 1;
		dy = 1;
		rgb = rand() % 4;
	}
	~Cuadrado(){}

	void borrar() {
		Console::SetCursorPosition(x, y); cout << " ";
	}

	void mover() {
		if (x < 80 && y == 2) x += dx;
		if (y < 30 && x == 80) y += dy;
		if (x > 2 && y == 30) x -= dx;
		if (y > 2 && x == 2) y -= dy;
	}

	void dibujar() {
		switch (rgb){
		case 0: 
			Console::ForegroundColor = ConsoleColor::Blue;
			break;
		case 1: 
			Console::ForegroundColor = ConsoleColor::Red;
			break;
		case 2: 
			Console::ForegroundColor = ConsoleColor::Yellow;
			break;
		case 3: 
			Console::ForegroundColor = ConsoleColor::White;
			break;
		}
		Console::SetCursorPosition(x, y); cout << char(219);
	}

	void cambiarColor() {
		rgb = rand() % 4;
	}

};