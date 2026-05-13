#include<stdio.h>
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
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;
	using namespace Realsoft_TEF;
	using namespace System::Text;
	using namespace System::IO;
	/// <summary>
	/// Summary for FormTEF
	/// </summary>
	public ref class FormTEF : public System::Windows::Forms::Form
	{
	public:
		FormTEF(void)
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
		~FormTEF()
		{
			if (components)
			{
				delete components;
			}
		}

	internal: System::Windows::Forms::Label^  TbMensagem;
	internal: System::Windows::Forms::Label^  LbLabel;
	internal: System::Windows::Forms::TextBox^  TxOpcao;
	private: System::ComponentModel::BackgroundWorker^  BKTef;
	private: System::ComponentModel::BackgroundWorker^  BkContinuaTransacao;
	private: System::ComponentModel::BackgroundWorker^  BkFinalizaTransacao;
	private: System::ComponentModel::BackgroundWorker^  BkAguarda;
	private: System::ComponentModel::BackgroundWorker^  BkTipo;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTEF::typeid));
			this->TbMensagem = (gcnew System::Windows::Forms::Label());
			this->LbLabel = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->BKTef = (gcnew System::ComponentModel::BackgroundWorker());
			this->BkContinuaTransacao = (gcnew System::ComponentModel::BackgroundWorker());
			this->BkFinalizaTransacao = (gcnew System::ComponentModel::BackgroundWorker());
			this->BkAguarda = (gcnew System::ComponentModel::BackgroundWorker());
			this->BkTipo = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// TbMensagem
			// 
			this->TbMensagem->BackColor = System::Drawing::Color::Transparent;
			this->TbMensagem->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbMensagem->ForeColor = System::Drawing::Color::Yellow;
			this->TbMensagem->Location = System::Drawing::Point(12, 88);
			this->TbMensagem->Name = L"TbMensagem";
			this->TbMensagem->Size = System::Drawing::Size(694, 277);
			this->TbMensagem->TabIndex = 67;
			// 
			// LbLabel
			// 
			this->LbLabel->AutoSize = true;
			this->LbLabel->BackColor = System::Drawing::Color::Transparent;
			this->LbLabel->Font = (gcnew System::Drawing::Font(L"Arial", 18));
			this->LbLabel->ForeColor = System::Drawing::Color::Yellow;
			this->LbLabel->Location = System::Drawing::Point(13, 386);
			this->LbLabel->Name = L"LbLabel";
			this->LbLabel->Size = System::Drawing::Size(105, 27);
			this->LbLabel->TabIndex = 74;
			this->LbLabel->Text = L"OPÇÃO:";
			this->LbLabel->Visible = false;
			// 
			// TxOpcao
			// 
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxOpcao->Location = System::Drawing::Point(19, 422);
			this->TxOpcao->MaxLength = 1;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(184, 41);
			this->TxOpcao->TabIndex = 73;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->Visible = false;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormTEF::TxOpcao_KeyDown);
			// 
			// BKTef
			// 
			this->BKTef->WorkerReportsProgress = true;
			this->BKTef->WorkerSupportsCancellation = true;
			this->BKTef->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormTEF::BKTef_DoWork);
			this->BKTef->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &FormTEF::BKTef_ProgressChanged);
			// 
			// BkContinuaTransacao
			// 
			this->BkContinuaTransacao->WorkerReportsProgress = true;
			this->BkContinuaTransacao->WorkerSupportsCancellation = true;
			this->BkContinuaTransacao->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormTEF::BkContinuaTransacao_DoWork);
			// 
			// BkAguarda
			// 
			this->BkAguarda->WorkerReportsProgress = true;
			this->BkAguarda->WorkerSupportsCancellation = true;
			this->BkAguarda->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormTEF::BkAguarda_DoWork);
			this->BkAguarda->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &FormTEF::BkAguarda_ProgressChanged);
			// 
			// BkTipo
			// 
			this->BkTipo->WorkerReportsProgress = true;
			this->BkTipo->WorkerSupportsCancellation = true;
			this->BkTipo->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormTEF::BkTipo_DoWork);
			this->BkTipo->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &FormTEF::BkTipo_ProgressChanged);
			// 
			// FormTEF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(718, 483);
			this->ControlBox = false;
			this->Controls->Add(this->LbLabel);
			this->Controls->Add(this->TxOpcao);
			this->Controls->Add(this->TbMensagem);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormTEF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &FormTEF::FormTEF_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void FormTEF_Shown(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void FormTEF_Load(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {	
				 int _retorno = RealsoftTEF::Configura(ConfiguracaoTEF::IPServidorTEF, ConfiguracaoTEF::LojaTef, ConfiguracaoTEF::ECF);

				 String ^ _mensagem = Realsoft_Consultas::MensagemTEF(_retorno);

				 if (_retorno != 0)
				 {
					throw gcnew Exception(_mensagem);
				 }

				 ComunicacaoTEF::MensagemPinpad("REALSOFT");

				 if (!BKTef->IsBusy)
				 {
					 BKTef->RunWorkerAsync();
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 ComunicacaoTEF::FinalizaTEF(0);
			 }
		 }

private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if (e->KeyCode == Keys::Enter)
				 {
					 if (TxOpcao->Text != "1" && TxOpcao->Text != "2")
					 {
						 throw gcnew Exception("OPÇÃO INVÁLIDA");
					 }
					 else
					 {						 
						 OpcaoDigitacao = int::Parse(TxOpcao->Text);
					 }
				 }
			 }

			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 ComunicacaoTEF::FinalizaTEF(0);
			 }

		 }

		 private: static int _comando;
		 private: static int tipoCampo;
		 private: static int tamMinimo;
		 private: static int tamMaximo;
		 private: static array<Byte>^bufer;
		 private: static bool VerificaConexaoTEf;
		 private: static int OpcaoDigitacao;
		 
