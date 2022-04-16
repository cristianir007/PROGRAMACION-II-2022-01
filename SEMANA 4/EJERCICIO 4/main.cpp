#include "arrCuadrado.h"
 
int main() {
	Console::CursorVisible = false;
	srand(time(NULL));

	arrCuadrado* arr = new arrCuadrado();

	char key; //ALMANCENAR UNA TECLA PRESIONADA

	while (1){
		
		
		if (_kbhit()) { //PARA SABER SI SE PRESIONA UNA TECLA
			key = _getch(); //ASIGNAR LA TECLA PRESIONADA AL KEY
			key = toupper(key);

			switch (key){
			case 'A': arr->agregarCuadrado(new Cuadrado()); break;
			case 'E': arr->eliminarCuadrado(); break;
			case 'C': arr->cambiarColores(); break;
			}
		}

		arr->borrar();
		arr->mover();
		arr->dibujar();
		_sleep(70);
	}

	_getch();
	return 0;
}