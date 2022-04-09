#pragma once
#include "Encuestado.h"


class arrEncuestado{
private:
	int n;
	Encuestado** arr;
	int index;

public:
	arrEncuestado(){
		n = 0;
		arr = new Encuestado * [n];
		index = 0;
	}
	~arrEncuestado(){}

//--------Create/Read/Update/Delete-------------
	void agregarEncuesta() {
		Encuestado* e = new Encuestado();
		Encuestado** aux = new Encuestado * [n + 1];

		for (int i = 0; i < n; i++){
			aux[i] = arr[i];
		}

		aux[n] = e;
		n++;
		arr = aux;
	}

	void eliminarEncuesta() {
		Encuestado** aux = new Encuestado * [n - 1];
		for (int i = 0; i < n; i++){
			aux[i] = arr[i];
		}
		n--;
		arr = aux;
	}

	void eliminarEnPosicion(int pos) {
		Encuestado** aux;
		aux = new Encuestado * [n - 1];

		for (int i = 0; i < pos; i++){
			aux[i] = arr[i];
		}
		for (int j = pos; j < n; j++){
			aux[j] = arr[j + 1];
		}
		n--;
		arr = aux;
	}

	void editarDNI(int dni, int pos) {
		arr[pos]->setDNI(dni);
	}
	void editarPreferencia(int preferencia, int pos) {
		arr[pos]->setLechePreferida(preferencia);
	}

	void mostrarEncuestados() {
		for (int i = 0; i < n; i++){
			arr[i]->mostrarDatos();
		}
	}

//--------REPORTES----------------
	void preferencia1() {
		for (int i = 0; i < n; i++){
			if (arr[i]->getLechePreferida() == 1) {
				arr[i]->mostrarDatos();
			}
		}
	}
	void preferencia2() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getLechePreferida() == 2) {
				arr[i]->mostrarDatos();
			}
		}
	}
	void preferencia3() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getLechePreferida() == 3) {
				arr[i]->mostrarDatos();
			}
		}
	}
	void preferencia4() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getLechePreferida() == 4) {
				arr[i]->mostrarDatos();
			}
		}
	}
	void preferencia5() {
		for (int i = 0; i < n; i++) {
			if (arr[i]->getLechePreferida() == 5) {
				arr[i]->mostrarDatos();
			}
		}
	}

};