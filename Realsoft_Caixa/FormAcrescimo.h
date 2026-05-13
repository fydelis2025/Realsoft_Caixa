#include<io.h>
#include<iostream>
#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	/// <summary>
	/// Summary for FormAcrescimo
	/// </summary>
	public ref class FormAcrescimo : public System::Windows::Forms::Form
	{
	public:
		FormAcrescimo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->KeyPreview = true;
			//this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormAcrescimo::FormAcrescimo_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormAcrescimo()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	internal:
	internal: System::Windows::Forms::Label^  label6;
	private:
	private: System::Windows::Forms::Panel^  P_Fiscal;
	internal:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private:
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
	internal:
	internal: System::Windows::Forms::TextBox^  TxValor;
	private:
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  TxOpcao;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAcrescimo::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->P_Fiscal = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TxSenhaFiscal = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->P_Fiscal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(9, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 24);
			this->label2->TabIndex = 103;
			this->label2->Text = L"1 - (%) PORCENTAGEM";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 28);
			this->label1->TabIndex = 108;
			this->label1->Text = L"ACRESCIMO";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(172, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 24);
			this->label6->TabIndex = 107;
			this->label6->Text = L"Valor";
			// 
			// P_Fiscal
			// 
			this->P_Fiscal->BackColor = System::Drawing::Color::Transparent;
			this->P_Fiscal->Controls->Add(this->pictureBox1);
			this->P_Fiscal->Controls->Add(this->TxSenhaFiscal);
			this->P_Fiscal->Controls->Add(this->label5);
			this->P_Fiscal->Location = System::Drawing::Point(12, 88);
			this->P_Fiscal->Name = L"P_Fiscal";
			this->P_Fiscal->Size = System::Drawing::Size(360, 152);
			this->P_Fiscal->TabIndex = 109;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 64);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 104;
			this->pictureBox1->TabStop = false;
			// 
			// TxSenhaFiscal
			// 
			this->TxSenhaFiscal->BackColor = System::Drawing::Color::White;
			this->TxSenhaFiscal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxSenhaFiscal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxSenhaFiscal->Location = System::Drawing::Point(85, 67);
			this->TxSenhaFiscal->MaxLength = 200;
			this->TxSenhaFiscal->Name = L"TxSenhaFiscal";
			this->TxSenhaFiscal->Size = System::Drawing::Size(267, 40);
			this->TxSenhaFiscal->TabIndex = 102;
			this->TxSenhaFiscal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxSenhaFiscal->UseSystemPasswordChar = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(89, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 29);
			this->label5->TabIndex = 103;
			this->label5->Text = L"SENHA DO FISCAL:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(9, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 24);
			this->label4->TabIndex = 106;
			this->label4->Text = L"Opção";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->TxValor);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->TxOpcao);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(12, 93);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 152);
			this->panel1->TabIndex = 110;
			this->panel1->Visible = false;
			// 
			// TxValor
			// 
			this->TxValor->BackColor = System::Drawing::Color::White;
			this->TxValor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxValor->Location = System::Drawing::Point(176, 104);
			this->TxValor->MaxLength = 200;
			this->TxValor->Name = L"TxValor";
			this->TxValor->Size = System::Drawing::Size(144, 40);
			this->TxValor->TabIndex = 105;
			this->TxValor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(9, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 24);
			this->label3->TabIndex = 104;
			this->label3->Text = L"2 - ($) REAL";
			// 
			// TxOpcao
			// 
			this->TxOpcao->BackColor = System::Drawing::Color::White;
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao->Location = System::Drawing::Point(14, 104);
			this->TxOpcao->MaxLength = 200;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(144, 40);
			this->TxOpcao->TabIndex = 102;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// FormAcrescimo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(378, 257);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->P_Fiscal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormAcrescimo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormAcrescimo::FormAcrescimo_KeyDown);
			this->P_Fiscal->ResumeLayout(false);
			this->P_Fiscal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormAcrescimo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		if (e->KeyCode == Keys::Escape)
		{
			this->Close();
		}


	}
};
}
