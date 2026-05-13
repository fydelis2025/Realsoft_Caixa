#include<iostream>
#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace System::Collections::Generic;	
	using namespace System::Net::NetworkInformation;
	using namespace System::Net;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);

	/// <summary>
	/// Summary for Form16
	/// </summary>
	public ref class Form16 : public System::Windows::Forms::Form
	{
	public:
		Form16(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Form16::Form16_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form16()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Label^  Label2;
	private: 
	internal: System::Windows::Forms::TextBox^  TxOpcao;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  TxValor;

	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private: System::Windows::Forms::Panel^  P_Fiscal;
	internal: 

	internal: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form16::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxSenhaFiscal = (gcnew System::Windows::Forms::TextBox());
			this->P_Fiscal = (gcnew System::Windows::Forms::Panel());
			this->P_Fiscal->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 207);
			this->label1->TabIndex = 0;
			this->label1->Text = L"01 - Sangria\r\n\r\n02 - Suprimento";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label2->Location = System::Drawing::Point(11, 216);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(105, 29);
			this->Label2->TabIndex = 98;
			this->Label2->Text = L"OPÇÃO:";
			// 
			// TxOpcao
			// 
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao->Location = System::Drawing::Point(17, 252);
			this->TxOpcao->MaxLength = 200;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(160, 40);
			this->TxOpcao->TabIndex = 97;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form16::TxOpcao_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(177, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 29);
			this->label3->TabIndex = 100;
			this->label3->Text = L"VALOR:";
			// 
			// TxValor
			// 
			this->TxValor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxValor->Location = System::Drawing::Point(183, 252);
			this->TxValor->MaxLength = 200;
			this->TxValor->Name = L"TxValor";
			this->TxValor->Size = System::Drawing::Size(160, 40);
			this->TxValor->TabIndex = 99;
			this->TxValor->Text = L"0,00";
			this->TxValor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxValor->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form16::TxValor_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(11, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 29);
			this->label5->TabIndex = 103;
			this->label5->Text = L"SENHA DO FISCAL:";
			// 
			// TxSenhaFiscal
			// 
			this->TxSenhaFiscal->BackColor = System::Drawing::Color::White;
			this->TxSenhaFiscal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxSenhaFiscal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxSenhaFiscal->Location = System::Drawing::Point(16, 43);
			this->TxSenhaFiscal->MaxLength = 200;
			this->TxSenhaFiscal->Name = L"TxSenhaFiscal";
			this->TxSenhaFiscal->Size = System::Drawing::Size(386, 40);
			this->TxSenhaFiscal->TabIndex = 102;
			this->TxSenhaFiscal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxSenhaFiscal->UseSystemPasswordChar = true;
			this->TxSenhaFiscal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form16::TxSenhaFiscal_KeyDown);
			// 
			// P_Fiscal
			// 
			this->P_Fiscal->BackColor = System::Drawing::Color::Transparent;
			this->P_Fiscal->Controls->Add(this->TxSenhaFiscal);
			this->P_Fiscal->Controls->Add(this->label5);
			this->P_Fiscal->Location = System::Drawing::Point(16, 194);
			this->P_Fiscal->Name = L"P_Fiscal";
			this->P_Fiscal->Size = System::Drawing::Size(416, 110);
			this->P_Fiscal->TabIndex = 104;
			this->P_Fiscal->Visible = false;
			// 
			// Form16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(444, 316);
			this->ControlBox = false;
			this->Controls->Add(this->P_Fiscal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxValor);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->TxOpcao);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form16";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form16::Form16_KeyDown);
			this->P_Fiscal->ResumeLayout(false);
			this->P_Fiscal->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: static int Opcao;
		private: static Boolean SolicitarSenhaFiscal = false;
		private: static Decimal ValorTotal;

	private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 try
				 {
					 if (e->KeyCode == Keys::Enter)
					 {
						 if (TxOpcao->Text->Equals("1"))
						 {
							 Opcao = 1;
							 TxValor->Focus();
						 }
						 else if (TxOpcao->Text->Equals("2"))
						 {
							 Opcao = 2;
							 TxValor->Focus();
						 }
						 else
						 {
							 MessageBox::Show("Opção inválida",L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							 return;
						 }
					 }
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }

private: System::Void TxValor_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 	if (e->KeyCode == Keys::Enter)
				{
					P_Fiscal->Visible = true;

					TxSenhaFiscal->Focus();
				}
			 
		 }
