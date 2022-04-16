#include "ArrReserva.h"

void menu() {
	cout << "1. Agregar reserva" << endl;
	cout << "2. Eliminar reserva por codigo" << endl;
	cout << "3. Ordenar reserva" << endl;
	cout << "4. Insertar reserva" << endl;
	cout << "5. Listar reserva" << endl;
}

int main() {
	srand(time(NULL));
	int op, pos;
	int codReserva, cosReserva;

	ArrReserva* arr = new ArrReserva();
	Reserva* r;

	while (1){
		menu(); cout << "Ingrese la opcion: "; cin >> op;

		switch (op){
		case 1: 
			cout << "Ingrese el codigo de reserva: "; cin >> codReserva;
			cout << "Ingrese el costo de reserva: "; cin >> cosReserva;
			r = new Reserva(codReserva, cosReserva);
			arr->agregarReserva(r); cout << "Se agrego";
			break;
		case 2: 
			cout << "Ingrese el codigo a eliminar: "; cin >> codReserva;
			arr->eliminarPorCodigo(codReserva);
			break;
		case 3: 
			arr->ordenar(); cout << "Se ordeno";
			break;
		case 4: 
			cout << "Ingrese la posicion: "; cin >> pos;
			arr->insertarEnPosicion(new Reserva(), pos);
			break;
		case 5: 
			arr->listarReserva();
			break;
		}
		_getch();
		system("cls");
	}


	_getch();
	return 0;
}