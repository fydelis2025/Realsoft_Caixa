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


	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);
	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			this->KeyDown += gcnew  KeyEventHandler(this, &Form4::Form4_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  DgLista;
	internal: System::Windows::Forms::TextBox^  TxConsultar;
	private: 
	protected: 








	internal: 






	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CODIGO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  EAN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DESCRICAO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  UNIDADEMEDIDA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ST;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ESTOQUE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PRECOUNIT;
	private: System::Windows::Forms::Label^  LbAguarde;
	private: System::ComponentModel::BackgroundWorker^  BkAguarde;
	private: System::Windows::Forms::ProgressBar^  prog;








	private: 

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->DgLista = (gcnew System::Windows::Forms::DataGridView());
			this->CODIGO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EAN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DESCRICAO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UNIDADEMEDIDA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ST = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ESTOQUE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRECOUNIT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxConsultar = (gcnew System::Windows::Forms::TextBox());
			this->LbAguarde = (gcnew System::Windows::Forms::Label());
			this->BkAguarde = (gcnew System::ComponentModel::BackgroundWorker());
			this->prog = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->BeginInit();
			this->SuspendLayout();
			// 
			// DgLista
			// 
			this->DgLista->AllowUserToAddRows = false;
			this->DgLista->AllowUserToDeleteRows = false;
			this->DgLista->AllowUserToResizeColumns = false;
			this->DgLista->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::SteelBlue;
			this->DgLista->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DgLista->BackgroundColor = System::Drawing::Color::White;
			this->DgLista->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DgLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DgLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->CODIGO, this->EAN,
					this->DESCRICAO, this->UNIDADEMEDIDA, this->ST, this->ESTOQUE, this->PRECOUNIT
			});
			this->DgLista->GridColor = System::Drawing::SystemColors::Desktop;
			this->DgLista->Location = System::Drawing::Point(22, 101);
			this->DgLista->Name = L"DgLista";
			this->DgLista->RowHeadersVisible = false;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DgLista->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DgLista->Size = System::Drawing::Size(767, 407);
			this->DgLista->TabIndex = 114;
			this->DgLista->Visible = false;
			this->DgLista->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form4::DgLista_KeyDown);
			// 
			// CODIGO
			// 
			this->CODIGO->HeaderText = L"CODIGO";
			this->CODIGO->Name = L"CODIGO";
			// 
			// EAN
			// 
			this->EAN->HeaderText = L"EAN";
			this->EAN->Name = L"EAN";
			// 
			// DESCRICAO
			// 
			this->DESCRICAO->FillWeight = 230;
			this->DESCRICAO->HeaderText = L"DESCRICAO";
			this->DESCRICAO->Name = L"DESCRICAO";
			this->DESCRICAO->Width = 230;
			// 
			// UNIDADEMEDIDA
			// 
			this->UNIDADEMEDIDA->FillWeight = 70;
			this->UNIDADEMEDIDA->HeaderText = L"UN";
			this->UNIDADEMEDIDA->Name = L"UNIDADEMEDIDA";
			this->UNIDADEMEDIDA->Width = 70;
			// 
			// ST
			// 
			this->ST->FillWeight = 40;
			this->ST->HeaderText = L"ST";
			this->ST->Name = L"ST";
			this->ST->Width = 40;
			// 
			// ESTOQUE
			// 
			this->ESTOQUE->HeaderText = L"ESTOQUE";
			this->ESTOQUE->Name = L"ESTOQUE";
			// 
			// PRECOUNIT
			// 
			this->PRECOUNIT->HeaderText = L"PRECOUNIT";
			this->PRECOUNIT->Name = L"PRECOUNIT";
			// 
			// TxConsultar
			// 
			this->TxConsultar->BackColor = System::Drawing::Color::White;
			this->TxConsultar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxConsultar->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->TxConsultar->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxConsultar->ForeColor = System::Drawing::Color::Black;
			this->TxConsultar->Location = System::Drawing::Point(35, 531);
			this->TxConsultar->MaxLength = 20;
			this->TxConsultar->Name = L"TxConsultar";
			this->TxConsultar->Size = System::Drawing::Size(680, 34);
			this->TxConsultar->TabIndex = 115;
			this->TxConsultar->Visible = false;
			this->TxConsultar->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form4::TxConsultar_KeyDown);
			this->TxConsultar->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form4::TxConsultar_KeyPress);
			this->TxConsultar->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form4::TxConsultar_KeyUp);
			// 
			// LbAguarde
			// 
			this->LbAguarde->AutoSize = true;
			this->LbAguarde->BackColor = System::Drawing::Color::Transparent;
			this->LbAguarde->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbAguarde->ForeColor = System::Drawing::Color::White;
			this->LbAguarde->Location = System::Drawing::Point(369, 101);
			this->LbAguarde->Name = L"LbAguarde";
			this->LbAguarde->Size = System::Drawing::Size(82, 20);
			this->LbAguarde->TabIndex = 117;
			this->LbAguarde->Text = L"Aguarde ";
			this->LbAguarde->Visible = false;
			// 
			// BkAguarde
			// 
			this->BkAguarde->WorkerReportsProgress = true;
			this->BkAguarde->WorkerSupportsCancellation = true;
			this->BkAguarde->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form4::BkAguarde_DoWork);
			this->BkAguarde->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &Form4::BkAguarde_ProgressChanged);
			this->BkAguarde->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form4::BkAguarde_RunWorkerCompleted);
			// 
			// prog
			// 
			this->prog->BackColor = System::Drawing::Color::Black;
			this->prog->ForeColor = System::Drawing::Color::Yellow;
			this->prog->Location = System::Drawing::Point(22, 101);
			this->prog->Name = L"prog";
			this->prog->Size = System::Drawing::Size(341, 23);
			this->prog->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->prog->TabIndex = 118;
			this->prog->Visible = false;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 600);
			this->ControlBox = false;
			this->Controls->Add(this->DgLista);
			this->Controls->Add(this->prog);
			this->Controls->Add(this->LbAguarde);
			this->Controls->Add(this->TxConsultar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->Shown += gcnew System::EventHandler(this, &Form4::Form4_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form4::Form4_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 Realsoft_Sistema::_Consulta = false;
					Realsoft_Sistema::FinalizarVenda = false;
					Realsoft_Sistema::LimparCampos = false;
					Realsoft_Sistema::AtivarExcluirItem = false;
					Realsoft_Sistema::RecuperarCupom = false;

					 this->Close();
				 }
			 }
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {

		DgLista->Rows->Clear();
		BkAguarde->RunWorkerAsync();
		TxConsultar->Visible = true;
		DgLista->Visible = true;
		LbAguarde->Visible = true;
		TxConsultar->Focus();

		prog->Maximum = _merc->Count;
	
}

		 public: static String ^Retorno;

