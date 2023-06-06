#pragma once

namespace kalkulatorm1 {

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
	private: System::Windows::Forms::Label^ output;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ tambah;

	private: System::Windows::Forms::Button^ kurang;

	private: System::Windows::Forms::Button^ kali;

	private: System::Windows::Forms::Button^ bagi;
	private: System::Windows::Forms::Button^ hasil;
	private: System::Windows::Forms::Button^ button0;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Label^ showoperand;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button00;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sainsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lengkapToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ HistoryToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ HistoryToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ keluarToolStripMenuItem;

	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;














	private: System::Windows::Forms::ToolStripMenuItem^ konversiTemperaturToolStripMenuItem;

	protected:

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
			this->output = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tambah = (gcnew System::Windows::Forms::Button());
			this->kurang = (gcnew System::Windows::Forms::Button());
			this->kali = (gcnew System::Windows::Forms::Button());
			this->bagi = (gcnew System::Windows::Forms::Button());
			this->hasil = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->showoperand = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button00 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sainsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lengkapToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HistoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->HistoryToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->keluarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->konversiTemperaturToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->output->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->output->Location = System::Drawing::Point(52, 61);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(407, 65);
			this->output->TabIndex = 0;
			this->output->Text = L"0";
			this->output->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(60, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 85);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(140, 374);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 85);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(217, 374);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 85);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(60, 269);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 86);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(140, 269);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 86);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(217, 269);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 86);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(60, 168);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(69, 85);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(142, 168);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(69, 85);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(217, 168);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(69, 85);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// tambah
			// 
			this->tambah->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tambah->Font = (gcnew System::Drawing::Font(L"Lucida Console", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tambah->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tambah->Location = System::Drawing::Point(315, 220);
			this->tambah->Name = L"tambah";
			this->tambah->Size = System::Drawing::Size(69, 85);
			this->tambah->TabIndex = 10;
			this->tambah->Text = L"+";
			this->tambah->UseVisualStyleBackColor = true;
			this->tambah->Click += gcnew System::EventHandler(this, &MyForm::aritmatika);
			// 
			// kurang
			// 
			this->kurang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kurang->Font = (gcnew System::Drawing::Font(L"Lucida Console", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->kurang->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->kurang->Location = System::Drawing::Point(315, 311);
			this->kurang->Name = L"kurang";
			this->kurang->Size = System::Drawing::Size(69, 85);
			this->kurang->TabIndex = 11;
			this->kurang->Text = L"-";
			this->kurang->UseVisualStyleBackColor = true;
			this->kurang->Click += gcnew System::EventHandler(this, &MyForm::aritmatika);
			// 
			// kali
			// 
			this->kali->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->kali->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->kali->Location = System::Drawing::Point(315, 493);
			this->kali->Name = L"kali";
			this->kali->Size = System::Drawing::Size(69, 85);
			this->kali->TabIndex = 12;
			this->kali->Text = L"X";
			this->kali->UseVisualStyleBackColor = true;
			this->kali->Click += gcnew System::EventHandler(this, &MyForm::aritmatika);
			// 
			// bagi
			// 
			this->bagi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bagi->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bagi->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bagi->Location = System::Drawing::Point(315, 402);
			this->bagi->Name = L"bagi";
			this->bagi->Size = System::Drawing::Size(69, 85);
			this->bagi->TabIndex = 13;
			this->bagi->Text = L"/";
			this->bagi->UseVisualStyleBackColor = true;
			this->bagi->Click += gcnew System::EventHandler(this, &MyForm::aritmatika);
			// 
			// hasil
			// 
			this->hasil->BackColor = System::Drawing::Color::DodgerBlue;
			this->hasil->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hasil->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hasil->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->hasil->Location = System::Drawing::Point(57, 579);
			this->hasil->Name = L"hasil";
			this->hasil->Size = System::Drawing::Size(229, 61);
			this->hasil->TabIndex = 14;
			this->hasil->Text = L"=";
			this->hasil->UseVisualStyleBackColor = false;
			this->hasil->Click += gcnew System::EventHandler(this, &MyForm::Hasil_Click_1);
			// 
			// button0
			// 
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button0->Location = System::Drawing::Point(60, 475);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(71, 85);
			this->button0->TabIndex = 15;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(512, 168);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(77, 85);
			this->button11->TabIndex = 16;
			this->button11->Text = L"Sin";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button11_Click);
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(595, 168);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(77, 85);
			this->button12->TabIndex = 17;
			this->button12->Text = L"SinH";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Button12_Click);
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(678, 168);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(77, 85);
			this->button13->TabIndex = 18;
			this->button13->Text = L"Cos";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button13_Click);
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->Location = System::Drawing::Point(761, 168);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(77, 85);
			this->button14->TabIndex = 19;
			this->button14->Text = L"CosH";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button14_Click);
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(512, 259);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(77, 85);
			this->button15->TabIndex = 20;
			this->button15->Text = L"Tan";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button15_Click);
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Location = System::Drawing::Point(595, 259);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(77, 85);
			this->button16->TabIndex = 21;
			this->button16->Text = L"TanH";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Button16_Click);
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Location = System::Drawing::Point(678, 259);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(77, 85);
			this->button18->TabIndex = 23;
			this->button18->Text = L"Cosec";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Button18_Click);
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(512, 350);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(77, 85);
			this->button19->TabIndex = 24;
			this->button19->Text = L"Mod";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::aritmatika);
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button20->Location = System::Drawing::Point(595, 350);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(77, 85);
			this->button20->TabIndex = 25;
			this->button20->Text = L"Log";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Button20_Click);
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Location = System::Drawing::Point(678, 350);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(77, 85);
			this->button21->TabIndex = 26;
			this->button21->Text = L"Dec";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Button21_Click);
			// 
			// button22
			// 
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button22->Location = System::Drawing::Point(761, 259);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(77, 85);
			this->button22->TabIndex = 27;
			this->button22->Text = L"Sqrt";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Button22_Click);
			// 
			// button23
			// 
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button23->Location = System::Drawing::Point(512, 441);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(77, 85);
			this->button23->TabIndex = 28;
			this->button23->Text = L"HEX";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Button23_Click);
			// 
			// button24
			// 
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button24->Location = System::Drawing::Point(595, 441);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(77, 85);
			this->button24->TabIndex = 29;
			this->button24->Text = L"Oct";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::Button24_Click);
			// 
			// button25
			// 
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button25->Location = System::Drawing::Point(678, 441);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(77, 85);
			this->button25->TabIndex = 30;
			this->button25->Text = L"Bin";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::Button25_Click);
			// 
			// button26
			// 
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button26->Location = System::Drawing::Point(761, 350);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(77, 85);
			this->button26->TabIndex = 31;
			this->button26->Text = L"Exp";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::aritmatika);
			// 
			// button27
			// 
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Wingdings", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button27->Location = System::Drawing::Point(315, 168);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(144, 46);
			this->button27->TabIndex = 32;
			this->button27->Text = L"";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::Button27_Click);
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button28->Location = System::Drawing::Point(217, 475);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(69, 85);
			this->button28->TabIndex = 33;
			this->button28->Text = L".";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::Button28_Click);
			// 
			// showoperand
			// 
			this->showoperand->AutoSize = true;
			this->showoperand->BackColor = System::Drawing::Color::White;
			this->showoperand->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->showoperand->Location = System::Drawing::Point(57, 61);
			this->showoperand->Name = L"showoperand";
			this->showoperand->Size = System::Drawing::Size(0, 16);
			this->showoperand->TabIndex = 34;
			this->showoperand->Click += gcnew System::EventHandler(this, &MyForm::Showoperand_Click);
			// 
			// button29
			// 
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Centaur", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button29->Location = System::Drawing::Point(390, 311);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(69, 85);
			this->button29->TabIndex = 35;
			this->button29->Text = L"±";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::Button29_Click);
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Centaur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button30->Location = System::Drawing::Point(390, 402);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(69, 85);
			this->button30->TabIndex = 36;
			this->button30->Text = L"π";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::Button30_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(57, 685);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(229, 180);
			this->listBox1->TabIndex = 37;
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(390, 220);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(69, 85);
			this->button10->TabIndex = 38;
			this->button10->Text = L"CE";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button10_Click_1);
			// 
			// button00
			// 
			this->button00->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button00->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button00->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button00->Location = System::Drawing::Point(140, 475);
			this->button00->Name = L"button00";
			this->button00->Size = System::Drawing::Size(71, 85);
			this->button00->TabIndex = 39;
			this->button00->Text = L"00";
			this->button00->UseVisualStyleBackColor = true;
			this->button00->Click += gcnew System::EventHandler(this, &MyForm::button_klik);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->konversiTemperaturToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(865, 28);
			this->menuStrip1->TabIndex = 40;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->standarToolStripMenuItem,
					this->sainsToolStripMenuItem, this->lengkapToolStripMenuItem, this->HistoryToolStripMenuItem, this->HistoryToolStripMenuItem1,
					this->keluarToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// standarToolStripMenuItem
			// 
			this->standarToolStripMenuItem->Name = L"standarToolStripMenuItem";
			this->standarToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->standarToolStripMenuItem->Text = L"Kalkulator Standar";
			this->standarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::StandarToolStripMenuItem_Click);
			// 
			// sainsToolStripMenuItem
			// 
			this->sainsToolStripMenuItem->Name = L"sainsToolStripMenuItem";
			this->sainsToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->sainsToolStripMenuItem->Text = L"Kalkulator Sains";
			this->sainsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SainsToolStripMenuItem_Click);
			// 
			// lengkapToolStripMenuItem
			// 
			this->lengkapToolStripMenuItem->Name = L"lengkapToolStripMenuItem";
			this->lengkapToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->lengkapToolStripMenuItem->Text = L"Lengkap";
			// 
			// HistoryToolStripMenuItem
			// 
			this->HistoryToolStripMenuItem->Checked = true;
			this->HistoryToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->HistoryToolStripMenuItem->Name = L"HistoryToolStripMenuItem";
			this->HistoryToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->HistoryToolStripMenuItem->Text = L"History";
			this->HistoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::HistoryToolStripMenuItem_Click);
			// 
			// HistoryToolStripMenuItem1
			// 
			this->HistoryToolStripMenuItem1->Name = L"HistoryToolStripMenuItem1";
			this->HistoryToolStripMenuItem1->Size = System::Drawing::Size(214, 26);
			this->HistoryToolStripMenuItem1->Text = L"History";
			this->HistoryToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::HistoryToolStripMenuItem1_Click);
			// 
			// keluarToolStripMenuItem
			// 
			this->keluarToolStripMenuItem->Name = L"keluarToolStripMenuItem";
			this->keluarToolStripMenuItem->Size = System::Drawing::Size(214, 26);
			this->keluarToolStripMenuItem->Text = L"Keluar";
			this->keluarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::KeluarToolStripMenuItem_Click);
			// 
			// konversiTemperaturToolStripMenuItem
			// 
			this->konversiTemperaturToolStripMenuItem->Name = L"konversiTemperaturToolStripMenuItem";
			this->konversiTemperaturToolStripMenuItem->Size = System::Drawing::Size(167, 24);
			this->konversiTemperaturToolStripMenuItem->Text = L"Konverter Temperatur";
			this->konversiTemperaturToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::KonversiTemperaturToolStripMenuItem_Click);
			// 
			// button32
			// 
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button32->Location = System::Drawing::Point(512, 532);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(77, 85);
			this->button32->TabIndex = 42;
			this->button32->Text = L"X^2";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::Button32_Click);
			// 
			// button33
			// 
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button33->Location = System::Drawing::Point(595, 532);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(77, 85);
			this->button33->TabIndex = 43;
			this->button33->Text = L"X^3";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::Button33_Click);
			// 
			// button34
			// 
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button34->Location = System::Drawing::Point(678, 532);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(77, 85);
			this->button34->TabIndex = 44;
			this->button34->Text = L"1/x";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::Button34_Click);
			// 
			// button35
			// 
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button35->Location = System::Drawing::Point(761, 440);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(77, 85);
			this->button35->TabIndex = 45;
			this->button35->Text = L"In X";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::Button35_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(865, 657);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button00);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->showoperand);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->hasil);
			this->Controls->Add(this->bagi);
			this->Controls->Add(this->kali);
			this->Controls->Add(this->kurang);
			this->Controls->Add(this->tambah);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->output);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Kalkulator Plus MKIII By GesangPJ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double pilihansatu;
		double pilihandua;
		double iResult;
		double a;
		float icelcius, ifahrenheit, ikelvin;
		String^ ioperator;
		char ioperation;

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Hasil_Click(System::Object^ sender, System::EventArgs^ e) {

	

}
private: System::Void Tambah_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Kurang_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Kali_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Bagi_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Button27_Click(System::Object^ sender, System::EventArgs^ e) {
	//hapus1angka

	if (output->Text->Length > 0) {
		output->Text = output->Text->Remove(output->Text->Length - 1, 1);
	}
	
}
private: System::Void button_klik(System::Object^ sender, System::EventArgs^ e) {

	Button ^Numbers = safe_cast<Button^>(sender);

	if (output->Text == "0") {
		
		output->Text = Numbers->Text;
	}
	else {
	
		output->Text = output->Text + Numbers->Text;
	}
}
private: System::Void Button28_Click(System::Object^ sender, System::EventArgs^ e) {
	//desimal
	if (!output->Text->Contains(".")) {
		output->Text = output->Text + ".";

	}

}
private: System::Void aritmatika(System::Object^ sender, System::EventArgs^ e) {
	//Operasi aritmatika

	Button^ op = safe_cast<Button^>(sender);
	pilihansatu = Double::Parse(output->Text);
	output->Text = "";
	ioperator = op->Text;
	showoperand->Text = System::Convert::ToString(pilihansatu) + ""+ ioperator;



}
private: System::Void Showoperand_Click(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void Button29_Click(System::Object^ sender, System::EventArgs^ e) {
	//plusminus

	if (output->Text->Contains("-")) {
		output->Text = output->Text->Remove(0, 1);

	}
	else {
		output->Text = "-" + output->Text;
	}
}
private: System::Void Hasil_Click_1(System::Object^ sender, System::EventArgs^ e) {

	showoperand->Text = "";

	pilihandua = Double::Parse(output->Text);
	if (ioperator == "+") {

		iResult = pilihansatu + pilihandua;
		output->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(showoperand->Text));

	}
	else if (ioperator == "-") {

		iResult = pilihansatu - pilihandua;
		output->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(showoperand->Text));
	}
	else if (ioperator == "X") {

		iResult = pilihansatu * pilihandua;
		output->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(showoperand->Text));
	}
	else if (ioperator == "/") {

		iResult = pilihansatu / pilihandua;
		output->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(showoperand->Text));
	}
	else if (ioperator == "Mod") {

		int ipertama, ikedua, ihasil;
		ipertama = Convert::ToInt32(pilihansatu);
		ikedua = Convert::ToInt32(pilihandua);
		ihasil = ipertama % ikedua;
		output->Text = System::Convert::ToString(ihasil);
		listBox1->Items->Add(System::Convert::ToString(showoperand->Text));
	}
	else if (ioperator == "Exp") {

		iResult = (pilihansatu, (1 / pilihandua));
		output->Text = System::Convert::ToString(Math::Exp((iResult)));
		listBox1->Items->Add(System::Convert::ToString(showoperand->Text));
	}

}
private: System::Void Button30_Click(System::Object^ sender, System::EventArgs^ e) {

	output->Text = ("3.1415926535897932384626433832795");

}
private: System::Void Button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	output->Text = "";
}
private: System::Void KeluarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void StandarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm::Width = 370;
	MyForm::Height = 570;
	output->Width = 300;
}
private: System::Void SainsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm::Width = 670;
	MyForm::Height = 570;
	output->Width = 600;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	MyForm::Width = 370;
	MyForm::Height = 570;
	output->Width = 300;

}
private: System::Void HistoryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (HistoryToolStripMenuItem->Checked == true) {
		listBox1->Visible = true;
		HistoryToolStripMenuItem->Visible = false;
		HistoryToolStripMenuItem1->Visible = true;
	}
	MyForm::Height = 920;
	
}
private: System::Void HistoryToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	HistoryToolStripMenuItem->Visible = true;
	listBox1->Width = 300;
	listBox1->Visible = false;
	MyForm::Height = 570;
	HistoryToolStripMenuItem1->Visible = false;

}
private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
	//SinH
	try {
		a = Double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("SinH" + "(" + (output->Text) + ")");
		a = Math::Sinh(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
	
}
private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) {
	//CosH
	try {
		a = Double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("CosH" + "(" + (output->Text) + ")");
		a = Math::Cosh(a);
		output->Text = System::Convert::ToString(a);

		showoperand->Text = "";
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
}
private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
	//Sin
	try {
		a = Double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("Sind" + "(" + (output->Text) + ")");
		a = Math::Sin(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
	
}
private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cos
	try {
		a = Double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("Cosd" + "(" + (output->Text) + ")");
		a = Math::Cos(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
	
}
private: System::Void Button21_Click(System::Object^ sender, System::EventArgs^ e) {
	//Dec
	try {
		int a = int::Parse(output->Text);
		output->Text = System::Convert::ToString(a);
		listBox1->Items->Add(System::Convert::ToString(output->Text));
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
}
private: System::Void Button20_Click(System::Object^ sender, System::EventArgs^ e) {
	//Log
	try {
		a = Double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("Log" + "(" + (output->Text) + ")");
		a = Math::Log(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
	
}
private: System::Void Button25_Click(System::Object^ sender, System::EventArgs^ e) {
	//Bin
	try {
		int a = int::Parse(output->Text);
		output->Text = System::Convert::ToString(a, 2);
		showoperand->Text = "";
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}

}
private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) {
	//Tan
	try {
		a = double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("Tan" + "(" + (output->Text) + ")");
		a = Math::Tan(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
	
}
private: System::Void Button16_Click(System::Object^ sender, System::EventArgs^ e) {
	//TanH
	try {
		a = double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("TanH" + "(" + (output->Text) + ")");
		a = Math::Tanh(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
	
}
private: System::Void Button23_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hex
	try {
		int a = int::Parse(output->Text);
		output->Text = System::Convert::ToString(a, 16);
		showoperand->Text = "";
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}

}
private: System::Void Button22_Click(System::Object^ sender, System::EventArgs^ e) {
	//Sqrt
	try {
		a = Double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("Sqrt" + "(" + (output->Text) + ")");
		a = Math::Sqrt(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
	
}
private: System::Void Button24_Click(System::Object^ sender, System::EventArgs^ e) {
	//Octal
	try {
		int a = int::Parse(output->Text);
		output->Text = System::Convert::ToString(a, 8);
		showoperand->Text = "";
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}

}
private: System::Void Button18_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cosec
	try {
		a = Double::Parse(output->Text);
		showoperand->Text = System::Convert::ToString("Cosec" + "(" + (output->Text) + ")");
		a = 1 / Math::Sin(a);
		output->Text = System::Convert::ToString(a);
	}
	catch (FormatException^) {
		// Handle the case when the input is not a valid number
		MessageBox::Show("Invalid input. Please enter a valid number.");
	}
	catch (...) {
		// Handle any other unexpected errors
		MessageBox::Show("An error occurred while processing the input.");
	}
}

private: System::Void Button32_Click(System::Object^ sender, System::EventArgs^ e) {
	//X^2
	a = Convert::ToDouble(output->Text) * Convert::ToDouble(output->Text);
	output->Text = System::Convert::ToString(a);
}
private: System::Void Button33_Click(System::Object^ sender, System::EventArgs^ e) {
	//X^3
	a = Convert::ToDouble(output->Text) * Convert::ToDouble(output->Text) * Convert::ToDouble(output->Text);
	output->Text = System::Convert::ToString(a);
}
private: System::Void Button34_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1/x
	a = Convert::ToDouble(1.0 / Convert::ToDouble(output->Text));
	output->Text = System::Convert::ToString(a);

}
private: System::Void Button35_Click(System::Object^ sender, System::EventArgs^ e) {
	// In X
	a = Convert::ToDouble(output->Text) / Convert::ToDouble(100);
	output->Text = System::Convert::ToString(a);
}
private: System::Void Button36_Click(System::Object^ sender, System::EventArgs^ e) {

	//konversi suhu
	/*
	switch (ioperation) {

	case'C':
		//celcius->fahrenheit
		(float::TryParse(inputsuhu->Text, icelcius));
		hasilsuhu->Text = ((((9 * icelcius) / 5) + 32).ToString());
		break;

	case'F':
		//Fahrenheit->celcius
		(float::TryParse(inputsuhu->Text, ifahrenheit));
		hasilsuhu->Text = ((((ifahrenheit-32)*5)/9).ToString());
		break;

	case'K':
		//Kelvin
		(float::TryParse(inputsuhu->Text, ikelvin));
		hasilsuhu->Text = (((((9 * ikelvin) / 5) + 32) + 273.15).ToString());
		break;
	}
	*/

}
private: System::Void RadioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ioperation = 'C';
}
private: System::Void RadioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ioperation = 'F';
}
private: System::Void RadioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	ioperation = 'K';
}
private: System::Void KonversiTemperaturToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm::Width = 1030;
	MyForm::Height = 570;
	output->Width = 600;
}
private: System::Void Button37_Click(System::Object^ sender, System::EventArgs^ e) {
	//Reset konverter temperatur

	//inputsuhu->Text = "";
	//hasilsuhu->Text = "";
	//radioButton1->Checked = false;
	//radioButton2->Checked = false;
	//radioButton3->Checked = false;

}
private: System::Void inputsuhu_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Hasilsuhu_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}