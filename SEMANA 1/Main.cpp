#include <iostream>
#include <conio.h>
#include <ctime>
//EJERCICIO 2 HOJA 1
using namespace std;

void generarNotas(int* arregloNotas, int n) {
	for (int i = 0; i < n; i++){
		arregloNotas[i] = rand() % 21;
	}
}

void listarNotas(int* arregloNotas, int n) {
	for (int i = 0; i < n; i++){
		cout << arregloNotas[i] << " ";
	}
	cout << endl;
}

void mayorNota(int* arregloNotas, int n) {
	int mayor = -1;

	for (int i = 0; i < n; i++){
		if (mayor < arregloNotas[i]) {
			mayor = arregloNotas[i];
		}
	}

	cout << "La mayor nota es: " << mayor << endl;
}

void menorNota(int* arregloNotas, int n) {
	int menor = 21;

	for (int i = 0; i < n; i++){
		if (menor > arregloNotas[i]) {
			menor = arregloNotas[i];
		}
	}

	cout << "La menor nota es: " << menor << endl;
}

void mostrarNotaPromedio(int* arregloNotas, int n) {
	int suma = 0;
	for (int i = 0; i < n; i++){
		suma += arregloNotas[i];
	}

	cout << "El promedio de las notas es: " << double(suma) / n << endl;
}

void porcentajeAprobadosYDesaprobados(int* arregloNotas, int n) {
	int contadorAprobados = 0;
	int contadorDesaprobados = 0;

	double porcentajeAprobados = 0.0;
	double porcentajeDesaprobados = 0.0;

	for (int i = 0; i < n; i++){
		if (arregloNotas[i] >= 13) {
			contadorAprobados++;
		}
		else {
			contadorDesaprobados++;
		}
	}

	porcentajeAprobados = (double(contadorAprobados) / n) * 100;
	porcentajeDesaprobados = (double(contadorDesaprobados) / n) * 100;

	cout << "El porcentaje de aprobados es: " << porcentajeAprobados << endl;
	cout << "El porcentaje de desaprobados es: " << porcentajeDesaprobados << endl;
}

void ordenarNotas(int* arregloNotas, int n) { //ARREGLO BUBBLE SORT
	int aux;

	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arregloNotas[j] > arregloNotas[j + 1]) { //DESCENDENTE-> "<" ; ASCENDENTE-> ">"
				aux = arregloNotas[j];
				arregloNotas[j] = arregloNotas[j + 1];
				arregloNotas[j + 1] = aux;
			}
		}
	}

}

void menu() {
	cout << "1.- Listar notas" << endl;
	cout << "2.- Mayor nota" << endl;
	cout << "3.- Menor nota" << endl;
	cout << "4.- Mostrar nota promedio" << endl;
	cout << "5.- Mostrar porcentaje de aprobados y desaprobados" << endl;
	cout << "6.- Ordenar de manera ascendente las notas" << endl;
	cout << "7.- Salir" << endl;
}

int main() {
	srand(time(NULL)); //CADA QUE COMPILAMOS EL PROYECTO, SE GENERAN NUEVOS NUMEROS ALEATORIOS

	int n, opcion;
	int* arregloNotas = new  int[n];

	cout << "Cantidad de alumnos: ";
	cin >> n;

	generarNotas(arregloNotas, n);

	while (1){
		menu();
		cout << "Ingrese la opcion deseada: ";
		cin >> opcion;

		switch (opcion){
		case 1: listarNotas(arregloNotas, n); break;
		case 2: mayorNota(arregloNotas, n); break;
		case 3: menorNota(arregloNotas, n); break;
		case 4: mostrarNotaPromedio(arregloNotas, n); break;
		case 5: porcentajeAprobadosYDesaprobados(arregloNotas, n); break;
		case 6: ordenarNotas(arregloNotas, n); break;
		case 7: exit(0); break;
		}

		//_getch();
		//system("cls");
	}


	_getch();
	return 0;
}


