#pragma once
#include "Reserva.h"

class ArrReserva{
private:
	int n;
	Reserva** arr;
	Reserva* r;

public:
	ArrReserva(){
		n = 0;
		arr = new Reserva * [n];
		r = new Reserva();
	}
	~ArrReserva(){}

	void agregarReserva(Reserva* r) {
		Reserva** aux;
		aux = new Reserva * [n + 1];
		for (int i = 0; i < n; i++){
			aux[i] = arr[i];
		}

		aux[n] = r;
		n++;
		arr = aux;
	}

	void eliminarReserva(int pos) {
		Reserva** aux;
		aux = new Reserva * [n - 1];

		for (int i = 0; i < pos; i++){
			aux[i] = arr[i];
		}
		for (int i = pos; i < n; i++){
			aux[i] = arr[i + 1];
		}

		n--;
		arr = aux;
	}

	void ordenar() {
		Reserva* aux;

		for (int i = 0; i < n-1; i++){
			for (int j = 0; j < n-1-i; j++){
				if (arr[j]->getCostoReserva() < arr[j + 1]->getCostoReserva()) {
					aux = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = aux;
				}
			}
		}
	}

	void insertarEnPosicion(Reserva* r, int pos) {
		Reserva** aux;
		aux = new Reserva * [n + 1];
		for (int i = 0; i < pos; i++){
			aux[i] = arr[i];
		}
		aux[pos] = r;

		for (int i = pos; i < n; i++){
			aux[i + 1] = arr[i];
		}
		n++;
		arr = aux;
	}

	void listarReserva() {
		for (int i = 0; i < n; i++){
			arr[i]->datoReserva();
		}
	}

	void eliminarPorCodigo(int cod) {
		for (int i = 0; i < n; i++){
			if (arr[i]->getCodigoReserva() == cod) {
				eliminarReserva(i);
			}
		}
	}

};