private: System::Void DgLista_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if (e->KeyCode == Keys::Enter)
			 {
				 Retorno = DgLista->CurrentRow->Cells[0]->Value->ToString();

				 Realsoft_Sistema::_Consulta = true;
				 Realsoft_Sistema::_Prevenda = false;
				 Realsoft_Sistema::FinalizarVenda = false;
				 Realsoft_Sistema::LimparCampos = false;
				 Realsoft_Sistema::AtivarExcluirItem = false;
				 Realsoft_Sistema::RecuperarCupom = false;

				 this->Close();
			 }
		 }
private: System::Void TxConsultar_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 
		 }
private: System::Void TxConsultar_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 try
			 {
				 DgLista->Rows->Clear();

				 List<Mercadoria^>^ __merc = Realsoft_Consultas::Listar_Mercadorias_Digitado(TxConsultar->Text);
				 
				 array<String ^>^ args;

				 int __contador = 0;

				 for (__contador = 0; __contador <= __merc->Count  - 1; __contador++)
				 {	
					 args = gcnew array<String ^>(10);
					 args[0] = __merc[__contador]->Codigo.ToString();
					 args[1] = __merc[__contador]->EAN;
					 args[2] = __merc[__contador]->DescricaoMercadoria;
					 args[3] = __merc[__contador]->Unidade;
					 args[4] = __merc[__contador]->SituacaoTributaria;
					 args[5] = __merc[__contador]->Quantidade;
					 args[6] = __merc[__contador]->PrecoVenda.ToString("#####0.00");

					 DgLista->Rows->Add(args);
					 
				 }
				 
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
		 }
private: System::Void Form4_Shown(System::Object^  sender, System::EventArgs^  e) {

			 TxConsultar->Focus();
		 }
private: System::Void TxConsultar_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 Retorno = DgLista->CurrentRow->Cells[0]->Value->ToString();

				 Realsoft_Sistema::_Consulta = true;
				 Realsoft_Sistema::_Prevenda = false;
				 Realsoft_Sistema::FinalizarVenda = false;
				 Realsoft_Sistema::LimparCampos = false;
				 Realsoft_Sistema::AtivarExcluirItem = false;
				 Realsoft_Sistema::RecuperarCupom = false;

				 this->Close();
			 }
		 }

		 private: static int contador = 0;

private: System::Void BkAguarde_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
	try
	{	
		
		prog->Value = e->ProgressPercentage;

		args = gcnew array<String ^>(10);
		args[0] = _merc[contador]->Codigo.ToString();
		args[1] = _merc[contador]->EAN;
		args[2] = _merc[contador]->DescricaoMercadoria;
		args[3] = _merc[contador]->Unidade;
		args[4] = _merc[contador]->SituacaoTributaria;
		args[5] = _merc[contador]->Quantidade;
		args[6] = _merc[contador]->PrecoVenda.ToString("#####0.00");

		DgLista->Rows->Add(args);
					

		
	}
	catch (Exception^ ex)
	{
		BkAguarde->CancelAsync();
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

		 private: static array<String ^>^ args;
		 private: static List<Mercadoria^>^ _merc = Realsoft_Consultas::Listar_Mercadorias();

private: System::Void BkAguarde_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	try
	{	
		for (contador = 0; contador <= _merc->Count -1; contador++)
		{
			System::Threading::Thread::Sleep(20);

			BkAguarde->ReportProgress(contador, "");
		}
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BkAguarde_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {

	TxConsultar->Visible = true;
	DgLista->Visible = true;
	LbAguarde->Visible = true;
	TxConsultar->Focus();

	LbAguarde->Text = "MERCADORIAS PROCESSADAS";
}
};
}
