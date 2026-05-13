#include<list>
#include<string>
#include<string.h>
#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	/// <summary>
	/// Summary for FormCartaoLoja
	/// </summary>
	public ref class FormCartaoLoja : public System::Windows::Forms::Form
	{
	public:
		FormCartaoLoja(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->KeyPreview = true;
			//this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormCartaoLoja::FormCartaoLoja_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCartaoLoja()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  TxNumero;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  TxParcela;
	private: System::Windows::Forms::TextBox^  TxSubTotal;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  TxValor;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  TxLimite;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  P_Fiscal;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private:
	internal: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCartaoLoja::typeid));
			this->TxNumero = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxParcela = (gcnew System::Windows::Forms::TextBox());
			this->TxSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxLimite = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->P_Fiscal = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TxSenhaFiscal = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->P_Fiscal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TxNumero
			// 
			this->TxNumero->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxNumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxNumero->Location = System::Drawing::Point(12, 125);
			this->TxNumero->Name = L"TxNumero";
			this->TxNumero->Size = System::Drawing::Size(290, 31);
			this->TxNumero->TabIndex = 1;
			this->TxNumero->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCartaoLoja::TxNumero_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(14, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"NÚMERO DO CARTÃO OU CPF";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(14, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PARCELA";
			// 
			// TxParcela
			// 
			this->TxParcela->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxParcela->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxParcela->Location = System::Drawing::Point(12, 179);
			this->TxParcela->Name = L"TxParcela";
			this->TxParcela->Size = System::Drawing::Size(119, 31);
			this->TxParcela->TabIndex = 4;
			this->TxParcela->Text = L"1";
			this->TxParcela->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCartaoLoja::TxParcela_KeyDown);
			// 
			// TxSubTotal
			// 
			this->TxSubTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxSubTotal->Enabled = false;
			this->TxSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxSubTotal->Location = System::Drawing::Point(137, 179);
			this->TxSubTotal->Name = L"TxSubTotal";
			this->TxSubTotal->Size = System::Drawing::Size(127, 31);
			this->TxSubTotal->TabIndex = 6;
			this->TxSubTotal->Text = L"0,00";
			this->TxSubTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(134, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"SUBTOTAL";
			// 
			// TxValor
			// 
			this->TxValor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxValor->Location = System::Drawing::Point(270, 179);
			this->TxValor->Name = L"TxValor";
			this->TxValor->Size = System::Drawing::Size(127, 31);
			this->TxValor->TabIndex = 8;
			this->TxValor->Text = L"0,00";
			this->TxValor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxValor->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCartaoLoja::TxValor_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(267, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"VALOR PAGO";
			// 
			// TxLimite
			// 
			this->TxLimite->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxLimite->Enabled = false;
			this->TxLimite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxLimite->Location = System::Drawing::Point(308, 125);
			this->TxLimite->Name = L"TxLimite";
			this->TxLimite->Size = System::Drawing::Size(89, 31);
			this->TxLimite->TabIndex = 9;
			this->TxLimite->Text = L"0,00";
			this->TxLimite->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(305, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"LIMITE";
			// 
			// P_Fiscal
			// 
			this->P_Fiscal->BackColor = System::Drawing::Color::Transparent;
			this->P_Fiscal->Controls->Add(this->pictureBox1);
			this->P_Fiscal->Controls->Add(this->TxSenhaFiscal);
			this->P_Fiscal->Controls->Add(this->label1);
			this->P_Fiscal->Location = System::Drawing::Point(10, 84);
			this->P_Fiscal->Name = L"P_Fiscal";
			this->P_Fiscal->Size = System::Drawing::Size(393, 135);
			this->P_Fiscal->TabIndex = 106;
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
			this->TxSenhaFiscal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCartaoLoja::TxSenhaFiscal_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(99, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 29);
			this->label1->TabIndex = 103;
			this->label1->Text = L"SENHA DO FISCAL:";
			// 
			// FormCartaoLoja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(415, 231);
			this->ControlBox = false;
			this->Controls->Add(this->P_Fiscal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxLimite);
			this->Controls->Add(this->TxValor);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxSubTotal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TxParcela);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TxNumero);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormCartaoLoja";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &FormCartaoLoja::FormCartaoLoja_Load);
			this->Shown += gcnew System::EventHandler(this, &FormCartaoLoja::FormCartaoLoja_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCartaoLoja::FormCartaoLoja_KeyDown);
			this->P_Fiscal->ResumeLayout(false);
			this->P_Fiscal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormCartaoLoja_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 TxSenhaFiscal->Focus();
					 TxSubTotal->Text = Realsoft_Sistema::SubTotalVenda.ToString("#####0.00");

				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }

	}
	private: System::Void FormCartaoLoja_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {
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
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
	private: System::Void TxNumero_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {
					 if (e->KeyCode == Keys::Enter)
					 {
						 int Retorno = 0;

						 Retorno = Realsoft_Retaguarda::Consultar_CartaoCliente(TxNumero->Text);

						 if (Retorno == 0)
						 {
							 throw gcnew Exception("CLIENTE NÃO ENCONTRADO, FAVOR VERIFIQUE");
						 }
						 else
						 {
							 Realsoft_Sistema::IDCliente = Retorno;
							 TxLimite->Text = Realsoft_Sistema::LimiteCartao.ToString("#####0.00");
							 TxParcela->Focus();
						 }

					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }

	}
	private: System::Void TxParcela_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {

					 if (e->KeyCode == Keys::Enter)
					 {
						 if (TxParcela->Text != "1")
						 {
							 throw gcnew Exception("NÚMERO DE PARCELAS INVÁLIDO");
						 }
						 else
						 {
							 TxValor->Focus();
						 }
					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}

	private: System::Void TxValor_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {
					 if (e->KeyCode == Keys::Enter)
					 {

						 if (TxValor->Text == TxSubTotal->Text)
						 {

							 Login ^Logon = Realsoft_Consultas::Consultar_Operador(Realsoft_Sistema::IDOperador);

							 Realsoft_Geral::Criar_VendaCartao(TxNumero->Text, Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxSubTotal->Text), Realsoft_Sistema::_Cupom);


							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

								 Realsoft_Daruma::EfetuaFormaPagamento("CARTAO DA LOJA", TxValor->Text, "Volte Sempre");

								 Realsoft_Daruma::ComprovanteCartao("CARTAO DA LOJA", Realsoft_Geral::_cartao->Autorizacao, Realsoft_Geral::_cartao->ValorPago);

								 Realsoft_Geral::Registra_PagamentoCupomFiscal("CARTAO DA LOJA", Decimal::Parse(TxSubTotal->Text), Decimal::Parse(TxValor->Text), 0);
								 // Realsoft_Sistema::ValorPago = Decimal::Parse(TxValor->Text);
								 Realsoft_Sistema::FinalizarVenda = true;

								 this->Close();
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							 {
								 Realsoft_BematechNaoFiscal::ComprovanteCartao(Realsoft_Geral::_cartao->NumeroCartao, Realsoft_Geral::_cartao->Autorizacao, Realsoft_Geral::_cartao->ValorPago);

								 // Realsoft_Sistema::ValorPago = Decimal::Parse(TxValor->Text);

								 Realsoft_Sistema::FinalizarVenda = true;

								 this->Close();
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
							 {
								 Realsoft_Sistema::FinalizarVenda = true;

								 this->Close();
							 }
							 else
							 {
								 throw gcnew Exception("OPERAÇÃO INVÁLIDA");
							 }
						 }
						 else
						 {
							 throw gcnew Exception("VALOR INFORMADO É INVÁLIDO");
						 }

					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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

							 if (Realsoft_Geral::logon != nullptr)
							 {
								 Realsoft_Sistema::IDFiscal = Realsoft_Geral::logon->IDFiscal;

								 P_Fiscal->Visible = false;
								 TxNumero->Focus();

							 }
							 else
							 {
								 throw gcnew Exception("SENHA DO FISCAL NAO CONFERE");
							 }
						 }
					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, L"Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
	private: System::Void FormCartaoLoja_Shown(System::Object^  sender, System::EventArgs^  e) {
				 TxSenhaFiscal->Focus();
	}
};
}
