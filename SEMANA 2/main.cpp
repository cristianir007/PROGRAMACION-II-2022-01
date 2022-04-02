#include "Persona.h"

using namespace std;

int main() {
	srand(time(NULL));
	Persona* persona;
	Persona* persona2;

	persona = new Persona("Jesus", 23, 'H', 85.5, 1.83);
	persona2 = new Persona("Guillermo", 23, 'H');

	cout << "El resultado del IMC es: " << persona->calcularIMC() << endl;
	cout << "La persona es mayor de edad?: " << persona->esMayordeEdad() << endl;
	persona->comprobarSexo('H');
	persona->devolverInfo();

	persona2->devolverInfo();

	_getch();
	return 0;
}