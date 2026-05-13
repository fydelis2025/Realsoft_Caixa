#include<io.h>
#include<iostream>
#include"FormCupom.h"
#include<exception>
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
	/// Summary for Form11
	/// </summary>
	public ref class Form11 : public System::Windows::Forms::Form
	{
	public:
		Form11(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Form11::Form11_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form11()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	internal: System::Windows::Forms::Label^  TbOpcao;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::TextBox^  TxOpcao;

	private: System::Windows::Forms::Panel^  P_Fiscal;
	internal: 
	internal: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private: 
	internal: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: 



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form11::typeid));
			this->TbOpcao = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->P_Fiscal = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TxSenhaFiscal = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->P_Fiscal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TbOpcao
			// 
			this->TbOpcao->BackColor = System::Drawing::Color::Transparent;
			this->TbOpcao->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->TbOpcao->ForeColor = System::Drawing::Color::White;
			this->TbOpcao->Location = System::Drawing::Point(12, 94);
			this->TbOpcao->Name = L"TbOpcao";
			this->TbOpcao->Size = System::Drawing::Size(268, 89);
			this->TbOpcao->TabIndex = 97;
			this->TbOpcao->Text = L"1. Cancelar CCF\r\n2. Cancelar GNF\r\n3. Recuperar Ultimo CCF\r\n4. Exportar CCF/GNF";
			this->TbOpcao->Visible = false;
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::Yellow;
			this->Label2->Location = System::Drawing::Point(146, 238);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(105, 29);
			this->Label2->TabIndex = 96;
			this->Label2->Text = L"OPÇÃO:";
			this->Label2->Visible = false;
			// 
			// TxOpcao
			// 
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao->Location = System::Drawing::Point(152, 274);
			this->TxOpcao->MaxLength = 200;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(221, 40);
			this->TxOpcao->TabIndex = 95;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->Visible = false;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form11::TxOpcao_KeyDown);
			// 
			// P_Fiscal
			// 
			this->P_Fiscal->BackColor = System::Drawing::Color::Transparent;
			this->P_Fiscal->Controls->Add(this->pictureBox1);
			this->P_Fiscal->Controls->Add(this->TxSenhaFiscal);
			this->P_Fiscal->Controls->Add(this->label5);
			this->P_Fiscal->Location = System::Drawing::Point(16, 82);
			this->P_Fiscal->Name = L"P_Fiscal";
			this->P_Fiscal->Size = System::Drawing::Size(357, 142);
			this->P_Fiscal->TabIndex = 105;
			this->P_Fiscal->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form11::P_Fiscal_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 43);
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
			this->TxSenhaFiscal->Location = System::Drawing::Point(99, 67);
			this->TxSenhaFiscal->MaxLength = 200;
			this->TxSenhaFiscal->Name = L"TxSenhaFiscal";
			this->TxSenhaFiscal->Size = System::Drawing::Size(231, 40);
			this->TxSenhaFiscal->TabIndex = 102;
			this->TxSenhaFiscal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxSenhaFiscal->UseSystemPasswordChar = true;
			this->TxSenhaFiscal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form11::TxSenhaFiscal_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(99, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 29);
			this->label5->TabIndex = 103;
			this->label5->Text = L"SENHA DO FISCAL:";
			// 
			// Form11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(392, 327);
			this->ControlBox = false;
			this->Controls->Add(this->P_Fiscal);
			this->Controls->Add(this->TbOpcao);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->TxOpcao);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form11";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form11::Form11_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form11::Form11_KeyDown);
			this->P_Fiscal->ResumeLayout(false);
			this->P_Fiscal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form11_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
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

			 //private: Insere_CupomFiscalCancelado

			 private: static  Realsoft_CancelamentoCupomFiscal ^__CancelamentoCupom = gcnew Realsoft_CancelamentoCupomFiscal();
			 private: static void CancelarCupomFiscal()
					  {
						  try
						  {
							  __CancelamentoCupom = gcnew Realsoft_CancelamentoCupomFiscal();

							  __CancelamentoCupom->Filial = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "EMPRESA", "xxxx"));
							  __CancelamentoCupom->ECF = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "ECF", "xxxx"));
							  __CancelamentoCupom->CupomFiscal = Realsoft_Sistema::_Cupom;
							  __CancelamentoCupom->DataCancelamento = DateTime::Now;
							  __CancelamentoCupom->Fiscal = Realsoft_Sistema::IDFiscal;
							  __CancelamentoCupom->Cancelado = true;
							  __CancelamentoCupom->DataCriacao = DateTime::Now;
							  

							  Realsoft_Consultas::Insere_CupomFiscalCancelado(__CancelamentoCupom);
						  }
						  catch(Exception ^ex)
						  {
							  MessageBox::Show(ex->Message, "Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
						  }
					  }
private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 try
				 {

					 if (TxOpcao->Text == "1")
					 {
						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Realsoft_Bematech::CancelamentoCupom();
							 
							 CancelarCupomFiscal();

							 Realsoft_Sistema::LimparCampos = true;

							 this->Close();
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Realsoft_Elgin::CancelaCupom();
							 
							 CancelarCupomFiscal();

							 Realsoft_Sistema::LimparCampos = true;

							 this->Close();
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {							 
							 Realsoft_Daruma::CancelarVenda();
							 
							 CancelarCupomFiscal();

							 Realsoft_Sistema::LimparCampos = true;

							 this->Close();
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						 {
							 Realsoft_BematechNaoFiscal::CancelarCupom();
							 
							 CancelarCupomFiscal();

							 Realsoft_Sistema::LimparCampos = true;
							 
							 this->Close();
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
						 {
							 Realsoft_BematechNaoFiscal::fecharcupomtxt();

							 Realsoft_Sistema::_Cupom = Realsoft_BematechNaoFiscal::PadraoCupomDefault();

							 Realsoft_Sistema::LimparCampos = true;

							 this->Close();
						 }
						 else
						 {
							 throw gcnew Exception("Impressora não cadastrada");
							 
						 }
					 }
					 else if (TxOpcao->Text == "2")
					 {
						  if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

							 Realsoft_Sistema::LimparCampos = true;
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 
							 Realsoft_Daruma::CancelarNaoFiscal();

							 Realsoft_Sistema::LimparCampos = true;

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						 {
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
						 {
						 }
						 else
						 {
							 throw gcnew Exception("Impressora não cadastrada");
							 
						 }
					 }
					 else if (TxOpcao->Text == "3")
					 {
						 this->Hide();
						FormCupom ^_Cupom = gcnew FormCupom();
						_Cupom->ShowDialog();
						this->Close();
						
					 }
					 else if (TxOpcao->Text->Trim()->Length == 4)
					 {
						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {


						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
						 {

						 }
						 else
						 {
							 throw gcnew Exception("Impressora não cadastrada");
							 
						 }
					 }
					 else
					 {
						 throw gcnew Exception("Opção inválida");
					 }
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
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

							  TbOpcao->Visible = true;
							  TxOpcao->Visible = true;
							  Label2->Visible = true;
							  P_Fiscal->Visible = false;

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
private: System::Void Form11_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 TxSenhaFiscal->Focus();
		 }
private: System::Void P_Fiscal_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
