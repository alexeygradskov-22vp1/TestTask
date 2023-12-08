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
	private: System::Windows::Forms::Label^ label10;
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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->ShowButton = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ShowAllButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CreateButton
			// 
			this->CreateButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->CreateButton->Location = System::Drawing::Point(13, 98);
			this->CreateButton->Margin = System::Windows::Forms::Padding(4);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(161, 38);
			this->CreateButton->TabIndex = 0;
			this->CreateButton->Text = L"�������";
			this->CreateButton->UseVisualStyleBackColor = false;
			this->CreateButton->Click += gcnew System::EventHandler(this, &Form1::CreateButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"�����������", L"����������", L"������� ������" });
			this->comboBox1->Location = System::Drawing::Point(13, 44);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// HideButton
			// 
			this->HideButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->HideButton->Location = System::Drawing::Point(16, 190);
			this->HideButton->Margin = System::Windows::Forms::Padding(4);
			this->HideButton->Name = L"HideButton";
			this->HideButton->Size = System::Drawing::Size(160, 38);
			this->HideButton->TabIndex = 2;
			this->HideButton->Text = L"������";
			this->HideButton->UseVisualStyleBackColor = false;
			this->HideButton->Click += gcnew System::EventHandler(this, &Form1::HideButton_Click);
			// 
			// ReplaceButton
			// 
			this->ReplaceButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ReplaceButton->Location = System::Drawing::Point(16, 236);
			this->ReplaceButton->Margin = System::Windows::Forms::Padding(4);
			this->ReplaceButton->Name = L"ReplaceButton";
			this->ReplaceButton->Size = System::Drawing::Size(160, 38);
			this->ReplaceButton->TabIndex = 3;
			this->ReplaceButton->Text = L"�����������";
			this->ReplaceButton->UseVisualStyleBackColor = false;
			this->ReplaceButton->Click += gcnew System::EventHandler(this, &Form1::ReplaceButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(215, 44);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(52, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(301, 44);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(381, 44);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(52, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(461, 44);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(541, 44);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(52, 22);
			this->textBox5->TabIndex = 8;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(26, 296);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(52, 22);
			this->textBox6->TabIndex = 9;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(109, 296);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(52, 22);
			this->textBox7->TabIndex = 10;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::check_input);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"�������� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(225, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(316, 25);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(400, 25);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(478, 25);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(558, 25);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 16);
			this->label6->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(43, 278);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"X";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(131, 278);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Y";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(53, 493);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"���� ������";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClearButton->Location = System::Drawing::Point(26, 629);
			this->ClearButton->Margin = System::Windows::Forms::Padding(4);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(161, 42);
			this->ClearButton->TabIndex = 19;
			this->ClearButton->Text = L"�������� ���������";
			this->ClearButton->UseVisualStyleBackColor = false;
			this->ClearButton->Click += gcnew System::EventHandler(this, &Form1::ClearButton_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(26, 529);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 24);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// ShowButton
			// 
			this->ShowButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ShowButton->Location = System::Drawing::Point(13, 144);
			this->ShowButton->Margin = System::Windows::Forms::Padding(4);
			this->ShowButton->Name = L"ShowButton";
			this->ShowButton->Size = System::Drawing::Size(161, 38);
			this->ShowButton->TabIndex = 21;
			this->ShowButton->Text = L"��������";
			this->ShowButton->UseVisualStyleBackColor = false;
			this->ShowButton->Click += gcnew System::EventHandler(this, &Form1::ShowButton_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(140, 80);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 16);
			this->label9->TabIndex = 22;
			// 
			// ShowAllButton
			// 
			this->ShowAllButton->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ShowAllButton->Location = System::Drawing::Point(26, 579);
			this->ShowAllButton->Margin = System::Windows::Forms::Padding(4);
			this->ShowAllButton->Name = L"ShowAllButton";
			this->ShowAllButton->Size = System::Drawing::Size(161, 42);
			this->ShowAllButton->TabIndex = 23;
			this->ShowAllButton->Text = L"�������� ���";
			this->ShowAllButton->UseVisualStyleBackColor = false;
			this->ShowAllButton->Click += gcnew System::EventHandler(this, &Form1::ShowAllButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(909, 681);
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
			this->Controls->Add(this->label10);
			this->Controls->Add(this->ReplaceButton);
			this->Controls->Add(this->HideButton);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->CreateButton);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(927, 728);
			this->MinimumSize = System::Drawing::Size(927, 728);
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"22VP1_8_TriangleCircle";
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
			this->label9->Text = "X1,X2 - ����� � ������ ���������� ��������������, � - ����� ���������";
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
			this->label9->Text = "X1,X2 - ����� � ������ ���������� ��������������, � - ����� ���������, R - ������ ��������� ����������";
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
					MessageBox::Show("��������� ����������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					int x1 = Convert::ToInt32(this->textBox1->Text);
					int x2 = Convert::ToInt32(this->textBox2->Text);
					int y = Convert::ToInt32(this->textBox3->Text);
					int a = Convert::ToInt32(this->textBox4->Text);
					Triangle* t = new Triangle(x1, x2, y, a);
					Figures->add(t);
					t->show(g);
					this->comboBox2->Items->Add("������ " + (id + 1));
					id++;
				}
				break;
			}
			case 1:
			{
				if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "") {
					MessageBox::Show("��������� ����������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					int x = Convert::ToInt32(this->textBox1->Text);
					int y = Convert::ToInt32(this->textBox2->Text);
					int r = Convert::ToInt32(this->textBox3->Text);
					Circle* c = new Circle(x, y, r);
					Figures->add(c);
					c->show(g);
					this->comboBox2->Items->Add("������ " + (id + 1));
					id++;
				}
				break;
			}
			case 2:
			{
				if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "" || this->textBox5->Text == "") {
					MessageBox::Show("��������� ����������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
					this->comboBox2->Items->Add("������ " + (id + 1));
					id++;
				}
				break;
			}
			default:
				MessageBox::Show("�������� ������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			}
		}
		catch (System::Exception^ err) {
			MessageBox::Show(err->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
				MessageBox::Show("��������� ���������� ��� �����������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if (String::IsNullOrEmpty(this->comboBox2->Text)) {
				MessageBox::Show("�������� ������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
			MessageBox::Show(err->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
