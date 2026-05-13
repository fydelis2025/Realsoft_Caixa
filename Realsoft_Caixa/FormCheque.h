#include<iostream>

#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace System::Collections::Generic;
	using namespace System::Net::NetworkInformation;
	using namespace System::Net;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);

	/// <summary>
	/// Summary for FormCheque
	/// </summary>
	public ref class FormCheque : public System::Windows::Forms::Form
	{
	public:
		FormCheque(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			//this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormCheque::FormCheque_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCheque()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MaskedTextBox^  TxCPF;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  TxBanco;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::MaskedTextBox^  TxAgencia;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MaskedTextBox^  TxConta;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MaskedTextBox^  TxDigito;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  TxCheque;
	private: System::Windows::Forms::MaskedTextBox^  TxNome;
	private: System::Windows::Forms::MaskedTextBox^  TxTelefone;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCheque::typeid));
			this->TxCPF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxBanco = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxAgencia = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxConta = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TxDigito = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxCheque = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TxNome = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TxTelefone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TxCPF
			// 
			this->TxCPF->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCPF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxCPF->Location = System::Drawing::Point(33, 108);
			this->TxCPF->Mask = L"###.###.###-##";
			this->TxCPF->Name = L"TxCPF";
			this->TxCPF->Size = System::Drawing::Size(150, 29);
			this->TxCPF->TabIndex = 1;
			this->TxCPF->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxCPF_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(30, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"CPF";
			// 
			// TxBanco
			// 
			this->TxBanco->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxBanco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxBanco->Location = System::Drawing::Point(189, 108);
			this->TxBanco->Name = L"TxBanco";
			this->TxBanco->Size = System::Drawing::Size(306, 29);
			this->TxBanco->TabIndex = 3;
			this->TxBanco->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxBanco_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(186, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Banco";
			// 
			// TxAgencia
			// 
			this->TxAgencia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxAgencia->Location = System::Drawing::Point(33, 163);
			this->TxAgencia->Name = L"TxAgencia";
			this->TxAgencia->Size = System::Drawing::Size(82, 29);
			this->TxAgencia->TabIndex = 5;
			this->TxAgencia->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxAgencia_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(30, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Agencia";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(118, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Conta";
			// 
			// TxConta
			// 
			this->TxConta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxConta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxConta->Location = System::Drawing::Point(121, 163);
			this->TxConta->Name = L"TxConta";
			this->TxConta->Size = System::Drawing::Size(103, 29);
			this->TxConta->TabIndex = 7;
			this->TxConta->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxConta_KeyDown);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(227, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Digito";
			// 
			// TxDigito
			// 
			this->TxDigito->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxDigito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxDigito->Location = System::Drawing::Point(230, 163);
			this->TxDigito->Name = L"TxDigito";
			this->TxDigito->Size = System::Drawing::Size(51, 29);
			this->TxDigito->TabIndex = 9;
			this->TxDigito->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxDigito_KeyDown);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::Yellow;
			this->label7->Location = System::Drawing::Point(284, 147);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Cheque";
			// 
			// TxCheque
			// 
			this->TxCheque->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCheque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxCheque->Location = System::Drawing::Point(287, 163);
			this->TxCheque->Name = L"TxCheque";
			this->TxCheque->Size = System::Drawing::Size(208, 29);
			this->TxCheque->TabIndex = 11;
			this->TxCheque->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxCheque_KeyDown);
			// 
			// TxNome
			// 
			this->TxNome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxNome->Location = System::Drawing::Point(33, 219);
			this->TxNome->Name = L"TxNome";
			this->TxNome->Size = System::Drawing::Size(288, 29);
			this->TxNome->TabIndex = 13;
			this->TxNome->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxNome_KeyDown);
			// 
			// TxTelefone
			// 
			this->TxTelefone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxTelefone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxTelefone->Location = System::Drawing::Point(327, 219);
			this->TxTelefone->Name = L"TxTelefone";
			this->TxTelefone->Size = System::Drawing::Size(168, 29);
			this->TxTelefone->TabIndex = 14;
			this->TxTelefone->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::TxTelefone_KeyDown);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::Color::Yellow;
			this->label8->Location = System::Drawing::Point(30, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Nome";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::Yellow;
			this->label9->Location = System::Drawing::Point(324, 203);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Telefone";
			// 
			// FormCheque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(507, 278);
			this->ControlBox = false;
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TxTelefone);
			this->Controls->Add(this->TxNome);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TxCheque);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxDigito);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxConta);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TxAgencia);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxBanco);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TxCPF);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormCheque";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCheque::FormCheque_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TxCheque_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {
					 if (e->KeyCode == Keys::Enter)
					 {
						 TxNome->Focus();
					 }
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
private: System::Void TxCPF_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 TxBanco->Focus();
			 }
	}
private: System::Void TxBanco_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 TxAgencia->Focus();
			 }
	}
private: System::Void TxAgencia_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 TxConta->Focus();
			 }
	}
private: System::Void TxConta_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 TxDigito->Focus();
			 }
	}
private: System::Void TxDigito_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 TxCheque->Focus();
			 }
	}
private: System::Void FormCheque_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Escape)
			 {
				 this->Close();
			 }
	}
private: System::Void TxNome_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if (e->KeyCode == Keys::Enter)
				 {
					 TxTelefone->Focus();
				 }
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void TxTelefone_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if (e->KeyCode == Keys::Enter)
				 {
					 this->Close();
				 }
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
};
}
