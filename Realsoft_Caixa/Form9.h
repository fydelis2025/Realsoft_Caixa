#include<io.h>
#include<iostream>
#include<exception>
#include"FormRelatorio.h"
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
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);

	/// <summary>
	/// Summary for Form9
	/// </summary>
	public ref class Form9 : public System::Windows::Forms::Form
	{
	public:
		Form9(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Form9::Form9_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form9()
		{
			if (components)
			{
				delete components;
			}
		}

	internal: System::Windows::Forms::Label^  TbOpcao;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::TextBox^  TxOpcao;
	private: System::Windows::Forms::Panel^  P_Fiscal;
	internal: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private: 
	internal: System::Windows::Forms::Label^  label5;




	private: 

	internal: 
	private: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form9::typeid));
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
			this->TbOpcao->Location = System::Drawing::Point(12, 107);
			this->TbOpcao->Name = L"TbOpcao";
			this->TbOpcao->Size = System::Drawing::Size(242, 88);
			this->TbOpcao->TabIndex = 94;
			this->TbOpcao->Text = L"1. ReduçãoZ\r\n2. Resumo Diário\r\n3. Encerramento de Turno\r\n4. Resumo Meios Pagtos";
			this->TbOpcao->Visible = false;
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::Yellow;
			this->Label2->Location = System::Drawing::Point(20, 291);
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
			this->TxOpcao->Location = System::Drawing::Point(17, 323);
			this->TxOpcao->MaxLength = 2;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(254, 40);
			this->TxOpcao->TabIndex = 95;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->Visible = false;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form9::TxOpcao_KeyDown);
			// 
			// P_Fiscal
			// 
			this->P_Fiscal->BackColor = System::Drawing::Color::Transparent;
			this->P_Fiscal->Controls->Add(this->pictureBox1);
			this->P_Fiscal->Controls->Add(this->TxSenhaFiscal);
			this->P_Fiscal->Controls->Add(this->label5);
			this->P_Fiscal->Location = System::Drawing::Point(12, 82);
			this->P_Fiscal->Name = L"P_Fiscal";
			this->P_Fiscal->Size = System::Drawing::Size(442, 175);
			this->P_Fiscal->TabIndex = 106;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 52);
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
			this->TxSenhaFiscal->Location = System::Drawing::Point(140, 67);
			this->TxSenhaFiscal->MaxLength = 200;
			this->TxSenhaFiscal->Name = L"TxSenhaFiscal";
			this->TxSenhaFiscal->Size = System::Drawing::Size(267, 40);
			this->TxSenhaFiscal->TabIndex = 102;
			this->TxSenhaFiscal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxSenhaFiscal->UseSystemPasswordChar = true;
			this->TxSenhaFiscal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form9::TxSenhaFiscal_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(135, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 29);
			this->label5->TabIndex = 103;
			this->label5->Text = L"SENHA DO FISCAL:";
			// 
			// Form9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(465, 376);
			this->ControlBox = false;
			this->Controls->Add(this->P_Fiscal);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->TxOpcao);
			this->Controls->Add(this->TbOpcao);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form9::Form9_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form9::Form9_KeyDown);
			this->P_Fiscal->ResumeLayout(false);
			this->P_Fiscal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form9_Load(System::Object^  sender, System::EventArgs^  e) {

				 try
				 {
					 
					 TxSenhaFiscal->Focus();
				 }
				 catch(Exception ^ex)
				 {
				 }

			 }
private: System::Void Form9_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

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

