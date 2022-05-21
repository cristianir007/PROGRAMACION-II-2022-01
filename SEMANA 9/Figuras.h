#pragma once
#include "Controlador.h"
//INCLUIR LIBRERIA
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
	//CREO DE MANERA MANUAL EL Private
	private:
		Controlador* controlador;
		Graphics^ g;

	public:
		Figuras(void)
		{
			InitializeComponent();
			//LUEGO DE ESTA LINEA INICIALIZO LOS OBJ
			controlador = new Controlador();
			g = panel1->CreateGraphics();
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ cmbElegirFigura;
	private: System::Windows::Forms::Button^ btnColor;
	protected:


	private: System::Windows::Forms::Button^ btnDibujar;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txbBlue;
	private: System::Windows::Forms::TextBox^ txbGreen;
	private: System::Windows::Forms::TextBox^ txbRed;
	private: System::Windows::Forms::GroupBox^ gbPosInicial;
	private: System::Windows::Forms::TextBox^ txbPosY;
	private: System::Windows::Forms::TextBox^ txbPosX;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ gbElipse;
	private: System::Windows::Forms::GroupBox^ gbRectangulo;


	private: System::Windows::Forms::TextBox^ txbRadio;
	private: System::Windows::Forms::Label^ lblAreaElipse;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txbLado2;
	private: System::Windows::Forms::TextBox^ txbLado1;
	private: System::Windows::Forms::Label^ lblAreaRectangulo;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txbBlue = (gcnew System::Windows::Forms::TextBox());
			this->txbGreen = (gcnew System::Windows::Forms::TextBox());
			this->txbRed = (gcnew System::Windows::Forms::TextBox());
			this->cmbElegirFigura = (gcnew System::Windows::Forms::ComboBox());
			this->btnColor = (gcnew System::Windows::Forms::Button());
			this->btnDibujar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gbPosInicial = (gcnew System::Windows::Forms::GroupBox());
			this->txbPosY = (gcnew System::Windows::Forms::TextBox());
			this->txbPosX = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gbElipse = (gcnew System::Windows::Forms::GroupBox());
			this->txbRadio = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaElipse = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gbRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->txbLado2 = (gcnew System::Windows::Forms::TextBox());
			this->txbLado1 = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaRectangulo = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->gbPosInicial->SuspendLayout();
			this->gbElipse->SuspendLayout();
			this->gbRectangulo->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txbBlue);
			this->groupBox1->Controls->Add(this->txbGreen);
			this->groupBox1->Controls->Add(this->txbRed);
			this->groupBox1->Controls->Add(this->cmbElegirFigura);
			this->groupBox1->Controls->Add(this->btnColor);
			this->groupBox1->Controls->Add(this->btnDibujar);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(858, 61);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// txbBlue
			// 
			this->txbBlue->Location = System::Drawing::Point(489, 20);
			this->txbBlue->Name = L"txbBlue";
			this->txbBlue->Size = System::Drawing::Size(100, 20);
			this->txbBlue->TabIndex = 9;
			this->txbBlue->TextChanged += gcnew System::EventHandler(this, &Figuras::txbBlue_TextChanged);
			// 
			// txbGreen
			// 
			this->txbGreen->Location = System::Drawing::Point(360, 20);
			this->txbGreen->Name = L"txbGreen";
			this->txbGreen->Size = System::Drawing::Size(100, 20);
			this->txbGreen->TabIndex = 8;
			this->txbGreen->TextChanged += gcnew System::EventHandler(this, &Figuras::txbGreen_TextChanged);
			// 
			// txbRed
			// 
			this->txbRed->Location = System::Drawing::Point(230, 20);
			this->txbRed->Name = L"txbRed";
			this->txbRed->Size = System::Drawing::Size(100, 20);
			this->txbRed->TabIndex = 7;
			this->txbRed->TextChanged += gcnew System::EventHandler(this, &Figuras::txbRed_TextChanged);
			// 
			// cmbElegirFigura
			// 
			this->cmbElegirFigura->FormattingEnabled = true;
			this->cmbElegirFigura->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Circulo", L"Rectangulo" });
			this->cmbElegirFigura->Location = System::Drawing::Point(78, 20);
			this->cmbElegirFigura->Name = L"cmbElegirFigura";
			this->cmbElegirFigura->Size = System::Drawing::Size(121, 21);
			this->cmbElegirFigura->TabIndex = 6;
			this->cmbElegirFigura->SelectedIndexChanged += gcnew System::EventHandler(this, &Figuras::cmbElegirFigura_SelectedIndexChanged);
			// 
			// btnColor
			// 
			this->btnColor->Location = System::Drawing::Point(609, 17);
			this->btnColor->Name = L"btnColor";
			this->btnColor->Size = System::Drawing::Size(105, 23);
			this->btnColor->TabIndex = 5;
			this->btnColor->Text = L"COLOR";
			this->btnColor->UseVisualStyleBackColor = true;
			// 
			// btnDibujar
			// 
			this->btnDibujar->Location = System::Drawing::Point(735, 18);
			this->btnDibujar->Name = L"btnDibujar";
			this->btnDibujar->Size = System::Drawing::Size(116, 23);
			this->btnDibujar->TabIndex = 4;
			this->btnDibujar->Text = L"DIBUJAR";
			this->btnDibujar->UseVisualStyleBackColor = true;
			this->btnDibujar->Click += gcnew System::EventHandler(this, &Figuras::btnDibujar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(466, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"B:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(336, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"G:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(205, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"R:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elegir figura:";
			// 
			// gbPosInicial
			// 
			this->gbPosInicial->Controls->Add(this->txbPosY);
			this->gbPosInicial->Controls->Add(this->txbPosX);
			this->gbPosInicial->Controls->Add(this->label6);
			this->gbPosInicial->Controls->Add(this->label5);
			this->gbPosInicial->Enabled = false;
			this->gbPosInicial->Location = System::Drawing::Point(52, 80);
			this->gbPosInicial->Name = L"gbPosInicial";
			this->gbPosInicial->Size = System::Drawing::Size(223, 127);
			this->gbPosInicial->TabIndex = 1;
			this->gbPosInicial->TabStop = false;
			this->gbPosInicial->Text = L"Posicion inicial";
			// 
			// txbPosY
			// 
			this->txbPosY->Location = System::Drawing::Point(78, 65);
			this->txbPosY->Name = L"txbPosY";
			this->txbPosY->Size = System::Drawing::Size(100, 20);
			this->txbPosY->TabIndex = 3;
			// 
			// txbPosX
			// 
			this->txbPosX->Location = System::Drawing::Point(78, 33);
			this->txbPosX->Name = L"txbPosX";
			this->txbPosX->Size = System::Drawing::Size(100, 20);
			this->txbPosX->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"POS Y:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"POS X:";
			// 
			// gbElipse
			// 
			this->gbElipse->Controls->Add(this->txbRadio);
			this->gbElipse->Controls->Add(this->lblAreaElipse);
			this->gbElipse->Controls->Add(this->label8);
			this->gbElipse->Controls->Add(this->label7);
			this->gbElipse->Enabled = false;
			this->gbElipse->Location = System::Drawing::Point(338, 101);
			this->gbElipse->Name = L"gbElipse";
			this->gbElipse->Size = System::Drawing::Size(200, 100);
			this->gbElipse->TabIndex = 2;
			this->gbElipse->TabStop = false;
			this->gbElipse->Text = L"Elipse";
			// 
			// txbRadio
			// 
			this->txbRadio->Location = System::Drawing::Point(66, 32);
			this->txbRadio->Name = L"txbRadio";
			this->txbRadio->Size = System::Drawing::Size(100, 20);
			this->txbRadio->TabIndex = 3;
			// 
			// lblAreaElipse
			// 
			this->lblAreaElipse->AutoSize = true;
			this->lblAreaElipse->Location = System::Drawing::Point(87, 71);
			this->lblAreaElipse->Name = L"lblAreaElipse";
			this->lblAreaElipse->Size = System::Drawing::Size(66, 13);
			this->lblAreaElipse->TabIndex = 2;
			this->lblAreaElipse->Text = L"Mostrar area";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 71);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Area:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Radio:";
			// 
			// gbRectangulo
			// 
			this->gbRectangulo->Controls->Add(this->txbLado2);
			this->gbRectangulo->Controls->Add(this->txbLado1);
			this->gbRectangulo->Controls->Add(this->lblAreaRectangulo);
			this->gbRectangulo->Controls->Add(this->label11);
			this->gbRectangulo->Controls->Add(this->label10);
			this->gbRectangulo->Controls->Add(this->label9);
			this->gbRectangulo->Enabled = false;
			this->gbRectangulo->Location = System::Drawing::Point(621, 89);
			this->gbRectangulo->Name = L"gbRectangulo";
			this->gbRectangulo->Size = System::Drawing::Size(204, 118);
			this->gbRectangulo->TabIndex = 3;
			this->gbRectangulo->TabStop = false;
			this->gbRectangulo->Text = L"Rectangulo";
			// 
			// txbLado2
			// 
			this->txbLado2->Location = System::Drawing::Point(79, 60);
			this->txbLado2->Name = L"txbLado2";
			this->txbLado2->Size = System::Drawing::Size(100, 20);
			this->txbLado2->TabIndex = 5;
			// 
			// txbLado1
			// 
			this->txbLado1->Location = System::Drawing::Point(79, 23);
			this->txbLado1->Name = L"txbLado1";
			this->txbLado1->Size = System::Drawing::Size(100, 20);
			this->txbLado1->TabIndex = 4;
			// 
			// lblAreaRectangulo
			// 
			this->lblAreaRectangulo->AutoSize = true;
			this->lblAreaRectangulo->Location = System::Drawing::Point(99, 99);
			this->lblAreaRectangulo->Name = L"lblAreaRectangulo";
			this->lblAreaRectangulo->Size = System::Drawing::Size(66, 13);
			this->lblAreaRectangulo->TabIndex = 3;
			this->lblAreaRectangulo->Text = L"Mostrar area";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 99);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Area:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Lado 2:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Lado 1:";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 213);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(851, 269);
			this->panel1->TabIndex = 4;
			// 
			// Figuras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 494);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gbRectangulo);
			this->Controls->Add(this->gbElipse);
			this->Controls->Add(this->gbPosInicial);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Figuras";
			this->Text = L"Figuras";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gbPosInicial->ResumeLayout(false);
			this->gbPosInicial->PerformLayout();
			this->gbElipse->ResumeLayout(false);
			this->gbElipse->PerformLayout();
			this->gbRectangulo->ResumeLayout(false);
			this->gbRectangulo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cmbElegirFigura_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cmbElegirFigura->SelectedItem == "Circulo") {
			gbPosInicial->Enabled = true;
			gbElipse->Enabled = true;
			gbRectangulo->Enabled = false;
		}
		if (cmbElegirFigura->SelectedItem == "Rectangulo") {
			gbPosInicial->Enabled = true;
			gbElipse->Enabled = false;
			gbRectangulo->Enabled = true;
		}
	}