private: System::Void BKTef_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	try
	{		
					
			int _retorno = RealsoftTEF::IniciarVendaTEF(ConfiguracaoTEF::Funcao, ConfiguracaoTEF::ValorPago.ToString("#####0.00")->Replace(".", ","), ConfiguracaoTEF::CupomFiscal, ConfiguracaoTEF::DataCupomFiscal, ConfiguracaoTEF::HoraCupomFiscal, ConfiguracaoTEF::NomeUsuario, "");

			do
			{
				_retorno = RealsoftTEF::ExecutaVendaTEF();

				_comando = Realsoft_ConfiguraTEF::comando;

				if (_comando == 0)
				{
					if (!BkTipo->IsBusy)
					{
						BkTipo->RunWorkerAsync();
					}
					//BKTef->ReportProgress(0, Realsoft_ConfiguraTEF::Message);
				}
				else
				{

					tipoCampo = Realsoft_ConfiguraTEF::tipoCampo;

					Realsoft_ConfiguraTEF::Message = Encoding::UTF8->GetString(Realsoft_ConfiguraTEF::buffer);

					Realsoft_ConfiguraTEF::Message = Realsoft_ConfiguraTEF::Message->Substring(0, Realsoft_ConfiguraTEF::Message->IndexOf('\x0'));

					//String ^ResultM = Realsoft_ConfiguraTEF::Message;

					BKTef->ReportProgress(0, Realsoft_ConfiguraTEF::Message);

					ComunicacaoTEF::Espera(100);
				}
			} while (_retorno == 10000);

			if (BKTef->CancellationPending == true)
			{
				e->Cancel = true;				
			}
			
			//imprime comprovante

		
		
	}
	catch (Exception^ err)
	{
		MessageBox::Show(err->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BKTef_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {

	try
	{
		if (_comando == 1) //comando == 2 & comando = 3
		{
			TbMensagem->Text = Realsoft_ConfiguraTEF::Message + Environment::NewLine;

			Threading::Thread::Sleep(500);

			if (tipoCampo == -1 && Realsoft_ConfiguraTEF::Message->Trim()->ToUpper()->IndexOf("TRANSACAO OK!") > -1)
			{
				Threading::Thread::Sleep(500);
			}
		}
		else if (_comando == 3)
		{
			TbMensagem->Text = Realsoft_ConfiguraTEF::Message + Environment::NewLine;
		}
		else if (_comando == 4)
		{
			TbMensagem->Text = Realsoft_ConfiguraTEF::Message + Environment::NewLine + Environment::NewLine;
		}

		else if (_comando == 21)
		{
			String ^Mensagem = Realsoft_ConfiguraTEF::Message;

			TbMensagem->Text += Mensagem + Environment::NewLine;
			
			LbLabel->Visible = true;
			TxOpcao->Visible = true;
			TxOpcao->Focus();
						
		}
		else if (_comando == 22)
		{
			if (Realsoft_ConfiguraTEF::Message->Equals("Sem conexao SiTef"))
			{
				TbMensagem->Text = "ATENÇÃO" + Environment::NewLine + Environment::NewLine;

				TbMensagem->Text += Realsoft_ConfiguraTEF::Message + Environment::NewLine + Environment::NewLine;

				TbMensagem->Text += "Repita a operação, se a mensagem continuar favor entrar em contato com o suporte tecnico...";
				Realsoft_ConfiguraTEF::comando = -1;

				
			}
		}
		else if (_comando == 23)
		{
			TbMensagem->Text = Realsoft_ConfiguraTEF::Message + Environment::NewLine;
		}
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void BkContinuaTransacao_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	try
	{
		if (BkContinuaTransacao->IsBusy)
		{
			
		}
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void BkAguarda_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	try
	{
		Realsoft_ConfiguraTEF::retorno = RealsoftTEF::LeCartao("INSIRA OU PASSE O CARTAO");

		if (Realsoft_ConfiguraTEF::retorno == 0)
		{
			Realsoft_ConfiguraTEF::Message = Encoding::UTF8->GetString(Realsoft_ConfiguraTEF::_trilha1);

			String^ teste = Encoding::UTF8->GetString(Realsoft_ConfiguraTEF::_trilha2);

			BkAguarda->ReportProgress(0, Realsoft_ConfiguraTEF::Message);
			BkAguarda->ReportProgress(0, teste);
		}

		if (BkAguarda->CancellationPending == true)
		{
			e->Cancel = true;
			
		}

		
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BkAguarda_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
	try
	{
		TbMensagem->Text = Realsoft_ConfiguraTEF::Message;
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void BkTipo_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
	try
	{
		if (Realsoft_ConfiguraTEF::tipoCampo == 1)
		{
			String^ret = Realsoft_ConfiguraTEF::Message;
		}
		else if (Realsoft_ConfiguraTEF::tipoCampo == 121)
		{
			String^ret = Realsoft_ConfiguraTEF::Message;
		}
		else if (Realsoft_ConfiguraTEF::tipoCampo == 122)
		{
			String^ret = Realsoft_ConfiguraTEF::Message;
		}
		else if (Realsoft_ConfiguraTEF::tipoCampo == 131)
		{
			String^ret = Realsoft_ConfiguraTEF::Message;
		}
		else if (Realsoft_ConfiguraTEF::tipoCampo == 132)
		{
			String^ret = Realsoft_ConfiguraTEF::Message;
		}
		else
		{
			String^ret = Realsoft_ConfiguraTEF::Message;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BkTipo_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	try
	{

			tipoCampo = Realsoft_ConfiguraTEF::tipoCampo;

			Realsoft_ConfiguraTEF::Message = Encoding::UTF8->GetString(Realsoft_ConfiguraTEF::buffer);

			Realsoft_ConfiguraTEF::Message = Realsoft_ConfiguraTEF::Message->Substring(0, Realsoft_ConfiguraTEF::Message->IndexOf('\x0'));

			BkTipo->ReportProgress(0, Realsoft_ConfiguraTEF::Message);
		
			ComunicacaoTEF::Espera(200);

	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};

}
