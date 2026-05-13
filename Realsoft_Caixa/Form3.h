#include<io.h>
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<list>
#include"FormTEF.h"
#include"FormTroco.h"
#include"FormCheque.h"
#include"FormCartaoLoja.h"
#include"Form14.h"
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
	using namespace System::Drawing::Printing;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Form3::Form3_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  LbStatus;
	private: System::Windows::Forms::Label^  LbMenuFormaPgto;
	internal: System::Windows::Forms::TextBox^  TxOpcao;
	public: System::Windows::Forms::TextBox^  TxSubTotal;

	public:
	internal:



	private: System::Windows::Forms::Label^  LbTotalGeral;
	private: System::Windows::Forms::Label^  TxStatus;

	internal: System::Windows::Forms::TextBox^  TxValorPagar;
	private:

	private:



	internal: 
	private: System::ComponentModel::IContainer^  components;
	private: 

	private: 







	internal: 
	protected: 

	protected: 





	private: 


	internal: 













	private: 
	internal: 
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->LbStatus = (gcnew System::Windows::Forms::Label());
			this->LbMenuFormaPgto = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->TxSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->LbTotalGeral = (gcnew System::Windows::Forms::Label());
			this->TxStatus = (gcnew System::Windows::Forms::Label());
			this->TxValorPagar = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// LbStatus
			// 
			this->LbStatus->AutoSize = true;
			this->LbStatus->Location = System::Drawing::Point(409, 137);
			this->LbStatus->Name = L"LbStatus";
			this->LbStatus->Size = System::Drawing::Size(0, 13);
			this->LbStatus->TabIndex = 1;
			// 
			// LbMenuFormaPgto
			// 
			this->LbMenuFormaPgto->BackColor = System::Drawing::Color::Transparent;
			this->LbMenuFormaPgto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbMenuFormaPgto->ForeColor = System::Drawing::Color::Black;
			this->LbMenuFormaPgto->Location = System::Drawing::Point(28, 121);
			this->LbMenuFormaPgto->Name = L"LbMenuFormaPgto";
			this->LbMenuFormaPgto->Size = System::Drawing::Size(254, 432);
			this->LbMenuFormaPgto->TabIndex = 2;
			// 
			// TxOpcao
			// 
			this->TxOpcao->BackColor = System::Drawing::Color::White;
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao->ForeColor = System::Drawing::Color::Black;
			this->TxOpcao->Location = System::Drawing::Point(316, 514);
			this->TxOpcao->MaxLength = 16;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(130, 33);
			this->TxOpcao->TabIndex = 3;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form3::TxOpcao_KeyDown);
			this->TxOpcao->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form3::TxOpcao_KeyPress);
			// 
			// TxSubTotal
			// 
			this->TxSubTotal->BackColor = System::Drawing::Color::White;
			this->TxSubTotal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxSubTotal->ForeColor = System::Drawing::Color::Black;
			this->TxSubTotal->Location = System::Drawing::Point(479, 514);
			this->TxSubTotal->MaxLength = 16;
			this->TxSubTotal->Name = L"TxSubTotal";
			this->TxSubTotal->Size = System::Drawing::Size(134, 33);
			this->TxSubTotal->TabIndex = 4;
			this->TxSubTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxSubTotal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form3::TxSubTotal_KeyPress);
			// 
			// LbTotalGeral
			// 
			this->LbTotalGeral->AutoSize = true;
			this->LbTotalGeral->Location = System::Drawing::Point(531, 569);
			this->LbTotalGeral->Name = L"LbTotalGeral";
			this->LbTotalGeral->Size = System::Drawing::Size(0, 13);
			this->LbTotalGeral->TabIndex = 6;
			this->LbTotalGeral->Visible = false;
			// 
			// TxStatus
			// 
			this->TxStatus->BackColor = System::Drawing::Color::Transparent;
			this->TxStatus->ForeColor = System::Drawing::Color::Yellow;
			this->TxStatus->Location = System::Drawing::Point(313, 121);
			this->TxStatus->Name = L"TxStatus";
			this->TxStatus->Size = System::Drawing::Size(365, 120);
			this->TxStatus->TabIndex = 7;
			this->TxStatus->Text = L"label1";
			// 
			// TxValorPagar
			// 
			this->TxValorPagar->BackColor = System::Drawing::Color::White;
			this->TxValorPagar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxValorPagar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxValorPagar->ForeColor = System::Drawing::Color::Black;
			this->TxValorPagar->Location = System::Drawing::Point(641, 514);
			this->TxValorPagar->MaxLength = 16;
			this->TxValorPagar->Name = L"TxValorPagar";
			this->TxValorPagar->Size = System::Drawing::Size(136, 33);
			this->TxValorPagar->TabIndex = 5;
			this->TxValorPagar->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxValorPagar->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form3::TxValorPagar_KeyDown);
			this->TxValorPagar->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form3::TxValorPagar_KeyPress);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 600);
			this->ControlBox = false;
			this->Controls->Add(this->TxStatus);
			this->Controls->Add(this->LbTotalGeral);
			this->Controls->Add(this->TxValorPagar);
			this->Controls->Add(this->TxSubTotal);
			this->Controls->Add(this->TxOpcao);
			this->Controls->Add(this->LbMenuFormaPgto);
			this->Controls->Add(this->LbStatus);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Activated += gcnew System::EventHandler(this, &Form3::Form3_Activated);
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form3::Form3_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {

				 Cursor->Hide();

				 if (isConnectedDLL())
				 {
					 TxStatus->Text = "INTERNET CONECTADO";
				 }
				 else
				 {
					 TxStatus->Text = "SEM CONEXÃO COM A INTERNET" + Environment::NewLine;
				 }				 

				 LbTotalGeral->Text = Realsoft_Sistema::SubTotalVenda.ToString();								 
		 
				 try
					{
						List<Realsoft_FormaPgto^>^ _FormaPgto = Realsoft_Consultas::Listar_FormasPagamento();						

						array<String^>^ _Pagamento;

						for(int i = 0; i <= _FormaPgto->Count -1; i++)
						{
							_Pagamento = gcnew array<String^>(2);

							_Pagamento[0] = _FormaPgto[i]->idforma.ToString();
							_Pagamento[1] = _FormaPgto[i]->Descricao->ToUpper();

							LbMenuFormaPgto->Text += _FormaPgto[i]->idforma.ToString() + " - " +  _FormaPgto[i]->Descricao->ToUpper() + Environment::NewLine + Environment::NewLine;
						}
					}
					catch(Exception ^ex)
					{
						MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				 
				 TxOpcao->Focus();


				 TxStatus->Text += "NUMERO CUPOM ->" + Realsoft_Sistema::_Cupom.ToString() + Environment::NewLine;
			 }

			 
			 private: void SetMensagem(String ^Mensagem)
					  {
						  TxStatus->Text = Mensagem;
					  }

private: System::Void Form3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

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

		 private: bool isConnectedDLL()
				  {
					  try
					  {
						  int desc;

						  return InternetGetConnectedState(desc,0);
					  }
					  catch(Exception ^ex)
					  {
						  MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					  }
				  }

			
	private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		try
		{
			if (e->KeyCode == Keys::Enter)
			{

				Realsoft_Sistema::FinalizarVenda = false;
				Realsoft_Sistema::LimparCampos = false;
				Realsoft_Sistema::AtivarExcluirItem = false;
				Realsoft_Sistema::RecuperarCupom = false;
				Realsoft_Sistema::ExibirDesconto = false;

				if (String::IsNullOrWhiteSpace(TxOpcao->Text))
				{
					throw gcnew Exception("OPÇÃO INVÁLIDA");
				}
				else
				{

					int Codigo = Realsoft_Consultas::Consultar_FormaPagamento(int::Parse(TxOpcao->Text));

					if (Codigo != 0)
					{
						String ^Descricao = Realsoft_Consultas::Consultar_DescricaoFormaPagamento(Codigo);

						if (Descricao->Equals("Dinheiro"))
						{
							TxStatus->Text = "";

							TxStatus->Text += "FORMA DE PAGAMENTO SELECIONADO " + Descricao->ToUpper() + Environment::NewLine;

							TxValorPagar->Focus();
						}
						else if (Descricao->Equals("TEF"))
						{


							TxStatus->Text = "";
							TxStatus->Text = "FORMA DE PAGAMENTO SELECIONADO " + Descricao->ToUpper() + Environment::NewLine;
							TxStatus->Text += "TESTANDO COMUNICAÇÃO COM O SERVIDOR TEF AGUARDE ... " + Environment::NewLine;
							TxStatus->Text += "TESTE REALIZADO COM SUCESSO ... " + Environment::NewLine;
							TxValorPagar->Focus();

						}
						else if (Descricao->Equals("Cartao Loja"))
						{
							TxStatus->Text = "";
							TxStatus->Text = "FORMA DE PAGAMENTO SELECIONADO " + Descricao->ToUpper() + Environment::NewLine;

							this->Hide();

							FormCartaoLoja ^_cartaoloja = gcnew FormCartaoLoja();
							_cartaoloja->ShowDialog();
						}
						else if (Descricao->Equals("Cheque"))
						{
							TxStatus->Text = "";
							TxStatus->Text = "FORMA DE PAGAMENTO SELECIONADO " + Descricao->ToUpper() + Environment::NewLine;

							TxValorPagar->Focus();

							FormCheque^ _Cheque = gcnew FormCheque();
							_Cheque->ShowDialog();
						}
						else if (Descricao->Equals("Credito POS"))
						{
							TxStatus->Text = "";
							TxStatus->Text = "FORMA DE PAGAMENTO SELECIONADO " + Descricao->ToUpper() + Environment::NewLine;

							TxValorPagar->Focus();
						}
						else if (Descricao->Equals("Ticket"))
						{
							TxStatus->Text = "";
							TxStatus->Text = "FORMA DE PAGAMENTO SELECIONADO " + Descricao->ToUpper() + Environment::NewLine;

							TxValorPagar->Focus();
						}
						else
						{
							TxStatus->Text = "";
							TxStatus->Text = "FORMA DE PAGAMENTO SELECIONADO " + Descricao->ToUpper() + Environment::NewLine;

							TxValorPagar->Focus();
						}
					}
					else
					{
						throw gcnew Exception("Codigo inválido");
					}
				}
			}
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message,"Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void TxOpcao_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			if (!Char::IsNumber(e->KeyChar) && !(e->KeyChar == ',') && !(e->KeyChar == '.') && !(e->KeyChar == Convert::ToChar(8)))
            {
                e->Handled = true;
            }
		 }
	private: System::Void TxValorPagar_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

		try
		{
			if (!Char::IsNumber(e->KeyChar) && !(e->KeyChar == ',') && !(e->KeyChar == '.') && !(e->KeyChar == Convert::ToChar(8)))
			{
				e->Handled = true;

				//TxValorPagar->Text = TxValorPagar->Text->Insert(3, ".");
			}

		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		//System::Threading::Thread::CurrentThread->CurrentCulture = gcnew System:: Globalization::CultureInfo("pt-BR");
		//TxValorPagar->Text = String::Format("{0:#,##0.00}", Convert::ToDouble(TxValorPagar->Text));
	}
private: System::Void TxSubTotal_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			if (!Char::IsNumber(e->KeyChar) && !(e->KeyChar == ',') && !(e->KeyChar == '.') && !(e->KeyChar == Convert::ToChar(8)))
            {
                e->Handled = true;
            }
		 }

		 private: static System::IO::StreamReader ^fileToPrint;
		 private: static System::Drawing::Font ^printFont;

