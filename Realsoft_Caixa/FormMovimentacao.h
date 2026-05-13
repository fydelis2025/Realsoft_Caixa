#include<io.h>
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<list>
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
	using namespace System::IO;

	/// <summary>
	/// Summary for FormMovimentacao
	/// </summary>
	public ref class FormMovimentacao : public System::Windows::Forms::Form
	{
	public:
		FormMovimentacao(void)
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
		~FormMovimentacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^  BkProgress;
	protected:

	private: System::Windows::Forms::ProgressBar^  Progresso;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  LbAguarde;
	private: System::ComponentModel::BackgroundWorker^  BkMovimentacao;
	private: System::ComponentModel::BackgroundWorker^  BkVendas;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMovimentacao::typeid));
			this->BkProgress = (gcnew System::ComponentModel::BackgroundWorker());
			this->Progresso = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LbAguarde = (gcnew System::Windows::Forms::Label());
			this->BkMovimentacao = (gcnew System::ComponentModel::BackgroundWorker());
			this->BkVendas = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// BkProgress
			// 
			this->BkProgress->WorkerReportsProgress = true;
			this->BkProgress->WorkerSupportsCancellation = true;
			this->BkProgress->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormMovimentacao::BkProgress_DoWork);
			this->BkProgress->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &FormMovimentacao::BkProgress_ProgressChanged);
			this->BkProgress->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &FormMovimentacao::BkProgress_RunWorkerCompleted);
			// 
			// Progresso
			// 
			this->Progresso->BackColor = System::Drawing::Color::Black;
			this->Progresso->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Progresso->ForeColor = System::Drawing::Color::White;
			this->Progresso->Location = System::Drawing::Point(0, 82);
			this->Progresso->Name = L"Progresso";
			this->Progresso->Size = System::Drawing::Size(393, 23);
			this->Progresso->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->Progresso->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(84, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"FINALIZANDO";
			// 
			// LbAguarde
			// 
			this->LbAguarde->AutoSize = true;
			this->LbAguarde->BackColor = System::Drawing::Color::Transparent;
			this->LbAguarde->ForeColor = System::Drawing::Color::White;
			this->LbAguarde->Location = System::Drawing::Point(12, 66);
			this->LbAguarde->Name = L"LbAguarde";
			this->LbAguarde->Size = System::Drawing::Size(69, 13);
			this->LbAguarde->TabIndex = 2;
			this->LbAguarde->Text = L"AGUARDE...";
			// 
			// BkMovimentacao
			// 
			this->BkMovimentacao->WorkerReportsProgress = true;
			this->BkMovimentacao->WorkerSupportsCancellation = true;
			this->BkMovimentacao->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormMovimentacao::BkMovimentacao_DoWork);
			this->BkMovimentacao->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &FormMovimentacao::BkMovimentacao_ProgressChanged);
			this->BkMovimentacao->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &FormMovimentacao::BkMovimentacao_RunWorkerCompleted);
			// 
			// BkVendas
			// 
			this->BkVendas->WorkerReportsProgress = true;
			this->BkVendas->WorkerSupportsCancellation = true;
			this->BkVendas->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormMovimentacao::BkVendas_DoWork);
			this->BkVendas->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &FormMovimentacao::BkVendas_ProgressChanged);
			this->BkVendas->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &FormMovimentacao::BkVendas_RunWorkerCompleted);
			// 
			// FormMovimentacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(393, 105);
			this->ControlBox = false;
			this->Controls->Add(this->LbAguarde);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Progresso);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormMovimentacao";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &FormMovimentacao::FormMovimentacao_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: static int contador;
		private: static int __contmov;
		private: List<Realsoft_Tesouraria^>^ __Tesouraria = Realsoft_Consultas::Listar_Tesouraria();
		private: List<Movimentacao^>^ __Movimentacao = Realsoft_Consultas::Listar_MovimentacaoECF();

	private: System::Void FormMovimentacao_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {	
					 Progresso->Maximum = __Tesouraria->Count;

					 BkProgress->RunWorkerAsync();
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}
private: System::Void BkProgress_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 try
			 {

				 for (contador = 0; contador <= __Tesouraria->Count -1; contador++)
				 {
					 Threading::Thread::Sleep(1000);

					 BkProgress->ReportProgress(contador, "EXPORTANDO MOVIMETNO TESOURARIA ");

					 Realsoft_Retaguarda::Insere_Tesouraria(__Tesouraria[contador]);
					 
				 }
			 }
			 catch (Exception ^ex)
			 {
				 BkProgress->CancelAsync();
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void BkProgress_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
			 try
			 {
				 Progresso->Value = e->ProgressPercentage;
				 LbAguarde->Text = "Aguarde:  " + e->UserState + " " + e->ProgressPercentage.ToString() + "%";
			 }
			 catch (Exception ^ex)
			 {
				 BkProgress->CancelAsync();
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void BkProgress_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			 try
			 {
				 BkProgress->CancelAsync();

				 Progresso->Maximum = __Movimentacao->Count;

				 Realsoft_Consultas::Update_Tesouraria();

				 BkMovimentacao->RunWorkerAsync();

			 }
			 catch (Exception ^ex)
			 {
				 BkProgress->CancelAsync();
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void BkMovimentacao_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 try
			 {
				 

				 for (__contmov = 0; __contmov <= __Movimentacao->Count - 1; __contmov++)
				 {
					 Threading::Thread::Sleep(1000);

					 BkMovimentacao->ReportProgress(__contmov, "EXPORTANDO MOVIMETNO DO CAIXA ");

					 Realsoft_Retaguarda::Insere_MovimentacaoECF(__Movimentacao[__contmov]);

					 
				 }
			 }
			 catch (Exception ^ex)
			 {
				 BkProgress->CancelAsync();
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void BkMovimentacao_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
			 try
			 {
				 Progresso->Value = e->ProgressPercentage;
				 LbAguarde->Text = "Aguarde:  " + e->UserState + " " + e->ProgressPercentage.ToString() + "%";
			 }
			 catch (Exception ^ex)
			 {
				 BkMovimentacao->CancelAsync();
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void BkMovimentacao_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			 try
			 {
				 BkMovimentacao->CancelAsync();

				 Realsoft_Consultas::Update_MovimentacaoECF();

				 BkVendas->RunWorkerAsync();

			 }
			 catch (Exception ^ex)
			 {
				 BkMovimentacao->CancelAsync();
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void BkVendas_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	try
	{
		for (__contmov = 0; __contmov <= 100; __contmov++)
		{
			Threading::Thread::Sleep(1000);

			BkMovimentacao->ReportProgress(__contmov, "EXPORTANDo VENDAS DO CAIXA ");

			//Realsoft_Retaguarda::Insere_MovimentacaoECF(__Movimentacao[__contmov]);
		}
	}
	catch (Exception ^ex)
	{
		BkMovimentacao->CancelAsync();
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BkVendas_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
	try
	{
		Progresso->Value = e->ProgressPercentage;

		LbAguarde->Text = "Aguarde:  " + e->UserState + " " + e->ProgressPercentage.ToString() + "%";
	}
	catch (Exception ^ex)
	{
		BkMovimentacao->CancelAsync();
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BkVendas_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
	try
	{
		BkVendas->CancelAsync();

		Application::Restart();
	}
	catch (Exception ^ex)
	{
		BkMovimentacao->CancelAsync();
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
