#include <iostream>
#include <string>
int CountPoint = 0;
double Num1, Num2, Num3;
int CountZero = 0;
#pragma once
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button0;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ labelText;
	private: System::Windows::Forms::Button^ buttonBackspace;
	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonEquals;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ buttonDivide;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonCE;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::CheckBox^ Dec;
	private: System::Windows::Forms::CheckBox^ Bin;
	private: System::Windows::Forms::Button^ sqrtx;
	private: System::Windows::Forms::Button^ pow2;
	private: System::Windows::Forms::Button^ reversex;
	private: System::Windows::Forms::Button^ modxy;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;








	private: System::ComponentModel::IContainer^ components;












	private:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->labelText = (gcnew System::Windows::Forms::Label());
			this->buttonBackspace = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->Dec = (gcnew System::Windows::Forms::CheckBox());
			this->Bin = (gcnew System::Windows::Forms::CheckBox());
			this->sqrtx = (gcnew System::Windows::Forms::Button());
			this->pow2 = (gcnew System::Windows::Forms::Button());
			this->reversex = (gcnew System::Windows::Forms::Button());
			this->modxy = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(95, 363);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(181, 362);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(9, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->button4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(95, 306);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 49);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->button5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(181, 306);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 49);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			this->button6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(9, 250);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 49);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			this->button7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(95, 250);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 49);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			this->button8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(181, 250);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 49);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			this->button9->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(9, 416);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 49);
			this->button10->TabIndex = 9;
			this->button10->Text = L"±";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			this->button10->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button0
			// 
			this->button0->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(95, 416);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(80, 49);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			this->button0->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(181, 416);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 49);
			this->button12->TabIndex = 11;
			this->button12->Text = L",";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			this->button12->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// labelText
			// 
			this->labelText->BackColor = System::Drawing::SystemColors::ControlLight;
			this->labelText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelText->Location = System::Drawing::Point(10, 63);
			this->labelText->Name = L"labelText";
			this->labelText->Size = System::Drawing::Size(369, 30);
			this->labelText->TabIndex = 12;
			this->labelText->Text = L"0";
			this->labelText->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelText->TextChanged += gcnew System::EventHandler(this, &MyForm::labelText_TextChanged);
			// 
			// buttonBackspace
			// 
			this->buttonBackspace->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonBackspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBackspace->Location = System::Drawing::Point(267, 147);
			this->buttonBackspace->Name = L"buttonBackspace";
			this->buttonBackspace->Size = System::Drawing::Size(109, 47);
			this->buttonBackspace->TabIndex = 13;
			this->buttonBackspace->Text = L"⌫";
			this->buttonBackspace->UseVisualStyleBackColor = true;
			this->buttonBackspace->Click += gcnew System::EventHandler(this, &MyForm::buttonBackspace_Click);
			this->buttonBackspace->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMultiply->Location = System::Drawing::Point(267, 252);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(109, 47);
			this->buttonMultiply->TabIndex = 14;
			this->buttonMultiply->Text = L"×";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOp);
			this->buttonMultiply->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->Location = System::Drawing::Point(267, 308);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(109, 47);
			this->buttonMinus->TabIndex = 15;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::EnterOp);
			this->buttonMinus->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->Location = System::Drawing::Point(267, 362);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(109, 47);
			this->buttonPlus->TabIndex = 16;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::EnterOp);
			this->buttonPlus->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// buttonEquals
			// 
			this->buttonEquals->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEquals->Location = System::Drawing::Point(267, 418);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(109, 47);
			this->buttonEquals->TabIndex = 17;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = true;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &MyForm::buttonEquals_Click);
			this->buttonEquals->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(9, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// buttonDivide
			// 
			this->buttonDivide->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivide->Location = System::Drawing::Point(267, 198);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(109, 47);
			this->buttonDivide->TabIndex = 18;
			this->buttonDivide->Text = L"÷";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::EnterOp);
			this->buttonDivide->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 30);
			this->label1->MaximumSize = System::Drawing::Size(300, 25);
			this->label1->MinimumSize = System::Drawing::Size(300, 25);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(300, 25);
			this->label1->TabIndex = 19;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// buttonCE
			// 
			this->buttonCE->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCE->Location = System::Drawing::Point(95, 147);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(80, 47);
			this->buttonCE->TabIndex = 20;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &MyForm::buttonCE_Click);
			this->buttonCE->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// buttonC
			// 
			this->buttonC->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(181, 147);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(80, 47);
			this->buttonC->TabIndex = 21;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			this->buttonC->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// Dec
			// 
			this->Dec->AutoSize = true;
			this->Dec->Checked = true;
			this->Dec->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Dec->Location = System::Drawing::Point(10, 7);
			this->Dec->Name = L"Dec";
			this->Dec->Size = System::Drawing::Size(55, 21);
			this->Dec->TabIndex = 23;
			this->Dec->Text = L"Dec";
			this->Dec->UseVisualStyleBackColor = true;
			this->Dec->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Dec_CheckedChanged);
			// 
			// Bin
			// 
			this->Bin->AutoSize = true;
			this->Bin->Location = System::Drawing::Point(10, 34);
			this->Bin->Name = L"Bin";
			this->Bin->Size = System::Drawing::Size(50, 21);
			this->Bin->TabIndex = 24;
			this->Bin->Text = L"Bin";
			this->Bin->UseVisualStyleBackColor = true;
			this->Bin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Bin_CheckedChanged);
			// 
			// sqrtx
			// 
			this->sqrtx->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->sqrtx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqrtx->Location = System::Drawing::Point(181, 197);
			this->sqrtx->Name = L"sqrtx";
			this->sqrtx->Size = System::Drawing::Size(80, 49);
			this->sqrtx->TabIndex = 25;
			this->sqrtx->Text = L"√x";
			this->sqrtx->UseVisualStyleBackColor = true;
			this->sqrtx->Click += gcnew System::EventHandler(this, &MyForm::sqrtx_Click);
			this->sqrtx->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// pow2
			// 
			this->pow2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pow2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pow2->Location = System::Drawing::Point(95, 197);
			this->pow2->Name = L"pow2";
			this->pow2->Size = System::Drawing::Size(80, 49);
			this->pow2->TabIndex = 26;
			this->pow2->Text = L"x²";
			this->pow2->UseVisualStyleBackColor = true;
			this->pow2->Click += gcnew System::EventHandler(this, &MyForm::pow2_Click);
			this->pow2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// reversex
			// 
			this->reversex->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->reversex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reversex->Location = System::Drawing::Point(9, 197);
			this->reversex->Name = L"reversex";
			this->reversex->Size = System::Drawing::Size(80, 49);
			this->reversex->TabIndex = 27;
			this->reversex->Text = L"⅟ₓ";
			this->reversex->UseVisualStyleBackColor = true;
			this->reversex->Click += gcnew System::EventHandler(this, &MyForm::reversex_Click);
			this->reversex->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// modxy
			// 
			this->modxy->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->modxy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modxy->Location = System::Drawing::Point(9, 147);
			this->modxy->Name = L"modxy";
			this->modxy->Size = System::Drawing::Size(80, 47);
			this->modxy->TabIndex = 28;
			this->modxy->Text = L"|x|";
			this->modxy->UseVisualStyleBackColor = true;
			this->modxy->Click += gcnew System::EventHandler(this, &MyForm::modxy_Click);
			this->modxy->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(9, 96);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 47);
			this->button11->TabIndex = 33;
			this->button11->Text = L"MC";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(95, 96);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 47);
			this->button13->TabIndex = 34;
			this->button13->Text = L"MR";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(181, 96);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 47);
			this->button14->TabIndex = 35;
			this->button14->Text = L"M+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(267, 96);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(109, 47);
			this->button15->TabIndex = 36;
			this->button15->Text = L"M-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(393, 473);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->modxy);
			this->Controls->Add(this->reversex);
			this->Controls->Add(this->pow2);
			this->Controls->Add(this->sqrtx);
			this->Controls->Add(this->Bin);
			this->Controls->Add(this->Dec);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonBackspace);
			this->Controls->Add(this->labelText);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(411, 520);
			this->MinimumSize = System::Drawing::Size(411, 520);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Tag = L"";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Enter += gcnew System::EventHandler(this, &MyForm::EnterOp);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::KeyClick);
			this->ResumeLayout(false);
			this->PerformLayout();



			this->button11->Enabled = 0;
			this->button13->Enabled = 0;
			this->button14->Enabled = 1;
			this->button15->Enabled = 1;

		}
