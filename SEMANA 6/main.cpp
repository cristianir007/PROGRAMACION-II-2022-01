#include "Pasante.h"

void menu() {
	cout << "1. Agregar empleado" << endl;
	cout << "2. Agregar universitario" << endl;
	cout << "3. Agregar ambos" << endl;
	cout << "4. Listar empleado" << endl;
	cout << "5. Listar universitario" << endl;
	cout << "6. Listar ponderado" << endl;
	cout << "7. Listar por universidad" << endl;
}

int main() {
	srand(time(NULL));
	int op;
	string nombreP;
	int edad;
	int sueldo;
	string puestoTrabajo;
	string nombreProyecto;
	int totalHora;
	int horaCompletada;
	string universidad;

	Pasante* p = new Pasante(); //AGREGAR PASANTE MANUAL Y UNIVERSITARIO
	Pasante* p2; // AGREGAR AMBOS DE MANERA RANDOM

	while (1){
		menu(); cout << "Ingrese opcion: "; cin >> op;
		switch (op){
		case 1:
			cout << "Ingrese nombre: "; cin >> nombreP;
			cout << "Ingrese edad: "; cin >> edad;
			cout << "Ingrese sueldo: "; cin >> sueldo;
			cout << "Ingrese puesto de trabajo: "; cin >> puestoTrabajo;
			cout << "Ingrese nombre del proyecto: "; cin >> nombreProyecto;
			cout << "Ingrese total de horas: "; cin >> totalHora;
			cout << "Ingrese horas completadas: "; cin >> horaCompletada;
			p = new Pasante(nombreP, edad, sueldo, puestoTrabajo, nombreProyecto, totalHora, horaCompletada);
			p->agregarEmpleado(p);
			break;
		case 2:
			p->agregarUniversitario();
			break;
		case 3: 
			p2 = new Pasante();
			cout << "PASANTE EMPLEADO"      << endl;
			p2->datoPasanteEmpleado();
			cout << "PASANTE UNIVERSITARIO" << endl;
			p2->datoPasanteUniversitario();
			break;
		case 4: 
			p->listarEmpleado();
			break;
		case 5: 
			p->listarUniversitario();
			break;
		case 6: 
			p->listarPonderado();
			break;
		case 7: 
			cout << "INGRESE LA UNIVERSIDAD (UPC, UP, ESAN): "; cin >> universidad;
			p->listarPasanteUniversidad(universidad);
			break;
		}
		_getch();
		system("cls");
	}

	_getch();
	return 0;
}