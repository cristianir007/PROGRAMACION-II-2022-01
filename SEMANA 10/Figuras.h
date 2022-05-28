#pragma once
#include "Controlador.h"
#include "Puntos.h"

namespace Ejercicio1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Figuras
	/// </summary>
	public ref class Figuras : public System::Windows::Forms::Form
	{
	public:
		Figuras(void)
		{
			srand(time(NULL));
			InitializeComponent();
			
			frmPuntos = gcnew Puntos();
			frmPuntos->Show();
			
			controlador = new Controlador();

			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Figuras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		Controlador* controlador;

		//BUFFER
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
		Puntos^ frmPuntos;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(758, 468);
			this->panel1->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Figuras::timer1_Tick);
			// 
			// Figuras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 493);
			this->Controls->Add(this->panel1);
			this->Name = L"Figuras";
			this->Text = L"Figuras";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Figuras::Figuras_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::White);

		controlador->moverTodo(buffer->Graphics);
		controlador->colision();
		controlador->dibujarTodo(buffer->Graphics);

		//if (controlador->getCont() == 2) { //DESCOMENTAR SI DESEAN LLEGAR A UN LIMITE DE PUNTOS
			//timer1->Enabled = false;
			frmPuntos->colocarPuntos(controlador->getCont()); // SE ACTUALIZA CADA COLISION
			//frmPuntos->Show();
		//}

		buffer->Render(g);
	}
	private: System::Void Figuras_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode){
		case Keys::C:
			controlador->agregarCir();
			break;
		case Keys::Q:
			controlador->agregarCua();
			break;
		case Keys::T:
			controlador->agregarTri();
			break;
		}
	}
	};
}
