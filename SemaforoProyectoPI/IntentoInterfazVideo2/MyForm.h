#pragma once
#include <tchar.h>
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>

extern "C" int setEstado(int a);
//INT64 estado = 3;

namespace IntentoInterfazVideo2 {
	int estado = 4;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Fondo;
	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ Semaforo1;
	private: System::Windows::Forms::PictureBox^ Semaforo2;
	private: System::Windows::Forms::PictureBox^ Semaforo3;
	private: System::Windows::Forms::PictureBox^ Semaforo4;
	private: System::Windows::Forms::TextBox^ semaforo_1_rojo;
	private: System::Windows::Forms::TextBox^ semaforo_1_verde;
	private: System::Windows::Forms::TextBox^ semaforo_1_amarillo;
	private: System::Windows::Forms::TextBox^ semaforo_3_rojo;
	private: System::Windows::Forms::TextBox^ semaforo_3_amarillo;
	private: System::Windows::Forms::TextBox^ semaforo_3_verde;
	private: System::Windows::Forms::TextBox^ semaforo_4_verde;
	private: System::Windows::Forms::TextBox^ semaforo_4_rojo;
	private: System::Windows::Forms::TextBox^ semaforo_2_verde;
	private: System::Windows::Forms::TextBox^ semaforo_2_amarillo;
	private: System::Windows::Forms::TextBox^ semaforo_4_amarillo;
	private: System::Windows::Forms::TextBox^ semaforo_2_rojo;

	private: System::Windows::Forms::TextBox^ peatonal_verde;
	private: System::Windows::Forms::TextBox^ peatonal_rojo;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ peatonal2_rojo;
	private: System::Windows::Forms::TextBox^ peatonal2_verde;


