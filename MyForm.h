#pragma once
#include "TDrawing.h"
#include <string>

namespace PlexForms
{
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
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  линиюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьРисунокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьРисунокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  стеретьРисунокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  функцииПоРаботеСПлексомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  переместитьПлексToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  переместитьТочкуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  показатьИменаТочекToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  перекраситьПлексToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьЛиниюToolStripMenuItem;


	private: System::ComponentModel::IContainer^  components;



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
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->линиюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функцииПоРаботеСПлексомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переместитьПлексToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переместитьТочкуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->показатьИменаТочекToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->перекраситьПлексToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьЛиниюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьРисунокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьРисунокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стеретьРисунокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->создатьToolStripMenuItem,
					this->функцииПоРаботеСПлексомToolStripMenuItem, this->сохранитьРисунокToolStripMenuItem, this->открытьРисунокToolStripMenuItem,
					this->стеретьРисунокToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip->Size = System::Drawing::Size(886, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->линиюToolStripMenuItem });
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->создатьToolStripMenuItem->Text = L"Создать";
			// 
			// линиюToolStripMenuItem
			// 
			this->линиюToolStripMenuItem->Name = L"линиюToolStripMenuItem";
			this->линиюToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->линиюToolStripMenuItem->Text = L"Линию";
			this->линиюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::линиюToolStripMenuItem_Click);
			// 
			// функцииПоРаботеСПлексомToolStripMenuItem
			// 
			this->функцииПоРаботеСПлексомToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->переместитьПлексToolStripMenuItem,
					this->переместитьТочкуToolStripMenuItem, this->показатьИменаТочекToolStripMenuItem, this->перекраситьПлексToolStripMenuItem,
					this->удалитьЛиниюToolStripMenuItem
			});
			this->функцииПоРаботеСПлексомToolStripMenuItem->Name = L"функцииПоРаботеСПлексомToolStripMenuItem";
			this->функцииПоРаботеСПлексомToolStripMenuItem->Size = System::Drawing::Size(186, 20);
			this->функцииПоРаботеСПлексомToolStripMenuItem->Text = L"Функции по работе с плексом";
			// 
			// переместитьПлексToolStripMenuItem
			// 
			this->переместитьПлексToolStripMenuItem->Name = L"переместитьПлексToolStripMenuItem";
			this->переместитьПлексToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->переместитьПлексToolStripMenuItem->Text = L"Переместить плекс";
			this->переместитьПлексToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::переместитьПлексToolStripMenuItem_Click);
			// 
			// переместитьТочкуToolStripMenuItem
			// 
			this->переместитьТочкуToolStripMenuItem->Name = L"переместитьТочкуToolStripMenuItem";
			this->переместитьТочкуToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->переместитьТочкуToolStripMenuItem->Text = L"Переместить точку";
			this->переместитьТочкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::переместитьТочкуToolStripMenuItem_Click);
			// 
			// показатьИменаТочекToolStripMenuItem
			// 
			this->показатьИменаТочекToolStripMenuItem->Name = L"показатьИменаТочекToolStripMenuItem";
			this->показатьИменаТочекToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->показатьИменаТочекToolStripMenuItem->Text = L"Показать имена точек";
			this->показатьИменаТочекToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::показатьИменаТочекToolStripMenuItem_Click);
			// 
			// перекраситьПлексToolStripMenuItem
			// 
			this->перекраситьПлексToolStripMenuItem->Name = L"перекраситьПлексToolStripMenuItem";
			this->перекраситьПлексToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->перекраситьПлексToolStripMenuItem->Text = L"Перекрасить плекс";
			this->перекраситьПлексToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::перекраситьПлексToolStripMenuItem_Click);
			// 
			// удалитьЛиниюToolStripMenuItem
			// 
			this->удалитьЛиниюToolStripMenuItem->Name = L"удалитьЛиниюToolStripMenuItem";
			this->удалитьЛиниюToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->удалитьЛиниюToolStripMenuItem->Text = L"Удалить линию";
			this->удалитьЛиниюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьЛиниюToolStripMenuItem_Click);
			// 
			// сохранитьРисунокToolStripMenuItem
			// 
			this->сохранитьРисунокToolStripMenuItem->Name = L"сохранитьРисунокToolStripMenuItem";
			this->сохранитьРисунокToolStripMenuItem->Size = System::Drawing::Size(126, 20);
			this->сохранитьРисунокToolStripMenuItem->Text = L"Сохранить рисунок";
			this->сохранитьРисунокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьРисунокToolStripMenuItem_Click);
			// 
			// открытьРисунокToolStripMenuItem
			// 
			this->открытьРисунокToolStripMenuItem->Name = L"открытьРисунокToolStripMenuItem";
			this->открытьРисунокToolStripMenuItem->Size = System::Drawing::Size(115, 20);
			this->открытьРисунокToolStripMenuItem->Text = L"Открыть рисунок";
			this->открытьРисунокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьРисунокToolStripMenuItem_Click);
			// 
			// стеретьРисунокToolStripMenuItem
			// 
			this->стеретьРисунокToolStripMenuItem->Name = L"стеретьРисунокToolStripMenuItem";
			this->стеретьРисунокToolStripMenuItem->Size = System::Drawing::Size(111, 20);
			this->стеретьРисунокToolStripMenuItem->Text = L"Стереть рисунок";
			this->стеретьРисунокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::стеретьРисунокToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(886, 612);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Plex";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void MarshalString(String ^ s, std::string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}


		Graphics ^g;
		TDrawing *drawing = nullptr;

		int mouseX, mouseY;

		bool readyCreateLine = false;

		bool readyMovePoint = false;
		bool readyMovePlex = false;

		bool readyToDeleteLine = false;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		g = CreateGraphics();

		drawing = new TDrawing();
	}

	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (e->KeyCode == System::Windows::Forms::Keys::Escape)
		{
			readyCreateLine = false;

			readyMovePoint = false;
			readyMovePlex = false;

			readyToDeleteLine = false;
		}
	}

	private: System::Void сохранитьРисунокToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SaveFileDialog ^saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog->FilterIndex = 1;
		saveFileDialog->RestoreDirectory = true;

		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::string fileName;
			MarshalString(saveFileDialog->FileName, fileName);

			drawing->save(fileName);
		}
	}

	private: System::Void открытьРисунокToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MessageBox::Show(
			"Вы действительно хотите открыть новый рисунок? При открытии нового рисунка произойдет удаление текущего.",
			"Form Open",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
			openFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog->FilterIndex = 1;
			openFileDialog->RestoreDirectory = true;

			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				g->Clear(SystemColors::Control);
				delete drawing;
				drawing = new TDrawing();

				std::string fileName;
				MarshalString(openFileDialog->FileName, fileName);

				drawing->open(fileName);
				drawing->draw(g);
			}
		}
	}

	private: System::Void стеретьРисунокToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MessageBox::Show(
			"Вы действительно хотите стереть рисунок?",
			"Drawing Erase",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			g->Clear(SystemColors::Control);
			delete drawing;
			drawing = new TDrawing();
		}

	}

	private: System::Void линиюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		readyCreateLine = true;

		readyMovePoint = false;
		readyMovePlex = false;

		readyToDeleteLine = false;
	}
	private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left && readyCreateLine)
		{
			mouseX = e->X;
			mouseY = e->Y;
		}

		if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePoint)
		{
			mouseX = e->X;
			mouseY = e->Y;
		}

		if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePlex)
		{
			mouseX = e->X;
			mouseY = e->Y;
		}
	}

	private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left && readyCreateLine)
		{
			drawing->addLine(mouseX, mouseY, e->X, e->Y);

			g->Clear(SystemColors::Control);
			drawing->draw(g);

			mouseX = -1;
			mouseY = -1;
		}

		if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePoint)
		{
			int dx = e->X - mouseX;
			int dy = e->Y - mouseY;

			g->Clear(SystemColors::Control);
			drawing->movePoint(mouseX, mouseY, dx, dy);
			drawing->draw(g);

			mouseX = -1;
			mouseY = -1;
		}

		if (e->Button == System::Windows::Forms::MouseButtons::Left && readyMovePlex)
		{
			int dx = e->X - mouseX;
			int dy = e->Y - mouseY;

			g->Clear(SystemColors::Control);
			drawing->moveDrawing(dx, dy);
			drawing->draw(g);

			mouseX = -1;
			mouseY = -1;
		}
	}

	private: System::Void переместитьПлексToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		readyMovePlex = true;

		readyCreateLine = false;
		readyMovePoint = false;

		readyToDeleteLine = false;
	}

	private: System::Void показатьИменаТочекToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (показатьИменаТочекToolStripMenuItem->Text == "Показать имена точек")
		{
			drawing->showPointNames(g);

			показатьИменаТочекToolStripMenuItem->Text = "Скрыть имена точек";
		}
		else
		{
			g->Clear(SystemColors::Control);
			drawing->draw(g);

			показатьИменаТочекToolStripMenuItem->Text = "Показать имена точек";
		}

	}
	private: System::Void перекраситьПлексToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ColorDialog ^colorDialog = gcnew ColorDialog;
		colorDialog->ShowHelp = true;

		if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			g->Clear(SystemColors::Control);
			drawing->recolor(colorDialog->Color.ToArgb());
			drawing->draw(g);
		}
	}
	private: System::Void переместитьТочкуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		readyMovePoint = true;

		readyCreateLine = false;
		readyMovePlex = false;

		readyToDeleteLine = false;
	}
	private: System::Void удалитьЛиниюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)	
	{
		readyToDeleteLine = true;
	}

	private: System::Void MyForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left && readyToDeleteLine)
		{
			drawing->deleteLine(e->X, e->Y);
			g->Clear(SystemColors::Control);
			drawing->draw(g);
		}

	}
};
}
