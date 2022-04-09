#include "arrEncuestado.h"
#include "Caracter.h"

using namespace std;

void menu() {
	cout << "1. Agregar encuestado" << endl;
	cout << "2. Eliminar encuestado" << endl;
	cout << "3. Eliminar en posicion" << endl;
	cout << "4. Editar DNI encuestado" << endl;
	cout << "5. Editar leche preferida encuestado" << endl;
	cout << "6. Listar encuestados" << endl;
	cout << "7. Reporte leche preferida 1" << endl;
	cout << "8. Reporte leche preferida 2" << endl;
	cout << "9. Reporte leche preferida 3" << endl;
	cout << "10. Reporte leche preferida 4" << endl;
	cout << "11. Reporte leche preferida 5" << endl;
	cout << "12. Salir" << endl;
}

int main() {
	/*srand(time(NULL));
	arrEncuestado* arr = new arrEncuestado();
	for (int i = 0; i < 3; i++){
		arr->agregarEncuesta();
	}

	int op, pos;
	int dni, preferencia;
	Encuestado* e;

	while (1){
		menu();
		cout << "Ingrese la opcion: "; cin >> op;
		switch (op){
		case 1: arr->agregarEncuesta(); cout << "Se agrego con exito" << endl; break;
		case 2: arr->eliminarEncuesta(); cout << "Se elimino con exito" << endl; break;
		case 3: 
			cout << "Ingrese la posicion a eliminar: "; cin >> pos;
			arr->eliminarEnPosicion(pos); break;
		case 4: 
			cout << "Ingrese el nuevo DNI: "; cin >> dni;
			cout << "Ingrese la posicion a editar: "; cin >> pos;
			arr->editarDNI(dni, pos);
			cout << "Se edito con exito" << endl; break;
		case 5:
			cout << "Ingrese el nueva leche preferida: "; cin >> preferencia;
			cout << "Ingrese la posicion a editar: "; cin >> pos;
			arr->editarPreferencia(preferencia, pos);
			cout << "Se edito con exito" << endl; break;
		case 6: arr->mostrarEncuestados(); break;
		case 7: arr->preferencia1(); break;
		case 8: arr->preferencia2(); break;
		case 9: exit(0);
		}
		_getch();
		system("cls");
	}*/

	Character* c1 = new Character(0);
	Character* c2 = new Character(1);
	Character* c3 = new Character(2);
	Character* c4 = new Character(3);

	while (1) {
		Console::CursorVisible = false;
		c1->erase();
		c1->move();
		c1->draw();

		c2->erase();
		c2->move();
		c2->draw();

		c3->erase();
		c3->move();
		c3->draw();

		c4->erase();
		c4->move();
		c4->draw();
		_sleep(100);
	}

	_getch();
	return 0;
}