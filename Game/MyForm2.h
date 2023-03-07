#pragma once
#include<iostream>
#include<cstdlib>
namespace Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: int close_form = 0;//Для того щоб була можливість вийти спочатку
	private: int num = 0;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(60, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Так";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(134, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Чи задоволені ви програмою\?";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(313, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Ні";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm2::button2_MouseEnter);
			this->button2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm2::button2_MouseMove);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(76, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(346, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"*Будь-ласка дайте відповідь на запитання";
			this->label2->Visible = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 205);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ваша думка";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm2::MyForm2_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("            Дякуємо за ваш відгук!\n     Нам дуже важлива ваша думка","Відгук прийнято");
		close_form = 0; this->Close();
	}
	private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button2->Location = System::Drawing::Point(rand() % 420 + 20, rand() % 140 + 20); close_form = 1;
	}
	private: System::Void button2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		button2->Location = System::Drawing::Point(rand() % 400 + 20, rand() % 140 + 20); num++;
		if (num > 6)label2->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("          Дякуємо за ваш відгук!\n              Ми вас кікнемо", "Відгук такий собі");
		close_form = 0; this->Close();
	}

	private: System::Void MyForm2_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if(close_form == 1)e->Cancel = true;
	}
};
}