private: System::Void Form16_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Escape)
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
				 if (e->KeyCode == Keys::Enter)
				 {
					 if (TxSenhaFiscal->Text->Trim()->Length != 0)
					 {
						 String ^Descript = Realsoft_Criptografia::Encrypt(TxSenhaFiscal->Text, Realsoft_Sistema::passPhrase, Realsoft_Sistema::saltValue, Realsoft_Sistema::hashAlgorithm, Realsoft_Sistema::_interacao, Realsoft_Sistema::_initvector, Realsoft_Sistema::keySize);

						 Realsoft_Geral::logon = Realsoft_Consultas::Consultar_UsuarioFiscal(Descript);

						 Realsoft_Sistema::IDFiscal = Realsoft_Geral::logon->IDFiscal;
						 
						 if (Realsoft_Geral::logon != nullptr)
						  {						 
							 
						if (Opcao == 1) //Sangria
						 {
							 if (Decimal::Parse(TxValor->Text) != 0)
							 {
								 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										P_Fiscal->Visible = false;

										ValorTotal = Decimal::Parse(TxValor->Text);
										
										Realsoft_Bematech::ImprimeSangria(ValorTotal.ToString());

										Realsoft_Geral::CriarMovimentacao_Sangria(ValorTotal);

										this->Close();
									}
									else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										P_Fiscal->Visible = false;

										ValorTotal = Decimal::Parse(TxValor->Text);	

										Realsoft_Elgin::Sangria(ValorTotal);

										Realsoft_Geral::CriarMovimentacao_Sangria(ValorTotal);

										this->Close();
								
									}
									else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										P_Fiscal->Visible = false;

										ValorTotal = Decimal::Parse(TxValor->Text);										

										Realsoft_Daruma::Sangria(ValorTotal.ToString("#####0.00"),"");

										Realsoft_Geral::CriarMovimentacao_Sangria(ValorTotal);

										this->Close();
									}
									else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										Realsoft_Geral::CriarMovimentacao_Sangria(ValorTotal);
									}
									else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
									{
										P_Fiscal->Visible = false;

										ValorTotal = Decimal::Parse(TxValor->Text);

										Realsoft_BematechNaoFiscal::ImprimirSangria(ValorTotal);

										Realsoft_Geral::CriarMovimentacao_Sangria(ValorTotal);

										this->Close();
									}
									else
									{
										//throw new std::exception("Impressora não cadastrada");
										MessageBox::Show("Impressora não cadastrada","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
										return;
									}
							 }
							 else
							 {
							 		MessageBox::Show("Valor informado invalido","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
									return;
							 }
						 }
						 else if (Opcao == 2)
						 {
							 if (Decimal::Parse(TxValor->Text) != 0)
							 {
								  if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										P_Fiscal->Visible = false;

										ValorTotal = Decimal::Parse(TxValor->Text);
										Realsoft_Bematech::ImprimeSuprimento(ValorTotal.ToString());

										Realsoft_Geral::CriarMovimentacao_Suprimento(ValorTotal);

										this->Close();
									}
									else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										P_Fiscal->Visible = false;

								 		ValorTotal = Decimal::Parse(TxValor->Text);

										Realsoft_Elgin::Suprimento(ValorTotal, "");

										Realsoft_Geral::CriarMovimentacao_Suprimento(ValorTotal);

										this->Close();
									}
									else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										P_Fiscal->Visible = false;

										ValorTotal = Decimal::Parse(TxValor->Text);

										Realsoft_Daruma::Suprimento(ValorTotal.ToString("#####0.00"),"");
										
										Realsoft_Geral::CriarMovimentacao_Suprimento(ValorTotal);

										this->Close();
									}
									else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										Realsoft_Geral::CriarMovimentacao_Suprimento(ValorTotal);
									}
									else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
									{
										P_Fiscal->Visible = false;

										ValorTotal = Decimal::Parse(TxValor->Text);

										Realsoft_BematechNaoFiscal::ImprimirSuprimento(ValorTotal);

										Realsoft_Geral::CriarMovimentacao_Suprimento(ValorTotal);

										this->Close();
									}
									else
									{
										//throw new std::exception("Impressora não cadastrada");
										MessageBox::Show("Impressora não cadastrada","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
										return;
									}
							 }
							 else
							 {
							 		MessageBox::Show("Valor informado invalido","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
									return;
							 }
						 }
						 else 
						 {
							MessageBox::Show("Opção inválida",L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						 }
							  }
							  else
							  {
								  //throw new std::exception("Senha do fiscal não confere");
								MessageBox::Show("Senha do fiscal não confere","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
								  return;
							  }
						 }
						 else
						 {
							 //throw new std::exception("Senha do fiscal não confere");
							MessageBox::Show("Senha do fiscal não confere","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							 return;
						 }
					 
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
};
}