#pragma endregion
		double First = NULL, Second = NULL, Result = NULL, Third = NULL;
		bool changeOp = 0;
		String^ operators;
		String^ operators1;
		int first, second, third, result;
		String^ firsts;
		String^ seconds;
		String^ results;
		int firstb, secondb, resultb;
		String^ save; bool saveChanged = 0; double numm = 0;
		


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "1";
		}
		else
		{
			labelText->Text = "1";
		}


	}

	private: System::Void buttonBackspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (labelText->Text->Contains("E"))
		{
			return;
		}
		if (labelText->Text->Length > 0)
		{
			labelText->Text = labelText->Text->Remove(labelText->Text->Length - 1, 1);
		}
		if (labelText->Text == "")
		{
			labelText->Text = "0";
		}
	}
	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void labelText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		/* (label1->Text->Contains("="))
		{
			labelText->Text = "0";
			label1->Text = "";
		}*/


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "2";
		}
		else
		{
			labelText->Text = "2";
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "3";
		}
		else
		{
			labelText->Text = "3";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "4";
		}
		else
		{
			labelText->Text = "4";
		}

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "5";
		}
		else
		{
			labelText->Text = "5";
		}

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "6";
		}
		else
		{
			labelText->Text = "6";
		}

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "7";
		}
		else
		{
			labelText->Text = "7";
		}

	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "8";
		}
		else
		{
			labelText->Text = "8";

		}

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
		{
			labelText->Text += "9";
		}
		else
		{
			labelText->Text = "9";
		}

	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (labelText->Text != "0")
			labelText->Text += "0";
		else 
			labelText->Text = "0";
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text->EndsWith("="))
		{
			buttonC_Click(sender, e);
		}
		if (!labelText->Text->Contains(",") && labelText->Text != "") {
			labelText->Text += ",";
		}
	};

	private: System::Void buttonEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (Bin->Checked == 0)
		{
			/*if (changeOp && operators == "/" && labelText->Text == "0") 
				//if (Second == 0)
				{
					label1->Text = "Cannot be divided by zero";
					labelText->Text = "0";
				}*/
			if (changeOp) Second = Convert::ToDouble(labelText->Text);
			
			if (operators == "+")
			{
				Result = First + Second;
				labelText->Text = System::Convert::ToString(Result);
				label1->Text = System::Convert::ToString(First) + "+" + System::Convert::ToString(Second) + "=";
				//First = Result;

			}
			if (operators == "-")
			{
				Result = First - Second;
				labelText->Text = System::Convert::ToString(Result);
				label1->Text = System::Convert::ToString(First) + "-" + System::Convert::ToString(Second) + "=";
				//First = Result;

			}
			if (operators == "*")
			{
				Result = First * Second;
				labelText->Text = System::Convert::ToString(Result);
				label1->Text = System::Convert::ToString(First) + "*" + System::Convert::ToString(Second) + "=";
				//First = Result;
			}
			if (operators == "/")
			{
				label1->Text = System::Convert::ToString(First) + "/" + System::Convert::ToString(Second) + "=";
				if (Second == 0)
				{
					label1->Text = "Cannot be divided by zero";
					labelText->Text = "0";
				}
				else
				{
					Result = First / Second;
					labelText->Text = System::Convert::ToString(Result);
					//First = Result;
				}

			}
			changeOp = 0;
		}
		else
		{
			if (changeOp) secondb = int::Parse(labelText->Text);
			first = int::Parse(to_string(Convert::ToString(firstb)));
			second = int::Parse(to_string(Convert::ToString(secondb)));
			if (operators == "+")
			{
				result = first + second;
				resultb = Convert::ToInt32(to_binary(result));
				labelText->Text = Convert::ToString(resultb);
				label1->Text = Convert::ToString(firstb) + "+" + Convert::ToString(secondb) + "=";
				//firstb = resultb;
			}
			if (operators == "-")
			{
				result = first - second;
				resultb = int::Parse(to_binary(result));
				labelText->Text = Convert::ToString(resultb);
				label1->Text = Convert::ToString(firstb) + "-" + Convert::ToString(secondb) + "=";
				//firstb = resultb;

			}
			if (operators == "*")
			{
				result = first * second;
				resultb = int::Parse(to_binary(result));
				labelText->Text = Convert::ToString(resultb);
				label1->Text = Convert::ToString(firstb) + "*" + Convert::ToString(secondb) + "=";
				//firstb = resultb;
			}
			if (operators == "/")
			{
				label1->Text = Convert::ToString(firstb) + "/" + Convert::ToString(secondb) + "=";
				if (second == 0)
				{
					label1->Text = "Cannot be divided by zero";
					labelText->Text = "0";
				}
				else
				{
					result = first / second;
					resultb = int::Parse(to_binary(result));
					labelText->Text = Convert::ToString(resultb);
					//firstb = resultb;
				}

			}
			changeOp = 0;
			if (result < 0 || first < 0 || second < 0)
			{
				buttonC_Click(sender, e);
				label1->Text = "Invalid value";
			}
		}
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonCE_Click(System::Object^ sender, System::EventArgs^ e) {
		labelText->Text = "0";
		Second = NULL;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (labelText->Text->Contains("-"))
		{
			labelText->Text = labelText->Text->Remove(0, 1);
		}
		else
		{
			if (labelText->Text != "0")
				labelText->Text = "-" + labelText->Text;
		}
	}
	private: System::Void EnterOp(System::Object^ sender, System::EventArgs^ e) {
		
		if (Bin->Checked == 0)
		{
			Button^ NumbersOp;
			NumbersOp = safe_cast<Button^>(sender);
			if (changeOp == 1)
			{
				if (Result != NULL) First = Result;
				buttonEquals_Click(sender, e);
			}
			

			else
				First = Double::Parse(labelText->Text);


			if (NumbersOp->Text->Contains("+"))
				operators = "+";
			if (NumbersOp->Text->Contains("-"))
				operators = "-";
			if (NumbersOp->Text->Contains("×"))
				operators = "*";
			if (NumbersOp->Text->Contains("÷"))
				operators = "/";
			label1->Text = labelText->Text + operators;
			//label1->Text = System::Convert::ToString(First) + " " + System::Convert::ToString(Second) + " " + System::Convert::ToString(Result);
			labelText->Text = "0";
			changeOp = 1;
		}
		else
		{
			Button^ NumbersOp;
			NumbersOp = safe_cast<Button^>(sender);
			if (changeOp == 1)
			{
				firstb = resultb;
				buttonEquals_Click(sender, e);
			}


			else
				firstb = int::Parse(labelText->Text);

			if (NumbersOp->Text->Contains("+"))
				operators = "+";
			if (NumbersOp->Text->Contains("-"))
				operators = "-";
			if (NumbersOp->Text->Contains("×"))
				operators = "*";
			if (NumbersOp->Text->Contains("÷"))
				operators = "/";
			label1->Text = labelText->Text + operators;
			labelText->Text = "0";
			changeOp = 1;
		}
		
		
	}


	private: System::Void KeyClick(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
		case System::Windows::Forms::Keys::NumPad1:
			button1_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad2:
			button2_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad3:
			button3_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad4:
			button4_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad5:
			button5_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad6:
			button6_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad7:
			button7_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad8:
			button8_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad9:
			button9_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::NumPad0:
			button0_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::Back:
			buttonBackspace_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::Divide:
			labelText->Text += "/";
			EnterOp(sender, e);
			break;
		case System::Windows::Forms::Keys::Multiply:
			labelText->Text += "*";
			EnterOp(sender, e);
			break;

		case System::Windows::Forms::Keys::Decimal:
			button12_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::Enter:
			buttonEquals_Click(sender, e);
			break;
		case System::Windows::Forms::Keys::OemMinus:
			labelText->Text += "-";
			EnterOp(sender, e);
			break;
		case System::Windows::Forms::Keys::Oemplus:
			labelText->Text += "+";
			EnterOp(sender, e);
			break;
			/*case System::Windows::Forms::Keys::Enter:
				operators = "=";
				EnterOp(sender, e);
				break;*/
		}

		/*if (e->KeyCode == System::Windows::Forms::Keys::NumPad1)
		{
			button1_Click(sender, e);
		}*/
	}
	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonCE_Click(sender, e);
		label1->Text = "";
		First = NULL;
		Second = NULL;
		Result = NULL;
		Third = NULL;
		changeOp = 0;
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Dec_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
   		
		Bin->Checked = false;
		if (Bin->Checked == 0 && Dec->Checked == 0)
		{
			label1->Text = "Choose a notation";
			labelText->Text = "0";


			button1->Enabled=0;
			button2->Enabled = 0;
			button3->Enabled = 0;
			button4->Enabled = 0;
			button5->Enabled = 0;
			button6->Enabled = 0;
			button7->Enabled = 0;
			button8->Enabled = 0;
			button9->Enabled = 0;
			button10->Enabled = 0;
			button0->Enabled = 0;
			button12->Enabled = 0;
			labelText->Enabled = 0;
			buttonBackspace->Enabled = 0;
			buttonMultiply->Enabled = 0;
			buttonMinus->Enabled = 0;
			buttonPlus->Enabled = 0;
			buttonEquals->Enabled = 0;
			buttonDivide->Enabled = 0;
			buttonCE->Enabled = 0;
			buttonC->Enabled = 0;
			sqrtx->Enabled = 0;
			pow2->Enabled = 0;
			reversex->Enabled = 0;
			modxy->Enabled = 0;
			button11->Enabled = 0;
			button13->Enabled = 0;
			button14->Enabled = 0;
			button15->Enabled = 0;


		}
		else
		{	
			label1->Text = "";
			labelText->Text = "0";

			button1->Enabled = 1;
			button2->Enabled = 1;
			button3->Enabled = 1;
			button4->Enabled = 1;
			button5->Enabled = 1;
			button6->Enabled = 1;
			button7->Enabled = 1;
			button8->Enabled = 1;
			button9->Enabled = 1;
			button10->Enabled = 1;
			button0->Enabled = 1;
			button12->Enabled = 1;
			labelText->Enabled = 1;
			buttonBackspace->Enabled = 1;
			buttonMultiply->Enabled = 1;
			buttonMinus->Enabled = 1;
			buttonPlus->Enabled = 1;
			buttonEquals->Enabled = 1;
			buttonDivide->Enabled = 1;
			buttonCE->Enabled = 1;
			buttonC->Enabled = 1;
			sqrtx->Enabled = 1;
			pow2->Enabled = 1;
			reversex->Enabled = 1;
			modxy->Enabled = 1;
			button11->Enabled = 0;
			button13->Enabled = 0;
			button14->Enabled = 1;
			button15->Enabled = 1;

		}
		//if (Dec->Checked == false) Dec->Checked = true;
	}
		   
	private: System::Void Bin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		Dec->Checked = false;
		if (Bin->Checked == 0 && Dec->Checked == 0)
		{
			label1->Text = "Choose a notation";
			labelText->Text = "0";

			button1->Enabled = 0;
			button2->Enabled = 0;
			button3->Enabled = 0;
			button4->Enabled = 0;
			button5->Enabled = 0;
			button6->Enabled = 0;
			button7->Enabled = 0;
			button8->Enabled = 0;
			button9->Enabled = 0;
			button10->Enabled = 0;
			button0->Enabled = 0;
			button12->Enabled = 0;
			labelText->Enabled = 0;
			buttonBackspace->Enabled = 0;
			buttonMultiply->Enabled = 0;
			buttonMinus->Enabled = 0;
			buttonPlus->Enabled = 0;
			buttonEquals->Enabled = 0;
			buttonDivide->Enabled = 0;
			buttonCE->Enabled = 0;
			buttonC->Enabled = 0;
			sqrtx->Enabled = 0;
			pow2->Enabled = 0;
			reversex->Enabled = 0;
			modxy->Enabled = 0;
			button11->Enabled = 0;
			button13->Enabled = 0;
			button14->Enabled = 0;
			button15->Enabled = 0;
		}
		else
		{
			label1->Text = "";
			labelText->Text = "0";


			button1->Enabled = 1;
			button2->Enabled = 1;
			button3->Enabled = 1;
			button4->Enabled = 1;
			button5->Enabled = 1;
			button6->Enabled = 1;
			button7->Enabled = 1;
			button8->Enabled = 1;
			button9->Enabled = 1;
			button10->Enabled = 1;
			button0->Enabled = 1;
			button12->Enabled = 1;
			labelText->Enabled = 1;
			buttonBackspace->Enabled = 1;
			buttonMultiply->Enabled = 1;
			buttonMinus->Enabled = 1;
			buttonPlus->Enabled = 1;
			buttonEquals->Enabled = 1;
			buttonDivide->Enabled = 1;
			buttonCE->Enabled = 1;
			buttonC->Enabled = 1;
			sqrtx->Enabled = 1;
			pow2->Enabled = 1;
			reversex->Enabled = 1;
			modxy->Enabled = 1;
			button11->Enabled = 0;
			button13->Enabled = 0;
			button14->Enabled = 0;
			button15->Enabled = 0;
			if (Bin->Checked == 1)
			{
				button1->Enabled = 1;
				button2->Enabled = 0;
				button3->Enabled = 0;
				button4->Enabled = 0;
				button5->Enabled = 0;
				button6->Enabled = 0;
				button7->Enabled = 0;
				button8->Enabled = 0;
				button9->Enabled = 0;
				button10->Enabled = 0;
				button0->Enabled = 1;
				button12->Enabled = 0;
				labelText->Enabled = 1;
				buttonBackspace->Enabled = 1;
				buttonMultiply->Enabled = 1;
				buttonMinus->Enabled = 1;
				buttonPlus->Enabled = 1;
				buttonEquals->Enabled = 1;
				buttonDivide->Enabled = 1;
				buttonCE->Enabled = 1;
				buttonC->Enabled = 1;
				sqrtx->Enabled = 0;
				pow2->Enabled = 0;
				reversex->Enabled = 0;
				modxy->Enabled = 0;
				button11->Enabled = 0;
				button13->Enabled = 0;
				button14->Enabled = 0;
				button15->Enabled = 0;
			}

		}
		//if (Bin->Checked == false) Bin->Checked = true;

	}

