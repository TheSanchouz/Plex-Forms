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
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;


	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ���������
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������ToolStripMenuItem,
					this->�����������������������ToolStripMenuItem, this->����������������ToolStripMenuItem, this->��������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip->Size = System::Drawing::Size(886, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����������������ToolStripMenuItem,
					this->����������������ToolStripMenuItem, this->������������������ToolStripMenuItem, this->����������������ToolStripMenuItem,
					this->������������ToolStripMenuItem
			});
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(186, 20);
			this->�����������������������ToolStripMenuItem->Text = L"������� �� ������ � �������";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->����������������ToolStripMenuItem->Text = L"����������� �����";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->����������������ToolStripMenuItem->Text = L"����������� �����";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->������������������ToolStripMenuItem->Text = L"�������� ����� �����";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->����������������ToolStripMenuItem->Text = L"����������� �����";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->������������ToolStripMenuItem->Text = L"������� �����";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(126, 20);
			this->����������������ToolStripMenuItem->Text = L"��������� �������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(115, 20);
			this->��������������ToolStripMenuItem->Text = L"������� �������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(111, 20);
			this->��������������ToolStripMenuItem->Text = L"������� �������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
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

	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
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

	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MessageBox::Show(
			"�� ������������� ������ ������� ����� �������? ��� �������� ������ ������� ���������� �������� ��������.",
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

	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MessageBox::Show(
			"�� ������������� ������ ������� �������?",
			"Drawing Erase",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			g->Clear(SystemColors::Control);
			delete drawing;
			drawing = new TDrawing();
		}

	}

	private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
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

	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		readyMovePlex = true;

		readyCreateLine = false;
		readyMovePoint = false;

		readyToDeleteLine = false;
	}

	private: System::Void ������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (������������������ToolStripMenuItem->Text == "�������� ����� �����")
		{
			drawing->showPointNames(g);

			������������������ToolStripMenuItem->Text = "������ ����� �����";
		}
		else
		{
			g->Clear(SystemColors::Control);
			drawing->draw(g);

			������������������ToolStripMenuItem->Text = "�������� ����� �����";
		}

	}
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
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
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		readyMovePoint = true;

		readyCreateLine = false;
		readyMovePlex = false;

		readyToDeleteLine = false;
	}
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)	
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