private: System::Void TxValorPagar_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if (e->KeyCode == Keys::Enter)
			 {
				 try
				 {
					Realsoft_Geral::FormaPagamento= gcnew Realsoft_FormaPgto();

					Realsoft_Geral::FormaPagamento = Realsoft_Consultas::Consultar_DescricaoPagamento(int::Parse(TxOpcao->Text));

					Realsoft_Geral::FormaPagamento->ValorTotal = Decimal::Parse(TxSubTotal->Text);


					if (Realsoft_Geral::FormaPagamento->Descricao->Equals("Dinheiro"))
					 {
						 if (String::IsNullOrWhiteSpace(TxValorPagar->Text))
						 {
							 throw gcnew Exception("ERRO  AO FINALIZAR A VENDA, FAVOR INFORME O VALOR A PAGAR");
						 }
						 
						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

								 if (Decimal::Parse(TxValorPagar->Text) >= Decimal::Parse(TxSubTotal->Text))
								 {
									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));


									 //Realsoft_Bematech::EfetuaFormaPgto(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

									 //Bemat::BemaFI32::Bematech_FI_FechaCupomResumido(Realsoft_Geral::FormaPagamento->Descricao,"Realsoft - Volte Sempre");

									 Realsoft_Bematech::EfetuaFormaPgto(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

									 Realsoft_Bematech::TerminaCupom("REALSOFT - OBRIGADO VOLTE SEMPRE");

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 Realsoft_Bematech::AbreGaveta();

									 Realsoft_Sistema::FinalizarVenda = true;

									 FormTroco ^frmTroco = gcnew FormTroco();

									 frmTroco->LbSub->Text = TxSubTotal->Text;
									 frmTroco->LbPago->Text = TxValorPagar->Text;
									 frmTroco->ShowDialog();

									 this->Close();

									 Realsoft_Sistema::FinalizarVenda = true;
								 }
								 else
								 {
									 throw gcnew Exception("VALOR INFORMADO E MENOR QUE O TOTAL DA VENDA, FAVOR VERIFIQUE");
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 if (Decimal::Parse(TxValorPagar->Text) >= Decimal::Parse(TxSubTotal->Text))
								 {
									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

									 if (Realsoft_Sistema::ValorDesconto == 0)
									 {
										 Realsoft_Elgin::TerminaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);
									 }
									 else
									 {
										 Realsoft_Elgin::TerminaFechamentoComDesconto(Realsoft_Geral::FormaPagamento->Descricao, "", "$", Realsoft_Sistema::ValorDesconto.ToString(), TxValorPagar->Text, "");
									 }

									 Realsoft_Elgin::FinalizaPagamento("");

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 Realsoft_Sistema::FinalizarVenda = true;

									 Realsoft_Elgin::Guilhotina();
									 Realsoft_Elgin::AbreGavaeta();

									 //MessageBox::Show("Troco " + Realsoft_Sistema::Troco.ToString("#####0.00") , "Venda finalizada", MessageBoxButtons::OK, MessageBoxIcon::Information);
									 FormTroco ^frmTroco = gcnew FormTroco();
									 frmTroco->LbSub->Text = TxSubTotal->Text;
									 frmTroco->LbPago->Text = TxValorPagar->Text;
									 frmTroco->ShowDialog();

									 this->Close();

									 Realsoft_Sistema::FinalizarVenda = true;
								 }
								 else
								 {
									 throw gcnew Exception("VALOR INFORMADO E MENOR QUE O TOTAL DA VENDA, FAVOR VERIFIQUE");
								 }
								 
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));


								 try { 
									
									 if (Decimal::Parse(TxValorPagar->Text) >= Decimal::Parse(TxSubTotal->Text))
									 {
										 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

										 Decimal ConsultaSubTotalECF = Decimal::Parse(Realsoft_Daruma::SubTotal().ToString());
										 // double subtot = double::Parse(TxSubTotal->Text);*/
										 Decimal ComparaValores = Decimal::Compare(ConsultaSubTotalECF, Decimal::Parse(TxSubTotal->Text));

										 /* if (ComparaValores != 0)
										  {
										  throw gcnew Exception("SubTotal Inválido" + ComparaValores.ToString());
										  }
										  else
										  {*/
										 Realsoft_Daruma::EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");
										 //Realsoft_Daruma::ImprimeRespostaTef("C:\\TEF_DIAL\\RESP\\IntPos.001");
										 //ComunicacaoTEF::ApagaArquivoResposta();
										 //ComunicacaoTEF::FinalizarTransacaoPage();


										 Realsoft_Sistema::FinalizarVenda = true;

										 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										 //MessageBox::Show("Troco " + Realsoft_Sistema::Troco.ToString("#####0.00"), "Venda finalizada", MessageBoxButtons::OK, MessageBoxIcon::Information);

										 FormTroco ^frmTroco = gcnew FormTroco();
										 frmTroco->LbSub->Text = TxSubTotal->Text;
										 frmTroco->LbPago->Text = TxValorPagar->Text;
										 frmTroco->ShowDialog();

										 Realsoft_Sistema::FinalizarVenda = true;
										 this->Close();
										 //}
									 }
									 else
									 {
										 throw gcnew Exception("VALOR INFORMADO E MENOR QUE O TOTAL DA VENDA, FAVOR VERIFIQUE");
									 }
								 }
								 catch (Exception ^ex){ MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }								 

								
								 
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							 {
								 if (Decimal::Parse(TxValorPagar->Text) >= Decimal::Parse(TxSubTotal->Text))
								 {
									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
									 
									 String ^Retorno = Realsoft_BematechNaoFiscal::FinalizarVenda(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text), Realsoft_Sistema::Troco, true, Decimal::Parse(LbTotalGeral->Text));

									 try
									 {
										 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);
									 } 
									 catch (Exception ^ex)
									 {
										 throw ex;
									 }									 									 									 

									 //MessageBox::Show("Troco " + Realsoft_Sistema::Troco.ToString("#####0.00") , "Venda finalizada", MessageBoxButtons::OK, MessageBoxIcon::Information);

									 FormTroco ^frmTroco = gcnew FormTroco();
									 frmTroco->LbSub->Text = TxSubTotal->Text;
									 frmTroco->LbPago->Text = TxValorPagar->Text;
									 frmTroco->ShowDialog();

									 int charCode = 27;
									 int charCode2 = 118;
									 int charCode3 = 140;
									 Char specialChar = Convert::ToChar(charCode);
									 Char specialChar2 = Convert::ToChar(charCode2);
									 Char specialChar3 = Convert::ToChar(charCode3);
									 String ^s_cmdTX = "" + specialChar + specialChar2 + specialChar3;

									 Realsoft_BematechNaoFiscal::EnviarComando(s_cmdTX, s_cmdTX->Length);

									 //MessageBox::Show("Troco " + Troco.ToString("#####0.00"),"Finalizar Venda",MessageBoxButtons::OK, MessageBoxIcon::Information);

									 this->Close();
								 }
								 else
								 {
									 throw gcnew Exception("Valor informado inválido");									 
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
							 {

								 if (String::IsNullOrWhiteSpace(TxValorPagar->Text))
								 {
									 throw gcnew Exception("ERRO  AO FINALIZAR A VENDA, FAVOR INFORME O VALOR A PAGAR");
								 }

								 if (Decimal::Parse(TxValorPagar->Text) >= Decimal::Parse(TxSubTotal->Text))
								 {
									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 Realsoft_BematechNaoFiscal::FinalizarVendaDefault(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text), Realsoft_Sistema::Troco, true, Decimal::Parse(LbTotalGeral->Text));

									 FormTroco ^frmTroco = gcnew FormTroco();
									 frmTroco->LbSub->Text = TxSubTotal->Text;
									 frmTroco->LbPago->Text = TxValorPagar->Text;
									 frmTroco->ShowDialog();

									 Realsoft_Sistema::FinalizarVenda = true;

									 this->Close();
									 
								 }
								 else
								 {
									 throw gcnew Exception("VALOR INFORMADO E MENOR QUE O TOTAL DA VENDA, FAVOR VERIFIQUE");
									 
								 }
							 }
							 else
							 {
								 throw gcnew Exception("Impressora não cadastrada");
							 }
					 
					 }
					 else if (Realsoft_Geral::FormaPagamento->Descricao->Equals("Ticket"))
					 {
						 if (String::IsNullOrWhiteSpace(TxValorPagar->Text))
						 {
							 throw gcnew Exception("ERRO  AO FINALIZAR A VENDA, FAVOR INFORME O VALOR A PAGAR");
						 }

						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

							 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
							 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

							 if (_CreditoPOSSaldo != 0)
							 {
								 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

								 //Bemat::BemaFI32::Bematech_FI_EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

								 Realsoft_Bematech::EfetuaFormaPgto(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

								 TxOpcao->Text = "";
								 TxOpcao->Focus();
								 TxValorPagar->Text = "";
							 }
							 else
							 {
								 Realsoft_Bematech::FecharCupom(Realsoft_Geral::FormaPagamento->Descricao);

								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text),Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

								 Realsoft_Bematech::AbreGaveta();

								 Realsoft_Sistema::FinalizarVenda = true;

								 this->Close();
							 }
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

							 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
							 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

							 if (_CreditoPOSSaldo != 0)
							 {
								 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

								 Realsoft_Elgin::IniciaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);
								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, _CreditoPOSSaldo, Realsoft_Sistema::IDOperador);

								 TxOpcao->Text = "";
								 TxOpcao->Focus();
								 TxValorPagar->Text = "";
							 }
							 else
							 {
								 Realsoft_Elgin::TerminaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

								 Realsoft_Elgin::FinalizaPagamento("");

								 Realsoft_Elgin::AbreGavaeta();

								 Realsoft_Sistema::FinalizarVenda = true;

								 this->Close();
							 }


						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 if (TxValorPagar->Text->Trim()->Equals(""))
							 {
								 throw gcnew Exception("Valor Inválido");
							 }
							 else
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

									 Realsoft_Daruma::EfetuaFormaPagamentoParcial(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";
								 }
								 else
								 {
									 Realsoft_Daruma::EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");
									 Realsoft_Sistema::FinalizarVenda = true;
									 this->Close();
								 }

							 }
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						 {
							 if (Decimal::Parse(TxValorPagar->Text) > Decimal::Parse(TxSubTotal->Text))
							 {
								 throw gcnew Exception("valor inválido");

							 }
							 else
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Decimal Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Troco.ToString("#####0.00");

									 Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";

								 }
								 else
								 {

									 String ^Retorno = Realsoft_BematechNaoFiscal::FinalizarVenda(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text), Troco, true, Decimal::Parse(LbTotalGeral->Text));

									 if (Retorno != nullptr)
									 {
										 throw gcnew Exception(Retorno);
									 }

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Troco, Realsoft_Sistema::IDOperador);

									 this->Close();
								 }
							 }
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
						 {
							 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

							 Decimal Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

							 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

							 if (_CreditoPOSSaldo != 0)
							 {
								 TxSubTotal->Text = Troco.ToString("#####0.00");

								 //Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

								 TxOpcao->Text = "";
								 TxOpcao->Focus();
								 TxValorPagar->Text = "";

							 }
							 else
							 {
								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

								 FormTroco ^frmTroco = gcnew FormTroco();
								 frmTroco->LbSub->Text = TxSubTotal->Text;
								 frmTroco->LbPago->Text = TxValorPagar->Text;
								 frmTroco->ShowDialog();

								 Realsoft_Bematech::AbreGaveta();

								 Realsoft_Sistema::FinalizarVenda = true;

								 

								 this->Close();
							 }
						 }
						 else
						 {
							 throw gcnew Exception("Impressora não cadastrada");
						 }
					 }
					 else if (Realsoft_Geral::FormaPagamento->Descricao->Equals("Cheque"))
					 {
						 if (String::IsNullOrWhiteSpace(TxValorPagar->Text))
						 {
							 throw gcnew Exception("ERRO  AO FINALIZAR A VENDA, FAVOR INFORME O VALOR A PAGAR");
						 }

						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

							 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
							 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

							 if (_CreditoPOSSaldo != 0)
							 {
								 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

								 Realsoft_Elgin::IniciaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);
								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Decimal::Parse(TxValorPagar->Text), Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

								 TxOpcao->Text = "";
								 TxOpcao->Focus();
								 TxValorPagar->Text = "";
							 }
							 else
							 {
								 Realsoft_Elgin::TerminaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

								 Realsoft_Elgin::FinalizaPagamento("");

								 Realsoft_Elgin::AbreGavaeta();

								 Realsoft_Sistema::FinalizarVenda = true;

								 this->Close();
							 }


						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 if (TxValorPagar->Text->Trim()->Equals(""))
							 {
								 throw gcnew Exception("Valor Inválido");
							 }
							 else
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

									 Realsoft_Daruma::EfetuaFormaPagamentoParcial(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";
								 }
								 else
								 {
									 Realsoft_Daruma::EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");
									 Realsoft_Sistema::FinalizarVenda = true;
									 this->Close();
								 }

							 }
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {

						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						 {
							 if (Decimal::Parse(TxValorPagar->Text) > Decimal::Parse(TxSubTotal->Text))
							 {
								 throw gcnew Exception("valor inválido");

							 }
							 else
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

									 Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Decimal::Parse(TxValorPagar->Text), Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";

								 }
								 else
								 {

									 String ^Retorno = Realsoft_BematechNaoFiscal::FinalizarVenda(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text), Realsoft_Sistema::Troco, true, Decimal::Parse(LbTotalGeral->Text));

									 if (Retorno != nullptr)
									 {
										 throw gcnew Exception(Retorno);
									 }

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 this->Close();
								 }
							 }
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
						 {
							 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

							 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

							 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

							 if (_CreditoPOSSaldo != 0)
							 {
								 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

								 //Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

								 TxOpcao->Text = "";
								 TxOpcao->Focus();
								 TxValorPagar->Text = "";

							 }
							 else
							 {
								 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

								 FormTroco ^frmTroco = gcnew FormTroco();
								 frmTroco->LbSub->Text = TxSubTotal->Text;
								 frmTroco->LbPago->Text = TxValorPagar->Text;
								 frmTroco->ShowDialog();

								 Realsoft_Bematech::AbreGaveta();

								 Realsoft_Sistema::FinalizarVenda = true;


								 this->Close();
							 }
						 }
						 else
						 {
							 throw gcnew Exception("Impressora não cadastrada");
						 }
					 }
					 else if (Realsoft_Geral::FormaPagamento->Descricao->Equals("Credito POS"))
					 {
						 if (String::IsNullOrWhiteSpace(TxValorPagar->Text))
						 {
							 throw gcnew Exception("ERRO  AO FINALIZAR A VENDA, FAVOR INFORME O VALOR A PAGAR");
						 }

						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

									 //Bemat::BemaFI32::Bematech_FI_EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

									 Realsoft_Bematech::EfetuaFormaPgto(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";
								 }
								 else
								 {
									 Realsoft_Bematech::FecharCupom(Realsoft_Geral::FormaPagamento->Descricao);

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 Realsoft_Bematech::AbreGaveta();

									 Realsoft_Sistema::FinalizarVenda = true;

									 this->Close();
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								  if (_CreditoPOSSaldo != 0)
								  {										 
									  TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

										Realsoft_Elgin::IniciaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);
										Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										TxOpcao->Text = "";
										TxOpcao->Focus();
										TxValorPagar->Text = "";
								  }
								  else
								  {
									  Realsoft_Elgin::TerminaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

									 Realsoft_Elgin::FinalizaPagamento("");

									 Realsoft_Elgin::AbreGavaeta();

									  Realsoft_Sistema::FinalizarVenda = true;

									  this->Close();
								  }
								 

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 if (TxValorPagar->Text->Trim()->Equals(""))
								 {
									throw gcnew Exception("Valor Inválido");
								 }
								 else
								 {
									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
									Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

									if (_CreditoPOSSaldo != 0)
									{
										TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

										Realsoft_Daruma::EfetuaFormaPagamentoParcial(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");

										Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										TxOpcao->Text = "";
										TxOpcao->Focus();
										TxValorPagar->Text = "";
									}
									else
									{
										Realsoft_Daruma::EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");
										Realsoft_Sistema::FinalizarVenda = true;
										this->Close();
									}
									
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							 {
								 if (Decimal::Parse(TxValorPagar->Text) > Decimal::Parse(TxSubTotal->Text))
								 {
									throw gcnew Exception("valor inválido");
									
								 }
								 else
								 {

									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

									 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

									 if (_CreditoPOSSaldo != 0)
									 {										 
										 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

										 Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

										 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										 TxOpcao->Text = "";
										 TxOpcao->Focus();
										 TxValorPagar->Text = "";

									 }
									 else
									 {
										 
										 String ^Retorno = Realsoft_BematechNaoFiscal::FinalizarVenda(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text), Realsoft_Sistema::Troco, true, Decimal::Parse(LbTotalGeral->Text));

										 if (Retorno != nullptr)
										 {
											 throw gcnew Exception(Retorno);											 
										 }

										 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										 this->Close();
									 }
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

									 //Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";

								 }
								 else
								 {

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 FormTroco ^frmTroco = gcnew FormTroco();
									 frmTroco->LbSub->Text = TxSubTotal->Text;
									 frmTroco->LbPago->Text = TxValorPagar->Text;
									 frmTroco->ShowDialog();

									 Realsoft_Bematech::AbreGaveta();
									 Realsoft_Sistema::FinalizarVenda = true;

									 this->Close();
								 }
							 }
							 else
							 {
								 throw gcnew Exception("Impressora não cadastrada");								 
							 }
					 }
					 else if (Realsoft_Geral::FormaPagamento->Descricao->Equals("Debito POS"))
					 {

						 if (String::IsNullOrWhiteSpace(TxValorPagar->Text))
						 {
							 throw gcnew Exception("ERRO  AO FINALIZAR A VENDA, FAVOR INFORME O VALOR A PAGAR");
						 }

						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

									 Realsoft_Bematech::EfetuaFormaPgto(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";
								 }
								 else
								 {
									 //Bemat::BemaFI32::Bematech_FI_FechaCupomResumido(Realsoft_Geral::FormaPagamento->Descricao, "Realsoft - Volte Sempre");

									 Realsoft_Bematech::FecharCupom(Realsoft_Geral::FormaPagamento->Descricao);

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 Realsoft_Bematech::AbreGaveta();

									 Realsoft_Sistema::FinalizarVenda = true;

									 this->Close();
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								  if (_CreditoPOSSaldo != 0)
								  {										 
									  TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

										Realsoft_Elgin::IniciaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);
										Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										TxOpcao->Text = "";
										TxOpcao->Focus();
										TxValorPagar->Text = "";
								  }
								  else
								  {
									  Realsoft_Elgin::TerminaFechamentoCupom(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text);

									  Realsoft_Elgin::FinalizaPagamento("");

									  Realsoft_Elgin::AbreGavaeta();

									  Realsoft_Sistema::FinalizarVenda = true;

									  this->Close();
								  }

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 if (TxValorPagar->Text->Trim()->Equals(""))
								 {
									throw gcnew Exception("Valor Inválido");
								 }
								 else
								 {
									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
									Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

									if (_CreditoPOSSaldo != 0)
									{
										TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

										Realsoft_Daruma::EfetuaFormaPagamentoParcial(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");

										Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										TxOpcao->Text = "";
										TxOpcao->Focus();
										TxValorPagar->Text = "";
									}
									else
									{
										Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);
										Realsoft_Daruma::EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, TxValorPagar->Text, "Volte Sempre");
										Realsoft_Sistema::FinalizarVenda = true;
										this->Close();
									}
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							 {
								 if (Decimal::Parse(TxValorPagar->Text) > Decimal::Parse(TxSubTotal->Text))
								 {
									throw gcnew Exception("Valor Inválido");
								 }
								 else
								 {
									 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

									 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

									 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text),Decimal::Parse(TxValorPagar->Text));

									 if (_CreditoPOSSaldo != 0)
									 {
										 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

										 Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

										 
										 TxOpcao->Text = "";
										 TxOpcao->Focus();
										 TxValorPagar->Text = "";

										 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);
									 }
									 else
									 {
										 String ^ Retorno = Realsoft_BematechNaoFiscal::FinalizarVenda(Realsoft_Geral::FormaPagamento->Descricao, Valor, Realsoft_Sistema::Troco, true, Decimal::Parse(LbTotalGeral->Text));

										 if (Retorno != nullptr)
										 {
											 throw gcnew Exception(Retorno);
										 }

										 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

										 this->Close();
									 }
								 }
							 }							 
							 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
							 {
								 Decimal Valor = Decimal::Parse(TxValorPagar->Text);

								 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 Decimal _CreditoPOSSaldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

								 if (_CreditoPOSSaldo != 0)
								 {
									 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");

									// Realsoft_BematechNaoFiscal::FinalizarVendaParcial(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(TxValorPagar->Text));

									 TxOpcao->Text = "";
									 TxOpcao->Focus();
									 TxValorPagar->Text = "";

									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);
								 }
								 else
								 {
									 Realsoft_Geral::Registra_PagamentoCupomFiscal(Realsoft_Geral::FormaPagamento->Descricao, Decimal::Parse(LbTotalGeral->Text), Valor, Realsoft_Sistema::Troco, Realsoft_Sistema::IDOperador);

									 FormTroco ^frmTroco = gcnew FormTroco();
									 frmTroco->LbSub->Text = TxSubTotal->Text;
									 frmTroco->LbPago->Text = TxValorPagar->Text;
									 frmTroco->ShowDialog();

									 Realsoft_Bematech::AbreGaveta();
									 Realsoft_Sistema::FinalizarVenda = true;

									 this->Close();
								 }
							 }
							 else
							 {
								 throw gcnew Exception("Impressora não cadastrada");
							 }
					 }
					 else if (Realsoft_Geral::FormaPagamento->Descricao->Equals("TEF"))
					 {
						 if (String::IsNullOrWhiteSpace(TxValorPagar->Text))
						 {
							 throw gcnew Exception("ERRO  AO FINALIZAR A VENDA, FAVOR INFORME O VALOR A PAGAR");
						 }

						 Realsoft_Sistema::Troco = Decimal::Subtract(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));
						 Decimal _Saldo = Decimal::Compare(Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValorPagar->Text));

						 if (_Saldo != 0)
						 {
							 TxSubTotal->Text = Realsoft_Sistema::Troco.ToString("#####0.00");
						 }

						 /////////////////////////////////////////////////////////////////////
						 DateTime _DataCupom = DateTime::Now;
						 DateTime _HoraCupom = DateTime::Now;

						 ConfiguracaoTEF::ValorPago = Decimal::Parse(TxValorPagar->Text);
						 ConfiguracaoTEF::CupomFiscal = Realsoft_Sistema::_Cupom.ToString();
						 ConfiguracaoTEF::DataCupomFiscal = _DataCupom.ToString("ddMMyyyy");
						 ConfiguracaoTEF::HoraCupomFiscal = _HoraCupom.ToString("HHmmss");
						 ConfiguracaoTEF::NomeUsuario = "";

						 if (ConfiguracaoTEF::PadraoTEF->Equals("PAYGO"))
						 {
							 ConfiguracaoTEF::_ModoTEF = true;

							 Form14 ^Paygo = gcnew Form14();							 
							 Paygo->ShowDialog();
							 Paygo->Hide();
						 }
						 else if (ConfiguracaoTEF::PadraoTEF->Equals("SOFTWAREEXPRESS"))
						 {
							 FormTEF ^TEF = gcnew FormTEF();
							 TEF->ShowDialog();
						 }
						 else
						 {
							 throw gcnew Exception("PADRÃO NÃO HABILITADO, FAVOR ENTRE EM CONTATO COM O SUPORTE");
						 }
					 }					
					 else
					 {
						 throw gcnew Exception("Impressora não cadastrada");
					 }
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 return;
				 }
				 
			 }
		 }

		 private: void VerificaArquivo()
		 {
					  try
					  {
						  String ^Caminho = Environment::CurrentDirectory + "\\Comprovante\\";
						  String ^Data = DateTime::Now.ToString("dd_MM_yyyy_HH_mm_ss");

						  ArrayList ^Lista = ArrayList::Adapter(Directory::GetFiles(Caminho, "*.txt"));

						  for (int i = 0; i <= Lista->Count - 1; i++)
						  {
							  String ^imp = Lista[i]->ToString();

							  if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							  {

							  }
							  else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							  {

							  }
							  else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							  {
								  int retorno = Realsoft_Daruma::ImprimeTefCartoes(imp, ConfiguracaoTEF::ValorPago.ToString());

								  //MessageBox::Show(retorno.ToString());
								  
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
								  throw gcnew Exception("ECF NÃO CADASTRADA, FAVOR VERIFIQUE");
							  }
						  }
					  }
					  catch (Exception ^ex)
					  {
						  MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
					  }
		 }


				  private: static void printDocument1_PrintPage(Object ^sender, System::Drawing::Printing::PrintPageEventArgs ^e)
				  {
					  float yPos = 0;
					  int count = 0;
					  float leftMargin = 0;//e->MarginBounds.Left;
					  float topMargin = 50;//e->MarginBounds.Top;
					  String ^line = nullptr;
					  float linesPerPage = e->MarginBounds.Height / printFont->GetHeight(e->Graphics);
					  while (count < linesPerPage)
					  {
						  line = fileToPrint->ReadLine();

						  if (line == nullptr)
						  {
							  break;
						  }
						  yPos = topMargin + count * printFont->GetHeight(e->Graphics);
						  e->Graphics->DrawString(line, printFont, Brushes::Black, leftMargin, yPos, gcnew StringFormat());
						  count++;
					  }
					  if (line != nullptr)
					  {
						  e->HasMorePages = true;
					  }
				  }

private: System::Void Form3_Activated(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {				
				 //LbTotalGeral->Text = Realsoft_Sistema::SubTotalVenda.ToString();

				 /*if (Realsoft_Sistema::FinalizarVenda == true)
				 {
					 Realsoft_Sistema::FinalizarVenda = true;
					 this->Close();
				 }*/
			 }
			 catch (Exception ^ex)
			 {
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
};
}

	