private: System::Void sqrtx_Click(System::Object^ sender, System::EventArgs^ e) {
	First = Double::Parse(labelText->Text);
	if (First < 0)
	{
		label1->Text = "Invalid value";
		labelText->Text = "0";
	}
	else
	{
		label1->Text = "sqrt(" + labelText->Text + ")=";
		labelText->Text = Convert::ToString(sqrt(First));
	}
}
private: System::Void pow2_Click(System::Object^ sender, System::EventArgs^ e) {
	First = Double::Parse(labelText->Text);
	label1->Text = labelText->Text + "^2=";
	labelText->Text = Convert::ToString(First*First);
}
private: System::Void reversex_Click(System::Object^ sender, System::EventArgs^ e) {
	First = Convert::ToDouble(labelText->Text);
	if (First == 0)
	{
		label1->Text = "Cannot be divided by zero";
		labelText->Text = "0";
	}
	else
	{
		label1->Text = "1/" + labelText->Text + "=";
		Result = 1.0 / (First);
		labelText->Text = Convert::ToString(Result);
	}
}
private: System::Void modxy_Click(System::Object^ sender, System::EventArgs^ e) {
	First = Double::Parse(labelText->Text);
	label1->Text = "abs(" + labelText->Text + ")=";
	labelText->Text = Convert::ToString(fabs(First));
}
private: String^ to_binary(int n)
{
	String^ result;
	do
	{
		if (n % 2 == 0)
			result = ("0") + result; //// '0' + (n % 2)
		else 
			result = ("1") + result;
		n = n / 2;
	} while (n > 0);
	return result;
}
/*private: String^ to_binary(int n)
{

	
	String^ result;
	bool negative = (n < 0);
	if (negative)
		n = -n;
	do
	{
		if (n % 2 == 0)
			result = ("0") + result; //// '0' + (n % 2)
		else
			result = ("1") + result;
		n = n / 2;
	} while (n > 0);
	if (negative)
		result = "-" + result;
	return result;
}*/
private: String^ to_string(String^ s)
{
	int n = 0;
	for (int i = 0; i < s->Length; i++)
	{
		n *= 2;
		n += s[i] - '0';
	}
	return Convert::ToString(n);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button11->Enabled == 0)
	{
		numm = Double::Parse(labelText->Text);
		save = Convert::ToString(numm);
	}
	else
	{
		save = Convert::ToString(numm + Double::Parse(save));
	}

	button11->Enabled = 1;
	button13->Enabled = 1;
	button14->Enabled = 1;
	button15->Enabled = 1;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	labelText->Text = save;
	button11->Enabled = 1;
	button13->Enabled = 1;
	button14->Enabled = 1;
	button15->Enabled = 1;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	save = "";
	numm = 0;
	button11->Enabled = 0;
	button13->Enabled = 0;
	button14->Enabled = 1;
	button15->Enabled = 1;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button11->Enabled == 0)
	{
		numm = Double::Parse(labelText->Text);
		save = Convert::ToString(-numm);
	}
	else
	{
		save = Convert::ToString(-numm + Double::Parse(save));
	}
	button11->Enabled = 1;
	button13->Enabled = 1;
	button14->Enabled = 1;
	button15->Enabled = 1;
}
};
}
