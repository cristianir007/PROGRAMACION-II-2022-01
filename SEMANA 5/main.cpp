#include "Usuario.h"
#include "Publicacion.h"

using namespace std;

void menu() {
	cout << "1. Registrar usuario" << endl;
	cout << "2. Registrar contacto" << endl;
	cout << "3. Registrar publicacion" << endl;
	cout << "4. Listar publicaciones" << endl;
	cout << "5. Calificar publicacion" << endl;
	cout << "6. Listar contactos" << endl;
}

int main() {
	srand(time(NULL));

	int op, c, pos;

	Publicacion* p = new Publicacion();
	Usuario* u = new Usuario();
	//Usuario* u2;
	Publicacion* p1;

	while (1){
		menu(); cout << "Ingrese la opcion: "; cin >> op;

		switch (op){
		case 1: 
			//u2 = new Usuario(); cout << "Se registro";
			p->agregarUsuario();
			break;
		case 2: 
			u->agregarContacto(); cout << "Se registro";
			p->agregarContacto();
			break;
		case 3:
			p1 = new Publicacion(); cout << "Se publico";
			break;
		case 4: 
			p->listarPublicaciones();
			break;
		case 5: 
			cout << "Ingrese la calificacion: "; cin >> c;
			cout << "Ingrese la posicion a calificar: "; cin >> pos;
			p->calificarPublicacion(c,pos);
			break;
		case 6: 
			u->listarContactos();
			break;
		}
		_getch();
		system("cls");
	}

	_getch();
	return 0;
}