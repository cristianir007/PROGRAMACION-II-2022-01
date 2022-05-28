#pragma once
#include "Controlador.h"

namespace Ejercicio1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Puntos
	/// </summary>
	public ref class Puntos : public System::Windows::Forms::Form
	{
	public:
		Puntos(void)
		{
			InitializeComponent();
			controlador = new Controlador();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Puntos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblPuntos;
	protected:

	private:
		Controlador* controlador;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblPuntos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(104, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PUNTOS";
			// 
			// lblPuntos
			// 
			this->lblPuntos->AutoSize = true;
			this->lblPuntos->Location = System::Drawing::Point(66, 95);
			this->lblPuntos->Name = L"lblPuntos";
			this->lblPuntos->Size = System::Drawing::Size(133, 13);
			this->lblPuntos->TabIndex = 1;
			this->lblPuntos->Text = L"SE MOSTRARA PUNTOS";
			// 
			// Puntos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblPuntos);
			this->Controls->Add(this->label1);
			this->Name = L"Puntos";
			this->Text = L"Puntos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void colocarPuntos(int^ p) {
		lblPuntos->Text = Convert::ToString(p);
	}

	};
}
