#include "Controlador.h"

int main() {
	srand(time(NULL));
	Console::CursorVisible = false;
	char key;
	Controlador* controlador = new Controlador();

	while (1){
		controlador->borrarTodo();
		if (controlador->colisionBus() == true) break;
		if (controlador->colisionCarro()) break;
		controlador->colisionBicicleta();

		if (_kbhit()) {
			key = _getch();
			key = toupper(key);
			controlador->getPersona()->moverPersona(key);
		}
		controlador->moverTodo();
		controlador->dibujarTodo();

		_sleep(100);
	}

	cout << "GAME OVER";

	_getch();
	return 0;
}