private: System::Void btnDibujar_Click(System::Object^ sender, System::EventArgs^ e) {
	//PARA DIBUJAR CIRCULO
	if (cmbElegirFigura->SelectedItem == "Circulo") {
		Circulo* c = new Circulo(Convert::ToInt32(txbPosX->Text), Convert::ToInt32(txbPosY->Text),
								 Convert::ToInt32(txbRadio->Text));
		controlador->agregarCirculo(c);
		lblAreaElipse->Text = Convert::ToString(c->getArea());
	}
	//PARA DIBUJAR RECTANGULO
	if (cmbElegirFigura->SelectedItem == "Rectangulo") {
		Rectangulo* r = new Rectangulo(Convert::ToInt32(txbPosX->Text), Convert::ToInt32(txbPosY->Text),
									   Convert::ToInt32(txbLado1->Text), Convert::ToInt32(txbLado2->Text));
		controlador->agregarRectangulo(r);
		lblAreaRectangulo->Text = Convert::ToString(r->getArea());
	}

	g->Clear(Color::White);
	Color c = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
							  Convert::ToInt32(txbBlue->Text));
	controlador->dibujarTodo(g, c);
}
private: System::Void txbRed_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txbRed->Text != "" && txbGreen->Text != "" && txbBlue->Text != "") {
		btnColor->BackColor = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
											  Convert::ToInt32(txbBlue->Text));
	}
}
private: System::Void txbGreen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txbRed->Text != "" && txbGreen->Text != "" && txbBlue->Text != "") {
		btnColor->BackColor = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
											  Convert::ToInt32(txbBlue->Text));
	}
}
private: System::Void txbBlue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txbRed->Text != "" && txbGreen->Text != "" && txbBlue->Text != "") {
		btnColor->BackColor = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
											  Convert::ToInt32(txbBlue->Text));
	}
}
};
}
