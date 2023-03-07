#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include <Windows.h>

namespace Game {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ головнаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ результатиToolStripMenuItem;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	public: System::Windows::Forms::Button^ button2;//Public тому що передаємо кольора
	public: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolStripMenuItem^ відгукToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::ToolStripMenuItem^ інструкціяToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->головнаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інструкціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відгукToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->результатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(143, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Почати гру";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->головнаToolStripMenuItem,
					this->довідкаToolStripMenuItem, this->інструкціяToolStripMenuItem, this->відгукToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(426, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// головнаToolStripMenuItem
			// 
			this->головнаToolStripMenuItem->Name = L"головнаToolStripMenuItem";
			this->головнаToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->головнаToolStripMenuItem->Text = L"Результати";
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			this->довідкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::довідкаToolStripMenuItem_Click);
			// 
			// інструкціяToolStripMenuItem
			// 
			this->інструкціяToolStripMenuItem->Name = L"інструкціяToolStripMenuItem";
			this->інструкціяToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->інструкціяToolStripMenuItem->Text = L"Інструкція";
			this->інструкціяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::інструкціяToolStripMenuItem_Click);
			// 
			// відгукToolStripMenuItem
			// 
			this->відгукToolStripMenuItem->Name = L"відгукToolStripMenuItem";
			this->відгукToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->відгукToolStripMenuItem->Text = L"Відгук";
			this->відгукToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::відгукToolStripMenuItem_Click);
			// 
			// результатиToolStripMenuItem
			// 
			this->результатиToolStripMenuItem->Name = L"результатиToolStripMenuItem";
			this->результатиToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(48, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ім\'я 1 гравця (х)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(271, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ім\'я 2 гравця (о)";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(53, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 24);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(276, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 24);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(27, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 49);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Колір ігрової мітки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(251, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 49);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Колір ігрової мітки";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton1->Location = System::Drawing::Point(80, 251);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(38, 25);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"X";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton2->Location = System::Drawing::Point(314, 251);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(41, 25);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->Text = L"O";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(426, 327);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void довідкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("\tГра Хрестики - Нулики\n Безсонов Володимир, Студент КІУКІ-21-6",
			"Про программу", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		colorDialog1->ShowDialog();
		button2->BackColor = colorDialog1->Color;//Для того щоб відображити користувачеві колір
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		button3->BackColor = colorDialog1->Color;//Для того щоб відображити користувачеві колір
	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Color color = button3->BackColor;
		Color color1 = button2->BackColor;
		bool radio1, radio2;
		if (radioButton1->Checked) radio1 = true;
		else radio1 = false;
		if (radioButton2->Checked) radio2 = true;
		else radio2 = false;

		//if (textBox1->Text->Length > 0)
		//{
		//	if (textBox2->Text->Length > 0)
		//	{
			//	if (textBox1->Text != textBox2->Text)
			//	{
			//		if (color != SystemColors::Control && color1 != SystemColors::Control)
			//		{
						MyForm1^ f1 = gcnew MyForm1(color, color1, radio1, radio2);//Оголошення змінної-екземпляру другої форми
						f1->ShowDialog();//Відкриваємо другу форму
				//	}
			//		else
			//			MessageBox::Show(" Виберіть колір ігрової мітки", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			//	}
			//	else
			//		MessageBox::Show(" Імена гравців повинні відрізнятися", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//	}
		//	else
		//		MessageBox::Show(" Будь-ласка введіть ім'я 2 гравця", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//	}
	//	else
	//		MessageBox::Show(" Будь-ласка введіть ім'я 1 гравця","Попередження", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void відгукToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ f3 = gcnew MyForm2();//Оголошення змінної-екземпляру другої форми
		f3->ShowDialog();//Відкриваємо другу форму
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (Char)Keys::Back) {
			e->Handled = true;
		}
	}
	private: System::Void інструкціяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Font^ font = gcnew Font("Arial", 16);
		MessageBox::Show("1. Перемагає той гравець, хто збудує поспіль п'ять нулів або п'ять хрестиків.\n2. Обов'язкові поля для заповнення: Ім'я та колір\n3. Для того щоб змінити перший хід хрестика або нулика, потрібно відповідно знизу клацнути на кружечок біля кнопки Почати гру\n4. Переміщення поле відбувається за допомогою миші, потрібно зажати праву кнопку миші та вести у протилежному напрямку від потрібного напрямку\n5. При зміні розмірів вікна, змінюється масштаб відображення поля",
			"Правила", MessageBoxButtons::OK, MessageBoxIcon::Question);
	}
};
}
