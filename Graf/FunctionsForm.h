#pragma once
#include "GrafInfo.h"
#include <msclr\marshal_cppstd.h>

namespace Graf 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FunctionsForm
	/// </summary>
	public ref class FunctionsForm : public System::Windows::Forms::Form
	{
	public:
		FunctionsForm(void)
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
		~FunctionsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chrt_my;
	private: System::Windows::Forms::TextBox^ txb_f;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btn_create;
	private: System::Windows::Forms::TextBox^ txb_lx;
	private: System::Windows::Forms::TextBox^ txb_px;
	private: System::Windows::Forms::TextBox^ txb_h;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chrt_my = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->txb_f = (gcnew System::Windows::Forms::TextBox());
			this->btn_create = (gcnew System::Windows::Forms::Button());
			this->txb_lx = (gcnew System::Windows::Forms::TextBox());
			this->txb_px = (gcnew System::Windows::Forms::TextBox());
			this->txb_h = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chrt_my))->BeginInit();
			this->SuspendLayout();
			// 
			// chrt_my
			// 
			chartArea1->Name = L"ChartArea1";
			this->chrt_my->ChartAreas->Add(chartArea1);
			this->chrt_my->Location = System::Drawing::Point(437, 12);
			this->chrt_my->Name = L"chrt_my";
			series1->BorderWidth = 4;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Name = L"Series1";
			this->chrt_my->Series->Add(series1);
			this->chrt_my->Size = System::Drawing::Size(758, 588);
			this->chrt_my->TabIndex = 0;
			this->chrt_my->Text = L"chart1";
			// 
			// txb_f
			// 
			this->txb_f->Location = System::Drawing::Point(12, 227);
			this->txb_f->Name = L"txb_f";
			this->txb_f->Size = System::Drawing::Size(244, 22);
			this->txb_f->TabIndex = 1;
			// 
			// btn_create
			// 
			this->btn_create->Location = System::Drawing::Point(298, 200);
			this->btn_create->Name = L"btn_create";
			this->btn_create->Size = System::Drawing::Size(108, 76);
			this->btn_create->TabIndex = 2;
			this->btn_create->Text = L"Построить";
			this->btn_create->UseVisualStyleBackColor = true;
			this->btn_create->Click += gcnew System::EventHandler(this, &FunctionsForm::btn_create_Click);
			// 
			// txb_lx
			// 
			this->txb_lx->Location = System::Drawing::Point(332, 461);
			this->txb_lx->Name = L"txb_lx";
			this->txb_lx->Size = System::Drawing::Size(84, 22);
			this->txb_lx->TabIndex = 3;
			// 
			// txb_px
			// 
			this->txb_px->Location = System::Drawing::Point(332, 489);
			this->txb_px->Name = L"txb_px";
			this->txb_px->Size = System::Drawing::Size(84, 22);
			this->txb_px->TabIndex = 4;
			// 
			// txb_h
			// 
			this->txb_h->Location = System::Drawing::Point(332, 517);
			this->txb_h->Name = L"txb_h";
			this->txb_h->Size = System::Drawing::Size(84, 22);
			this->txb_h->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 431);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 119);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Задайте пожалуйста следующие параметры:\r\n\r\nЛевый предел\r\n\r\nПравый предел\r\n\r\nШаг, "
				L"для построения графика функции";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите функцию:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(255, 102);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Константы: pi = 3.14....; e = 2.7....\r\n----------------\r\nВозможности:\r\nsqrt(), si"
				L"n(), cos(), tan(), ctg(), exp()\r\nПеременная x (только прописная)\r\nЦелые числа с "
				L"точкой(не с запятой!)";
			// 
			// FunctionsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1207, 612);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txb_h);
			this->Controls->Add(this->txb_px);
			this->Controls->Add(this->txb_lx);
			this->Controls->Add(this->btn_create);
			this->Controls->Add(this->txb_f);
			this->Controls->Add(this->chrt_my);
			this->Name = L"FunctionsForm";
			this->Text = L"FunctionsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chrt_my))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_create_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		grafinfo GRAF;
		double x, y;
		this->chrt_my->Series[0]->Points->Clear();//Очищаем систему координат
		//
		float el1;
		if (!Single::TryParse(txb_lx->Text, el1))
		{
			txb_lx->Text = "";
			MessageBox::Show("Данные для левого предела введены неверно!", "Error", MessageBoxButtons::OK);
			return;
		}
		else
		{
			el1 = System::Convert::ToDouble(txb_lx->Text);
			GRAF.set_lx(el1);
			x = el1;
		}

		float el2;
		if (!Single::TryParse(txb_px->Text, el2))
		{
			txb_px->Text = "";
			MessageBox::Show("Данные для правого предела введены неверно!", "Error", MessageBoxButtons::OK);
			return;
		}
		else
		{
			el2 = System::Convert::ToDouble(txb_px->Text);
			GRAF.set_px(el2);
		}

		float el3;
		if (!Single::TryParse(txb_h->Text, el3))
		{
			txb_h->Text = "";
			MessageBox::Show("Данные для шага введены неверно!", "Error", MessageBoxButtons::OK);
			return;
		}
		else
		{
			el3 = System::Convert::ToDouble(txb_h->Text);
			GRAF.set_shag(el3);
		}
		//
		if ((x < GRAF.get_px())&&(GRAF.get_shag()>0))//если ошибки с пределом и шагом не найдены...
		{
			string input;//создаем строку для ввода
			input = msclr::interop::marshal_as<std::string>(txb_f->Text);

			if (error(input))//проверка на ошибки со скобками
			{
				//txb_f->Text = "";
				MessageBox::Show("Синтаксическая ошибка!", "Error", MessageBoxButtons::OK);
				return;
			}

			if (findx(input) == std::string::npos)//start point)))))))))))
			{
				MessageBox::Show("Отсутствует аргумент!", "Error", MessageBoxButtons::OK);
				return;
			}
			else
			{
			/////////////////////////
			while (x <= GRAF.get_px())
			{
				while (findx(input) != std::string::npos)//...и меняем их на наше введенное число
				{
					if (findx(input) == 0)
						input.replace(findx(input), 1, '(' + std::to_string(x) + ')');
					else
						input.replace(findx(input) + 1, 1, '(' + std::to_string(x) + ')');

					findx(input);
				}
				//?
				int buf = input.find("exp");
				while (buf != std::string::npos)
				{
					std::string sub = trigonometry(input, buf);
					float res = counter(sub);
					if (res < 0)
					{
						MessageBox::Show("Синтаксическая ошибка, или не подходящий предел!", "Error", MessageBoxButtons::OK);
						return;
					}
					input.replace(buf, sub.length() + 3, std::to_string(std::exp(res)));
					buf = input.find("exp");
				}
				/////
				buf = input.find("sqrt");
				while (buf != std::string::npos)
				{
					std::string sub = trigonometryforsqrt(input, buf);
					float res = counter(sub);
					if (res < 0)
					{
						MessageBox::Show("Синтаксическая ошибка, или не подходящий предел!", "Error", MessageBoxButtons::OK);
						return;
					}
					input.replace(buf, sub.length() + 3, std::to_string(std::sqrt(res)));
					buf = input.find("sqrt");
				}

				//////
				buf = input.find("sin");
				while (buf != std::string::npos)
				{
					std::string sub = trigonometry(input, buf);
					input.replace(buf, sub.length() + 3, '(' + std::to_string(std::sin(counter(sub))) + ')');
					buf = input.find("sin");
				}
				//////
				buf = input.find("tan");
				while (buf != std::string::npos)
				{
					std::string sub = trigonometry(input, buf);
					input.replace(buf, sub.length() + 3, '(' + std::to_string(std::tan(counter(sub))) + ')');
					buf = input.find("tan");
				}
				/////
				buf = input.find("cos");
				while (buf != std::string::npos)
				{
					std::string sub = trigonometry(input, buf);
					input.replace(buf, sub.length() + 3, '(' + std::to_string(std::cos(counter(sub))) + ')');
					buf = input.find("cos");
				}
				/////

				buf = input.find("ctg");
				while (buf != std::string::npos)
				{
					std::string sub = trigonometry(input, buf);
					input.replace(buf, sub.length() + 3, '(' + std::to_string(std::tan(M_PI / 2 - counter(sub))) + ')');
					buf = input.find("ctg");
				}
				/////
				//?
				

				//
				y = counter(input);
				//
				chrt_my->Series[0]->Points->AddXY(x, y);

				x += GRAF.get_shag();
				input = msclr::interop::marshal_as<std::string>(txb_f->Text);
			}
			/////////////////////////
			}


		}
		else
		{
			txb_lx->Text = "";
			txb_px->Text = "";
			MessageBox::Show("Введённый предел недействителен, или введен невозможный шаг!", "Error", MessageBoxButtons::OK);
			return;
		}
	}
	};
}
