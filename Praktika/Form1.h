#pragma once
#include "compfigure.h"
#include "container.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CreateButton;
	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ HideButton;
	private: System::Windows::Forms::Button^ ReplaceButton;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ ClearButton;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ ShowButton;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ ShowAllButton;

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
			this->CreateButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->HideButton = (gcnew System::Windows::Forms::Button());
			this->ReplaceButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->ShowButton = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ShowAllButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CreateButton
			// 
			this->CreateButton->BackColor = System::Drawing::SystemColors::Info;
			this->CreateButton->Location = System::Drawing::Point(52, 416);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(121, 31);
			this->CreateButton->TabIndex = 0;
			this->CreateButton->Text = L"Создать";
			this->CreateButton->UseVisualStyleBackColor = false;
			this->CreateButton->Click += gcnew System::EventHandler(this, &Form1::CreateButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Треугольник", L"Окружность", L"Сложная фигура" });
			this->comboBox1->Location = System::Drawing::Point(52, 370);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// HideButton
			// 
			this->HideButton->BackColor = System::Drawing::SystemColors::Info;
			this->HideButton->Location = System::Drawing::Point(329, 466);
			this->HideButton->Name = L"HideButton";
			this->HideButton->Size = System::Drawing::Size(120, 31);
			this->HideButton->TabIndex = 2;
			this->HideButton->Text = L"Скрыть";
			this->HideButton->UseVisualStyleBackColor = false;
			this->HideButton->Click += gcnew System::EventHandler(this, &Form1::HideButton_Click);
			// 
			// ReplaceButton
			// 
			this->ReplaceButton->BackColor = System::Drawing::SystemColors::Info;
			this->ReplaceButton->Location = System::Drawing::Point(477, 466);
			this->ReplaceButton->Name = L"ReplaceButton";
			this->ReplaceButton->Size = System::Drawing::Size(120, 31);
			this->ReplaceButton->TabIndex = 3;
			this->ReplaceButton->Text = L"Переместить";
			this->ReplaceButton->UseVisualStyleBackColor = false;
			this->ReplaceButton->Click += gcnew System::EventHandler(this, &Form1::ReplaceButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(200, 370);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(260, 370);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(320, 370);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(380, 370);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(440, 370);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(40, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(477, 529);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(40, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(557, 529);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(40, 20);
			this->textBox7->TabIndex = 10;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 354);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Выберете фигуру";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(200, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(265, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(325, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(385, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(445, 351);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(474, 513);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"newX";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(554, 513);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"newY";
			// 
			// ClearButton
			// 
			this->ClearButton->BackColor = System::Drawing::SystemColors::Info;
			this->ClearButton->Location = System::Drawing::Point(531, 333);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(119, 34);
			this->ClearButton->TabIndex = 19;
			this->ClearButton->Text = L"Очистить контейнер";
			this->ClearButton->UseVisualStyleBackColor = false;
			this->ClearButton->Click += gcnew System::EventHandler(this, &Form1::ClearButton_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(328, 439);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// ShowButton
			// 
			this->ShowButton->BackColor = System::Drawing::SystemColors::Info;
			this->ShowButton->Location = System::Drawing::Point(200, 466);
			this->ShowButton->Name = L"ShowButton";
			this->ShowButton->Size = System::Drawing::Size(107, 31);
			this->ShowButton->TabIndex = 21;
			this->ShowButton->Text = L"Показать";
			this->ShowButton->UseVisualStyleBackColor = false;
			this->ShowButton->Click += gcnew System::EventHandler(this, &Form1::ShowButton_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 22;
			// 
			// ShowAllButton
			// 
			this->ShowAllButton->BackColor = System::Drawing::SystemColors::Info;
			this->ShowAllButton->Location = System::Drawing::Point(531, 377);
			this->ShowAllButton->Name = L"ShowAllButton";
			this->ShowAllButton->Size = System::Drawing::Size(119, 34);
			this->ShowAllButton->TabIndex = 23;
			this->ShowAllButton->Text = L"Показать все";
			this->ShowAllButton->UseVisualStyleBackColor = false;
			this->ShowAllButton->Click += gcnew System::EventHandler(this, &Form1::ShowAllButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(684, 561);
			this->Controls->Add(this->ShowAllButton);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->ShowButton);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ReplaceButton);
			this->Controls->Add(this->HideButton);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->CreateButton);
			this->MaximumSize = System::Drawing::Size(700, 600);
			this->MinimumSize = System::Drawing::Size(700, 600);
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Praktika_22VP2_Dankov";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Contain* Figures = new Contain;
	int id = 0;
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Visible = false;
		this->textBox2->Visible = false;
		this->textBox3->Visible = false;
		this->textBox4->Visible = false;
		this->textBox5->Visible = false;
		this->HideButton->Enabled = false;
		this->ReplaceButton->Enabled = false;
		this->ClearButton->Enabled = false;
		this->ShowButton->Enabled = false;
		this->ShowAllButton->Enabled = false;
		this->ShowAllButton->Click += gcnew System::EventHandler(this, &Form1::check_figures);
		this->CreateButton->Click += gcnew System::EventHandler(this, &Form1::check_figures);
		this->ClearButton->Click += gcnew System::EventHandler(this, &Form1::check_figures);
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (this->comboBox1->SelectedIndex)
		{
		case 0:
		{
			this->label2->Text = "X1";
			this->label3->Text = "X2";
			this->label4->Text = "Y";
			this->label5->Text = "A";
			this->label6->Text = "";
			this->label9->Text = "X1,X2 - левая и правая координата соответственно, А - длина основания";
			this->textBox1->Visible = true;
			this->textBox2->Visible = true;
			this->textBox3->Visible = true;
			this->textBox4->Visible = true;
			this->textBox5->Visible = false;
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox5->Text = "";
			break;
		}
		case 1:
		{
			this->label2->Text = "X";
			this->label3->Text = "Y";
			this->label4->Text = "R";
			this->label5->Text = "";
			this->label6->Text = "";
			this->label9->Text = "";
			this->textBox1->Visible = true;
			this->textBox2->Visible = true;
			this->textBox3->Visible = true;
			this->textBox4->Visible = false;
			this->textBox5->Visible = false;
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox5->Text = "";
			break;
		}
		case 2:
		{
			this->label2->Text = "X1";
			this->label3->Text = "X2";
			this->label4->Text = "Y";
			this->label5->Text = "A";
			this->label6->Text = "R";
			this->label9->Text = "X1,X2 - левая и правая координата соответственно, А - длина основания, R - радиус вписанной окружности";
			this->textBox1->Visible = true;
			this->textBox2->Visible = true;
			this->textBox3->Visible = true;
			this->textBox4->Visible = true;
			this->textBox5->Visible = true;
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox5->Text = "";
			break;
		}
		default:
			break;
		}

	}
	private: System::Void CreateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		try {
			switch (this->comboBox1->SelectedIndex)
			{
			case 0:
			{
				if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "") {
					MessageBox::Show("Заполните координаты", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					int x1 = Convert::ToInt32(this->textBox1->Text);
					int x2 = Convert::ToInt32(this->textBox2->Text);
					int y = Convert::ToInt32(this->textBox3->Text);
					int a = Convert::ToInt32(this->textBox4->Text);
					Triangle* t = new Triangle(x1, x2, y, a);
					Figures->add(t);
					t->show(g);
					this->comboBox2->Items->Add("Фигура " + (id + 1));
					id++;
				}
				break;
			}
			case 1:
			{
				if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "") {
					MessageBox::Show("Заполните координаты", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					int x = Convert::ToInt32(this->textBox1->Text);
					int y = Convert::ToInt32(this->textBox2->Text);
					int r = Convert::ToInt32(this->textBox3->Text);
					Circle* c = new Circle(x, y, r);
					Figures->add(c);
					c->show(g);
					this->comboBox2->Items->Add("Фигура " + (id + 1));
					id++;
				}
				break;
			}
			case 2:
			{
				if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "" || this->textBox5->Text == "") {
					MessageBox::Show("Заполните координаты", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					int x1 = Convert::ToInt32(this->textBox1->Text);
					int x2 = Convert::ToInt32(this->textBox2->Text);
					int y = Convert::ToInt32(this->textBox3->Text);
					int a = Convert::ToInt32(this->textBox4->Text);
					int r = Convert::ToInt32(this->textBox5->Text);
					CompFigure* cf = new CompFigure(x1, x2, y, a, r);
					Figures->add(cf);
					cf->show(g);
					this->comboBox2->Items->Add("Фигура " + (id + 1));
					id++;
				}
				break;
			}
			default:
				MessageBox::Show("Выберите фигуру", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			}
		}
		catch (System::Exception^ err) {
			MessageBox::Show(err->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void HideButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		Figures->hidebyid(this->comboBox2->SelectedIndex);
		g->Clear(this->BackColor);
		Figures->showall(g);
		this->HideButton->Enabled = false;
		this->ShowButton->Enabled = true;
	}
	private: System::Void ReplaceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (this->textBox6->Text == "" || this->textBox7->Text == "") {
				MessageBox::Show("Заполните координаты для перемещения", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if (String::IsNullOrEmpty(this->comboBox2->Text)) {
				MessageBox::Show("Выберите фигуру", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				int newx = Convert::ToInt32(this->textBox6->Text);
				int newy = Convert::ToInt32(this->textBox7->Text);
				Graphics^ g = this->CreateGraphics();
				Figures->replacebyid(newx,newy, this->comboBox2->SelectedIndex,g);
				g->Clear(this->BackColor);
				Figures->showall(g);
			}
		}
		catch (System::Exception^ err) {
			MessageBox::Show(err->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		Figures->clean(g);
		id = 0;
		this->comboBox2->Items->Clear();
		this->HideButton->Enabled = false;
		this->ShowButton->Enabled = false;
	}
	private: System::Void ShowButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		Figures->showbyid(this->comboBox2->SelectedIndex);
		g->Clear(this->BackColor);
		Figures->showall(g);
		this->HideButton->Enabled = true;
		this->ShowButton->Enabled = false;
	}
	private: System::Void ShowAllButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		Figures->allvisible();
		Figures->showall(g);
		if (!String::IsNullOrEmpty(this->comboBox2->Text)) {
			this->HideButton->Enabled = true;
			this->ShowButton->Enabled = false;
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		bool a = Figures->checkbyid(this->comboBox2->SelectedIndex);
		this->HideButton->Enabled = a;
		this->ShowButton->Enabled = !a;
		this->ReplaceButton->Enabled = true;
	}
	private: System::Void check_input(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8)
			e->Handled = true;
	}
	private: System::Void check_figures(System::Object^ sender, System::EventArgs^ e) {
		this->ClearButton->Enabled = Figures->getsize() > 0;
		this->ShowAllButton->Enabled = Figures->getsize() > 0;;
	}
};
}
