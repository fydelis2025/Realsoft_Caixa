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
	/// Summary for FormDesconto
	/// </summary>
	public ref class FormDesconto : public System::Windows::Forms::Form
	{
	public:
		FormDesconto(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormDesconto::FormDesconto_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormDesconto()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  P_Fiscal;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private: 
	internal: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel1;
	internal: 
	internal: System::Windows::Forms::Label^  label6;
	private: 
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::TextBox^  TxValor;

	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  TxOpcao;

	internal: System::Windows::Forms::Label^  label2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormDesconto::typeid));
			this->P_Fiscal = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TxSenhaFiscal = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->P_Fiscal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// P_Fiscal
			// 
			this->P_Fiscal->BackColor = System::Drawing::Color::Transparent;
			this->P_Fiscal->Controls->Add(this->pictureBox1);
			this->P_Fiscal->Controls->Add(this->TxSenhaFiscal);
			this->P_Fiscal->Controls->Add(this->label5);
			this->P_Fiscal->Location = System::Drawing::Point(3, 84);
			this->P_Fiscal->Name = L"P_Fiscal";
			this->P_Fiscal->Size = System::Drawing::Size(360, 152);
			this->P_Fiscal->TabIndex = 106;
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
			this->TxSenhaFiscal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormDesconto::TxSenhaFiscal_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(89, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 29);
			this->label5->TabIndex = 103;
			this->label5->Text = L"SENHA DO FISCAL:";
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
			this->panel1->Location = System::Drawing::Point(3, 89);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 152);
			this->panel1->TabIndex = 107;
			this->panel1->Visible = false;
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
			this->TxValor->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormDesconto::TxValor_KeyDown);
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
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormDesconto::TxOpcao_KeyDown);
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
			// FormDesconto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(367, 248);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->P_Fiscal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormDesconto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &FormDesconto::FormDesconto_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormDesconto::FormDesconto_KeyDown);
			this->P_Fiscal->ResumeLayout(false);
			this->P_Fiscal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void FormDesconto_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if(e->KeyCode == Keys::Escape)
				 {
					 Realsoft_Sistema::FinalizarVenda = false;
					 Realsoft_Sistema::LimparCampos = false;
					 Realsoft_Sistema::AtivarExcluirItem = false;
					 Realsoft_Sistema::RecuperarCupom = false;
					 Realsoft_Sistema::ExibirDesconto = false;

					 this->Close();
				 }
			 }
private: System::Void TxSenhaFiscal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			{
				if(e->KeyCode == Keys::Enter)
				{
					if (TxSenhaFiscal->Text->Trim()->Length != 0)
					 {
						 String ^Descript = Realsoft_Criptografia::Encrypt(TxSenhaFiscal->Text, Realsoft_Sistema::passPhrase, Realsoft_Sistema::saltValue, Realsoft_Sistema::hashAlgorithm, Realsoft_Sistema::_interacao, Realsoft_Sistema::_initvector, Realsoft_Sistema::keySize);

						 Realsoft_Geral::logon = Realsoft_Consultas::Consultar_UsuarioFiscal(Descript);
					 
						 if (Realsoft_Geral::logon != nullptr)
						  {
							 Realsoft_Sistema::IDFiscal = Realsoft_Geral::logon->IDFiscal;

							  P_Fiscal->Visible = false;
							  
							  panel1->Visible = true;

							  TxOpcao->Focus();
						  }
						  else
						  {
							  throw gcnew Exception("SENHA DO FISCAL NAO CONFERE");
						  }
					}
				}
			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		 }

		 public: static Boolean Porcentage = false;
private: System::Void TxValor_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if(e->KeyCode == Keys::Enter)
				 {
					 if (TxOpcao->Text == "1")
					 {						 
						 Realsoft_Sistema::ExibirDesconto = true;
						 Porcentage = true;
						 Realsoft_Sistema::ValorDesconto = Decimal::Parse(TxValor->Text);

						 this->Close();
					 }
					 else
					 {						 
						 Realsoft_Sistema::ExibirDesconto = true;
						 Porcentage = false;

						 Realsoft_Sistema::ValorDesconto = Decimal::Parse(TxValor->Text);

						 this->Close();
					 }
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxValor->Focus();
			 }
		 }
private: System::Void FormDesconto_Load(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

		 }
};
}
