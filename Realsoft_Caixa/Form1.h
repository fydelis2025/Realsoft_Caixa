#include "Form2.h"
#include "Form6.h"
#include <iostream>
#include<io.h>
#include<list>
#include <cstdlib>
#include<exception>
#include<exception>
#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;	
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	using namespace System::Diagnostics;
	using namespace System::Runtime::InteropServices;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;
	using namespace MessagingToolkit::QRCode::Codec;
	using namespace MessagingToolkit::QRCode::Codec::Data;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	internal: System::Windows::Forms::TextBox^  TxSenhaOperador;
	private: 
	internal: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private: System::Windows::Forms::Label^  LbAtencao;
	private: System::Windows::Forms::PictureBox^  pimage;
	internal:









	internal: 








	internal: 

	internal: 







	protected: 






	protected: 

	protected: 








	protected: 


	protected: 

	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->TxSenhaOperador = (gcnew System::Windows::Forms::TextBox());
			this->TxSenhaFiscal = (gcnew System::Windows::Forms::TextBox());
			this->LbAtencao = (gcnew System::Windows::Forms::Label());
			this->pimage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pimage))->BeginInit();
			this->SuspendLayout();
			// 
			// TxSenhaOperador
			// 
			this->TxSenhaOperador->BackColor = System::Drawing::Color::White;
			this->TxSenhaOperador->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxSenhaOperador->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxSenhaOperador->ForeColor = System::Drawing::Color::Black;
			this->TxSenhaOperador->Location = System::Drawing::Point(281, 360);
			this->TxSenhaOperador->MaxLength = 20;
			this->TxSenhaOperador->Name = L"TxSenhaOperador";
			this->TxSenhaOperador->Size = System::Drawing::Size(489, 43);
			this->TxSenhaOperador->TabIndex = 102;
			this->TxSenhaOperador->UseSystemPasswordChar = true;
			this->TxSenhaOperador->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::TxSenhaOperador_KeyDown);
			// 
			// TxSenhaFiscal
			// 
			this->TxSenhaFiscal->BackColor = System::Drawing::Color::White;
			this->TxSenhaFiscal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxSenhaFiscal->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxSenhaFiscal->ForeColor = System::Drawing::Color::Black;
			this->TxSenhaFiscal->Location = System::Drawing::Point(281, 224);
			this->TxSenhaFiscal->MaxLength = 20;
			this->TxSenhaFiscal->Name = L"TxSenhaFiscal";
			this->TxSenhaFiscal->Size = System::Drawing::Size(489, 43);
			this->TxSenhaFiscal->TabIndex = 101;
			this->TxSenhaFiscal->UseSystemPasswordChar = true;
			this->TxSenhaFiscal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::TxSenhaFiscal_KeyDown);
			this->TxSenhaFiscal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TxSenhaFiscal_KeyPress);
			// 
			// LbAtencao
			// 
			this->LbAtencao->BackColor = System::Drawing::Color::Transparent;
			this->LbAtencao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbAtencao->ForeColor = System::Drawing::Color::Black;
			this->LbAtencao->Location = System::Drawing::Point(37, 539);
			this->LbAtencao->Name = L"LbAtencao";
			this->LbAtencao->Size = System::Drawing::Size(355, 37);
			this->LbAtencao->TabIndex = 104;
			this->LbAtencao->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pimage
			// 
			this->pimage->BackColor = System::Drawing::Color::Transparent;
			this->pimage->Location = System::Drawing::Point(708, 536);
			this->pimage->Name = L"pimage";
			this->pimage->Size = System::Drawing::Size(72, 48);
			this->pimage->TabIndex = 105;
			this->pimage->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 600);
			this->ControlBox = false;
			this->Controls->Add(this->pimage);
			this->Controls->Add(this->LbAtencao);
			this->Controls->Add(this->TxSenhaOperador);
			this->Controls->Add(this->TxSenhaFiscal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pimage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: static String ^__Serial;
		private: Bitmap ^__Image;
		private: QRCodeEncoder ^qrencod = gcnew QRCodeEncoder();

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				try
				{
					String^ Processo = Process::GetCurrentProcess()->ProcessName;

					if (Process::GetProcessesByName(Processo)->Length > 1)
					{
						MessageBox::Show("SISTEMA JA EM USO, FAVOR VERIFIQUE", "ATENÇÃO", MessageBoxButtons::OK, MessageBoxIcon::Error);
						Application::Exit();
					}
					else
					{

						Realsoft_PafECF::GerarMD5();

						Realsoft_Geral::Operador = Realsoft_Consultas::Consultar_Usuarios_OperadorAtual();

						String ^Processo = Process::GetCurrentProcess()->ProcessName;

						String^ Chave = Realsoft_VerificaAtivacao::ChecaHD();

						String  ^ativo = Realsoft_Consultas::Consultar_ChaveHD(Chave);

						if (ativo == nullptr)
						{
							MessageBox::Show("ESTE COMPUTADOR NÃO ESTA HABILITADO A OPERAR O SISTEMA", "COMPUTADOR NÃO ATIVADO", MessageBoxButtons::OK, MessageBoxIcon::Stop);
							Application::Exit();
						}

						if (ativo != Chave)
						{
							MessageBox::Show("ESTE COMPUTADOR NÃO ESTA HABILITADO A OPERAR O SISTEMA", "COMPUTADOR NÃO ATIVADO", MessageBoxButtons::OK, MessageBoxIcon::Stop);
							Application::Exit();
						}

						if (Realsoft_Geral::Operador != nullptr)
						{

							if (Realsoft_Geral::Operador == nullptr)
							{
								throw gcnew Exception("Operador não confere");
							}
							else
							{
								Form2 ^Frm = gcnew Form2();
								Frm->ShowDialog();

								this->Close();

							}
						}						

					}
					
				}
				catch(Exception ^ex)
				{
					MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK,MessageBoxIcon::Error);
				}

			 }

			 private: static void VerificaMovimentacao()
			 {
				 try
				 {
					 String ^RetornaTurno = Realsoft_Sistema::VerificaTurno();

					 int resultado = Realsoft_Consultas::Consultar_TurnoOperando();

					 if (resultado == 0)
					 {
						 Realsoft_Consultas::Abertura_TurnoAtual(RetornaTurno);
					 }

					 Boolean Retorno = Realsoft_Consultas::VerificarMovimentoAnterior();


					 if (Retorno.Equals(false))
					 {
						 System::Windows::Forms::DialogResult  Pergunta;

						 Pergunta = MessageBox::Show("Deseja finalizar o movimento anterior?", "Atenção", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

						 if (Pergunta == System::Windows::Forms::DialogResult::Yes)
						 {
							 Realsoft_Consultas::Update_CaixaemUsoAnterior(true);
						 }
						 else
						 {
							 MessageBox::Show("Impossível proceguir com o movimento anterior em aberto o sistema será reiniciado?", "Atenção", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
							 Application::Restart();

						 }
					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }

	private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e) {

				 try
				 {

				 String^ Chave = Realsoft_VerificaAtivacao::ChecaHD();

					 String  ^ativo = Realsoft_Consultas::Consultar_ChaveHD(Chave);

					 if (File::Exists(Environment::CurrentDirectory + "\\Realsoft_Chave.realsoft"))
					 {
						 pimage->Load(Environment::CurrentDirectory + "\\Realsoft_Chave.realsoft");
					 }
					 else
					 {
						 throw gcnew Exception("IMGAEM DE SEGURANÇA NÃO ENCONTRADA, SE O ERRO CONTINUAR CONTACTE O SUPORTE TÉCNICO");
					 }
					 

					 if (ativo == nullptr)
					 {
						 MessageBox::Show("ESTE COMPUTADOR NÃO ESTA HABILITADO A OPERAR O SISTEMA", "COMPUTADOR NÃO ATIVADO", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						 Application::Exit();
					 }

					 if (ativo != Chave)
					 {
						 MessageBox::Show("ESTE COMPUTADOR NÃO ESTA HABILITADO A OPERAR O SISTEMA", "COMPUTADOR NÃO ATIVADO", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						 Application::Exit();
					 }

					 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 //String^ _Serie = Realsoft_Bematech::__NumeroSerie();

							 //__Serial = _Serie;

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

							 String ^Stattus = Realsoft_Elgin::VerificarStatusECF();

							 if (Stattus != "")
							 {
								 MessageBox::Show(Stattus, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
							 }

							 VerificaMovimentacao();

							/*int _retorno = Realsoft_Elgin::ReducaoZPendente();

							if (_retorno == 1)
							{
								System::Windows::Forms::DialogResult  Pergunta = MessageBox::Show("Existe reduçãoZ pendente favor verifique para imprimir clique em sim?", "Atenção", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
							}*/
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

							 int Rz = Realsoft_Daruma::VerificarReducaoZPendente();

							 if (Rz == 1)
							 {
								 VerificaMovimentacao();

								 String ^Retorno = Realsoft_Consultas::ConsultarReducaoZMovimentacao("REDUCAOZ");

								 LbAtencao->Text = "REDUÇÃOZ PENDENTE";
								 TxSenhaFiscal->Enabled = false;
								 TxSenhaOperador->Enabled = false;

							 }						 
							 
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

						 if (!Realsoft_Sistema::Retorno->Equals("Default") & !Realsoft_Sistema::Modo->Equals("Default"))
						 {

							 //Boolean VerificarECFAtivo = Realsoft_Consultas::Consultar_ECFAtivo(__Serial, Realsoft_Sistema::Terminal);


							 //if (VerificarECFAtivo == false)
							 //{
								// MessageBox::Show("IMPRESSORA NÃO CADASTRADA, FAVOR VERIFIQUE", "Ativar ECF", MessageBoxButtons::OK, MessageBoxIcon::Error);
								// Application::Exit();
							 //}
						 }
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK,MessageBoxIcon::Error);
				 }
			 }
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

				 Application::Exit();
			 }

			 private: static int _fiscal;

private: System::Void TxSenhaFiscal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if(e->KeyCode == Keys::Enter)
			 {
				 try
				 {
					 if (TxSenhaFiscal->Text->Trim()->Equals(""))
					 {
						 throw gcnew Exception("Senha do fiscal não confere");
						 
					 }
					 else
					 {
						 String ^Descript = Realsoft_Criptografia::Encrypt(TxSenhaFiscal->Text, Realsoft_Sistema::passPhrase, Realsoft_Sistema::saltValue, Realsoft_Sistema::hashAlgorithm, Realsoft_Sistema::_interacao, Realsoft_Sistema::_initvector, Realsoft_Sistema::keySize);

						 Realsoft_Geral::logon = Realsoft_Consultas::Consultar_UsuarioFiscal(Descript);
						 
						 if (Realsoft_Geral::logon != nullptr)
						  {	
							 _fiscal = Realsoft_Geral::logon->IDFiscal;

							 TxSenhaOperador->Focus();
						  }
						  else
						  {
							 throw gcnew Exception("Senha do fiscal não confere");
						  }
					 }
				 }
				catch(Exception ^ex)
				{
					MessageBox::Show(ex->Message, "Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			 }
		 }

private: System::Void TxSenhaOperador_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			if(e->KeyCode == Keys::Enter)
			 {
				 try
				 {

					if (TxSenhaOperador->Text != nullptr)
					{
						String ^Descript = Realsoft_Criptografia::Encrypt(TxSenhaOperador->Text, Realsoft_Sistema::passPhrase, Realsoft_Sistema::saltValue, Realsoft_Sistema::hashAlgorithm, Realsoft_Sistema::_interacao, Realsoft_Sistema::_initvector, Realsoft_Sistema::keySize);

						Realsoft_Geral::logon = Realsoft_Consultas::Consultar_UsuarioOperador(Descript);

						String ^RetornaTurno = Realsoft_Sistema::VerificaTurno();

						int resultado = Realsoft_Consultas::Consultar_TurnoOperando();

						if (resultado == 0)
						{
							Realsoft_Consultas::Abertura_TurnoAtual(RetornaTurno);
						}
					 
						if (Realsoft_Geral::logon != nullptr)
						{						 
							Form6 ^_Principal = gcnew Form6();

							Realsoft_Geral::Operador = gcnew VerificaOperador();

							Realsoft_Geral::Operador->Turno = Realsoft_Consultas::Consultar_TurnoOperando();
							Realsoft_Geral::Operador->OPerador = Realsoft_Geral::logon->ID;
							Realsoft_Geral::Operador->Liberado = true;
							Realsoft_Geral::Operador->DataCriacao = DateTime::Now;
							Realsoft_Geral::Operador->Finalizado = false;
							Realsoft_Geral::Operador->IDFiscal = _fiscal;

							Realsoft_Consultas::Insere_VerificacaoOperador(Realsoft_Geral::Operador);

							this->Hide();

							Realsoft_Sistema::NomeOperador = Realsoft_Geral::logon->Descricao;

							_Principal->setOperador(Realsoft_Geral::logon->ID, Realsoft_Geral::logon->Descricao);

							_Principal->ShowDialog();

							Realsoft_Sistema::_contador = true;
						}
						else
						{
							throw gcnew Exception("Senha do operador não confere");
						}
					}
					else
					{
						throw gcnew Exception("Senha do operador não confere");
					}
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }

		 }
private: System::Void TxSenhaFiscal_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			if (!Char::IsNumber(e->KeyChar) && !(e->KeyChar == ',') && !(e->KeyChar == '.') && !(e->KeyChar == Convert::ToChar(8)))
            {
                e->Handled = true;
            }
		 }
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::F2)
	{
		if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{

		}
		else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{

		}
		else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{
			System::Windows::Forms::DialogResult  Pergunta;

			Pergunta = MessageBox::Show("Deseja realmente imprimir a reducaoz?", "Atenção", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (Pergunta == System::Windows::Forms::DialogResult::Yes)
			{
				Realsoft_Daruma::ImprimeReducaoZ("", "");

				Application::Restart();
			}
		}
		else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{

		}
		else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
		{

		}
		else
		{
			throw gcnew Exception("IMPRESSORA NÃO CADASTRADA");
		}
	}
}
};
}