private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if (e->KeyCode == Keys::Enter)
				 {
					 if (TxOpcao->Text->Trim()->Equals("1"))
					 {
						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Decimal VendaBruta = Realsoft_Bematech::VendaBrutaDiaria();

							 String ^DadosUltimoMovimentoReducaoZ = Realsoft_Bematech::DadosultimaRdz();

							 String ^DataMovimento = Realsoft_Bematech::DataReducaoZ();

							 Realsoft_PafECF::CriarArquivo(DadosUltimoMovimentoReducaoZ, "Movimento" + "_" + DataMovimento + ".txt");

							 System::Windows::Forms::DialogResult  Pergunta;

							 Pergunta = MessageBox::Show("Deseja imprimir a reducao Z", "Atenção", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

							 if (Pergunta == System::Windows::Forms::DialogResult::Yes)
							 {
								 try
								 {
									 String ^ MinutosImprimindo = "";

									 String ^Data = DateTime::Now.ToString("ddMMyy");
									 String ^Hora = DateTime::Now.ToString("HHmmss");

									 Realsoft_Bematech::ImprimeReducaoZ("", "");

									 MinutosImprimindo = Realsoft_Bematech::Retorno_MinutosImprimindo();

									 System::Threading::Thread::Sleep(5000);

									 String ^TmpAtual = Realsoft_Bematech::Retorno_MinutosImprimindo();

									 //while (!MinutosImprimindo->Equals(TmpAtual))
									 //{
									 // MinutosImprimindo = TmpAtual;

									 // System::Threading::Thread::Sleep(5000);

									 // TmpAtual = Realsoft_Daruma::Retorno_MinutosImprimindo();
									 //}


									 /*while (!Sucesso)
									 {
									 if (Tentativas > 0)
									 {
									 Threading::Thread::Sleep(1000 * (60 * 1));
									 }

									 Tentativas += 1;
									 Sucesso = false;
									 }*/

									 try
									 {
										 String ^_aliquotas = Realsoft_Bematech::Aliquotas();
										 Realsoft_PafECF::CriarArquivo(_aliquotas, "\\\ArquivoECF\\Aliquotas\\Aliquotas.txt");
									 }
									 catch (Exception ^_arr){ MessageBox::Show("ERRO AO CONSULTAR ALIQUOTAS DA ECF", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error); }

									 Realsoft_Geral::_reducaoz = Realsoft_Bematech::UltimaReducaoZ(DadosUltimoMovimentoReducaoZ, VendaBruta);

									 Realsoft_Totalizador ^Totalizador = gcnew Realsoft_Totalizador();

									 Totalizador->Empresa = Realsoft_Geral::_reducaoz->Empresa;
									 //Totalizador->PDV = _reducaoz

									 Realsoft_Consultas::Update_CaixaemUso(true);

									 Realsoft_Geral::Movimentacao_Caixa("REDUCAOZ", VendaBruta);

									 Application::Restart();
								 }
								 catch (Exception ^ ex)
								 {
									 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
								 }
							 }
							 

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
								Decimal VendaBruta = Realsoft_Elgin::VendaBrutaDiaria();

								 String ^DadosUltimoMovimentoReducaoZ = Realsoft_Elgin::DadosUltimoMovimentoReducaoZ();

								 String ^DataMovimento = Realsoft_Elgin::DataUltimaReducaoZ();

								 Realsoft_PafECF::CriarArquivo(DadosUltimoMovimentoReducaoZ, "Movimento" +"_"+ DataMovimento + ".txt");

								 System::Windows::Forms::DialogResult  Pergunta;

								 Pergunta = MessageBox::Show("Deseja imprimir a reducao Z","Atenção",MessageBoxButtons::YesNo, MessageBoxIcon::Question);
									
								 if (Pergunta == System::Windows::Forms::DialogResult::Yes)
								 {

									 try
									 {
										 String ^ MinutosImprimindo = "";

										 String ^Data = DateTime::Now.ToString("ddMMyy");
										 String ^Hora = DateTime::Now.ToString("HHmmss");

										 Realsoft_Elgin::ImprimeReduacoZ();

										 MinutosImprimindo = Realsoft_Elgin::Retorno_MinutosImprimindo();

										 System::Threading::Thread::Sleep(5000);

										 String ^TmpAtual = Realsoft_Elgin::Retorno_MinutosImprimindo();

										 //while (!MinutosImprimindo->Equals(TmpAtual))
										 //{
										 // MinutosImprimindo = TmpAtual;

										 // System::Threading::Thread::Sleep(5000);

										 // TmpAtual = Realsoft_Daruma::Retorno_MinutosImprimindo();
										 //}


										 /*while (!Sucesso)
										 {
										 if (Tentativas > 0)
										 {
										 Threading::Thread::Sleep(1000 * (60 * 1));
										 }

										 Tentativas += 1;
										 Sucesso = false;
										 }*/

										 try
										 {
											 String ^_aliquotas = Realsoft_Elgin::Aliquotas();
											 Realsoft_PafECF::CriarArquivo(_aliquotas, "\\\ArquivoECF\\Aliquotas\\Aliquotas.txt");
										 }
										 catch (Exception ^_arr){ MessageBox::Show("ERRO AO CONSULTAR ALIQUOTAS DA ECF", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error); }

										 Realsoft_Geral::_reducaoz = Realsoft_Elgin::UltimaReducaoZ(DadosUltimoMovimentoReducaoZ, VendaBruta);

										 Realsoft_Totalizador ^Totalizador = gcnew Realsoft_Totalizador();

										 Totalizador->Empresa = Realsoft_Geral::_reducaoz->Empresa;
										 //Totalizador->PDV = _reducaoz

										 Realsoft_Consultas::Update_CaixaemUso(true);

										 Realsoft_Geral::Movimentacao_Caixa("REDUCAOZ", VendaBruta);

										 Application::Restart();
									 }
									 catch (Exception ^ ex)
									 {
										 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
									 }
								 }
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 try
							 {
							 
								 Decimal VendaBruta = Realsoft_Daruma::VendaBrutaDiaria();

								 String ^DadosUltimoMovimentoReducaoZ = Realsoft_Daruma::DadosUltimoMovimentoReducaoZ();

								 String ^DataMovimento = Realsoft_Daruma::DataUltimoMovimentoReducaoZ(DadosUltimoMovimentoReducaoZ);

								 Realsoft_PafECF::CriarArquivo(DadosUltimoMovimentoReducaoZ, "Movimento" + DataMovimento + ".txt");

								 System::Windows::Forms::DialogResult  Pergunta;

								 Pergunta = MessageBox::Show("Deseja imprimir a reducao Z","Atenção",MessageBoxButtons::YesNo, MessageBoxIcon::Question);

								 if (Pergunta == System::Windows::Forms::DialogResult::Yes)
								 {

									 String ^ MinutosImprimindo = "";

									 String ^Data = DateTime::Now.ToString("ddMMyy");
									 String ^Hora = DateTime::Now.ToString("HHmmss");

									 Realsoft_Daruma::ImprimeReducaoZ("","");

									 MinutosImprimindo = Realsoft_Daruma::Retorno_MinutosImprimindo();

									 System::Threading::Thread::Sleep(5000);

									 String ^TmpAtual = Realsoft_Daruma::Retorno_MinutosImprimindo();

									 //while (!MinutosImprimindo->Equals(TmpAtual))
									 //{
										// MinutosImprimindo = TmpAtual;

										// System::Threading::Thread::Sleep(5000);

										// TmpAtual = Realsoft_Daruma::Retorno_MinutosImprimindo();
									 //}


									 /*while (!Sucesso)
									 {
										 if (Tentativas > 0)
										 {
											 Threading::Thread::Sleep(1000 * (60 * 1));
										 }

										 Tentativas += 1;
										 Sucesso = false;
									 }*/

									 Realsoft_PafECF::CriarArquivo(Realsoft_Daruma::Aliquotas(), "Aliquotas.txt");

									 TEF::PararMensagem = true;

									 Realsoft_Geral::_reducaoz = Realsoft_Daruma::UltimaReducaoZ(DadosUltimoMovimentoReducaoZ, VendaBruta);

									 Realsoft_Totalizador ^Totalizador = gcnew Realsoft_Totalizador();

									 Totalizador->Empresa = Realsoft_Geral::_reducaoz->Empresa;
									 Totalizador->PDV = Realsoft_Geral::_reducaoz->PDV;

									 
									 //Criar_TotalizadorReducaoZ

									 Realsoft_Consultas::Update_CaixaemUso(true);
							
									 Realsoft_Geral::Movimentacao_Caixa("REDUCAOZ", VendaBruta);

									Application::Restart();
										
								 }

							 }
							catch(Exception ^ex)
							{
								MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
								return;
							}


						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						 {
							 Realsoft_BematechNaoFiscal::ImprimeFechamentoCaixa(Realsoft_Sistema::IDOperador,0);
						 }
						 else
						 {
							 MessageBox::Show("Impressora não cadastrada","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							 return;
						 }
					 }
					 else if (TxOpcao->Text->Trim()->Equals("2"))
					 {
						 FormRelatorio ^relatorio = gcnew FormRelatorio();
						 relatorio->ShowDialog();
					 }
					 else if (TxOpcao->Text->Trim()->Equals("3"))
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
							 Realsoft_Consultas::Update_CaixaemUso(true);

							Realsoft_Geral::Movimentacao_Caixa("ENCERRADO", 0);

							TEF::ReducaoZFinalizado = true;

							Application::Restart();
						 }
						 else
						 {
							 MessageBox::Show("Impressora não cadastrada","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							 return;
						 }
					 }
					 else if (TxOpcao->Text->Trim()->Equals("4"))
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
						 else
						 {
							 MessageBox::Show("Impressora não cadastrada","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							 return;
						 }
					 }
					 else 
					 {
						 MessageBox::Show("Opção invalida","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
						 return;
					 }
				 }
			 }
			 catch(Exception ^ex)
			 {
				  MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
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
};
}
