#pragma once
#include "Usuario.h"

using namespace std;

string mensajes[3] = { "Buenas tardes", "Hola", "Como estas?" };

class Publicacion{
private:
	string mensaje;
	bool imagen; // 1: TIENE IMAGEN; 0: NO TIENE IMAGEN
	bool video; // 1: TIENE VIDEO; 0: NO TIENE VIDEO
	vector<Usuario*> usuarios;
	vector<Contacto*> contactos;

public:
	Publicacion(){
		mensaje = mensajes[rand() % 3];
		imagen = rand() % 2;
		video = rand() % 2;
	}
	~Publicacion(){}

//----------------GET Y SET---------------------------
	string getMensaje() { return mensaje; }
	bool   getImagen() { return imagen; }
	bool   getVideo() { return video; }

	void setMensaje(string m) {mensaje = m; }
	void setImagen(bool i) { imagen = i; }
	void setVideo(bool v) { video = v; }

	void datoPublicacion() {
		cout << "Mensaje: " << mensaje << endl;
		cout << "Video: " << video << endl;
		cout << "Imagen: " << imagen << endl;
	}
//------------------------------------------------------

	void agregarUsuario() {
		Usuario* u = new Usuario();
		usuarios.push_back(u);
	}

	void agregarContacto() {
		Contacto* c = new Contacto();
		contactos.push_back(c);
	}

	void listarPublicaciones() {
		for (int i = 0; i < usuarios.size(); i++) {
			usuarios[i]->datoUsuario();
			datoPublicacion();
		}
	}

	void calificarPublicacion(int c, int pos) {
		for (int i = 0; i < usuarios.size(); i++){
			if (pos == i) {
				usuarios[i]->setCalificacion(c);
			}
		}
	}

};