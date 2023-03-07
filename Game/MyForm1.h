#pragma once
#pragma comment(lib, "user32.lib")//Додатковий код для підключення WinAPI
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "advapi32.lib")
#include "Windows.h"

namespace Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Collections::Generic;

	//Структури для переміщення міток
	struct lines_paint{
		int x1_fisrt = 5;   int y1_fisrt = 4;  int x1_second = 20;  int y1_second = 19;
		int x2_fisrt = 20;  int y2_fisrt = 3;  int x2_second = 5;   int y2_second = 18;
	};

	struct circles_paint{
		int x_circle = 5;  int y_circle = 4;  const int x_size = 15; const int y_size = 14;
	};

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private: Color color,color1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	//private: System::Windows::Forms::Timer^ timer1;

	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			//timer1 = gcnew System::Windows::Forms::Timer();
			//timer1->Interval = 1000; // интервал в миллисекундах
			//timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
		}
		MyForm1(Color color, Color color1, bool r, bool r1)//Конструктор для приймання кольору з іншої форми
		{
			this->color = color;
			this->color1 = color1;
			if (r1 == true)l_c = 1;
			if (r == true)l_c = 2;
		}
		virtual void OnPaint(PaintEventArgs^ e) override {

				Graphics^ field = e->Graphics;
				field = Graphics::FromImage(map);
				Pen^ xyfield = gcnew Pen(Color::Black, 1);
				for (int i = 0; i <= 2472; i = i + 24)
					field->DrawLine(xyfield, i, 0, i, 2464);
				for (int i = 0; i <= 2464; i = i + 22)
					field->DrawLine(xyfield, 0, i, 2472, i);
				delete field; delete xyfield;
		}

	private:   array<int, 2>^ arr = gcnew array<int, 2>(120, 120);
	private:   List<int>^ list1 = gcnew List<int>;
	private:   List<int>^ list2 = gcnew List<int>;
	private:   int xyz = 0;//Змінна для заповнення масиву нулями
	private:   int x_mouse, y_mouse;//Змінні для отримання координат миші
	private:   int l_c;//Для чергування хрестика та нулика
	private:   int true_false_down = 0;//Для перевірки натискання кнопки миші
	private:   int start_x, start_y;//Для відслідковування початкових координат
	private:   int defx = 543, defy = 498;//Дефолтні значення вікна
	private:   double x_defpic = 2472.00, y_defpic = 2464.00;//Дефолтні значення вікна
	private:   int x_width = 24, y_height = 22;//Відстань між клітинами
	private:   int t = 0, leftbutton = 0;//Змінні для відстежування кнопки миші та запобіганню некоретного малювання
	private:   Bitmap^ map = gcnew Bitmap("C:\\Game\\Debug\\143.png");
	private:   int b = 0, b1 = 0;//Змінні для перемальовування поля
	private:   double current_width, current_height, koef_x = 1.00, koef_y = 1.00;
	private:   int tim = 0;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(523, 460);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox1_MouseClick);
			this->pictureBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox1_MouseDoubleClick);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pictureBox1_MouseUp);
			this->pictureBox1->Resize += gcnew System::EventHandler(this, &MyForm1::MyForm1_Resize);
			// 
			// MyForm1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(527, 459);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::KatakanaHalf;
			this->MaximumSize = System::Drawing::Size(1910, 1045);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &MyForm1::MyForm1_ResizeEnd);
			this->Resize += gcnew System::EventHandler(this, &MyForm1::MyForm1_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
				
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			true_false_down = 1; start_x = e->X; start_y = e->Y;

			HCURSOR hCursor = LoadCursorFromFile(TEXT("hand_grab.cur"));//Завантажуємо курсор
			SetCursor(hCursor);//Встановлюємо курсор
		}
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
		if (true_false_down == 1) {

			HCURSOR hCursor = LoadCursorFromFile(TEXT("hand_grab.cur"));
			SetCursor(hCursor);

			int current_x, current_y, move_x_to, move_y_to;//Переміщення картинки за допомогою курсору
			current_x = e->X; current_y = e->Y;
			move_x_to = current_x - start_x;
			move_y_to = current_y - start_y;
			pictureBox1->Left = pictureBox1->Left + move_x_to;
			pictureBox1->Top = pictureBox1->Top + move_y_to;
		}
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			true_false_down = 0; this->Cursor = Cursors::Hand;
	}
	private: System::Void MyForm1_ResizeEnd(System::Object^ sender, System::EventArgs^ e) {

		current_width = pictureBox1->Width; current_height = pictureBox1->Height;
		x_width = current_width / 103; y_height = current_height /112;

		//label1->Text = x_width.ToString();
		//label2->Text = y_height.ToString();

		defx = this->Size.Width; defy = this->Size.Height;//Отримання останніх редагованих користувачем розмірів вікна
		koef_x = current_width / x_defpic; koef_y = current_height / y_defpic;

		//label3->Text = koef_x.ToString();
		//label4->Text = koef_y.ToString();
		b++;

	}
	private: System::Void MyForm1_Resize(System::Object^ sender, System::EventArgs^ e) {

		if (this->WindowState != FormWindowState::Maximized) {//Розміщення картинки по центру після повноекранного режиму
			if (defx == this->Size.Width && defy == this->Size.Height) {
				pictureBox1->Location = System::Drawing::Point(-937, -902);
			}
		}

		current_width = pictureBox1->Width; current_height = pictureBox1->Height;
		koef_x = current_width / x_defpic; koef_y = current_height / y_defpic;
		x_width = current_width / 103; y_height = current_height / 112;//Кожний раз коли змінююється розмір рахуємо коефіціент, довжину та ширину

		/*label1->Text = x_width.ToString();
		label2->Text = y_height.ToString();
		label3->Text = koef_x.ToString();
		label4->Text = koef_y.ToString();*/
	
	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		lines_paint l1; circles_paint c1;
	
		int v1 = 0, v2 = 0, h1 = 0, h2 = 0, rh = 0, ld = 0, lh = 0, rd = 0;
		int num_v = 1, num_h = 1, num_rhld = 1, num_lhrd = 1;//Змінні для підтвердження перемоги
		const int five = 5;//Константа для зсуву масиву 
		if (xyz == 0) {//Заповнення нулями масиву
			for (int i = 0; i < 120; i++) {
				for (int j = 0; j < 120; j++) {
					arr[i, j] = 0;
				}
			}
			xyz = 1;
		}
		if (b != b1)
		{
			Bitmap^ map1 = gcnew Bitmap("C:\\Game\\Debug\\142.png");
			map = map1;
			Graphics^ g = e->Graphics;
			g->Clear(Color::White);
			pictureBox1->Image = map; b1 = b;
			g = Graphics::FromImage(map);
			int x1, y1, x2, y2;
			for (int i = 0; i < list1->Count; i = i + 2)//При зміні розмірів вікна перемальовуємо мітки
			{
				x1 = list1[i]; y1 = list1[i+1];
				x1 *= 24; y1 *= 22;
				//x1 = x1 / koef_x; y1 = y1 / koef_y;

				Pen^ xy = gcnew Pen(color1, 3);
				g->DrawLine(xy, l1.x1_fisrt + x1, l1.y1_fisrt + y1,
					l1.x1_second + x1, l1.y1_second + y1);
				g->DrawLine(xy, l1.x2_fisrt + x1, l1.y2_fisrt + y1,
					l1.x2_second + x1, l1.y2_second + y1);

				pictureBox1->Image = map;//Оновлення зображення
			}
			for (int i = 0; i < list2->Count; i = i + 2)
			{
				x2 = list2[i]; y2 = list2[i + 1];
				x2 *= 24; y2 *= 22;
				//x1 = x1 / koef_x; y1 = y1 / koef_y;

				Pen^ xy1 = gcnew Pen(color, 3);
				g->DrawEllipse(xy1, c1.x_circle + x2, c1.y_circle + y2,
					c1.x_size, c1.y_size);

				pictureBox1->Image = map;//Оновлення зображення
			}
			delete g;
		}

		int qx = (x_mouse / koef_x);int qy = (y_mouse / koef_y);//Значення для перевірки на наявність мітки у масиві

		if (t == 1 && leftbutton == 1)//Якщо курсора потрапив на сітку
		{
			if (arr[qy / 22 + five, qx / 24 + five] == 0)//Перевірка на наявність у клітинці мітки
			{
				if (l_c % 2 == 0)//малювання хрестика
				{
					Graphics^ x = e->Graphics;
					x = Graphics::FromImage(map);
					int x_mouse_coord = (x_mouse / koef_x) / 24; int y_mouse_coord = (y_mouse / koef_y) / 22;
					//int x_ar = x_mouse / 24; int y_ar = y_mouse / 22;
					int win_x = y_mouse_coord; int win_y = x_mouse_coord;

					//x_mouse_coord = x_mouse_coord / koef_x; y_mouse_coord = y_mouse_coord / koef_y;
					arr[y_mouse_coord + five, x_mouse_coord + five] = 1;
					list1->Add(x_mouse_coord);list1->Add(y_mouse_coord);

					x_mouse_coord *= 24; y_mouse_coord *= 22;
					//x_mouse_coord = x_mouse_coord / koef_x; y_mouse_coord = y_mouse_coord / koef_y;

					Pen^ xy = gcnew Pen(color1, 3);
					x->DrawLine(xy, l1.x1_fisrt + x_mouse_coord, l1.y1_fisrt + y_mouse_coord,
						l1.x1_second + x_mouse_coord, l1.y1_second + y_mouse_coord);
					x->DrawLine(xy, l1.x2_fisrt + x_mouse_coord, l1.y2_fisrt + y_mouse_coord,
						l1.x2_second + x_mouse_coord, l1.y2_second  + y_mouse_coord);

					pictureBox1->Image = map;//Оновлення зображення
					for (int i = 1; i < 5; i++) {

						if (v1 == 0)if (arr[win_x + i + five, win_y + five] == 1) { num_v++; }
						else v1 = 1;
						if (v2 == 0)if (arr[win_x - i + five, win_y + five] == 1) { num_v++; }
						else v2 = 1;

						if (h1 == 0)if (arr[win_x + five, win_y + i + five] == 1) { num_h++; }
						else h1 = 1;
						if (h2 == 0)if (arr[win_x + five, win_y - i + five] == 1) { num_h++; }
						else h2 = 1;

						if (rh == 0)if (arr[win_x - i + five, win_y + i + five] == 1) { num_rhld++; }
						else rh = 1;
						if (ld == 0)if (arr[win_x + i + five, win_y - i + five] == 1) { num_rhld++; }
						else ld = 1;

						if (lh == 0)if (arr[win_x - i + five, win_y - i + five] == 1) { num_lhrd++; }
						else lh = 1;
						if (rd == 0)if (arr[win_x + i + five, win_y + i + five] == 1) { num_lhrd++; }
						else rd = 1;

						if (num_v == 5 || num_h == 5 || num_rhld == 5 || num_lhrd == 5)break;
					}
					if (num_v == 5 || num_h == 5 || num_rhld == 5 || num_lhrd == 5)
					{
						MessageBox::Show("Хрестики перемогли!", "Перемога!");
						this->Hide();
					}
					delete x, xy;
				}
				if (l_c % 2 != 0)//малювання нулика
				{
					Graphics^ y = e->Graphics;
					y = Graphics::FromImage(map);
					int x_mouse_coord_circle = (x_mouse / koef_x) / 24; int y_mouse_coord_circle = (y_mouse / koef_y) / 22;
					//int x_arr = x_mouse / 24; int y_arr = y_mouse / 22;
					int win_x = y_mouse_coord_circle; int win_y = x_mouse_coord_circle;

					//x_mouse_coord_circle = x_mouse_coord_circle / koef_x; y_mouse_coord_circle = y_mouse_coord_circle / koef_y;

					arr[y_mouse_coord_circle + five, x_mouse_coord_circle + five] = 2;
					list2->Add(x_mouse_coord_circle); list2->Add(y_mouse_coord_circle);

					x_mouse_coord_circle *= 24; y_mouse_coord_circle *= 22;
					//x_mouse_coord_circle = x_mouse_coord_circle / koef_x; y_mouse_coord_circle = y_mouse_coord_circle / koef_y;

					Pen^ xy1 = gcnew Pen(color, 3);
					y->DrawEllipse(xy1, c1.x_circle + x_mouse_coord_circle, c1.y_circle + y_mouse_coord_circle,
						c1.x_size, c1.y_size);

					pictureBox1->Image = map;//Оновлення зображення

					for (int i = 1; i < 5; i++) {

						if (v1 == 0)if (arr[win_x + i + five, win_y + five] == 2) { num_v++; }
						else v1 = 1;
						if (v2 == 0)if (arr[win_x - i + five, win_y + five] == 2) { num_v++; }
						else v2 = 1;

						if (h1 == 0)if (arr[win_x + five, win_y + i + five] == 2) { num_h++; }
						else h1 = 1;
						if (h2 == 0)if (arr[win_x + five, win_y - i + five] == 2) { num_h++; }
						else h2 = 1;

						if (rh == 0)if (arr[win_x - i + five, win_y + i + five] == 2) { num_rhld++; }
						else rh = 1;
						if (ld == 0)if (arr[win_x + i + five, win_y - i + five] == 2) { num_rhld++; }
						else ld = 1;

						if (lh == 0)if (arr[win_x - i + five, win_y - i + five] == 2) { num_lhrd++; }
						else lh = 1;
						if (rd == 0)if (arr[win_x + i + five, win_y + i + five] == 2) { num_lhrd++; }
						else rd = 1;

						if (num_v == 5 || num_h == 5 || num_rhld == 5 || num_lhrd == 5)break;
					}
					if (num_v == 5 || num_h == 5 || num_rhld == 5 || num_lhrd == 5)
					{
						MessageBox::Show("Нулики перемогли!", "Перемога!");
						this->Hide();
					}
					delete y, xy1;
				}
				l_c++;
			}
		}leftbutton = 0;
		t = 1;
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		//timer1->Enabled = true;
		if (tim == 0) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {

				//MyForm1::Height = 498;
				//MyForm1::Width = 543;

				x_mouse = e->X;
				y_mouse = e->Y;//Отримання координат відносно picturebox

				//label1->Text = x_mouse.ToString();
				//label2->Text = y_mouse.ToString();

				leftbutton = 1;
				pictureBox1->Image = map;//Оновлення зображення
			}
			else
			{
				leftbutton = 0;
			}
		}
	}
	//private: void timer1_Tick(System::Object^ sender, System::EventArgs^ e){
		//timer1->Enabled = false; tim = 0;
   // }
	private: System::Void pictureBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		MyForm1::Height = 498;
		MyForm1::Width = 543;
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->Image = map;
		pictureBox1->Width = 2473;
		pictureBox1->Height = 2465;
		pictureBox1->Location = System::Drawing::Point(-937, -902);
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->Anchor = AnchorStyles::Top | AnchorStyles::Right | AnchorStyles::Bottom | AnchorStyles::Left;
	}
};
}