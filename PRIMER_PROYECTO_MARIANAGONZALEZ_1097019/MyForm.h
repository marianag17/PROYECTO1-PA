#pragma once
#include "Nodo.h"
#include "Cola.h"
#include "Pila.h"
#include <string>
namespace PRIMERPROYECTOMARIANAGONZALEZ1097019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(184, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PETRO PLUS S.A\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(188, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese el precio";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(44, 153);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(82, 84);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Primer dígito";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(162, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Segundo dígito";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(329, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Tercer dígito";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(473, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 22);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Cuarto dígito";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(42, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 27);
			this->button1->TabIndex = 10;
			this->button1->Text = L"INGRESAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(491, 276);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 27);
			this->button5->TabIndex = 17;
			this->button5->Text = L"BORRAR ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(342, 276);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(82, 27);
			this->button6->TabIndex = 16;
			this->button6->Text = L"BORRAR ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(190, 276);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(82, 27);
			this->button7->TabIndex = 15;
			this->button7->Text = L"BORRAR ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(44, 276);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(82, 27);
			this->button8->TabIndex = 14;
			this->button8->Text = L"BORRAR ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(187, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 27);
			this->button2->TabIndex = 18;
			this->button2->Text = L"INGRESAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(340, 243);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 27);
			this->button3->TabIndex = 19;
			this->button3->Text = L"INGRESAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(490, 243);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 27);
			this->button4->TabIndex = 20;
			this->button4->Text = L"INGRESAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 337);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(272, 22);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Desea ingresar otro precio\?";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(311, 340);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(41, 21);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"SI";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(358, 340);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(50, 21);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"NO";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(456, 336);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(87, 27);
			this->button9->TabIndex = 24;
			this->button9->Text = L"ACEPTAR";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(677, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 22);
			this->label8->TabIndex = 25;
			this->label8->Text = L"PILA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(803, 145);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 22);
			this->label9->TabIndex = 26;
			this->label9->Text = L"COLA";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(660, 171);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(82, 275);
			this->textBox5->TabIndex = 27;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(796, 171);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(82, 275);
			this->textBox6->TabIndex = 28;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(722, 494);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(87, 63);
			this->button10->TabIndex = 29;
			this->button10->Text = L"CREAR ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(487, 512);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(87, 27);
			this->button11->TabIndex = 45;
			this->button11->Text = L"INGRESAR";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(337, 512);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(87, 27);
			this->button12->TabIndex = 44;
			this->button12->Text = L"INGRESAR";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(190, 512);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(87, 27);
			this->button13->TabIndex = 43;
			this->button13->Text = L"INGRESAR";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(488, 545);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(82, 27);
			this->button14->TabIndex = 42;
			this->button14->Text = L"BORRAR ";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(339, 545);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(82, 27);
			this->button15->TabIndex = 41;
			this->button15->Text = L"BORRAR ";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(193, 545);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(82, 27);
			this->button16->TabIndex = 40;
			this->button16->Text = L"BORRAR ";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(47, 545);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(82, 27);
			this->button17->TabIndex = 39;
			this->button17->Text = L"BORRAR ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(45, 512);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(87, 27);
			this->button18->TabIndex = 38;
			this->button18->Text = L"INGRESAR";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label10->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(476, 385);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(135, 22);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Cuarto dígito";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label11->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(332, 385);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(131, 22);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Tercer dígito";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label12->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(165, 385);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(155, 22);
			this->label12->TabIndex = 35;
			this->label12->Text = L"Segundo dígito";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label13->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(24, 385);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(134, 22);
			this->label13->TabIndex = 34;
			this->label13->Text = L"Primer dígito";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(190, 153);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(82, 84);
			this->textBox2->TabIndex = 46;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(343, 153);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(82, 84);
			this->textBox3->TabIndex = 47;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(491, 153);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(82, 84);
			this->textBox4->TabIndex = 48;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(44, 422);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(82, 84);
			this->textBox7->TabIndex = 49;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(193, 422);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(82, 84);
			this->textBox8->TabIndex = 50;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(336, 422);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(82, 84);
			this->textBox9->TabIndex = 51;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(491, 422);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(82, 84);
			this->textBox10->TabIndex = 52;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(929, 600);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Pila* lapila = new Pila();
		Cola* lacola = new Cola();
		Pila* pilaaux = new Pila();
		Cola* colaaux = new Cola();
#pragma endregion

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox7->ReadOnly = true;
		textBox8->ReadOnly = true;
		textBox9->ReadOnly = true;
		textBox10->ReadOnly = true;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = false;
		button13->Enabled = false;
		button18->Enabled = false;
		button17->Enabled = false;
		button16->Enabled = false;
		button15->Enabled = false;
		button14->Enabled = false;
		lapila->Apilar(0);
		lapila->Apilar(1);
		lapila->Apilar(2);
		lapila->Apilar(3);
		lapila->Apilar(4);
		lapila->Apilar(5);
		lapila->Apilar(6);
		lapila->Apilar(7);
		lapila->Apilar(8);
		lapila->Apilar(9);
		textBox5->Text = lapila->Imprimir();
		//se apilan los números
		lacola->Encolar(0);
		lacola->Encolar(1);
		lacola->Encolar(2);
		lacola->Encolar(3);
		lacola->Encolar(4);
		lacola->Encolar(5);
		lacola->Encolar(6);
		lacola->Encolar(7);
		lacola->Encolar(8);
		lacola->Encolar(9);
		textBox6->Text = lacola->Imprimir();
		//se encolan los numeros
	}
			 int cant0 = 0;
			 int cant1 = 0;
			 int cant2 =0;
			 int cant3 = 0;
			 int cant4 = 0;
			 int cant5 = 0;
			 int cant6 = 0;
			 int cant7 = 0;
			 int cant8 = 0;
			 int cant9 = 0;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//primer dígito
		button1->Enabled = false;
		button8->Enabled = true;
		button2->Enabled = true;
		int nresponse = Convert::ToInt32(textBox1->Text);
		switch (nresponse)
		{
		case 0:
			cant0++;
			break;
		case 1:
			cant1++;
			break;
		case 2:
			cant2++;
			break;
		case 3:
			cant3++;
			break;
		case 4:
			cant4++;
			break;
		case 5:
			cant5++;
			break;
		case 6:
			cant6++;
			break;
		case 7:
			cant7++;
			break;
		case 8:
			cant8++;
			break;
		case 9:
			cant9++;
			break;
		}
		if (nresponse == 0)//Si la persona pone 0
		{
			if (cant0 == 1)//si es la primera vez que pone 0
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant0 == 2)//si es la segunda vez
			{
				lacola->Desencolar();
				textBox6->Text = lacola->Imprimir();

			}
			if (cant0 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 1)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox1->Text = "1";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant0 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 1)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox1->Text = "1";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "1")//Si la persona pone 1
		{

			if (cant1 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant1 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 1)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant1 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 2)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox1->Text = "2";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant1 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 2)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox1->Text = "2";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "2")//Si la persona pone 2
		{

			if (cant2 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant2 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 2)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant2 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 3)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox1->Text = "3";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant2 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 3)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox1->Text = "3";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "3")//Si la persona pone 3
		{

			if (cant3 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant3 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 3)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant3 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 4)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir(); textBox1->Text = "4";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant3 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 4)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox1->Text = "4";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "4")//Si la persona pone 4
		{

			if (cant4 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant4 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 4)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant4 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 5)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox1->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant4 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() !=5)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir(); textBox1->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "5")//Si la persona pone 5 
		{

			if (cant5 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant5 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 5)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant5 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 6)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox1->Text = "6";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant5 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 6)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
			colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox1->Text = "6";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "6")//Si la persona pone 6
		{
			if (cant6 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant6 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 6)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant6 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 7)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox1->Text = "7";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant6 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 7)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox1->Text = "7";
				
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "7")//Si la persona pone 7
		{
			if (cant7 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant7 == 2)
			{
				int cont = 0;
				while (lacola->Cima() !=7)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant7 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 8)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox1->Text = "8";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant7 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 8)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				
				textBox1->Text = "8";
				textBox6->Text = lacola->Imprimir();
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "8")//Si la persona pone 8
		{

			if (cant8 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant8 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 8)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant8 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 9)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox1->Text = "9";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant8 == 4)//se queda igual 
			{
				int cont = 0;
				while (colaaux->Cima() != 9)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox1->Text = "9";
				textBox6->Text = colaaux->Imprimir();
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox1->ReadOnly = true;
		}
		if (textBox1->Text == "9")//Si la persona pone 9
		{
			if (cant9 < 2)
			{
				lapila->Desapilar();
				textBox5->Text = lapila->Imprimir();
				textBox1->ReadOnly = true;
			}
			if (cant9 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 9)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}


		}
		if (textBox1->Text != "1" && textBox1->Text != "2" && textBox1->Text != "3" && textBox1->Text != "4" && textBox1->Text != "5" && textBox1->Text != "6" &&
			textBox1->Text != "7" && textBox1->Text != "8" && textBox1->Text != "9" && textBox1->Text != "0")
		{
			System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
			textBox1->Clear();
			button1->Enabled = true;
		}
		button2->Enabled = true;
		
	}		
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		int nresponse = Convert::ToInt32(textBox1->Text);
		//continuar
		if (nresponse == 0)
		{
			
			if (cant0 == 1)
			{
				cant0--;
				lapila->Apilar(0);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant0 == 2)
			{
				cant0--;
				lacola->Encolar(0);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 1)
		{
			
			if (cant1 == 1)
			{
				cant1--;
				lapila->Apilar(1);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant1 == 2)
			{
				cant1--;
				lacola->Encolar(1);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 2)
		{
			
			if (cant2 == 1)
			{
				lapila->Apilar(2);
				textBox5->Text = lapila->Imprimir();
				cant2--;
			}
			if (cant2 == 2)
			{
				cant2--;
				lacola->Encolar(2);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 3)
		{
			
			if (cant3 == 1)
			{
				cant3--;
				lapila->Apilar(3);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant3 == 2)
			{
				cant3--;
				lacola->Encolar(3);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 4)
		{
			
			if (cant4 == 1)
			{
				cant4--;
				lapila->Apilar(4);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant4 == 2)
			{
				cant4--;
				lacola->Encolar(4);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 5)
		{
			
			if (cant5 == 1)
			{
				lapila->Apilar(5);
				textBox5->Text = lapila->Imprimir();
				cant5--;
			}
			if (cant5 == 2)
			{
				lacola->Encolar(5);
				textBox6->Text = lacola->Imprimir(); cant5--;
			}

		}
		if (nresponse == 6)
		{
			
			if (cant6 == 1)
			{
				lapila->Apilar(6);
				textBox5->Text = lapila->Imprimir(); cant6--;

			}
			if (cant6 == 2)
			{
				lacola->Encolar(6);
				textBox6->Text = lacola->Imprimir(); cant6--;
			}

		}
		if (nresponse == 7)
		{
			
			if (cant7 == 1)
			{
				lapila->Apilar(7);
				textBox5->Text = lapila->Imprimir(); cant7--;

			}
			if (cant7 == 2)
			{
				lacola->Encolar(7);
				textBox6->Text = lacola->Imprimir(); cant7--;
			}

		}
		if (nresponse == 8)
		{
		
			if (cant8 == 1)
			{
				lapila->Apilar(8);
				textBox5->Text = lapila->Imprimir();
				cant8--;
			}
			if (cant8 == 2)
			{
				lacola->Encolar(8);
				textBox6->Text = lacola->Imprimir();	cant8--;
			}

		}
		if (nresponse == 9)
		{
			
			if (cant9 == 1)
			{
				lapila->Apilar(9);
				textBox5->Text = lapila->Imprimir();
				cant9--;
			}
			if (cant9 == 2)
			{
				lacola->Encolar(9);
				textBox6->Text = lacola->Imprimir();
				cant9--;
			}

		}
		textBox1->Clear();
		textBox1->ReadOnly = false;
		button1->Enabled = true;

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		button2->Enabled = false;
		button7->Enabled = true;
		button3->Enabled = true;
		int nresponse = Convert::ToInt32(textBox2->Text);
		switch (nresponse)
		{
		case 0:
			cant0++;
			break;
		case 1:
			cant1++;
			break;
		case 2:
			cant2++;
			break;
		case 3:
			cant3++;
			break;
		case 4:
			cant4++;
			break;
		case 5:
			cant5++;
			break;
		case 6:
			cant6++;
			break;
		case 7:
			cant7++;
			break;
		case 8:
			cant8++;
			break;
		case 9:
			cant9++;
			break;
		}
		if (nresponse == 0)//Si la persona pone 0
		{
			if (cant0 == 1)//si es la primera vez que pone 0
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant0 == 2)//si es la segunda vez
			{
				lacola->Desencolar();
				textBox6->Text = lacola->Imprimir();

			}
			if (cant0 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 1)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox2->Text = "1";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant0 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 1)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox2->Text = "1";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "1")//Si la persona pone 1
		{

			if (cant1 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant1 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 1)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant1 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 2)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox2->Text = "2";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant1 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 2)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox2->Text = "2";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "2")//Si la persona pone 2
		{

			if (cant2 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant2 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 2)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant2 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 3)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox2->Text = "3";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant2 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 3)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox2->Text = "3";

				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "3")//Si la persona pone 3
		{

			if (cant3 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant3 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 3)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant3 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 4)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir(); textBox2->Text = "4";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant3 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 4)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox2->Text = "4";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "4")//Si la persona pone 4
		{

			if (cant4 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant4 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 4)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant4 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 5)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox2->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant4 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 5)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir(); textBox2->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "5")//Si la persona pone 5 
		{

			if (cant5 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant5 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 5)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant5 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 6)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox2->Text = "6";
			
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant5 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 6)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
		
				textBox2->Text = "6";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "6")//Si la persona pone 6
		{
			if (cant6 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant6 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 6)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant6 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 7)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox2->Text = "7";
				
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant6 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 7)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox2->Text = "7";

				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "7")//Si la persona pone 7
		{
			if (cant7 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant7 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 7)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant7 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 8)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				
				textBox2->Text = "8";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant7 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 8)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}

				textBox2->Text = "8";
				textBox6->Text = lacola->Imprimir();
			
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "8")//Si la persona pone 8
		{

			if (cant8 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant8 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 8)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant8 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 9)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox2->Text = "9";
		
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant8 == 4)//se queda igual 
			{
				int cont = 0;
				while (colaaux->Cima() != 9)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox2->Text = "9";
				textBox6->Text = colaaux->Imprimir();
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox2->ReadOnly = true;
		}
		if (textBox2->Text == "9")//Si la persona pone 9
		{
			if (cant9 < 2)
			{
				lapila->Desapilar();
				textBox5->Text = lapila->Imprimir();
				textBox2->ReadOnly = true;
			}
			if (cant9 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 9)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}


		}
		if (textBox2->Text != "1" && textBox2->Text != "2" && textBox2->Text != "3" && textBox2->Text != "4" && textBox2->Text != "5" && textBox2->Text != "6" &&
			textBox2->Text != "7" && textBox2->Text != "8" && textBox2->Text != "9" && textBox2->Text != "0")
		{
			System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
			textBox2->Clear();
			button2->Enabled = true;
		}

	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->Enabled = false;
		button6->Enabled = true;
		button4->Enabled = true;
		int nresponse = Convert::ToInt32(textBox3->Text);
		switch (nresponse)
		{
		case 0:
			cant0++;
			break;
		case 1:
			cant1++;
			break;
		case 2:
			cant2++;
			break;
		case 3:
			cant3++;
			break;
		case 4:
			cant4++;
			break;
		case 5:
			cant5++;
			break;
		case 6:
			cant6++;
			break;
		case 7:
			cant7++;
			break;
		case 8:
			cant8++;
			break;
		case 9:
			cant9++;
			break;
		}
		if (nresponse == 0)//Si la persona pone 0
		{
			if (cant0 == 1)//si es la primera vez que pone 0
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant0 == 2)//si es la segunda vez
			{
				lacola->Desencolar();
				textBox6->Text = lacola->Imprimir();

			}
			if (cant0 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() !=1)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox3->Text = "1";		
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant0 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 1)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox3->Text = "1";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "1")//Si la persona pone 1
		{

			if (cant1 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant1 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 1)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant1 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 2)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox3->Text = "2";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant1 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 2)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();

				textBox3->Text = "2";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "2")//Si la persona pone 2
		{

			if (cant2 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant2 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 2)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant2 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 3)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox3->Text = "3";

				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant2 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 3)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox3->Text = "3";

	
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "3")//Si la persona pone 3
		{

			if (cant3 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant3 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 3)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant3 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 4)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir(); textBox3->Text = "4";
			
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant3 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 4)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox3->Text = "4";
			
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "4")//Si la persona pone 4
		{

			if (cant4 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant4 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 4)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			
			if (cant4 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 5)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox3->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant4 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 5)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir(); textBox3->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "5")//Si la persona pone 5 
		{

			if (cant5 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant5 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 5)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant5 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 6)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox3->Text = "6";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant5 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 6)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox3->Text = "6";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "6")//Si la persona pone 6
		{
			if (cant6 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant6 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 6)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant6 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 7)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox3->Text = "7";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant6 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 7)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox3->Text = "7";

				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "7")//Si la persona pone 7
		{
			if (cant7 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant7 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 7)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant7 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 8)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox3->Text = "8";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant7 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 8)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}

				textBox3->Text = "8";
				textBox6->Text = lacola->Imprimir();
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "8")//Si la persona pone 8
		{

			if (cant8 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant8 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 8)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant8 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 9)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox3->Text = "9";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant8 == 4)//se queda igual 
			{
				int cont = 0;
				while (colaaux->Cima() != 9)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox3->Text = "9";
				textBox6->Text = colaaux->Imprimir();
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox3->ReadOnly = true;
		}
		if (textBox3->Text == "9")//Si la persona pone 9
		{
			if (cant9 < 2)
			{
				lapila->Desapilar();
				textBox5->Text = lapila->Imprimir();
				textBox3->ReadOnly = true;
			}
			if (cant9 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 9)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}


		}
		if (textBox3->Text != "1" && textBox3->Text != "2" && textBox3->Text != "3" && textBox3->Text != "4" && textBox3->Text != "5" && textBox3->Text != "6" &&
			textBox3->Text != "7" && textBox3->Text != "8" && textBox3->Text != "9" && textBox3->Text != "0")
		{
			System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
			textBox3->Clear();
			button3->Enabled = true;
		}

		
	}

	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		button4->Enabled = false;
		button5->Enabled = true;
		int nresponse = Convert::ToInt32(textBox4->Text);
		switch (nresponse)
		{
		case 0:
			cant0++;
			break;
		case 1:
			cant1++;
			break;
		case 2:
			cant2++;
			break;
		case 3:
			cant3++;
			break;
		case 4:
			cant4++;
			break;
		case 5:
			cant5++;
			break;
		case 6:
			cant6++;
			break;
		case 7:
			cant7++;
			break;
		case 8:
			cant8++;
			break;
		case 9:
			cant9++;
			break;
		}
		if (nresponse == 0)//Si la persona pone 0
		{
			cant0++;
			if (cant0 == 1)//si es la primera vez que pone 0
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant0 == 2)//si es la segunda vez
			{
				lacola->Desencolar();
				textBox6->Text = lacola->Imprimir();

			}
			if (cant0 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 1)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox4->Text = "1";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant0 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 1)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
	
				textBox4->Text = "1";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "1")//Si la persona pone 1
		{

			if (cant1 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant1 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 1)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant1 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 2)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox4->Text = "2";	
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant1 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 2)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();

				textBox4->Text = "2";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "2")//Si la persona pone 2
		{

			if (cant2 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant2 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 2)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant2 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 3)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox4->Text = "3";
	
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant2 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 3)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox4->Text = "3";

		
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "3")//Si la persona pone 3
		{

			if (cant3 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant3 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 3)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant3 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 4)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir(); textBox4->Text = "4";
	
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant3 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 4)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox4->Text = "4";
		
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "4")//Si la persona pone 4
		{

			if (cant4 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant4 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 4)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant4 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 5)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox4->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant4 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 5)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir(); textBox4->Text = "5";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "5")//Si la persona pone 5 
		{

			if (cant5 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant5 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 5)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant5 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 6)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox4->Text = "6";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant5 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 6)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox4->Text = "6";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "6")//Si la persona pone 6
		{
			if (cant6 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant6 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 6)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant6 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 7)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
				textBox4->Text = "7";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant6 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 7)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();
				textBox4->Text = "7";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "7")//Si la persona pone 7
		{
			if (cant7 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant7 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 7)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}
			if (cant7 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 8)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();

				textBox4->Text = "8";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			if (cant7 == 4)
			{
				int cont = 0;
				while (colaaux->Cima() != 8)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}

				textBox4->Text = "8";
				textBox6->Text = lacola->Imprimir();

				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "8")//Si la persona pone 8
		{

			if (cant8 == 1)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != nresponse)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();
			}
			if (cant8 == 2)
			{

				int cont = 0;
				while (lacola->Cima() != 8)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();

			}
			if (cant8 == 3)
			{
				int cont = 0;
				while (lapila->ObtenerCima() != 9)
				{
					pilaaux->Apilar(lapila->Desapilar());
					cont++;
				}
				lapila->Desapilar();
				for (int i = 0; i < cont; i++)
				{
					lapila->Apilar(pilaaux->Desapilar());
				}
				textBox5->Text = lapila->Imprimir();	textBox4->Text = "9";

				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			if (cant8 == 4)//se queda igual 
			{
				int cont = 0;
				while (colaaux->Cima() != 9)
				{

					lacola->Encolar(colaaux->Desencolar());
					cont++;
				}
				colaaux->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					lacola->Encolar(colaaux->Desencolar());
				}
				textBox6->Text = lacola->Imprimir();	textBox4->Text = "9";
				System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

			}
			textBox4->ReadOnly = true;
		}
		if (textBox4->Text == "9")//Si la persona pone 9
		{
			if (cant9 < 2)
			{
				lapila->Desapilar();
				textBox5->Text = lapila->Imprimir();
				textBox4->ReadOnly = true;
			}
			if (cant9 == 2)
			{
				int cont = 0;
				while (lacola->Cima() != 9)
				{
					colaaux->Encolar(lacola->Desencolar());
					cont++;
				}
				lacola->Desencolar();
				for (int i = 0; i < 9 - cont; i++)
				{
					colaaux->Encolar(lacola->Desencolar());
				}
				textBox6->Text = colaaux->Imprimir();
			}


		}
		if (textBox4->Text != "1" && textBox4->Text != "2" && textBox4->Text != "3" && textBox4->Text != "4" && textBox4->Text != "5" && textBox4->Text != "6" &&
			textBox4->Text != "7" && textBox4->Text != "8" && textBox4->Text != "9" && textBox4->Text != "0")
		{
			System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
			textBox4->Clear();
			button4->Enabled = true;
		}
	

		
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		int nresponse = Convert::ToInt32(textBox2->Text);
		//continuar
		if (nresponse == 0)
		{

			if (cant0 == 1)
			{
				cant0--;
				lapila->Apilar(0);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant0 == 2)
			{
				cant0--;
				lacola->Encolar(0);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 1)
		{

			if (cant1 == 1)
			{
				cant1--;
				lapila->Apilar(1);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant1 == 2)
			{
				cant1--;
				lacola->Encolar(1);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 2)
		{

			if (cant2 == 1)
			{
				lapila->Apilar(2);
				textBox5->Text = lapila->Imprimir();
				cant2--;
			}
			if (cant2 == 2)
			{
				cant2--;
				lacola->Encolar(2);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 3)
		{

			if (cant3 == 1)
			{
				cant3--;
				lapila->Apilar(3);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant3 == 2)
			{
				cant3--;
				lacola->Encolar(3);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 4)
		{

			if (cant4 == 1)
			{
				cant4--;
				lapila->Apilar(4);
				textBox5->Text = lapila->Imprimir();

			}
			if (cant4 == 2)
			{
				cant4--;
				lacola->Encolar(4);
				textBox6->Text = lacola->Imprimir();
			}

		}
		if (nresponse == 5)
		{

			if (cant5 == 1)
			{
				lapila->Apilar(5);
				textBox5->Text = lapila->Imprimir();
				cant5--;
			}
			if (cant5 == 2)
			{
				lacola->Encolar(5);
				textBox6->Text = lacola->Imprimir(); cant5--;
			}

		}
		if (nresponse == 6)
		{

			if (cant6 == 1)
			{
				lapila->Apilar(6);
				textBox5->Text = lapila->Imprimir(); cant6--;

			}
			if (cant6 == 2)
			{
				lacola->Encolar(6);
				textBox6->Text = lacola->Imprimir(); cant6--;
			}

		}
		if (nresponse == 7)
		{

			if (cant7 == 1)
			{
				lapila->Apilar(7);
				textBox5->Text = lapila->Imprimir(); cant7--;

			}
			if (cant7 == 2)
			{
				lacola->Encolar(7);
				textBox6->Text = lacola->Imprimir(); cant7--;
			}

		}
		if (nresponse == 8)
		{

			if (cant8 == 1)
			{
				lapila->Apilar(8);
				textBox5->Text = lapila->Imprimir();
				cant8--;
			}
			if (cant8 == 2)
			{
				lacola->Encolar(8);
				textBox6->Text = lacola->Imprimir();	cant8--;
			}

		}
		if (nresponse == 9)
		{

			if (cant9 == 1)
			{
				lapila->Apilar(9);
				textBox5->Text = lapila->Imprimir();
				cant9--;
			}
			if (cant9 == 2)
			{
				lacola->Encolar(9);
				textBox6->Text = lacola->Imprimir();
				cant9--;
			}

		}
		textBox2->Clear();
		textBox2->ReadOnly = false;
		button2->Enabled = true;
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	int nresponse = Convert::ToInt32(textBox3->Text);
	//continuar
	if (nresponse == 0)
	{

		if (cant0 == 1)
		{
			cant0--;
			lapila->Apilar(0);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant0 == 2)
		{
			cant0--;
			lacola->Encolar(0);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 1)
	{

		if (cant1 == 1)
		{
			cant1--;
			lapila->Apilar(1);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant1 == 2)
		{
			cant1--;
			lacola->Encolar(1);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 2)
	{

		if (cant2 == 1)
		{
			lapila->Apilar(2);
			textBox5->Text = lapila->Imprimir();
			cant2--;
		}
		if (cant2 == 2)
		{
			cant2--;
			lacola->Encolar(2);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 3)
	{

		if (cant3 == 1)
		{
			cant3--;
			lapila->Apilar(3);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant3 == 2)
		{
			cant3--;
			lacola->Encolar(3);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 4)
	{

		if (cant4 == 1)
		{
			cant4--;
			lapila->Apilar(4);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant4 == 2)
		{
			cant4--;
			lacola->Encolar(4);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 5)
	{

		if (cant5 == 1)
		{
			lapila->Apilar(5);
			textBox5->Text = lapila->Imprimir();
			cant5--;
		}
		if (cant5 == 2)
		{
			lacola->Encolar(5);
			textBox6->Text = lacola->Imprimir(); cant5--;
		}

	}
	if (nresponse == 6)
	{

		if (cant6 == 1)
		{
			lapila->Apilar(6);
			textBox5->Text = lapila->Imprimir(); cant6--;

		}
		if (cant6 == 2)
		{
			lacola->Encolar(6);
			textBox6->Text = lacola->Imprimir(); cant6--;
		}

	}
	if (nresponse == 7)
	{

		if (cant7 == 1)
		{
			lapila->Apilar(7);
			textBox5->Text = lapila->Imprimir(); cant7--;

		}
		if (cant7 == 2)
		{
			lacola->Encolar(7);
			textBox6->Text = lacola->Imprimir(); cant7--;
		}

	}
	if (nresponse == 8)
	{

		if (cant8 == 1)
		{
			lapila->Apilar(8);
			textBox5->Text = lapila->Imprimir();
			cant8--;
		}
		if (cant8 == 2)
		{
			lacola->Encolar(8);
			textBox6->Text = lacola->Imprimir();	cant8--;
		}

	}
	if (nresponse == 9)
	{

		if (cant9 == 1)
		{
			lapila->Apilar(9);
			textBox5->Text = lapila->Imprimir();
			cant9--;
		}
		if (cant9 == 2)
		{
			lacola->Encolar(9);
			textBox6->Text = lacola->Imprimir();
			cant9--;
		}

	}
	textBox3->Clear();
	textBox3->ReadOnly = false;
	button3->Enabled = true;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int nresponse = Convert::ToInt32(textBox4->Text);
	//continuar
	if (nresponse == 0)
	{

		if (cant0 == 1)
		{
			cant0--;
			lapila->Apilar(0);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant0 == 2)
		{
			cant0--;
			lacola->Encolar(0);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 1)
	{

		if (cant1 == 1)
		{
			cant1--;
			lapila->Apilar(1);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant1 == 2)
		{
			cant1--;
			lacola->Encolar(1);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 2)
	{

		if (cant2 == 1)
		{
			lapila->Apilar(2);
			textBox5->Text = lapila->Imprimir();
			cant2--;
		}
		if (cant2 == 2)
		{
			cant2--;
			lacola->Encolar(2);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 3)
	{

		if (cant3 == 1)
		{
			cant3--;
			lapila->Apilar(3);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant3 == 2)
		{
			cant3--;
			lacola->Encolar(3);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 4)
	{

		if (cant4 == 1)
		{
			cant4--;
			lapila->Apilar(4);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant4 == 2)
		{
			cant4--;
			lacola->Encolar(4);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 5)
	{

		if (cant5 == 1)
		{
			lapila->Apilar(5);
			textBox5->Text = lapila->Imprimir();
			cant5--;
		}
		if (cant5 == 2)
		{
			lacola->Encolar(5);
			textBox6->Text = lacola->Imprimir(); cant5--;
		}

	}
	if (nresponse == 6)
	{

		if (cant6 == 1)
		{
			lapila->Apilar(6);
			textBox5->Text = lapila->Imprimir(); cant6--;

		}
		if (cant6 == 2)
		{
			lacola->Encolar(6);
			textBox6->Text = lacola->Imprimir(); cant6--;
		}

	}
	if (nresponse == 7)
	{

		if (cant7 == 1)
		{
			lapila->Apilar(7);
			textBox5->Text = lapila->Imprimir(); cant7--;

		}
		if (cant7 == 2)
		{
			lacola->Encolar(7);
			textBox6->Text = lacola->Imprimir(); cant7--;
		}

	}
	if (nresponse == 8)
	{

		if (cant8 == 1)
		{
			lapila->Apilar(8);
			textBox5->Text = lapila->Imprimir();
			cant8--;
		}
		if (cant8 == 2)
		{
			lacola->Encolar(8);
			textBox6->Text = lacola->Imprimir();	cant8--;
		}

	}
	if (nresponse == 9)
	{

		if (cant9 == 1)
		{
			lapila->Apilar(9);
			textBox5->Text = lapila->Imprimir();
			cant9--;
		}
		if (cant9 == 2)
		{
			lacola->Encolar(9);
			textBox6->Text = lacola->Imprimir();
			cant9--;
		}

	}
	textBox4->Clear();
	textBox4->ReadOnly = false;
	button4->Enabled = true;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked)
	{
		button18->Enabled = true;
		textBox7->ReadOnly = false;
		textBox8->ReadOnly = false;
		textBox9->ReadOnly = false;
		textBox10->ReadOnly = false;
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	button18->Enabled = false;//el mismo botón se desactiva
	button17->Enabled = true;//el borrar
	button13->Enabled = true;//el siguiente se activa
	int nresponse = Convert::ToInt32(textBox7->Text);
	switch (nresponse)
	{
	case 0:
		cant0++;
		break;
	case 1:
		cant1++;
		break;
	case 2:
		cant2++;
		break;
	case 3:
		cant3++;
		break;
	case 4:
		cant4++;
		break;
	case 5:
		cant5++;
		break;
	case 6:
		cant6++;
		break;
	case 7:
		cant7++;
		break;
	case 8:
		cant8++;
		break;
	case 9:
		cant9++;
		break;
	}
	if (nresponse == 0)//Si la persona pone 0
	{
		if (cant0 == 1)//si es la primera vez que pone 0
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant0 == 2)//si es la segunda vez
		{
			lacola->Desencolar();
			textBox6->Text = lacola->Imprimir();

		}
		if (cant0 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 1)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox7->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant0 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 1)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox7->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "1")//Si la persona pone 1
	{

		if (cant1 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant1 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 1)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant1 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 2)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox7->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant1 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 2)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox7->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "2")//Si la persona pone 2
	{

		if (cant2 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant2 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 2)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant2 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 3)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox7->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant2 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 3)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox7->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "3")//Si la persona pone 3
	{

		if (cant3 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant3 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 3)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant3 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 4)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir(); textBox7->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant3 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 4)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox7->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "4")//Si la persona pone 4
	{

		if (cant4 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant4 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 4)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant4 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 5)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox7->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant4 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 5)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir(); textBox7->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "5")//Si la persona pone 5 
	{

		if (cant5 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant5 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 5)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant5 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 6)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox7->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant5 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 6)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox7->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "6")//Si la persona pone 6
	{
		if (cant6 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant6 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 6)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant6 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 7)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox7->Text = "7";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant6 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 7)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox7->Text = "7";

			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "7")//Si la persona pone 7
	{
		if (cant7 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant7 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 7)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant7 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 8)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox7->Text = "8";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant7 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 8)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}

			textBox7->Text = "8";
			textBox6->Text = lacola->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "8")//Si la persona pone 8
	{

		if (cant8 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant8 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 8)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant8 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 9)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox7->Text = "9";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant8 == 4)//se queda igual 
		{
			int cont = 0;
			while (colaaux->Cima() != 9)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox7->Text = "9";
			textBox6->Text = colaaux->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox7->ReadOnly = true;
	}
	if (textBox7->Text == "9")//Si la persona pone 9
	{
		if (cant9 < 2)
		{
			lapila->Desapilar();
			textBox5->Text = lapila->Imprimir();
			textBox7->ReadOnly = true;
		}
		if (cant9 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 9)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}


	}
	if (textBox7->Text != "1" && textBox7->Text != "2" && textBox7->Text != "3" && textBox7->Text != "4" && textBox7->Text != "5" && textBox7->Text != "6" &&
		textBox7->Text != "7" && textBox7->Text != "8" && textBox7->Text != "9" && textBox7->Text != "0")
	{
		System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
		textBox7->Clear();
		button1->Enabled = true;
	}
	button13->Enabled = true;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	button13->Enabled = false;
	button16->Enabled = true;
	button12->Enabled = true;
	int nresponse = Convert::ToInt32(textBox8->Text);
	switch (nresponse)
	{
	case 0:
		cant0++;
		break;
	case 1:
		cant1++;
		break;
	case 2:
		cant2++;
		break;
	case 3:
		cant3++;
		break;
	case 4:
		cant4++;
		break;
	case 5:
		cant5++;
		break;
	case 6:
		cant6++;
		break;
	case 7:
		cant7++;
		break;
	case 8:
		cant8++;
		break;
	case 9:
		cant9++;
		break;
	}
	if (nresponse == 0)//Si la persona pone 0
	{
		if (cant0 == 1)//si es la primera vez que pone 0
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant0 == 2)//si es la segunda vez
		{
			lacola->Desencolar();
			textBox6->Text = lacola->Imprimir();

		}
		if (cant0 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 1)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox8->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant0 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 1)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox8->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "1")//Si la persona pone 1
	{

		if (cant1 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant1 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 1)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant1 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 2)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox8->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant1 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 2)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox8->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "2")//Si la persona pone 2
	{

		if (cant2 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant2 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 2)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant2 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 3)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox8->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant2 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 3)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox8->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "3")//Si la persona pone 3
	{

		if (cant3 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant3 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 3)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant3 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 4)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir(); textBox8->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant3 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 4)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox8->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "4")//Si la persona pone 4
	{

		if (cant4 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant4 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 4)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant4 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 5)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox8->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant4 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 5)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir(); textBox8->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "5")//Si la persona pone 5 
	{

		if (cant5 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant5 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 5)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant5 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 6)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox8->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant5 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 6)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox8->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "6")//Si la persona pone 6
	{
		if (cant6 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant6 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 6)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant6 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 7)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox8->Text = "7";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant6 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 7)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox8->Text = "7";

			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "7")//Si la persona pone 7
	{
		if (cant7 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant7 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 7)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant7 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 8)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox8->Text = "8";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant7 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 8)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}

			textBox8->Text = "8";
			textBox6->Text = lacola->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "8")//Si la persona pone 8
	{

		if (cant8 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant8 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 8)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant8 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 9)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox8->Text = "9";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant8 == 4)//se queda igual 
		{
			int cont = 0;
			while (colaaux->Cima() != 9)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox8->Text = "9";
			textBox6->Text = colaaux->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox8->ReadOnly = true;
	}
	if (textBox8->Text == "9")//Si la persona pone 9
	{
		if (cant9 < 2)
		{
			lapila->Desapilar();
			textBox5->Text = lapila->Imprimir();
			textBox8->ReadOnly = true;
		}
		if (cant9 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 9)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}


	}
	if (textBox8->Text != "1" && textBox8->Text != "2" && textBox8->Text != "3" && textBox8->Text != "4" && textBox8->Text != "5" && textBox8->Text != "6" &&
		textBox8->Text != "7" && textBox8->Text != "8" && textBox8->Text != "9" && textBox8->Text != "0")
	{
		System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
		textBox8->Clear();
		button1->Enabled = true;
		
	}
	
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	button12->Enabled = false;
	button15->Enabled = true;
	button11->Enabled = true;
	int nresponse = Convert::ToInt32(textBox9->Text);
	switch (nresponse)
	{
	case 0:
		cant0++;
		break;
	case 1:
		cant1++;
		break;
	case 2:
		cant2++;
		break;
	case 3:
		cant3++;
		break;
	case 4:
		cant4++;
		break;
	case 5:
		cant5++;
		break;
	case 6:
		cant6++;
		break;
	case 7:
		cant7++;
		break;
	case 8:
		cant8++;
		break;
	case 9:
		cant9++;
		break;
	}
	if (nresponse == 0)//Si la persona pone 0
	{
		if (cant0 == 1)//si es la primera vez que pone 0
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant0 == 2)//si es la segunda vez
		{
			lacola->Desencolar();
			textBox6->Text = lacola->Imprimir();

		}
		if (cant0 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 1)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox9->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant0 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 1)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox9->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "1")//Si la persona pone 1
	{

		if (cant1 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant1 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 1)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant1 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 2)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox9->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant1 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 2)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox9->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "2")//Si la persona pone 2
	{

		if (cant2 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant2 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 2)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant2 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 3)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox9->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant2 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 3)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox9->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "3")//Si la persona pone 3
	{

		if (cant3 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant3 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 3)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant3 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 4)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir(); textBox9->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant3 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 4)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox9->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "4")//Si la persona pone 4
	{

		if (cant4 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant4 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 4)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant4 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 5)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox9->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant4 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 5)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir(); textBox9->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "5")//Si la persona pone 5 
	{

		if (cant5 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant5 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 5)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant5 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 6)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox9->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant5 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 6)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox9->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "6")//Si la persona pone 6
	{
		if (cant6 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant6 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 6)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant6 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 7)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox9->Text = "7";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant6 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 7)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox9->Text = "7";

			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "7")//Si la persona pone 7
	{
		if (cant7 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant7 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 7)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant7 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 8)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox9->Text = "8";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant7 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 8)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}

			textBox9->Text = "8";
			textBox6->Text = lacola->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "8")//Si la persona pone 8
	{

		if (cant8 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant8 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 8)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant8 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 9)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox9->Text = "9";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant8 == 4)//se queda igual 
		{
			int cont = 0;
			while (colaaux->Cima() != 9)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox9->Text = "9";
			textBox6->Text = colaaux->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox9->ReadOnly = true;
	}
	if (textBox9->Text == "9")//Si la persona pone 9
	{
		if (cant9 < 2)
		{
			lapila->Desapilar();
			textBox5->Text = lapila->Imprimir();
			textBox9->ReadOnly = true;
		}
		if (cant9 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 9)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}


	}
	if (textBox9->Text != "1" && textBox9->Text != "2" && textBox9->Text != "3" && textBox9->Text != "4" && textBox9->Text != "5" && textBox9->Text != "6" &&
		textBox9->Text != "7" && textBox9->Text != "8" && textBox9->Text != "9" && textBox9->Text != "0")
	{
		System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
		textBox9->Clear();
		button1->Enabled = true;
	}
	
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	button11->Enabled = false;
	button14->Enabled = true;
	int nresponse = Convert::ToInt32(textBox10->Text);
	switch (nresponse)
	{
	case 0:
		cant0++;
		break;
	case 1:
		cant1++;
		break;
	case 2:
		cant2++;
		break;
	case 3:
		cant3++;
		break;
	case 4:
		cant4++;
		break;
	case 5:
		cant5++;
		break;
	case 6:
		cant6++;
		break;
	case 7:
		cant7++;
		break;
	case 8:
		cant8++;
		break;
	case 9:
		cant9++;
		break;
	}
	if (nresponse == 0)//Si la persona pone 0
	{
		if (cant0 == 1)//si es la primera vez que pone 0
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant0 == 2)//si es la segunda vez
		{
			lacola->Desencolar();
			textBox6->Text = lacola->Imprimir();

		}
		if (cant0 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 1)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox10->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant0 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 1)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox10->Text = "1";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "1")//Si la persona pone 1
	{

		if (cant1 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant1 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 1)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant1 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 2)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox10->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant1 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 2)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox10->Text = "2";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "2")//Si la persona pone 2
	{

		if (cant2 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant2 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 2)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant2 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 3)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox10->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant2 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 3)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox10->Text = "3";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "3")//Si la persona pone 3
	{

		if (cant3 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant3 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 3)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant3 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 4)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir(); textBox10->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant3 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 4)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox10->Text = "4";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "4")//Si la persona pone 4
	{

		if (cant4 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant4 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 4)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant4 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 5)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox10->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant4 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 5)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir(); textBox10->Text = "5";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "5")//Si la persona pone 5 
	{

		if (cant5 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant5 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 5)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant5 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 6)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox10->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant5 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 6)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox10->Text = "6";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "6")//Si la persona pone 6
	{
		if (cant6 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant6 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 6)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant6 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 7)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox10->Text = "7";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant6 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 7)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();
			textBox10->Text = "7";

			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "7")//Si la persona pone 7
	{
		if (cant7 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant7 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 7)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}
		if (cant7 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 8)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
			textBox10->Text = "8";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		if (cant7 == 4)
		{
			int cont = 0;
			while (colaaux->Cima() != 8)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}

			textBox10->Text = "8";
			textBox6->Text = lacola->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");
		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "8")//Si la persona pone 8
	{

		if (cant8 == 1)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != nresponse)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();
		}
		if (cant8 == 2)
		{

			int cont = 0;
			while (lacola->Cima() != 8)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();

		}
		if (cant8 == 3)
		{
			int cont = 0;
			while (lapila->ObtenerCima() != 9)
			{
				pilaaux->Apilar(lapila->Desapilar());
				cont++;
			}
			lapila->Desapilar();
			for (int i = 0; i < cont; i++)
			{
				lapila->Apilar(pilaaux->Desapilar());
			}
			textBox5->Text = lapila->Imprimir();	textBox10->Text = "9";
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		if (cant8 == 4)//se queda igual 
		{
			int cont = 0;
			while (colaaux->Cima() != 9)
			{

				lacola->Encolar(colaaux->Desencolar());
				cont++;
			}
			colaaux->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				lacola->Encolar(colaaux->Desencolar());
			}
			textBox6->Text = lacola->Imprimir();	textBox10->Text = "9";
			textBox6->Text = colaaux->Imprimir();
			System::Windows::Forms::MessageBox::Show("Se agotaron los números, se aproxima al siguiente", "Aviso");

		}
		textBox10->ReadOnly = true;
	}
	if (textBox10->Text == "9")//Si la persona pone 9
	{
		if (cant9 < 2)
		{
			lapila->Desapilar();
			textBox5->Text = lapila->Imprimir();
			textBox10->ReadOnly = true;
		}
		if (cant9 == 2)
		{
			int cont = 0;
			while (lacola->Cima() != 9)
			{
				colaaux->Encolar(lacola->Desencolar());
				cont++;
			}
			lacola->Desencolar();
			for (int i = 0; i < 9 - cont; i++)
			{
				colaaux->Encolar(lacola->Desencolar());
			}
			textBox6->Text = colaaux->Imprimir();
		}


	}
	if (textBox10->Text != "1" && textBox10->Text != "2" && textBox10->Text != "3" && textBox10->Text != "4" && textBox10->Text != "5" && textBox10->Text != "6" &&
		textBox10->Text != "7" && textBox10->Text != "8" && textBox10->Text != "9" && textBox10->Text != "0")
	{
		System::Windows::Forms::MessageBox::Show("Número no válido", "Aviso");
		textBox10->Clear();
		button1->Enabled = true;
	}

}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	int nresponse = Convert::ToInt32(textBox7->Text);
	//continuar
	if (nresponse == 0)
	{

		if (cant0 == 1)
		{
			cant0--;
			lapila->Apilar(0);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant0 == 2)
		{
			cant0--;
			lacola->Encolar(0);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 1)
	{

		if (cant1 == 1)
		{
			cant1--;
			lapila->Apilar(1);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant1 == 2)
		{
			cant1--;
			lacola->Encolar(1);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 2)
	{

		if (cant2 == 1)
		{
			lapila->Apilar(2);
			textBox5->Text = lapila->Imprimir();
			cant2--;
		}
		if (cant2 == 2)
		{
			cant2--;
			lacola->Encolar(2);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 3)
	{

		if (cant3 == 1)
		{
			cant3--;
			lapila->Apilar(3);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant3 == 2)
		{
			cant3--;
			lacola->Encolar(3);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 4)
	{

		if (cant4 == 1)
		{
			cant4--;
			lapila->Apilar(4);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant4 == 2)
		{
			cant4--;
			lacola->Encolar(4);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 5)
	{

		if (cant5 == 1)
		{
			lapila->Apilar(5);
			textBox5->Text = lapila->Imprimir();
			cant5--;
		}
		if (cant5 == 2)
		{
			lacola->Encolar(5);
			textBox6->Text = lacola->Imprimir(); cant5--;
		}

	}
	if (nresponse == 6)
	{

		if (cant6 == 1)
		{
			lapila->Apilar(6);
			textBox5->Text = lapila->Imprimir(); cant6--;

		}
		if (cant6 == 2)
		{
			lacola->Encolar(6);
			textBox6->Text = lacola->Imprimir(); cant6--;
		}

	}
	if (nresponse == 7)
	{

		if (cant7 == 1)
		{
			lapila->Apilar(7);
			textBox5->Text = lapila->Imprimir(); cant7--;

		}
		if (cant7 == 2)
		{
			lacola->Encolar(7);
			textBox6->Text = lacola->Imprimir(); cant7--;
		}

	}
	if (nresponse == 8)
	{

		if (cant8 == 1)
		{
			lapila->Apilar(8);
			textBox5->Text = lapila->Imprimir();
			cant8--;
		}
		if (cant8 == 2)
		{
			lacola->Encolar(8);
			textBox6->Text = lacola->Imprimir();	cant8--;
		}

	}
	if (nresponse == 9)
	{

		if (cant9 == 1)
		{
			lapila->Apilar(9);
			textBox5->Text = lapila->Imprimir();
			cant9--;
		}
		if (cant9 == 2)
		{
			lacola->Encolar(9);
			textBox6->Text = lacola->Imprimir();
			cant9--;
		}

	}
	textBox7->Clear();
	textBox7->ReadOnly = false;
	button18->Enabled = true;
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	int nresponse = Convert::ToInt32(textBox8->Text);
	//continuar
	if (nresponse == 0)
	{

		if (cant0 == 1)
		{
			cant0--;
			lapila->Apilar(0);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant0 == 2)
		{
			cant0--;
			lacola->Encolar(0);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 1)
	{

		if (cant1 == 1)
		{
			cant1--;
			lapila->Apilar(1);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant1 == 2)
		{
			cant1--;
			lacola->Encolar(1);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 2)
	{

		if (cant2 == 1)
		{
			lapila->Apilar(2);
			textBox5->Text = lapila->Imprimir();
			cant2--;
		}
		if (cant2 == 2)
		{
			cant2--;
			lacola->Encolar(2);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 3)
	{

		if (cant3 == 1)
		{
			cant3--;
			lapila->Apilar(3);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant3 == 2)
		{
			cant3--;
			lacola->Encolar(3);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 4)
	{

		if (cant4 == 1)
		{
			cant4--;
			lapila->Apilar(4);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant4 == 2)
		{
			cant4--;
			lacola->Encolar(4);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 5)
	{

		if (cant5 == 1)
		{
			lapila->Apilar(5);
			textBox5->Text = lapila->Imprimir();
			cant5--;
		}
		if (cant5 == 2)
		{
			lacola->Encolar(5);
			textBox6->Text = lacola->Imprimir(); cant5--;
		}

	}
	if (nresponse == 6)
	{

		if (cant6 == 1)
		{
			lapila->Apilar(6);
			textBox5->Text = lapila->Imprimir(); cant6--;

		}
		if (cant6 == 2)
		{
			lacola->Encolar(6);
			textBox6->Text = lacola->Imprimir(); cant6--;
		}

	}
	if (nresponse == 7)
	{

		if (cant7 == 1)
		{
			lapila->Apilar(7);
			textBox5->Text = lapila->Imprimir(); cant7--;

		}
		if (cant7 == 2)
		{
			lacola->Encolar(7);
			textBox6->Text = lacola->Imprimir(); cant7--;
		}

	}
	if (nresponse == 8)
	{

		if (cant8 == 1)
		{
			lapila->Apilar(8);
			textBox5->Text = lapila->Imprimir();
			cant8--;
		}
		if (cant8 == 2)
		{
			lacola->Encolar(8);
			textBox6->Text = lacola->Imprimir();	cant8--;
		}

	}
	if (nresponse == 9)
	{

		if (cant9 == 1)
		{
			lapila->Apilar(9);
			textBox5->Text = lapila->Imprimir();
			cant9--;
		}
		if (cant9 == 2)
		{
			lacola->Encolar(9);
			textBox6->Text = lacola->Imprimir();
			cant9--;
		}

	}
	textBox8->Clear();
	textBox8->ReadOnly = false;
	button13->Enabled = true;
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	int nresponse = Convert::ToInt32(textBox9->Text);
	//continuar
	if (nresponse == 0)
	{

		if (cant0 == 1)
		{
			cant0--;
			lapila->Apilar(0);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant0 == 2)
		{
			cant0--;
			lacola->Encolar(0);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 1)
	{

		if (cant1 == 1)
		{
			cant1--;
			lapila->Apilar(1);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant1 == 2)
		{
			cant1--;
			lacola->Encolar(1);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 2)
	{

		if (cant2 == 1)
		{
			lapila->Apilar(2);
			textBox5->Text = lapila->Imprimir();
			cant2--;
		}
		if (cant2 == 2)
		{
			cant2--;
			lacola->Encolar(2);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 3)
	{

		if (cant3 == 1)
		{
			cant3--;
			lapila->Apilar(3);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant3 == 2)
		{
			cant3--;
			lacola->Encolar(3);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 4)
	{

		if (cant4 == 1)
		{
			cant4--;
			lapila->Apilar(4);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant4 == 2)
		{
			cant4--;
			lacola->Encolar(4);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 5)
	{

		if (cant5 == 1)
		{
			lapila->Apilar(5);
			textBox5->Text = lapila->Imprimir();
			cant5--;
		}
		if (cant5 == 2)
		{
			lacola->Encolar(5);
			textBox6->Text = lacola->Imprimir(); cant5--;
		}

	}
	if (nresponse == 6)
	{

		if (cant6 == 1)
		{
			lapila->Apilar(6);
			textBox5->Text = lapila->Imprimir(); cant6--;

		}
		if (cant6 == 2)
		{
			lacola->Encolar(6);
			textBox6->Text = lacola->Imprimir(); cant6--;
		}

	}
	if (nresponse == 7)
	{

		if (cant7 == 1)
		{
			lapila->Apilar(7);
			textBox5->Text = lapila->Imprimir(); cant7--;

		}
		if (cant7 == 2)
		{
			lacola->Encolar(7);
			textBox6->Text = lacola->Imprimir(); cant7--;
		}

	}
	if (nresponse == 8)
	{

		if (cant8 == 1)
		{
			lapila->Apilar(8);
			textBox5->Text = lapila->Imprimir();
			cant8--;
		}
		if (cant8 == 2)
		{
			lacola->Encolar(8);
			textBox6->Text = lacola->Imprimir();	cant8--;
		}

	}
	if (nresponse == 9)
	{

		if (cant9 == 1)
		{
			lapila->Apilar(9);
			textBox5->Text = lapila->Imprimir();
			cant9--;
		}
		if (cant9 == 2)
		{
			lacola->Encolar(9);
			textBox6->Text = lacola->Imprimir();
			cant9--;
		}

	}
	textBox9->Clear();
	textBox9->ReadOnly = false;
	button12->Enabled = true;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	int nresponse = Convert::ToInt32(textBox10->Text);
	//continuar
	if (nresponse == 0)
	{

		if (cant0 == 1)
		{
			cant0--;
			lapila->Apilar(0);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant0 == 2)
		{
			cant0--;
			lacola->Encolar(0);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 1)
	{

		if (cant1 == 1)
		{
			cant1--;
			lapila->Apilar(1);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant1 == 2)
		{
			cant1--;
			lacola->Encolar(1);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 2)
	{

		if (cant2 == 1)
		{
			lapila->Apilar(2);
			textBox5->Text = lapila->Imprimir();
			cant2--;
		}
		if (cant2 == 2)
		{
			cant2--;
			lacola->Encolar(2);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 3)
	{

		if (cant3 == 1)
		{
			cant3--;
			lapila->Apilar(3);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant3 == 2)
		{
			cant3--;
			lacola->Encolar(3);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 4)
	{

		if (cant4 == 1)
		{
			cant4--;
			lapila->Apilar(4);
			textBox5->Text = lapila->Imprimir();

		}
		if (cant4 == 2)
		{
			cant4--;
			lacola->Encolar(4);
			textBox6->Text = lacola->Imprimir();
		}

	}
	if (nresponse == 5)
	{

		if (cant5 == 1)
		{
			lapila->Apilar(5);
			textBox5->Text = lapila->Imprimir();
			cant5--;
		}
		if (cant5 == 2)
		{
			lacola->Encolar(5);
			textBox6->Text = lacola->Imprimir(); cant5--;
		}

	}
	if (nresponse == 6)
	{

		if (cant6 == 1)
		{
			lapila->Apilar(6);
			textBox5->Text = lapila->Imprimir(); cant6--;

		}
		if (cant6 == 2)
		{
			lacola->Encolar(6);
			textBox6->Text = lacola->Imprimir(); cant6--;
		}

	}
	if (nresponse == 7)
	{

		if (cant7 == 1)
		{
			lapila->Apilar(7);
			textBox5->Text = lapila->Imprimir(); cant7--;

		}
		if (cant7 == 2)
		{
			lacola->Encolar(7);
			textBox6->Text = lacola->Imprimir(); cant7--;
		}

	}
	if (nresponse == 8)
	{

		if (cant8 == 1)
		{
			lapila->Apilar(8);
			textBox5->Text = lapila->Imprimir();
			cant8--;
		}
		if (cant8 == 2)
		{
			lacola->Encolar(8);
			textBox6->Text = lacola->Imprimir();	cant8--;
		}

	}
	if (nresponse == 9)
	{

		if (cant9 == 1)
		{
			lapila->Apilar(9);
			textBox5->Text = lapila->Imprimir();
			cant9--;
		}
		if (cant9 == 2)
		{
			lacola->Encolar(9);
			textBox6->Text = lacola->Imprimir();
			cant9--;
		}

	}
	textBox10->Clear();
	textBox10->ReadOnly = false;
	button11->Enabled = true;
}
};
}