	private: System::Windows::Forms::Button^ button3;



	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Fondo = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->semaforo_1_rojo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_1_amarillo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_1_verde = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_2_rojo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_2_amarillo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_2_verde = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_3_rojo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_3_amarillo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_3_verde = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_4_rojo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_4_amarillo = (gcnew System::Windows::Forms::TextBox());
			this->semaforo_4_verde = (gcnew System::Windows::Forms::TextBox());
			this->peatonal_verde = (gcnew System::Windows::Forms::TextBox());
			this->peatonal_rojo = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->peatonal2_rojo = (gcnew System::Windows::Forms::TextBox());
			this->peatonal2_verde = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fondo))->BeginInit();
			this->SuspendLayout();
			// 
			// Fondo
			// 
			this->Fondo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Fondo.BackgroundImage")));
			this->Fondo->Location = System::Drawing::Point(3, -17);
			this->Fondo->Margin = System::Windows::Forms::Padding(4);
			this->Fondo->Name = L"Fondo";
			this->Fondo->Size = System::Drawing::Size(573, 603);
			this->Fondo->TabIndex = 1;
			this->Fondo->TabStop = false;
			this->Fondo->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(456, 448);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 96);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Botón Actualizar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// semaforo_1_rojo
			// 
			this->semaforo_1_rojo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_1_rojo->Location = System::Drawing::Point(111, 250);
			this->semaforo_1_rojo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_1_rojo->Multiline = true;
			this->semaforo_1_rojo->Name = L"semaforo_1_rojo";
			this->semaforo_1_rojo->Size = System::Drawing::Size(27, 24);
			this->semaforo_1_rojo->TabIndex = 7;
			// 
			// semaforo_1_amarillo
			// 
			this->semaforo_1_amarillo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_1_amarillo->Location = System::Drawing::Point(111, 272);
			this->semaforo_1_amarillo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_1_amarillo->Name = L"semaforo_1_amarillo";
			this->semaforo_1_amarillo->Size = System::Drawing::Size(27, 22);
			this->semaforo_1_amarillo->TabIndex = 9;
			// 
			// semaforo_1_verde
			// 
			this->semaforo_1_verde->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_1_verde->Location = System::Drawing::Point(111, 293);
			this->semaforo_1_verde->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_1_verde->Name = L"semaforo_1_verde";
			this->semaforo_1_verde->Size = System::Drawing::Size(27, 22);
			this->semaforo_1_verde->TabIndex = 8;
			// 
			// semaforo_2_rojo
			// 
			this->semaforo_2_rojo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_2_rojo->Location = System::Drawing::Point(244, 65);
			this->semaforo_2_rojo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_2_rojo->Multiline = true;
			this->semaforo_2_rojo->Name = L"semaforo_2_rojo";
			this->semaforo_2_rojo->Size = System::Drawing::Size(28, 22);
			this->semaforo_2_rojo->TabIndex = 18;
			// 
			// semaforo_2_amarillo
			// 
			this->semaforo_2_amarillo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_2_amarillo->Location = System::Drawing::Point(219, 65);
			this->semaforo_2_amarillo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_2_amarillo->Name = L"semaforo_2_amarillo";
			this->semaforo_2_amarillo->Size = System::Drawing::Size(28, 22);
			this->semaforo_2_amarillo->TabIndex = 16;
			// 
			// semaforo_2_verde
			// 
			this->semaforo_2_verde->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_2_verde->Location = System::Drawing::Point(196, 65);
			this->semaforo_2_verde->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_2_verde->Name = L"semaforo_2_verde";
			this->semaforo_2_verde->Size = System::Drawing::Size(27, 22);
			this->semaforo_2_verde->TabIndex = 15;
			// 
			// semaforo_3_rojo
			// 
			this->semaforo_3_rojo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_3_rojo->Location = System::Drawing::Point(420, 164);
			this->semaforo_3_rojo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_3_rojo->Name = L"semaforo_3_rojo";
			this->semaforo_3_rojo->Size = System::Drawing::Size(28, 22);
			this->semaforo_3_rojo->TabIndex = 10;
			// 
			// semaforo_3_amarillo
			// 
			this->semaforo_3_amarillo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_3_amarillo->Location = System::Drawing::Point(420, 182);
			this->semaforo_3_amarillo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_3_amarillo->Name = L"semaforo_3_amarillo";
			this->semaforo_3_amarillo->Size = System::Drawing::Size(28, 22);
			this->semaforo_3_amarillo->TabIndex = 11;
			// 
			// semaforo_3_verde
			// 
			this->semaforo_3_verde->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_3_verde->Location = System::Drawing::Point(420, 203);
			this->semaforo_3_verde->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_3_verde->Name = L"semaforo_3_verde";
			this->semaforo_3_verde->Size = System::Drawing::Size(28, 22);
			this->semaforo_3_verde->TabIndex = 12;
			// 
			// semaforo_4_rojo
			// 
			this->semaforo_4_rojo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_4_rojo->Location = System::Drawing::Point(321, 388);
			this->semaforo_4_rojo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_4_rojo->Name = L"semaforo_4_rojo";
			this->semaforo_4_rojo->Size = System::Drawing::Size(28, 22);
			this->semaforo_4_rojo->TabIndex = 14;
			// 
			// semaforo_4_amarillo
			// 
			this->semaforo_4_amarillo->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_4_amarillo->Location = System::Drawing::Point(295, 388);
			this->semaforo_4_amarillo->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_4_amarillo->Name = L"semaforo_4_amarillo";
			this->semaforo_4_amarillo->Size = System::Drawing::Size(28, 22);
			this->semaforo_4_amarillo->TabIndex = 17;
			this->semaforo_4_amarillo->TextChanged += gcnew System::EventHandler(this, &MyForm::semaforo_4_amarillo_TextChanged);
			// 
			// semaforo_4_verde
			// 
			this->semaforo_4_verde->BackColor = System::Drawing::SystemColors::WindowText;
			this->semaforo_4_verde->Location = System::Drawing::Point(269, 388);
			this->semaforo_4_verde->Margin = System::Windows::Forms::Padding(4);
			this->semaforo_4_verde->Name = L"semaforo_4_verde";
			this->semaforo_4_verde->Size = System::Drawing::Size(27, 22);
			this->semaforo_4_verde->TabIndex = 13;
			// 
			// peatonal_verde
			// 
			this->peatonal_verde->BackColor = System::Drawing::SystemColors::WindowText;
			this->peatonal_verde->Location = System::Drawing::Point(377, 336);
			this->peatonal_verde->Margin = System::Windows::Forms::Padding(4);
			this->peatonal_verde->Name = L"peatonal_verde";
			this->peatonal_verde->Size = System::Drawing::Size(27, 22);
			this->peatonal_verde->TabIndex = 20;
			// 
			// peatonal_rojo
			// 
			this->peatonal_rojo->BackColor = System::Drawing::SystemColors::WindowText;
			this->peatonal_rojo->Location = System::Drawing::Point(377, 313);
			this->peatonal_rojo->Margin = System::Windows::Forms::Padding(4);
			this->peatonal_rojo->Name = L"peatonal_rojo";
			this->peatonal_rojo->Size = System::Drawing::Size(27, 22);
			this->peatonal_rojo->TabIndex = 21;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(412, 367);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 46);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Boton Peatonal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// peatonal2_rojo
			// 
			this->peatonal2_rojo->BackColor = System::Drawing::SystemColors::WindowText;
			this->peatonal2_rojo->Location = System::Drawing::Point(127, 94);
			this->peatonal2_rojo->Margin = System::Windows::Forms::Padding(4);
			this->peatonal2_rojo->Name = L"peatonal2_rojo";
			this->peatonal2_rojo->Size = System::Drawing::Size(27, 22);
			this->peatonal2_rojo->TabIndex = 23;
			this->peatonal2_rojo->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// peatonal2_verde
			// 
			this->peatonal2_verde->BackColor = System::Drawing::SystemColors::WindowText;
			this->peatonal2_verde->Location = System::Drawing::Point(127, 113);
			this->peatonal2_verde->Margin = System::Windows::Forms::Padding(4);
			this->peatonal2_verde->Name = L"peatonal2_verde";
			this->peatonal2_verde->Size = System::Drawing::Size(27, 22);
			this->peatonal2_verde->TabIndex = 24;
			this->peatonal2_verde->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 36);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 51);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Boton Peatonal";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 599);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->peatonal2_verde);
			this->Controls->Add(this->peatonal2_rojo);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->peatonal_rojo);
			this->Controls->Add(this->peatonal_verde);
			this->Controls->Add(this->semaforo_2_rojo);
			this->Controls->Add(this->semaforo_4_amarillo);
			this->Controls->Add(this->semaforo_2_amarillo);
			this->Controls->Add(this->semaforo_2_verde);
			this->Controls->Add(this->semaforo_4_rojo);
			this->Controls->Add(this->semaforo_4_verde);
			this->Controls->Add(this->semaforo_3_verde);
			this->Controls->Add(this->semaforo_3_amarillo);
			this->Controls->Add(this->semaforo_3_rojo);
			this->Controls->Add(this->semaforo_1_amarillo);
			this->Controls->Add(this->semaforo_1_verde);
			this->Controls->Add(this->semaforo_1_rojo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Fondo);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fondo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Semaforo2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Semaforo3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void semaforo_4_amarillo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	estado = setEstado(estado);
	switch (estado) {
	case 0:
		this->peatonal_verde->BackColor = System::Drawing::Color::Black;	//Peatonal
		this->peatonal_rojo->BackColor = System::Drawing::Color::Red;		//Peatonal

		this->peatonal2_verde->BackColor = System::Drawing::Color::Black;	//Peatonal
		this->peatonal2_rojo->BackColor = System::Drawing::Color::Red;		//Peatonal

		this->semaforo_1_verde->BackColor = System::Drawing::Color::Black;		//Semaforo1
		this->semaforo_1_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo1
		this->semaforo_1_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo1

		this->semaforo_2_verde->BackColor = System::Drawing::Color::Green;		//Semaforo2
		this->semaforo_2_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo2
		this->semaforo_2_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo2

		this->semaforo_3_verde->BackColor = System::Drawing::Color::Black;		//Semaforo3
		this->semaforo_3_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo3
		this->semaforo_3_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo3

		this->semaforo_4_verde->BackColor = System::Drawing::Color::Green;		//Semaforo4
		this->semaforo_4_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo4
		this->semaforo_4_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo4

		break;
	case 1:
		this->peatonal_verde->BackColor = System::Drawing::Color::Black;	//Peatonal
		this->peatonal_rojo->BackColor = System::Drawing::Color::Red;		//Peatonal

		this->peatonal2_verde->BackColor = System::Drawing::Color::Black;	//Peatona2
		this->peatonal2_rojo->BackColor = System::Drawing::Color::Red;		//Peatona2

		this->semaforo_1_verde->BackColor = System::Drawing::Color::Black;		//Semaforo1
		this->semaforo_1_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo1
		this->semaforo_1_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo1

		this->semaforo_2_verde->BackColor = System::Drawing::Color::Black;		//Semaforo2
		this->semaforo_2_amarillo->BackColor = System::Drawing::Color::Yellow;	//Semaforo2
		this->semaforo_2_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo2

		this->semaforo_3_verde->BackColor = System::Drawing::Color::Black;		//Semaforo3
		this->semaforo_3_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo3
		this->semaforo_3_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo3

		this->semaforo_4_verde->BackColor = System::Drawing::Color::Black;		//Semaforo4
		this->semaforo_4_amarillo->BackColor = System::Drawing::Color::Yellow;	//Semaforo4
		this->semaforo_4_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo4
		break;
	case 2:
		this->peatonal_verde->BackColor = System::Drawing::Color::Black;	//Peatonal
		this->peatonal_rojo->BackColor = System::Drawing::Color::Red;		//Peatonal

		this->peatonal2_verde->BackColor = System::Drawing::Color::Black;	//Peatona2
		this->peatonal2_rojo->BackColor = System::Drawing::Color::Red;		//Peatona2

		this->semaforo_1_verde->BackColor = System::Drawing::Color::Green;		//Semaforo1
		this->semaforo_1_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo1
		this->semaforo_1_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo1

		this->semaforo_2_verde->BackColor = System::Drawing::Color::Black;		//Semaforo2
		this->semaforo_2_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo2
		this->semaforo_2_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo2

		this->semaforo_3_verde->BackColor = System::Drawing::Color::Green;		//Semaforo3
		this->semaforo_3_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo3
		this->semaforo_3_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo3

		this->semaforo_4_verde->BackColor = System::Drawing::Color::Black;		//Semaforo4
		this->semaforo_4_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo4
		this->semaforo_4_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo4
		break;
	case 3:
		this->peatonal_verde->BackColor = System::Drawing::Color::Black;	//Peatonal
		this->peatonal_rojo->BackColor = System::Drawing::Color::Red;		//Peatonal

		this->peatonal2_verde->BackColor = System::Drawing::Color::Black;	//Peatona2
		this->peatonal2_rojo->BackColor = System::Drawing::Color::Red;		//Peatona2

		this->semaforo_1_verde->BackColor = System::Drawing::Color::Black;		//Semaforo1
		this->semaforo_1_amarillo->BackColor = System::Drawing::Color::Yellow;	//Semaforo1
		this->semaforo_1_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo1

		this->semaforo_2_verde->BackColor = System::Drawing::Color::Black;		//Semaforo2
		this->semaforo_2_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo2
		this->semaforo_2_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo2

		this->semaforo_3_verde->BackColor = System::Drawing::Color::Black;		//Semaforo3
		this->semaforo_3_amarillo->BackColor = System::Drawing::Color::Yellow;	//Semaforo3
		this->semaforo_3_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo3

		this->semaforo_4_verde->BackColor = System::Drawing::Color::Black;		//Semaforo4
		this->semaforo_4_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo4
		this->semaforo_4_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo4
		break;
	case 4:
		this->peatonal_verde->BackColor = System::Drawing::Color::Black;	//Peatonal
		this->peatonal_rojo->BackColor = System::Drawing::Color::Red;		//Peatonal

		this->peatonal2_verde->BackColor = System::Drawing::Color::Black;	//Peatona2
		this->peatonal2_rojo->BackColor = System::Drawing::Color::Red;		//Peatona2

		this->semaforo_1_verde->BackColor = System::Drawing::Color::Black;		//Semaforo1
		this->semaforo_1_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo1
		this->semaforo_1_rojo->BackColor = System::Drawing::Color::Red;		//Semaforo1

		this->semaforo_2_verde->BackColor = System::Drawing::Color::Black;		//Semaforo2
		this->semaforo_2_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo2
		this->semaforo_2_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo2

		this->semaforo_3_verde->BackColor = System::Drawing::Color::Black;		//Semaforo3
		this->semaforo_3_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo3
		this->semaforo_3_rojo->BackColor = System::Drawing::Color::Red;		//Semaforo3

		this->semaforo_4_verde->BackColor = System::Drawing::Color::Black;		//Semaforo4
		this->semaforo_4_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo4
		this->semaforo_4_rojo->BackColor = System::Drawing::Color::Green;			//Semaforo4
		break;

	}
	System::Void button1_Click_1(System::Object ^ sender, System::EventArgs ^ e);
	//this->semaforo_4_verde->BackColor = System::Drawing::Color::Yellow;
	//Sleep(5000);
	//this->semaforo_4_rojo->BackColor = System::Drawing::Color::Red;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->peatonal_verde->BackColor = System::Drawing::Color::Green;	//Peatonal
	this->peatonal_rojo->BackColor = System::Drawing::Color::Black;		//Peatonal

	this->peatonal2_verde->BackColor = System::Drawing::Color::Black;	//Peatona2
	this->peatonal2_rojo->BackColor = System::Drawing::Color::Red;		//Peatona2

	this->semaforo_1_verde->BackColor = System::Drawing::Color::Black;		//Semaforo1
	this->semaforo_1_amarillo->BackColor = System::Drawing::Color::Green;	//Semaforo1
	this->semaforo_1_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo1

	this->semaforo_2_verde->BackColor = System::Drawing::Color::Black;		//Semaforo2
	this->semaforo_2_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo2
	this->semaforo_2_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo2


	this->semaforo_3_verde->BackColor = System::Drawing::Color::Black;		//Semaforo3
	this->semaforo_3_amarillo->BackColor = System::Drawing::Color::Green;	//Semaforo3
	this->semaforo_3_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo3

	this->semaforo_4_verde->BackColor = System::Drawing::Color::Black;		//Semaforo4
	this->semaforo_4_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo4
	this->semaforo_4_rojo->BackColor = System::Drawing::Color::Red;			//Semaforo4


}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->peatonal_verde->BackColor = System::Drawing::Color::Green;	//Peatonal
	this->peatonal_rojo->BackColor = System::Drawing::Color::Black;		//Peatonal

	this->peatonal2_verde->BackColor = System::Drawing::Color::Green;	//Peatona2
	this->peatonal2_rojo->BackColor = System::Drawing::Color::Black;		//Peatona2

	this->semaforo_1_verde->BackColor = System::Drawing::Color::Black;		//Semaforo1
	this->semaforo_1_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo1
	this->semaforo_1_rojo->BackColor = System::Drawing::Color::Red;		//Semaforo1
	
	this->semaforo_2_verde->BackColor = System::Drawing::Color::Green;		//Semaforo2
	this->semaforo_2_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo2
	this->semaforo_2_rojo->BackColor = System::Drawing::Color::Black;			//Semaforo2

	this->semaforo_3_verde->BackColor = System::Drawing::Color::Black;		//Semaforo3
	this->semaforo_3_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo3
	this->semaforo_3_rojo->BackColor = System::Drawing::Color::Red;		//Semaforo3

	this->semaforo_4_verde->BackColor = System::Drawing::Color::Green;		//Semaforo4
	this->semaforo_4_amarillo->BackColor = System::Drawing::Color::Black;	//Semaforo4
	this->semaforo_4_rojo->BackColor = System::Drawing::Color::Black;		//Semaforo4
}
};
}
