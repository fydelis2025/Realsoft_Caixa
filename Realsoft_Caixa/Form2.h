#include<io.h>
#include"Form3.h"
#include"Form4.h"
#include"Form5.h"
#include"Form7.h"
#include"Form8.h"
#include"Form9.h"
#include"Form10.h"
#include"Form11.h"
#include"Form12.h"
#include"Form16.h"
#include"Form15.h"
#include<exception>
#include"FormDesconto.h"
#include"FormPublicidade.h"
#include"FormAjuda.h"
#include"Realsoft_Pagamento.h"
#include"FormAcrescimo.h"
#include"FormMercadorias.h"
#pragma once

namespace Realsoft_Caixa {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;	
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::IO;	
	using namespace MySql::Data;
	using namespace MySql::Data::MySqlClient;	
	using namespace std;
	using namespace System::Runtime::InteropServices;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;
	using namespace System::Diagnostics;
	using namespace Realsoft_TEF;
	using namespace Realsoft_ComunicaBalanca;
	//using namespace Realsoft_ModoBalanca;
	
	/// <summary>
	/// Summary for Form2
	/// </summary>

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Form2::Form2_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;				
			}
		}
	public: System::Windows::Forms::Label^  LbDescricao;
	protected: 

	protected: 




	public: System::Windows::Forms::Label^  LbUsuario;
	private: 



	private: System::Windows::Forms::Label^  LbECf;


	public: System::Windows::Forms::DataGridView^  DgLista;
	private: 

	public: System::Windows::Forms::TextBox^  TxQaunt;
	private: 
	public: System::Windows::Forms::Label^  LbTotal;
	public: System::Windows::Forms::Label^  TxPrecoUnit;
	public: System::Windows::Forms::TextBox^  TxCodigo;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  principalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iniciarVendaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formaPagamentoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuFiscalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  consultarMercadoriaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  prevendaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  limparTelaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fechamentoCaixaToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  fechamentoDeTurnoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  operacaoFiscalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ajudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cancelarCupomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  publicidadeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  abastecimentoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  excluirItemToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^  mercadoriasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  descontoToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  recuperarCupomToolStripMenuItem;







	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  LbSubTotal;
	private: System::Windows::Forms::ToolStripMenuItem^  abrieGavetaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  funcaoAdministrativaToolStripMenuItem;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  LbCaminho;
	private: System::Windows::Forms::ToolStripMenuItem^  modoOperacaoToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^  defaultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  padraoToolStripMenuItem;

	public: System::Windows::Forms::Label^  LbCupom;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  acrescimoToolStripMenuItem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Item;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Codigo;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Descricao;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantidade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ValorUnitario;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	public:
	private:

	private:







	private: System::ComponentModel::IContainer^  components;
	public: 


	private: 

	internal: 


	private: 

	protected: 



	internal: 

	protected: 


	internal: 



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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->LbDescricao = (gcnew System::Windows::Forms::Label());
			this->LbUsuario = (gcnew System::Windows::Forms::Label());
			this->LbECf = (gcnew System::Windows::Forms::Label());
			this->DgLista = (gcnew System::Windows::Forms::DataGridView());
			this->Item = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descricao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ValorUnitario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxQaunt = (gcnew System::Windows::Forms::TextBox());
			this->LbTotal = (gcnew System::Windows::Forms::Label());
			this->TxPrecoUnit = (gcnew System::Windows::Forms::Label());
			this->TxCodigo = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->principalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciarVendaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formaPagamentoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuFiscalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarMercadoriaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prevendaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->limparTelaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fechamentoCaixaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fechamentoDeTurnoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacaoFiscalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cancelarCupomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->publicidadeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abastecimentoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->excluirItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mercadoriasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recuperarCupomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abrieGavetaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->funcaoAdministrativaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modoOperacaoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->padraoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acrescimoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->LbSubTotal = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LbCaminho = (gcnew System::Windows::Forms::Label());
			this->LbCupom = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LbDescricao
			// 
			this->LbDescricao->BackColor = System::Drawing::Color::Transparent;
			this->LbDescricao->Font = (gcnew System::Drawing::Font(L"Arial Black", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbDescricao->ForeColor = System::Drawing::Color::SteelBlue;
			this->LbDescricao->Location = System::Drawing::Point(292, 36);
			this->LbDescricao->Name = L"LbDescricao";
			this->LbDescricao->Size = System::Drawing::Size(487, 44);
			this->LbDescricao->TabIndex = 117;
			this->LbDescricao->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// LbUsuario
			// 
			this->LbUsuario->AutoSize = true;
			this->LbUsuario->BackColor = System::Drawing::Color::Transparent;
			this->LbUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbUsuario->ForeColor = System::Drawing::Color::White;
			this->LbUsuario->Location = System::Drawing::Point(583, 119);
			this->LbUsuario->Name = L"LbUsuario";
			this->LbUsuario->Size = System::Drawing::Size(51, 16);
			this->LbUsuario->TabIndex = 122;
			this->LbUsuario->Text = L"Admin";
			// 
			// LbECf
			// 
			this->LbECf->AutoSize = true;
			this->LbECf->BackColor = System::Drawing::Color::Transparent;
			this->LbECf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbECf->ForeColor = System::Drawing::Color::White;
			this->LbECf->Location = System::Drawing::Point(726, 119);
			this->LbECf->Name = L"LbECf";
			this->LbECf->Size = System::Drawing::Size(61, 16);
			this->LbECf->TabIndex = 123;
			this->LbECf->Text = L"Off-Line";
			// 
			// DgLista
			// 
			this->DgLista->AllowUserToAddRows = false;
			this->DgLista->AllowUserToDeleteRows = false;
			this->DgLista->AllowUserToResizeColumns = false;
			this->DgLista->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Yellow;
			this->DgLista->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DgLista->BackgroundColor = System::Drawing::Color::White;
			this->DgLista->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DgLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DgLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Item, this->Codigo,
					this->Descricao, this->Quantidade, this->ValorUnitario, this->Total
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::LightGreen;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DgLista->DefaultCellStyle = dataGridViewCellStyle3;
			this->DgLista->GridColor = System::Drawing::Color::Black;
			this->DgLista->Location = System::Drawing::Point(311, 150);
			this->DgLista->Name = L"DgLista";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DgLista->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->DgLista->RowHeadersVisible = false;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Transparent;
			this->DgLista->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DgLista->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->DgLista->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->DgLista->Size = System::Drawing::Size(468, 288);
			this->DgLista->TabIndex = 121;
			// 
			// Item
			// 
			this->Item->FillWeight = 35;
			this->Item->HeaderText = L"Item";
			this->Item->Name = L"Item";
			this->Item->Width = 35;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Codigo";
			this->Codigo->Name = L"Codigo";
			// 
			// Descricao
			// 
			this->Descricao->FillWeight = 190;
			this->Descricao->HeaderText = L"Descrição";
			this->Descricao->Name = L"Descricao";
			this->Descricao->Width = 190;
			// 
			// Quantidade
			// 
			this->Quantidade->FillWeight = 35;
			this->Quantidade->HeaderText = L"Quant";
			this->Quantidade->Name = L"Quantidade";
			this->Quantidade->Width = 35;
			// 
			// ValorUnitario
			// 
			this->ValorUnitario->FillWeight = 40;
			this->ValorUnitario->HeaderText = L"Valor";
			this->ValorUnitario->Name = L"ValorUnitario";
			this->ValorUnitario->Width = 40;
			// 
			// Total
			// 
			this->Total->FillWeight = 50;
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->Width = 50;
			// 
			// TxQaunt
			// 
			this->TxQaunt->BackColor = System::Drawing::Color::White;
			this->TxQaunt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxQaunt->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxQaunt->ForeColor = System::Drawing::Color::Black;
			this->TxQaunt->Location = System::Drawing::Point(32, 264);
			this->TxQaunt->MaxLength = 20;
			this->TxQaunt->Name = L"TxQaunt";
			this->TxQaunt->Size = System::Drawing::Size(83, 34);
			this->TxQaunt->TabIndex = 120;
			this->TxQaunt->Text = L"1";
			// 
			// LbTotal
			// 
			this->LbTotal->BackColor = System::Drawing::Color::White;
			this->LbTotal->Font = (gcnew System::Drawing::Font(L"Arial Black", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbTotal->ForeColor = System::Drawing::Color::Black;
			this->LbTotal->Location = System::Drawing::Point(35, 366);
			this->LbTotal->Name = L"LbTotal";
			this->LbTotal->Size = System::Drawing::Size(169, 41);
			this->LbTotal->TabIndex = 119;
			this->LbTotal->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TxPrecoUnit
			// 
			this->TxPrecoUnit->BackColor = System::Drawing::Color::White;
			this->TxPrecoUnit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxPrecoUnit->ForeColor = System::Drawing::Color::Black;
			this->TxPrecoUnit->Location = System::Drawing::Point(121, 264);
			this->TxPrecoUnit->Name = L"TxPrecoUnit";
			this->TxPrecoUnit->Size = System::Drawing::Size(156, 34);
			this->TxPrecoUnit->TabIndex = 118;
			this->TxPrecoUnit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// TxCodigo
			// 
			this->TxCodigo->BackColor = System::Drawing::Color::White;
			this->TxCodigo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxCodigo->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxCodigo->ForeColor = System::Drawing::Color::Black;
			this->TxCodigo->Location = System::Drawing::Point(32, 157);
			this->TxCodigo->MaxLength = 20;
			this->TxCodigo->Name = L"TxCodigo";
			this->TxCodigo->Size = System::Drawing::Size(245, 37);
			this->TxCodigo->TabIndex = 116;
			this->TxCodigo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2::TxCodigo_KeyDown);
			this->TxCodigo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form2::TxCodigo_KeyPress);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->principalToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(247, 88);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(89, 25);
			this->menuStrip1->TabIndex = 126;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// principalToolStripMenuItem
			// 
			this->principalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(22) {
				this->iniciarVendaToolStripMenuItem,
					this->formaPagamentoToolStripMenuItem, this->menuFiscalToolStripMenuItem, this->consultarMercadoriaToolStripMenuItem, this->prevendaToolStripMenuItem,
					this->limparTelaToolStripMenuItem, this->fechamentoCaixaToolStripMenuItem, this->fechamentoDeTurnoToolStripMenuItem, this->operacaoFiscalToolStripMenuItem,
					this->ajudaToolStripMenuItem, this->cancelarCupomToolStripMenuItem, this->publicidadeToolStripMenuItem, this->abastecimentoToolStripMenuItem,
					this->excluirItemToolStripMenuItem, this->mercadoriasToolStripMenuItem, this->descontoToolStripMenuItem, this->recuperarCupomToolStripMenuItem,
					this->abrieGavetaToolStripMenuItem, this->funcaoAdministrativaToolStripMenuItem, this->modoOperacaoToolStripMenuItem, this->toolStripMenuItem1,
					this->acrescimoToolStripMenuItem
			});
			this->principalToolStripMenuItem->Name = L"principalToolStripMenuItem";
			this->principalToolStripMenuItem->Size = System::Drawing::Size(65, 21);
			this->principalToolStripMenuItem->Text = L"Principal";
			// 
			// iniciarVendaToolStripMenuItem
			// 
			this->iniciarVendaToolStripMenuItem->Name = L"iniciarVendaToolStripMenuItem";
			this->iniciarVendaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->iniciarVendaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->iniciarVendaToolStripMenuItem->Text = L"Iniciar Venda";
			this->iniciarVendaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::iniciarVendaToolStripMenuItem_Click);
			// 
			// formaPagamentoToolStripMenuItem
			// 
			this->formaPagamentoToolStripMenuItem->Name = L"formaPagamentoToolStripMenuItem";
			this->formaPagamentoToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F12;
			this->formaPagamentoToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->formaPagamentoToolStripMenuItem->Text = L"Forma Pagamento";
			this->formaPagamentoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::formaPagamentoToolStripMenuItem_Click);
			// 
			// menuFiscalToolStripMenuItem
			// 
			this->menuFiscalToolStripMenuItem->Name = L"menuFiscalToolStripMenuItem";
			this->menuFiscalToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F4;
			this->menuFiscalToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->menuFiscalToolStripMenuItem->Text = L"Menu Fiscal";
			this->menuFiscalToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::menuFiscalToolStripMenuItem_Click);
			// 
			// consultarMercadoriaToolStripMenuItem
			// 
			this->consultarMercadoriaToolStripMenuItem->Name = L"consultarMercadoriaToolStripMenuItem";
			this->consultarMercadoriaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->consultarMercadoriaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->consultarMercadoriaToolStripMenuItem->Text = L"Consultar Mercadoria";
			this->consultarMercadoriaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::consultarMercadoriaToolStripMenuItem_Click);
			// 
			// prevendaToolStripMenuItem
			// 
			this->prevendaToolStripMenuItem->Name = L"prevendaToolStripMenuItem";
			this->prevendaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F6;
			this->prevendaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->prevendaToolStripMenuItem->Text = L"Prevenda";
			this->prevendaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::prevendaToolStripMenuItem_Click);
			// 
			// limparTelaToolStripMenuItem
			// 
			this->limparTelaToolStripMenuItem->Name = L"limparTelaToolStripMenuItem";
			this->limparTelaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F7;
			this->limparTelaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->limparTelaToolStripMenuItem->Text = L"Recarga";
			this->limparTelaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::limparTelaToolStripMenuItem_Click);
			// 
			// fechamentoCaixaToolStripMenuItem
			// 
			this->fechamentoCaixaToolStripMenuItem->Name = L"fechamentoCaixaToolStripMenuItem";
			this->fechamentoCaixaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F8;
			this->fechamentoCaixaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->fechamentoCaixaToolStripMenuItem->Text = L"Fechamento Caixa";
			this->fechamentoCaixaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::fechamentoCaixaToolStripMenuItem_Click);
			// 
			// fechamentoDeTurnoToolStripMenuItem
			// 
			this->fechamentoDeTurnoToolStripMenuItem->Name = L"fechamentoDeTurnoToolStripMenuItem";
			this->fechamentoDeTurnoToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F9;
			this->fechamentoDeTurnoToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->fechamentoDeTurnoToolStripMenuItem->Text = L"Fechamento de Turno";
			this->fechamentoDeTurnoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::fechamentoDeTurnoToolStripMenuItem_Click);
			// 
			// operacaoFiscalToolStripMenuItem
			// 
			this->operacaoFiscalToolStripMenuItem->Name = L"operacaoFiscalToolStripMenuItem";
			this->operacaoFiscalToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F10;
			this->operacaoFiscalToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->operacaoFiscalToolStripMenuItem->Text = L"Operacao Fiscal";
			this->operacaoFiscalToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::operacaoFiscalToolStripMenuItem_Click);
			// 
			// ajudaToolStripMenuItem
			// 
			this->ajudaToolStripMenuItem->Name = L"ajudaToolStripMenuItem";
			this->ajudaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->ajudaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->ajudaToolStripMenuItem->Text = L"Ajuda";
			this->ajudaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::ajudaToolStripMenuItem_Click);
			// 
			// cancelarCupomToolStripMenuItem
			// 
			this->cancelarCupomToolStripMenuItem->Name = L"cancelarCupomToolStripMenuItem";
			this->cancelarCupomToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F2));
			this->cancelarCupomToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->cancelarCupomToolStripMenuItem->Text = L"ModoConsulta";
			this->cancelarCupomToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::cancelarCupomToolStripMenuItem_Click);
			// 
			// publicidadeToolStripMenuItem
			// 
			this->publicidadeToolStripMenuItem->Name = L"publicidadeToolStripMenuItem";
			this->publicidadeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->publicidadeToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->publicidadeToolStripMenuItem->Text = L"Publicidade";
			this->publicidadeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::publicidadeToolStripMenuItem_Click);
			// 
			// abastecimentoToolStripMenuItem
			// 
			this->abastecimentoToolStripMenuItem->Name = L"abastecimentoToolStripMenuItem";
			this->abastecimentoToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F11;
			this->abastecimentoToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->abastecimentoToolStripMenuItem->Text = L"Abastecimento";
			this->abastecimentoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::abastecimentoToolStripMenuItem_Click);
			// 
			// excluirItemToolStripMenuItem
			// 
			this->excluirItemToolStripMenuItem->Name = L"excluirItemToolStripMenuItem";
			this->excluirItemToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F3;
			this->excluirItemToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->excluirItemToolStripMenuItem->Text = L"Excluir Item";
			this->excluirItemToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::excluirItemToolStripMenuItem_Click);
			// 
			// mercadoriasToolStripMenuItem
			// 
			this->mercadoriasToolStripMenuItem->Name = L"mercadoriasToolStripMenuItem";
			this->mercadoriasToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::M));
			this->mercadoriasToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->mercadoriasToolStripMenuItem->Text = L"Mercadorias";
			this->mercadoriasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::mercadoriasToolStripMenuItem_Click);
			// 
			// descontoToolStripMenuItem
			// 
			this->descontoToolStripMenuItem->Name = L"descontoToolStripMenuItem";
			this->descontoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->descontoToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->descontoToolStripMenuItem->Text = L"Desconto";
			this->descontoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::descontoToolStripMenuItem_Click);
			// 
			// recuperarCupomToolStripMenuItem
			// 
			this->recuperarCupomToolStripMenuItem->Name = L"recuperarCupomToolStripMenuItem";
			this->recuperarCupomToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->recuperarCupomToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->recuperarCupomToolStripMenuItem->Text = L"Recuperar Cupom";
			this->recuperarCupomToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::recuperarCupomToolStripMenuItem_Click);
			// 
			// abrieGavetaToolStripMenuItem
			// 
			this->abrieGavetaToolStripMenuItem->Name = L"abrieGavetaToolStripMenuItem";
			this->abrieGavetaToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F4));
			this->abrieGavetaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->abrieGavetaToolStripMenuItem->Text = L"AbrieGaveta";
			this->abrieGavetaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::abrieGavetaToolStripMenuItem_Click);
			// 
			// funcaoAdministrativaToolStripMenuItem
			// 
			this->funcaoAdministrativaToolStripMenuItem->Name = L"funcaoAdministrativaToolStripMenuItem";
			this->funcaoAdministrativaToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->funcaoAdministrativaToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->funcaoAdministrativaToolStripMenuItem->Text = L"Funcao Administrativa";
			this->funcaoAdministrativaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::funcaoAdministrativaToolStripMenuItem_Click);
			// 
			// modoOperacaoToolStripMenuItem
			// 
			this->modoOperacaoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->defaultToolStripMenuItem,
					this->padraoToolStripMenuItem
			});
			this->modoOperacaoToolStripMenuItem->Name = L"modoOperacaoToolStripMenuItem";
			this->modoOperacaoToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->modoOperacaoToolStripMenuItem->Text = L"ModoOperacao";
			// 
			// defaultToolStripMenuItem
			// 
			this->defaultToolStripMenuItem->Name = L"defaultToolStripMenuItem";
			this->defaultToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D2));
			this->defaultToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->defaultToolStripMenuItem->Text = L"Default";
			this->defaultToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::defaultToolStripMenuItem_Click);
			// 
			// padraoToolStripMenuItem
			// 
			this->padraoToolStripMenuItem->Name = L"padraoToolStripMenuItem";
			this->padraoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D1));
			this->padraoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->padraoToolStripMenuItem->Text = L"Padrao";
			this->padraoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::padraoToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F12));
			this->toolStripMenuItem1->Size = System::Drawing::Size(235, 22);
			this->toolStripMenuItem1->Text = L"Pagamento Cartao";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form2::toolStripMenuItem1_Click);
			// 
			// acrescimoToolStripMenuItem
			// 
			this->acrescimoToolStripMenuItem->Name = L"acrescimoToolStripMenuItem";
			this->acrescimoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->acrescimoToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->acrescimoToolStripMenuItem->Text = L"Acrescimo";
			this->acrescimoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::acrescimoToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(503, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 16);
			this->label1->TabIndex = 135;
			this->label1->Text = L"Operador";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Yellow;
			this->label7->Location = System::Drawing::Point(683, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 16);
			this->label7->TabIndex = 136;
			this->label7->Text = L"ECF";
			// 
			// LbSubTotal
			// 
			this->LbSubTotal->BackColor = System::Drawing::Color::Transparent;
			this->LbSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbSubTotal->ForeColor = System::Drawing::Color::Black;
			this->LbSubTotal->Location = System::Drawing::Point(577, 484);
			this->LbSubTotal->Name = L"LbSubTotal";
			this->LbSubTotal->Size = System::Drawing::Size(181, 52);
			this->LbSubTotal->TabIndex = 137;
			this->LbSubTotal->Text = L"0,00";
			this->LbSubTotal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(308, 563);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 138;
			this->label2->Text = L"PAF ECF:";
			// 
			// LbCaminho
			// 
			this->LbCaminho->AutoSize = true;
			this->LbCaminho->BackColor = System::Drawing::Color::Transparent;
			this->LbCaminho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbCaminho->ForeColor = System::Drawing::Color::White;
			this->LbCaminho->Location = System::Drawing::Point(388, 566);
			this->LbCaminho->Name = L"LbCaminho";
			this->LbCaminho->Size = System::Drawing::Size(60, 13);
			this->LbCaminho->TabIndex = 139;
			this->LbCaminho->Text = L"\\Realsoft";
			// 
			// LbCupom
			// 
			this->LbCupom->AutoSize = true;
			this->LbCupom->BackColor = System::Drawing::Color::Transparent;
			this->LbCupom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbCupom->ForeColor = System::Drawing::Color::White;
			this->LbCupom->Location = System::Drawing::Point(402, 119);
			this->LbCupom->Name = L"LbCupom";
			this->LbCupom->Size = System::Drawing::Size(56, 16);
			this->LbCupom->TabIndex = 141;
			this->LbCupom->Text = L"000000";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 600);
			this->ControlBox = false;
			this->Controls->Add(this->LbCupom);
			this->Controls->Add(this->LbCaminho);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LbSubTotal);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LbDescricao);
			this->Controls->Add(this->LbUsuario);
			this->Controls->Add(this->LbECf);
			this->Controls->Add(this->DgLista);
			this->Controls->Add(this->TxQaunt);
			this->Controls->Add(this->LbTotal);
			this->Controls->Add(this->TxPrecoUnit);
			this->Controls->Add(this->TxCodigo);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Activated += gcnew System::EventHandler(this, &Form2::Form2_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form2::Form2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->Shown += gcnew System::EventHandler(this, &Form2::Form2_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2::Form2_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2::Form2_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: static String ^__Serie;
private: System::Void TxCodigo_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			 if (!Char::IsNumber(e->KeyChar)&& !(e->KeyChar == Convert::ToChar(Keys::Back)) && !(e->KeyChar == '*') && !(e->KeyChar == 'X') && !(e->KeyChar == 'x') && !(e->KeyChar == ','))
                {
                    e->Handled = true;
                }
				if (e->KeyChar == '*' | e->KeyChar == 'X' | e->KeyChar == 'x')
				{
					if (!Realsoft_Sistema::PermitirDigitarQuantidadeMercadoria & Realsoft_Sistema::LiberarDigitoQuantidade == false)
                    {
                        e->Handled = true;
                    }
                    else
                    {
                        if (TxCodigo->Text->IndexOf("X") > -1)
                        {
                            e->Handled = true;
                        }
                        else
                        {
                            if (e->KeyChar == '*')
                            {
                                e->KeyChar = 'X';
                            }
                        }
                    }
				}

				if (e->KeyChar == ',')
                {
                    if (!Realsoft_Sistema::PermitirDigitarQuantidadeMercadoria)
                    {
                        e->Handled = true;
                    }
                    else
                    {
                        if (TxCodigo->Text->IndexOf(",") > -1)
                        {
                            e->Handled = true;
                        }
                    }
                }
		 }

		 //private: static Mercadoria ^_mercadoria = gcnew Mercadoria();
		 private: static int Retorno = 0;	 
		 private: static bool StatusErro = false;
		 private: static bool Porpeso;
		
private: System::Void TxCodigo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 try
			 {
				 if (e->KeyCode == Keys::Enter)
				 {

					 if (Realsoft_Sistema::ModoConsulta == true)
					 {
						 Realsoft_Sistema::ModoConsulta == false;
						 ModoConsultaAtivo();
					 }
					 else
					 {
					 if (TxCodigo->Text->Equals(""))
					 {
						 TxQaunt->Text = "1";
						 						 
						 throw gcnew Exception("Produto não encontrado");
						 
					 }
					 else
					 {
					 if (TxCodigo->Text->Trim()->IndexOf("X") > -1)
					 {
						 try
						 {
							String ^_Quant = TxCodigo->Text->Trim()->Substring(0,TxCodigo->Text->Trim()->IndexOf("X"));
							Realsoft_Sistema::QtdDigitado = Convert::ToDecimal(_Quant);							
							TxCodigo->Text = TxCodigo->Text->Trim()->Substring(TxCodigo->Text->Trim()->IndexOf("X") + 1);

							if (_Quant->Trim()->IndexOf(",") > -1)
							{
								TxQaunt->Text = Realsoft_Sistema::QtdDigitado.ToString();
							}
							else
							{
								TxQaunt->Text = Realsoft_Sistema::QtdDigitado.ToString();
							}

							Realsoft_Sistema::ItemPesado = true;
						 }
						 catch(Exception ^ex)
						 {
							 TxCodigo->ResetText();
							 TxQaunt->Text = "1";						
							 Realsoft_Sistema::FinalizarVenda = false;
							 Realsoft_Sistema::LimparCampos = false;
							 Realsoft_Sistema::AtivarExcluirItem = false;
							 Realsoft_Sistema::RecuperarCupom = false;
							 Realsoft_Sistema::ExibirDesconto = false;
							 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						 }
					 }

					 if (TxCodigo->Text->Trim()->Substring(0,1)->Equals("2") & TxCodigo->Text->Length > 6)
					 {
						 try
						 {
							 Realsoft_Sistema::CodigoMercadoriaEtiquetaPorCodigoBarras = true;

							 Realsoft_Sistema::ModoQuantidade = false;
							 
							 TxQaunt->Text = "1";

							 if (TxCodigo->Text->Length != 13)
							 {
								 TxQaunt->Text = "1";
								
								 throw gcnew Exception("Produto não encontrado");
								
								 TxCodigo->ResetText();
								
								return;
								
							 }

							 Realsoft_Sistema::ItemPesado = true;
							 
							 try
							 {
								 if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorCodigoBarras == true)
								 {
									 Porpeso = true;

									 if (Porpeso == true)
									 {
										 Realsoft_Sistema::CodigoProduto = Int32::Parse(TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialCodigoEtiqueta, Realsoft_Sistema::PosicaoFinalCodigoEtiqueta));
										 
										 int Preco = int::Parse(TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialValorEtiqueta, Realsoft_Sistema::PosicaoFinalValorEtiqueta));

										 
										 if (Preco.ToString()->Length == 6)
										 {
											 String^ ret1 = Preco.ToString()->Substring(0, 4);
											 String^ ret2 = Preco.ToString()->Substring(2, 2);

										 }
										 else if (Preco.ToString()->Length == 5)
										 {
											 String^ ret1 = Preco.ToString()->Substring(0, 3);
											 String^ ret2 = Preco.ToString()->Substring(2, 2);

											 String ^ __total__ = ret1 + "," + ret2;

											 TxQaunt->Text = "1";
											 TxPrecoUnit->Text = __total__;

											 Realsoft_Sistema::ValorEtiqueta = double::Parse(__total__);
										 }
										 else if (Preco.ToString()->Length == 4)
										 {
											 String^ ret1 = Preco.ToString()->Substring(0, 2);
											 String^ ret2 = Preco.ToString()->Substring(2, 2);

											 String ^ __total__ = ret1 + "," + ret2;

											 TxQaunt->Text = "1";
											 TxPrecoUnit->Text = __total__;

											 Realsoft_Sistema::ValorEtiqueta = double::Parse(__total__);
										 }
										 else if (Preco.ToString()->Length == 3)
										 {
											 String^ ret1 = Preco.ToString()->Substring(0, 1);
											 String^ ret2 = Preco.ToString()->Substring(1, 2);

											 String ^ __total__ = ret1 + "," + ret2;

											 TxQaunt->Text = "1";
											 TxPrecoUnit->Text = __total__;

											 Realsoft_Sistema::ValorEtiqueta = double::Parse(__total__);
										 }
										 else if (Preco.ToString()->Length == 2)
										 {
											 String^ ret1 = Preco.ToString()->Substring(0, 2);
											 //String^ ret2 = Preco.ToString()->Substring(2, 1);

											 String ^ __total__ = "0" + "," + ret1;

											 TxQaunt->Text = "1";
											 TxPrecoUnit->Text = __total__;

											 Realsoft_Sistema::ValorEtiqueta = double::Parse(__total__);
										 }

										 if (Realsoft_Sistema::CodigoMercadoriaDigito == 0)
										 {
											 if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorCodigoBarras)
											 {
												 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaPorCodigoBarras(Convert::ToString(Realsoft_Sistema::CodigoProduto));
											 }
											 else if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorId)
											 {
												 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaPorId(Convert::ToString(Realsoft_Sistema::CodigoProduto));
											 }
											 else
											 {
												 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiqueta(Convert::ToString(Realsoft_Sistema::CodigoProduto));
											 }
										 }
										 else
										 {
											 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaComDigito(Convert::ToString(Realsoft_Sistema::CodigoProduto));
										 }
									 }
									 else
									 {

										 String ^Quant1;

										 Realsoft_Sistema::CodigoProduto = Int32::Parse(TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialCodigoEtiqueta, Realsoft_Sistema::PosicaoFinalCodigoEtiqueta));

										 int  Quantidade = int::Parse(TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialValorEtiqueta, Realsoft_Sistema::PosicaoFinalValorEtiqueta));

										 String ^ValorQuanti = Quantidade.ToString();

										 if (ValorQuanti->Length == 2)
										 {
											 Quant1 = "0," + ValorQuanti;
										 }
										 else if (ValorQuanti->Length == 3)
										 {
											 Quant1 = "0," + ValorQuanti;
										 }
										 else if (ValorQuanti->Length == 4)
										 {
											 Quant1 = "0," + ValorQuanti;
										 }
										 else if (ValorQuanti->Length == 5)
										 {
											 String ^Ac = ValorQuanti->Substring(0, 1);
											 String ^Ac1 = ValorQuanti->Substring(1, 4);

											 Quant1 = Ac + "," + Ac1;
										 }

										 else
										 {
											 String ^Ac = ValorQuanti->Substring(0, 2);
											 String ^Ac1 = ValorQuanti->Substring(2, 4);

											 Quant1 = Ac + "," + Ac1;
										 }

										 if (Realsoft_Sistema::Arredondar.Equals(true))
										 {
											 Double Quantidade2 = Math::Round(Double::Parse(Quant1), 3);
										 }
										 else
										 {
											 Double Quantidade2 = Double::Parse(Quant1);
											 TxQaunt->Text = Quantidade2.ToString();
										 }

										 if (Realsoft_Sistema::CodigoMercadoriaDigito == 0)
										 {
											 if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorCodigoBarras)
											 {
												 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaPorCodigoBarras(Convert::ToString(Realsoft_Sistema::CodigoProduto));
											 }
											 else if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorId)
											 {
												 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaPorId(Convert::ToString(Realsoft_Sistema::CodigoProduto));
											 }
											 else
											 {
												 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiqueta(Convert::ToString(Realsoft_Sistema::CodigoProduto));
											 }
										 }
										 else
										 {
											 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaComDigito(Convert::ToString(Realsoft_Sistema::CodigoProduto));
										 }

									 }
								 }
							 }
							 catch(Exception ^ex)
							 {
								TxQaunt->Text = "1";
								TxCodigo->ResetText();
								Realsoft_Sistema::FinalizarVenda = false;
								Realsoft_Sistema::LimparCampos = false;
								Realsoft_Sistema::AtivarExcluirItem = false;
								Realsoft_Sistema::RecuperarCupom = false;
								Realsoft_Sistema::ExibirDesconto = false;
								MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
								
							 }
						 }
						 catch(Exception ^ex)
						 {
							 TxCodigo->ResetText();
							 TxQaunt->Text = "1";
							 Realsoft_Sistema::FinalizarVenda = false;
							 Realsoft_Sistema::LimparCampos = false;
							 Realsoft_Sistema::AtivarExcluirItem = false;
							 Realsoft_Sistema::RecuperarCupom = false;
							 Realsoft_Sistema::ExibirDesconto = false;
							 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						 }
					 }
					 else
					 {						 
						 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_Mercadorias(TxCodigo->Text);
						 
						 if (Realsoft_Geral::_mercadoria != nullptr)
						 {
							 Realsoft_Sistema::QtdDigitado = 0;
							 if (Realsoft_Sistema::QtdDigitado == 0)
							 {
								if (Realsoft_Geral::_mercadoria->Fracionado) //&& Realsoft_Sistema::SelecionarEnterProdutoPesado)
                                {
                                    Realsoft_Sistema::ModoBalanca = true;
                                }
								else if (!Realsoft_Geral::_mercadoria->Fracionado && TxQaunt->Text->Trim()->IndexOf(",") > -1)
                                {
                                    TxCodigo->Text = "";
                                    TxQaunt->Text = "1";
                                    TxQaunt->Focus();

									throw gcnew Exception("Quantidade de produto inválido");									
                                }
							 }
						 }
						 else
						 {
							 TxQaunt->Text = "1";
							 TxCodigo->ResetText();
							 throw gcnew Exception("PRODUTO NÃO ENCONTRADO, FAVOR VERIFIQUE");
						 }
					 }

					 String ^Descricao = Realsoft_Geral::_mercadoria->DescricaoMercadoria->ToUpper();

                    if (Descricao->Length > 29)
                    {
                        Descricao = Descricao->Substring(0, 29);
                    }

                    TxPrecoUnit->Text = "";

					if (Realsoft_Geral::_mercadoria->PrecoVenda <= 0)
                    {
						 TxQaunt->Text = "1";
						 TxCodigo->ResetText();
						 throw gcnew Exception("Preço de venda não cadastrado");
                    }

					if (Porpeso == false)
					{
						TxPrecoUnit->Text = Realsoft_Geral::_mercadoria->PrecoVenda.ToString("#####0.00");
					}
					else
					{
						TxPrecoUnit->Text = Realsoft_Sistema::ValorEtiqueta.ToString();
					}
					

                    LbDescricao->Text = Descricao;

					Realsoft_Sistema::TipoQuantidade = "I";
					Decimal ValorTotalItem;

					if (Porpeso == false)
					{
						ValorTotalItem = Decimal::Multiply(Realsoft_Geral::_mercadoria->PrecoVenda, Convert::ToDecimal(TxQaunt->Text));
					}
					else
					{
						ValorTotalItem = Decimal::Parse(TxPrecoUnit->Text);
					}
										
					if (Realsoft_Sistema::PermiteDesconto.Equals(true))
					{
						Decimal Desconto = Decimal::Multiply(ValorTotalItem, Realsoft_Geral::_mercadoria->Desconto / 100);
						Realsoft_Sistema::ValorDesconto = Convert::ToDecimal(Math::Round(Convert::ToDouble(Desconto), 2));
					}
                    
					String ^Quantidade = TxQaunt->Text;

					if (Realsoft_Sistema::ItemPesado && TxQaunt->Text->IndexOf(",") > -1)
                    {
							Realsoft_Sistema::ModoBalanca = true;

						if (Realsoft_Sistema::QtdDigitado == 0 & Realsoft_Sistema::ItemPesado)
                        {                            
							Realsoft_Sistema::Arredondar = false;
							
							Decimal ValorEtiqueta = Math::Round(ValorTotalItem,2);
							
							Realsoft_Sistema::ValorEtiqueta = Double::Parse(ValorEtiqueta.ToString());
							
                            Realsoft_Sistema::ValorDesconto = 0;

                            Realsoft_Sistema::TipoQuantidade = "F";
							ValorTotalItem = ValorEtiqueta;
                        }
                        else
                        {

							if (Realsoft_Geral::_mercadoria->Fracionado)
                            {
								try
								{
									Realsoft_Sistema::ModoBalanca = true;
									Realsoft_Sistema::TipoQuantidade = "F";
									if (Realsoft_Sistema::Arredondar.Equals(true))
									{
										Quantidade = Math::Round(Double::Parse(TxQaunt->Text),3).ToString();
										ValorTotalItem = Math::Round(Decimal::Multiply(Realsoft_Geral::_mercadoria->PrecoVenda, Decimal::Parse(Quantidade)), 2);
									}
									else
									{
										Quantidade = Math::Truncate(Double::Parse(TxQaunt->Text)).ToString();
										ValorTotalItem = Decimal::Multiply(Realsoft_Geral::_mercadoria->PrecoVenda, Decimal::Parse(Quantidade));
									}
									
									if (Realsoft_Sistema::PermiteDesconto.Equals(true))
									{
										Realsoft_Sistema::ValorDesconto = Decimal::Multiply(ValorTotalItem , Realsoft_Geral::_mercadoria->Desconto / 100);
									}
									
								}
								catch(Exception ^ex)
								{
									Realsoft_Sistema::FinalizarVenda = false;
									Realsoft_Sistema::LimparCampos = false;
									Realsoft_Sistema::AtivarExcluirItem = false;
									Realsoft_Sistema::RecuperarCupom = false;
									Realsoft_Sistema::ExibirDesconto = false;
									MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}
                            }
                        }

						ValorTotalItem = Decimal::Subtract(ValorTotalItem, Convert::ToDecimal(Realsoft_Sistema::ValorDesconto));

                    }
					else if (Realsoft_Geral::_mercadoria->Fracionado.Equals(true) & Realsoft_Sistema::ModoBalanca.Equals(true))
                    {
						Realsoft_Sistema::ModoBalanca = false;

                        
							String^ __porta__ = Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "BALANCA", "PORTACOMUNICACAO", "");

							Realsoft_ComunicaBalanca::Balanca::OpenPorta(__porta__);

							Realsoft_ComunicaBalanca::Balanca::Pede();

							Realsoft_Sistema::PesoBalanca = Realsoft_ComunicaBalanca::Balanca::Recebe();

							Realsoft_ComunicaBalanca::Balanca::_serialPort->Close();
							
							if (Realsoft_Sistema::PesoBalanca == 0)
							{
								TxQaunt->Text = "1";
								TxCodigo->ResetText();
								throw gcnew Exception("BALANCA COM PESO ZERADO, FAVOR VERIFIQUE");
							}

                        
                        Realsoft_Sistema::TipoQuantidade = "F";
						
						ValorTotalItem = Decimal::Multiply(Realsoft_Geral::_mercadoria->PrecoVenda, Convert::ToDecimal(Realsoft_Sistema::PesoBalanca));
						
						TxPrecoUnit->Text = ValorTotalItem.ToString("#####0.00");
						
						if (Realsoft_Sistema::ExibirDesconto.Equals(true))
						{
							Realsoft_Sistema::ValorDesconto = Decimal::Multiply(ValorTotalItem, Realsoft_Geral::_mercadoria->Desconto / 100);
						}
						
						Quantidade = Math::Round(Realsoft_Sistema::PesoBalanca, 3).ToString();
                        TxQaunt->Text = Quantidade;
                    }
                    else
                    {
						if (Porpeso == false)
						{
							TxPrecoUnit->Text = ValorTotalItem.ToString("#####0.00");
						}
						else
						{
							TxPrecoUnit->Text = Realsoft_Sistema::ValorEtiqueta.ToString();
						}
                    }

					if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorCodigoBarras == true)
					{
						Realsoft_Sistema::CodigoMercadoriaEtiquetaPorCodigoBarras = false;												

						if (Realsoft_Sistema::Arredondar.Equals(true))
						{
							Realsoft_Sistema::SubValor = Decimal::Parse(Math::Round(Realsoft_Sistema::ValorEtiqueta,2).ToString());
						}
						else
						{
							Realsoft_Sistema::SubValor = Decimal::Parse(Realsoft_Sistema::ValorEtiqueta.ToString());
						}
						
					}
					else
					{
						Realsoft_Sistema::SubValor = Decimal::Multiply(Decimal::Parse(TxQaunt->Text), Realsoft_Geral::_mercadoria->PrecoVenda);

						LbTotal->Text = Realsoft_Sistema::SubValor.ToString("#####0.00");
					}

						LbTotal->Text = Realsoft_Sistema::SubValor.ToString("#####0.00");

                        int i = DgLista->Rows->Add();

                        DgLista->Rows[i]->Cells[0]->Value = i + 1;
                        DgLista->Rows[i]->Cells[1]->Value = TxCodigo->Text;
                        DgLista->Rows[i]->Cells[2]->Value = LbDescricao->Text;
                        DgLista->Rows[i]->Cells[3]->Value = TxQaunt->Text;
						if (Porpeso == false)
						{
							DgLista->Rows[i]->Cells[4]->Value = Realsoft_Geral::_mercadoria->PrecoVenda.ToString("#####0.00");
						}
						else
						{
							DgLista->Rows[i]->Cells[4]->Value = TxPrecoUnit->Text;
						}
						DgLista->Rows[i]->Cells[5]->Value = Realsoft_Sistema::SubValor.ToString("#####0.00");
						Realsoft_Sistema::SituacaoTributaria = Realsoft_Geral::_mercadoria->SituacaoTributaria;
						Realsoft_Sistema::UnidadeMedida = Realsoft_Geral::_mercadoria->Unidade;

                        TxCodigo->Focus();
						Porpeso = false;

                        Decimal Total = 0;
						
						 for each(DataGridViewRow ^Coluna in DgLista->Rows)
						 {
							 if (Coluna->DefaultCellStyle->BackColor != Color::Red)
							 {
								Decimal Valor = Convert::ToDecimal(Coluna->Cells[5]->Value->ToString());
						 
								Total = Decimal::Add(Total,Valor);
							 }
						 }

						 LbSubTotal->Text = Convert::ToString(Total);
				 
						 TxCodigo->Focus();

                        if (this->DgLista->Rows->Count > 12)
                        {
							this->DgLista->ScrollBars = ScrollBars::Vertical;
                            this->DgLista->FirstDisplayedScrollingRowIndex++;
                        }						

 						Mercadoria ^_vendacupom = gcnew Mercadoria();
						
						try
						{
									
							if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{

								Realsoft_Bematech::AbreCupom("");
								Realsoft_Bematech::ICOO();

								String ^Aliquota = Realsoft_Geral::_mercadoria->Aliquota.ToString();
								String ^ValorAliquota;
								

								if (Aliquota->Length == 1)
								{
									ValorAliquota = "0" + Aliquota + "00";
								}
								else
								{
									ValorAliquota = Aliquota + "00";
								}

								int retbema = Realsoft_Bematech::VenderItem(DgLista->Rows[i]->Cells[1]->Value->ToString(), DgLista->Rows[i]->Cells[2]->Value->ToString(), ValorAliquota, Realsoft_Sistema::TipoQuantidade, DgLista->Rows[i]->Cells[3]->Value->ToString(), 2, DgLista->Rows[i]->Cells[4]->Value->ToString(), "%", "0");

								//int retbema = Realsoft_Bematech::VenderItem(Realsoft_Geral::_mercadoria->EAN, Descricao, "0700", Realsoft_Sistema::TipoQuantidade, Quantidade, 2, Preco, "%", "0");

								if (retbema == 0)
								{
									throw gcnew Exception("ERRO DE COMUNICAÇÃO");
								}

								if (retbema == -2)
								{
									throw gcnew Exception("PARAMETRO INVALIDO NA FUNÇÃO");
								}
								if (retbema == -3)
								{
									throw gcnew Exception("ALIQUOTA NÃO PROGRAMADA");
								}
								if (retbema == -4)
								{
									throw gcnew Exception("O ARQUIVO DE INICIALIZAÇÃO BEMAFI32 NÃO FOI ENCONTRADO");
								}
								if (retbema == -5)
								{
									throw gcnew Exception("ERRO AO ABRIR A PORTA DE COMUNICAÇÃO");
								}

								if (retbema == -27)
								{
									throw gcnew Exception("STATUS DA IMPRESSORA DIFERENTE DE 6,00 (ACK,ST1 E ST2)");
								}
							}
							else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{
								if (Realsoft_Geral::_mercadoria->Aliquota != 0)
								{

									short iretorno = Realsoft_Elgin::Elgin_Vender(Realsoft_Geral::_mercadoria->EAN, Realsoft_Geral::_mercadoria->DescricaoMercadoria, Realsoft_Geral::_mercadoria->Aliquota.ToString("00") + "00", Realsoft_Sistema::TipoQuantidade, DgLista->Rows[i]->Cells[3]->Value->ToString(), 2, Realsoft_Geral::_mercadoria->PrecoVenda.ToString("#####0.00"), "$", Realsoft_Geral::_mercadoria->Desconto.ToString("0000"));

									if (iretorno == 0)
									{
										throw gcnew Exception("indica erro na execução da função");
									}

									if (iretorno == -2)
									{
										throw gcnew Exception("Parâmetro inválido na função");
									}

									if (iretorno == -4)
									{
										throw gcnew Exception("O arquivo de inicialização Elgin.ini não foi encontrado no diretório de sistema do Windows");
									}

									if (iretorno == -5)
									{
										throw gcnew Exception("Erro ao abrir a porta de comunicação");
									}
								}
								else
								{
									short ValorRetorno = Realsoft_Elgin::Elgin_Vender(Realsoft_Geral::_mercadoria->EAN, Realsoft_Geral::_mercadoria->DescricaoMercadoria, Realsoft_Geral::_mercadoria->Aliquota.ToString(), Realsoft_Sistema::TipoQuantidade, DgLista->Rows[i]->Cells[3]->Value->ToString(), 2, Realsoft_Geral::_mercadoria->PrecoVenda.ToString("#####0.00"), "$", Realsoft_Geral::_mercadoria->Desconto.ToString("0000"));
								}
																
							}
							else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{
								
								//Realsoft_Daruma::VendeItem("I1", Convert::ToString(_vendacupom->Quantidade), Convert::ToString(_vendacupom->PrecoVenda), "D%", "0", _vendacupom->EAN, _mercadoria->Unidade, Convert::ToString(DgLista->Rows[i]->Cells[2]->Value));

								Realsoft_Daruma::Abrir_Padrao();
								Realsoft_Daruma::VendeItemResumido(Realsoft_Sistema::SituacaoTributaria + "1", Convert::ToString(DgLista->Rows[i]->Cells[3]->Value), Convert::ToString(DgLista->Rows[i]->Cells[4]->Value), Convert::ToString(DgLista->Rows[i]->Cells[1]->Value), Realsoft_Sistema::UnidadeMedida, Convert::ToString(DgLista->Rows[i]->Cells[2]->Value));
							}
							else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{

							}
							else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							{
								
								int Stusecf = Realsoft_BematechNaoFiscal::StatusECF();

								if (Stusecf == 0)
								{
									throw gcnew Exception("Erro de comunicação");
								}
								else if (Stusecf == 5)
								{
									throw gcnew Exception("Impressora com pouco papel");
								}
								else if (Stusecf == 9)
								{
									throw gcnew Exception("Tampa aberta");
								}
								else if (Stusecf == 32)
								{
									throw gcnew Exception("Impressora sem papel");
								}
								else
								{
									String ^Cupom = "";

									Cupom = Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[0]->Value + Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[1]->Value + Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[2]->Value + Environment::NewLine;
									Cupom += Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[3]->Value + Realsoft_Sistema::Espaco(2) + Realsoft_Geral::_mercadoria->Unidade + Realsoft_Sistema::Espaco(2) + "X" + Realsoft_Sistema::Espaco(2) + DgLista->Rows[i]->Cells[4]->Value + Realsoft_Sistema::Espaco(2) + DgLista->Rows[i]->Cells[5]->Value + Environment::NewLine;

									String ^RetornoCupomVender = Realsoft_BematechNaoFiscal::VendeItem(Cupom);

									if (RetornoCupomVender != nullptr)
									{
										TxQaunt->Text = "1";
										throw gcnew Exception(RetornoCupomVender);

									}
								}
							}
							else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
							{

								String ^Cupom = "";

								Cupom = Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[0]->Value + Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[1]->Value + Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[2]->Value + Environment::NewLine;
								Cupom += Realsoft_Sistema::Espaco(1) + DgLista->Rows[i]->Cells[3]->Value + Realsoft_Sistema::Espaco(2) + Realsoft_Geral::_mercadoria->Unidade + Realsoft_Sistema::Espaco(2) + "X" + Realsoft_Sistema::Espaco(2) + DgLista->Rows[i]->Cells[4]->Value + Realsoft_Sistema::Espaco(2) + DgLista->Rows[i]->Cells[5]->Value + Environment::NewLine;

								String ^RetornoCupomVender = Realsoft_BematechNaoFiscal::VendeItemDefault(Cupom);


							}
							else
							{
								throw gcnew Exception("Impressora não cadastrada");								
							}

								TxCodigo->ResetText();
								LbDescricao->ResetText();
								TxPrecoUnit->ResetText();
								TxQaunt->Text = "1";
								TxCodigo->Focus();								

								_vendacupom->Turno = Realsoft_Consultas::Consultar_TurnoOperando();
								_vendacupom->Filial = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "EMPRESA", "xxxx"));
								_vendacupom->Terminal = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "Terminal", "xxxx"));
								_vendacupom->ECF = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "ECF", "xxxx"));
								_vendacupom->NumeroSerial = Realsoft_Sistema::SerialECF;
								_vendacupom->Item = Convert::ToInt32(DgLista->Rows[i]->Cells[0]->Value);
								_vendacupom->CupomFiscal = Realsoft_Sistema::_Cupom;
								_vendacupom->EAN = Realsoft_Geral::_mercadoria->EAN;
								_vendacupom->ID = Realsoft_Geral::_mercadoria->ID;
								_vendacupom->Quantidade = DgLista->Rows[i]->Cells[3]->Value->ToString();
								_vendacupom->ContadorECF = 1;
								_vendacupom->PrecoVenda = Realsoft_Geral::_mercadoria->PrecoVenda;
								_vendacupom->TotalLiquido = Total;
								_vendacupom->Operador = LbUsuario->Text;
								_vendacupom->DataCupomFiscal = DateTime::Now;
								_vendacupom->DataCriacao = DateTime::Now;
								_vendacupom->Finalizado = true;

								Realsoft_Consultas::Insere_VendaCupomFiscal(_vendacupom);

								Realsoft_Geral::_mercadoria = nullptr;
							
						}
						catch(Exception ^ex)
						{							
							Realsoft_Sistema::FinalizarVenda = false;
							Realsoft_Sistema::LimparCampos = false;
							Realsoft_Sistema::AtivarExcluirItem = false;
							Realsoft_Sistema::RecuperarCupom = false;
							Realsoft_Sistema::ExibirDesconto = false;

							MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);							
						}					
					}
				}
			}
		}
		catch(Exception ^ex)
		{
			MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		private: void setValor(String ^Valor)
				 {
					 TxCodigo->Text = Valor;
				 }


private: System::Void Form2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Escape)
			 {
				 try
				 {
					TxCodigo->ResetText();
					LbDescricao->ResetText();
					TxQaunt->Text = "1";
					//LbTotal->ResetText();
					TxPrecoUnit->ResetText();
					//DgLista->Rows->Clear();				

					TxCodigo->Focus();
					Realsoft_Sistema::ModoConsulta = false;
					TxCodigo->BackColor = Color::White;
					TxQaunt->BackColor = Color::White;
					TxPrecoUnit->BackColor = Color::White;
					//LbDescricao->Text = "CAIXA LIVRE";
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }

		 }
private: System::Void Form2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {


		 }
private: System::Void formaPagamentoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 try
			{
				Form3 ^_Frm = gcnew Form3();
				

				if (LbTotal->Text == "0" || LbTotal->Text == "")
				{
					throw gcnew Exception("Não existem venda para realizar esta operação");				
				}
				else
				{
									
					if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
						Realsoft_Bematech::FechamentoC();

						Realsoft_Sistema::SubTotalVenda = Decimal::Parse(LbSubTotal->Text);

						_Frm->TxSubTotal->Text = LbSubTotal->Text;

						_Frm->ShowDialog();
					}
					else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
						Realsoft_Sistema::SubTotalVenda = Decimal::Parse(LbSubTotal->Text);

						_Frm->TxSubTotal->Text = LbSubTotal->Text;

						_Frm->ShowDialog();

					}
					else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
						//Realsoft_Daruma::SubTotal(Realsoft_Sistema::SubTotalVenda.ToString("#####0.00"));			

						Realsoft_Sistema::SubTotalVenda = Decimal::Parse(LbSubTotal->Text);

						_Frm->TxSubTotal->Text = LbSubTotal->Text;

						_Frm->ShowDialog();

					}
					else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
						Realsoft_Sistema::SubTotalVenda = Decimal::Parse(LbSubTotal->Text);

						_Frm->TxSubTotal->Text = LbSubTotal->Text;

						_Frm->ShowDialog();
					}
					else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
					{
						int Retorno = Realsoft_BematechNaoFiscal::StatusECF();


						if (Retorno == 0)
						{
							throw gcnew Exception("Erro de comunicação");
						}
						else if (Retorno == 5)
						{
							throw gcnew Exception("Impressora com pouco papel");
						}
						else if (Retorno == 9)
						{
							throw gcnew Exception("Tampa aberta");
						}
						else if (Retorno == 32)
						{
							throw gcnew Exception("Impressora sem papel");
						}
						else
						{
							Realsoft_Sistema::SubTotalVenda = Decimal::Parse(LbSubTotal->Text);

							_Frm->TxSubTotal->Text = LbSubTotal->Text;

							_Frm->ShowDialog();
						}
					}
					else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
					{
						Realsoft_Sistema::SubTotalVenda = Decimal::Parse(LbSubTotal->Text);

						_Frm->TxSubTotal->Text = LbSubTotal->Text;

						_Frm->ShowDialog();
					}
					else
					{
						Realsoft_Sistema::_Prevenda = false;
						Realsoft_Sistema::FinalizarVenda = false;
						Realsoft_Sistema::LimparCampos = false;
						Realsoft_Sistema::AtivarExcluirItem = false;
						Realsoft_Sistema::RecuperarCupom = false;

						throw gcnew Exception("Impressora não cadastrada");

					}					
				}				
			}
			catch(Exception ^ex)
			{
				MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			 
			 
			
		 }
private: System::Void consultarMercadoriaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 	Form5 ^_Frm = gcnew Form5();
				 _Frm->ShowDialog();
		 }
private: System::Void menuFiscalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	

			 Form4 ^_Frm = gcnew Form4();
			_Frm->ShowDialog();
		 }
private: System::Void limparTelaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form7 ^_Frm = gcnew Form7();
			 _Frm->ShowDialog();
		 }
private: System::Void prevendaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {


			 Form8 ^_Frm = gcnew Form8();
			 _Frm->ShowDialog();
			 
		 }
private: System::Void fechamentoCaixaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form9 ^_Frm = gcnew Form9();
			 _Frm->ShowDialog();
		 }

		 
private: System::Void Form2_Activated(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 if (Realsoft_Sistema::_Consulta == true)
				 {
					 Realsoft_Sistema::_Consulta = false;

					 Form4 ^_Frm = gcnew Form4();
					 setValor(_Frm->Retorno);
					 TxCodigo->Focus();
					 
					 Realsoft_Sistema::_Consulta = false;
				 }
				 else if (Realsoft_Sistema::_Prevenda == true)
				 {
					try
					{
						Realsoft_Sistema::_Prevenda == false;

						List<Mercadoria^>^ Lista = Realsoft_Consultas::Listar_Prevenda(Form8::Descricao);
									
						Mercadoria ^_vendacupom = gcnew Mercadoria();

						DgLista->Rows->Clear();							

						int r = 1;

						if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						{
							Realsoft_Bematech::AbreCupom("");
							//Bemat::BemaFI32::Bematech_FI_NumeroCupom(6);
						}
						else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						{
							Realsoft_Elgin::AbreCupom("");
						}
						else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						{
							Realsoft_Daruma::Abrir_Padrao();
						}

						for (int i = 0; i < Lista->Count; i++)
						{
							array<String^>^ arg = gcnew array<String^>(6);

							arg[0] = r.ToString();
							arg[1] = Lista[i]->EAN;
							arg[2] = Lista[i]->DescricaoMercadoria;
							arg[3] = Lista[i]->Quantidade;
							arg[4] = Lista[i]->PrecoVenda.ToString("#####0.00");
							arg[5] = Lista[i]->TotalLiquido.ToString("#####0.00");
								
							DgLista->Rows->Add(arg);															

							_vendacupom = gcnew Mercadoria();
							_vendacupom->Filial = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "EMPRESA", "xxxx"));
							_vendacupom->Terminal = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "Terminal", "xxxx"));
							_vendacupom->ECF = int::Parse(Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "ECF", "xxxx"));
							_vendacupom->NumeroSerial = Realsoft_Sistema::SerialECF;
							_vendacupom->Item = r;
							_vendacupom->CupomFiscal = Realsoft_Sistema::_Cupom;
							_vendacupom->EAN = Lista[i]->EAN;
							_vendacupom->ID = Realsoft_Geral::_mercadoria->ID;
							_vendacupom->Quantidade = Lista[i]->Quantidade;
							_vendacupom->ContadorECF = 1;
							_vendacupom->PrecoVenda =  Lista[i]->PrecoVenda;
							_vendacupom->TotalLiquido = Lista[i]->TotalLiquido;
							_vendacupom->Operador = LbUsuario->Text;
							_vendacupom->DataCupomFiscal = DateTime::Now;
							_vendacupom->DataCriacao = DateTime::Now;
							_vendacupom->Finalizado = true;

							Realsoft_Consultas::Insere_VendaCupomFiscal(_vendacupom);

							if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{
								Realsoft_Bematech::VenderItem(Lista[i]->EAN, Lista[i]->DescricaoMercadoria, Lista[i]->Aliquota + "00", Realsoft_Sistema::TipoQuantidade, Lista[i]->Quantidade, 2, Lista[i]->PrecoVenda.ToString("#####0.00"), "$", "");
							}
							else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{
								try
								{
									Realsoft_Sistema::TipoQuantidade = "I";
									short iretorno;
																	

									if (Lista[i]->Aliquota != 0)
									{
										iretorno = Realsoft_Elgin::Elgin_Vender(Lista[i]->EAN, Lista[i]->DescricaoMercadoria, Lista[i]->Aliquota.ToString("00") + "00", Realsoft_Sistema::TipoQuantidade, Lista[i]->Quantidade, 2, Lista[i]->PrecoVenda.ToString("#####0.00"), "$", "");
									}
									else
									{
										iretorno = Realsoft_Elgin::Elgin_Vender(Lista[i]->EAN, Lista[i]->DescricaoMercadoria,"0000", Realsoft_Sistema::TipoQuantidade, Lista[i]->Quantidade, 2, Lista[i]->PrecoVenda.ToString("#####0.00"), "$", "");
									}

									if (iretorno == 0)
									{
										throw gcnew Exception("indica erro na execução da função");
									}
										
									if (iretorno == -2)
									{
										throw gcnew Exception("Parâmetro inválido na função");
									}
									
									if (iretorno == -4)
									{
										throw gcnew Exception("O arquivo de inicialização Elgin.ini não foi encontrado no diretório de sistema do Windows");
									}

									if (iretorno == -5)
									{
										throw gcnew Exception("Erro ao abrir a porta de comunicação");
									}
								}
								catch (Exception^ex)
								{
									Realsoft_Sistema::_Prevenda == false;
									MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
								}
									
							}
							else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{
								
								Realsoft_Daruma::VendeItemResumido(Lista[i]->SituacaoTributaria + "1", Lista[i]->Quantidade, Lista[i]->PrecoVenda.ToString(), Lista[i]->EAN, Lista[i]->Unidade, Lista[i]->DescricaoMercadoria);

							}
							else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{

							}
							else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
							{

							}
							else
							{
								
								throw gcnew Exception("Impressora não cadastrada");
							}

							r = r+1;
						}
						
					Decimal Total = 0;

					for each(DataGridViewRow ^Coluna in DgLista->Rows)
					{
						Decimal Valor = Convert::ToDecimal(Coluna->Cells[5]->Value->ToString());
					 
						Total = Decimal::Add(Total,Valor);
					}

					LbSubTotal->Text = Total.ToString("#####0.00");
				 
					if (this->DgLista->Rows->Count > 12)
					{
						this->DgLista->FirstDisplayedScrollingRowIndex++;
					}

					Realsoft_Consultas::Update_FinalizaPrevenda(Form8::Descricao);

					TxCodigo->Focus();
						
					TxCodigo->ResetText();
					LbDescricao->ResetText();
					TxPrecoUnit->ResetText();
					Lista = nullptr;
					Realsoft_Sistema::_Prevenda = false;

					}
					catch(Exception ^ex)
					{
						Realsoft_Sistema::FinalizarVenda = false;
						Realsoft_Sistema::LimparCampos = false;
						Realsoft_Sistema::AtivarExcluirItem = false;
						Realsoft_Sistema::RecuperarCupom = false;
						Realsoft_Sistema::ExibirDesconto = false;

						MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);						
					}
						
				 }
				 else if (Realsoft_Sistema::FinalizarVenda == true)
				 {
					 
					 TxCodigo->Focus();
					
					 Realsoft_Sistema::FinalizarVenda = false;
					 Realsoft_Sistema::LimparCampos = false;
					 Realsoft_Sistema::AtivarExcluirItem = false;
					 Realsoft_Sistema::RecuperarCupom = false;
					 Realsoft_Sistema::ExibirDesconto = false;

					TxCodigo->ResetText();
					LbDescricao->ResetText();
					//TxQaunt->ResetText();
					LbTotal->ResetText();
					TxPrecoUnit->ResetText();
					DgLista->Rows->Clear();				
					LbSubTotal->ResetText();
					
					//LbDescricao->Text = "CAIXA LIVRE";
				 }
				 else if (Realsoft_Sistema::AtivarExcluirItem == true)
				 {
					Realsoft_Sistema::AtivarExcluirItem  == false;					 

					String ^getTexto = nullptr;
					String ^Descricao = "";

					for each(DataGridViewRow ^linha in DgLista->Rows)
					 {
						for each (DataGridViewCell ^celula in DgLista->Rows[linha->Index]->Cells)
                        {
							if (celula->ColumnIndex == 0)
							{
								getTexto = celula->Value->ToString();

								if (getTexto == Realsoft_Sistema::ExcluirItem.ToString())
								{
									DgLista->CurrentCell = celula;
                                    //DgLista->Rows->Remove(DgLista->CurrentRow);
																		
									Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_Item(Convert::ToInt32(getTexto), Realsoft_Sistema::_Cupom);

									if (Realsoft_Geral::_mercadoria != nullptr)
									{									
										Realsoft_Consultas::Excluir_Item(Convert::ToInt32(getTexto), Realsoft_Sistema::_Cupom);
										DgLista->CurrentRow->DefaultCellStyle->BackColor = Color::Red;
									}
									

									Decimal EliminaValor = 0;
									Decimal Total = 0;

									 for each(DataGridViewRow ^Coluna in DgLista->Rows)
									 {
										 if (Coluna->DefaultCellStyle->BackColor != Color::Red)
										 {
											EliminaValor = Decimal::Parse(DgLista->CurrentRow->Cells[5]->Value->ToString());

											Total = Decimal::Subtract(Decimal::Parse(LbSubTotal->Text),EliminaValor);
											
										 }
										 
										 /*Decimal Valor = Convert::ToDecimal(Coluna->Cells[5]->Value->ToString());
					 
										 Total = Total + Valor;*/
									 }

									 LbSubTotal->Text = Total.ToString("#####0.00");
									//LbTotal->Text =  Total.ToString("#####0.00");
				 
									Realsoft_Sistema::AtivarExcluirItem = false;

									TxCodigo->Focus();

									if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
										Realsoft_Bematech::Excluir_Item(Realsoft_Sistema::ExcluirItem.ToString());
									}
									else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
								 								
										Realsoft_Elgin::CancelarItem(Realsoft_Sistema::ExcluirItem.ToString());

									}
									else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{
								
										Realsoft_Daruma::ExcluirItem(Realsoft_Sistema::ExcluirItem.ToString());
									}
									else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
									{

									}
									else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
									{
										Realsoft_BematechNaoFiscal::BematechExcluirItem(Realsoft_Sistema::ExcluirItem.ToString());
									}
									else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
									{

										Realsoft_BematechNaoFiscal::BematechExcluirItemDefault(Realsoft_Sistema::ExcluirItem.ToString());
										Realsoft_Sistema::AtivarExcluirItem = false;

									}
									else
									{
										
										throw gcnew Exception("Impressora não cadastrada");
									}
								}
								
							}
						}
					 
					 }

					Realsoft_Sistema::AtivarExcluirItem  = false;
					 
				 }
				 else if (Realsoft_Sistema::LimparCampos == true)
				 {
					 Realsoft_Sistema::FinalizarVenda = false;
					 Realsoft_Sistema::LimparCampos = false;
					 Realsoft_Sistema::AtivarExcluirItem = false;
					 Realsoft_Sistema::RecuperarCupom = false;
					 Realsoft_Sistema::ExibirDesconto = false;

					TxCodigo->ResetText();
					LbDescricao->ResetText();
					//TxQaunt->ResetText();
					LbTotal->ResetText();
					TxPrecoUnit->ResetText();
					DgLista->Rows->Clear();				
					LbSubTotal->ResetText();
					TxCodigo->Focus();
					//LbDescricao->Text = "CAIXA LIVRE";
					
				 }
				 else if(Realsoft_Sistema::RecuperarCupom == true)
				 {
					 try
					 {
						 Realsoft_Sistema::RecuperarCupom = false;

						 DgLista->Rows->Clear();

						 List<Mercadoria^>^_lista = Realsoft_Consultas::Consultar_Cupom(Realsoft_Sistema::iCOO);

						 if (_lista != nullptr)
						 {
							 /*if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							 {
								 Realsoft_BematechNaoFiscal::PadraoCupom();
							 }*/

							 for (int i = 0; i <= _lista->Count - 1; i++)
							 {
								 array<String^>^param = gcnew array<String^>(6);

								 param[0] = _lista[i]->Item.ToString();
								 param[1] = _lista[i]->EAN;
								 param[2] = _lista[i]->DescricaoMercadoria;
								 param[3] = _lista[i]->Quantidade;
								 param[4] = _lista[i]->PrecoVenda.ToString("######0.00");

								 Decimal ValorSoma = Decimal::Multiply(Decimal::Parse(param[3]), Decimal::Parse(param[4]));

								 param[5] = ValorSoma.ToString("#####0.00");

								 DgLista->Rows->Add(param);

								 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
								 {
									 String ^Cupom = "";

									 Cupom = Realsoft_Sistema::Espaco(1) + _lista[i]->Item.ToString() + Realsoft_Sistema::Espaco(1) + _lista[i]->EAN +Realsoft_Sistema::Espaco(1) + _lista[i]->DescricaoMercadoria +Environment::NewLine;
									 Cupom += Realsoft_Sistema::Espaco(1) + _lista[i]->Quantidade + Realsoft_Sistema::Espaco(2) + Realsoft_Geral::_mercadoria->Unidade + Realsoft_Sistema::Espaco(2) + "X" + Realsoft_Sistema::Espaco(2) + _lista[i]->PrecoVenda.ToString("######0.00") + Realsoft_Sistema::Espaco(2) + ValorSoma.ToString("#####0.00") + Environment::NewLine;

									 String ^RetornoCupomVender = Realsoft_BematechNaoFiscal::VendeItem(Cupom);

									 if (RetornoCupomVender != nullptr)
									 {
										 TxQaunt->Text = "1";
										 throw gcnew Exception(RetornoCupomVender);

									 }
								 }
								 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
								 {
									 Realsoft_Daruma::Abrir_Padrao();

									 Realsoft_Daruma::VendeItemResumido(Realsoft_Sistema::SituacaoTributaria + "1", Convert::ToString(DgLista->Rows[i]->Cells[3]->Value), Convert::ToString(DgLista->Rows[i]->Cells[4]->Value), Convert::ToString(DgLista->Rows[i]->Cells[1]->Value), Realsoft_Sistema::UnidadeMedida, Convert::ToString(DgLista->Rows[i]->Cells[2]->Value));
								 }
							 }

							 Decimal Total = 0;

							 for each(DataGridViewRow ^Coluna in DgLista->Rows)
							 {
								 Decimal Valor = Convert::ToDecimal(Coluna->Cells[5]->Value->ToString());

								 Total = Decimal::Add(Total, Valor);
								 
							 }

							 LbSubTotal->Text = Total.ToString("#####0.00");

							 if (this->DgLista->Rows->Count > 12)
							 {
								 this->DgLista->ScrollBars = ScrollBars::Vertical;
								 this->DgLista->FirstDisplayedScrollingRowIndex++;
							 }
						 }
						 else
						 {
							 throw gcnew Exception("CUPOM NÃO ENCONTRADO, FAVOR VERIFIQUE");
						 }
					 }
					 catch (Exception ^ex)
					 {
						 Realsoft_Sistema::FinalizarVenda = false;
						 Realsoft_Sistema::LimparCampos = false;
						 Realsoft_Sistema::AtivarExcluirItem = false;
						 Realsoft_Sistema::RecuperarCupom = false;
						 Realsoft_Sistema::ExibirDesconto = false;

						 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
					 
				 }
				 else if(Realsoft_Sistema::ExibirDesconto == true)
				 {
					 Realsoft_Sistema::ExibirDesconto = false;

					 if (FormDesconto::Porcentage.Equals(true))
					 {
						 Decimal Total = Decimal::Parse(LbTotal->Text);
						 Realsoft_Sistema::ValorDesconto = Realsoft_Sistema::ValorDesconto / 100;
						 Decimal Soma = 0;

						 Soma = Decimal::Subtract(Total, (Realsoft_Sistema::ValorDesconto * Total));

						 LbSubTotal->Text = Soma.ToString("#####0.00");
					 }
					 else
					 {
						 Decimal SubTotal = Decimal::Parse(LbSubTotal->Text);

						 Decimal TotalGeral = Decimal::Subtract(SubTotal, Realsoft_Sistema::ValorDesconto);

						 LbSubTotal->Text = TotalGeral.ToString();

					 }

					 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 //Realsoft_Bematech::Excluir_Item(Realsoft_Sistema::ExcluirItem.ToString());
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 Realsoft_Elgin::FechamentoDesconto("D", "%", Realsoft_Sistema::ValorDesconto.ToString("#####0.00")->Replace(",", ""));

					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {

						 
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {

					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
					 {
						 
					 }
					 else
					 {
						 Realsoft_Sistema::ExibirDesconto = false;
						 throw gcnew Exception("Impressora não cadastrada");
					 }
				 }
				 else
				 {
					 Realsoft_Sistema::FinalizarVenda = false;
					 Realsoft_Sistema::LimparCampos = false;
					 Realsoft_Sistema::AtivarExcluirItem = false;
					 Realsoft_Sistema::RecuperarCupom = false;
					 Realsoft_Sistema::ExibirDesconto = false;
					 
				 }
			 }
			 catch(Exception ^ex)
			 {
				 Realsoft_Sistema::FinalizarVenda = false;
				 Realsoft_Sistema::LimparCampos = false;
				 Realsoft_Sistema::AtivarExcluirItem = false;
				 Realsoft_Sistema::RecuperarCupom = false;
				 Realsoft_Sistema::ExibirDesconto = false;

				  MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }


private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 

				 String^ Processo = Process::GetCurrentProcess()->ProcessName;

				 if (Process::GetProcessesByName(Processo)->Length > 1)
				 {
					 MessageBox::Show("SISTEMA JA EM USO, FAVOR VERIFIQUE", "ATENÇÃO", MessageBoxButtons::OK, MessageBoxIcon::Error);					 
					 Application::Exit();
				 }

				 LbCaminho->Text = Environment::CurrentDirectory;

				 Boolean Retorno = Realsoft_Consultas::VerificarMovimentoAnterior();

				if (Retorno.Equals(false))
				{
					System::Windows::Forms::DialogResult  Pergunta;

					Pergunta = MessageBox::Show("Deseja finalizar o movimento anterior?","Atenção",MessageBoxButtons::YesNo, MessageBoxIcon::Question);

					if (Pergunta == System::Windows::Forms::DialogResult::Yes)
					{
						Realsoft_Consultas::Update_CaixaemUsoAnterior(true);
					}
					else
					{
						MessageBox::Show("Impossível proceguir com o movimento anterior em aberto o sistema será reiniciado?","Atenção",MessageBoxButtons::YesNo, MessageBoxIcon::Question);
						Application::Restart();
							
					}
				}

				Realsoft_Geral::Operador = Realsoft_Consultas::Consultar_Usuarios_OperadorAtual();

				Realsoft_Geral::logon = Realsoft_Consultas::Consultar_Operador(Realsoft_Geral::Operador->ID);

				Realsoft_Sistema::IDOperador = Realsoft_Geral::Operador->ID;

				if (Realsoft_Geral::Operador != nullptr)
				 {					 

					 if (LbUsuario->Text->Trim()->Length > 10)
					 {
						 LbUsuario->Text = Realsoft_Geral::logon->Descricao->Substring(0, 10);
						 Realsoft_Sistema::NomeOperador = Realsoft_Geral::logon->Descricao;
					 }
					 else
					 {
						 LbUsuario->Text = Realsoft_Geral::logon->Descricao;
						 Realsoft_Sistema::NomeOperador = Realsoft_Geral::logon->Descricao;
					 }

					 //if (Realsoft_Sistema::_contador.Equals(false))
					 //{
						// FormPublicidade ^pub = gcnew FormPublicidade();
						// pub->ShowDialog();
					 //}
					 
				 }
				 else
				 {
					if (LbUsuario->Text->Trim()->Length > 10)
					 {
						LbUsuario->Text = Realsoft_Geral::logon->Descricao->Substring(0, 10);
					 }
					 else
					 {
						 LbUsuario->Text = Realsoft_Geral::logon->Descricao;
					 }
					 
				 }


				 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
				 {
					 String^ _Serie = Realsoft_Bematech::__NumeroSerie();

					 __Serie = _Serie;

					 // Realsoft_Bematech::AbreCupom("");

					 Realsoft_Sistema::CalculaMD5 = Realsoft_Daruma::Calcular_MD5();

					  Realsoft_Bematech::ICOO();

					  LbCupom->Text = Realsoft_Sistema::_Cupom.ToString();

				 }
				 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
				 {
					 Realsoft_Sistema::CalculaMD5 = Realsoft_Daruma::Calcular_MD5();

					 String ^Retorno = Realsoft_Elgin::VerificarStatusECF();

					 Realsoft_Elgin::COO_DocAtual();

					 if (Retorno != "")
					 {
						 MessageBox::Show(Retorno, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
					 else
					 {
						 LbECf->Text = "ON";
					 }

					 LbCupom->Text = Realsoft_Sistema::_Cupom.ToString();
					 /*int _retorno = Realsoft_Elgin::ReducaoZPendente();

					 if (_retorno == 1)
					 {
						 MessageBox::Show("REDUÇÃO Z PENDENTE, FAVOR EMITIR A REDUCAO PARA CONTINUAR A UZAR O CAIXA", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
						 Application::Exit();
					 }
					 else
					 {

					 }*/
								
					}
					else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
						
						Realsoft_Sistema::CalculaMD5 = Realsoft_Daruma::Calcular_MD5();

						Realsoft_Daruma::Abrir_Padrao();										

						Realsoft_Daruma::RecuperarCupom();

						LbCupom->Text = Realsoft_Sistema::_Cupom.ToString();
					}
					else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
						LbCupom->Text = Realsoft_Sistema::_Cupom.ToString();
					}
					else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
					{
						//Realsoft_Sistema::CalculaMD5 = Realsoft_Daruma::Calcular_MD5();

						Realsoft_Sistema::_Cupom = Realsoft_BematechNaoFiscal::PadraoCupom();

						LbCupom->Text = Realsoft_Sistema::_Cupom.ToString();

						if (Realsoft_Sistema::_Cupom.Equals(0))
						{
							MessageBox::Show("Cupom inválido","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}

						int Retorno = Realsoft_BematechNaoFiscal::StatusECF();

						if (Retorno == 0)
						{
							throw gcnew Exception("Erro de comunicação com a impressora");
						}
						else if (Retorno == 5)
						{
							throw gcnew Exception("Impressora com pouco papel");
						}
						else if (Retorno == 9)
						{
							throw gcnew Exception("Tampa aberta");
						}
						else if (Retorno == 24)
						{
							LbECf->Text = "ON";
						}
						else if (Retorno == 32)
						{
							throw gcnew Exception("Impressora sem papel");
						}
						else
						{
							LbECf->Text = "OFF";
						}

					}
					else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
					{
						Realsoft_Sistema::CalculaMD5 = Realsoft_Daruma::Calcular_MD5(); 

						Realsoft_Sistema::_Cupom = Realsoft_BematechNaoFiscal::Default();

						Realsoft_Sistema::_Cupom = Realsoft_BematechNaoFiscal::PadraoCupomDefault();

						LbCupom->Text = Realsoft_Sistema::_Cupom.ToString();
					}
					else
					{

						Realsoft_Sistema::FinalizarVenda = false;
						Realsoft_Sistema::LimparCampos = false;
						Realsoft_Sistema::AtivarExcluirItem = false;
						Realsoft_Sistema::RecuperarCupom = false;
						Realsoft_Sistema::ExibirDesconto = false;
						
						throw gcnew Exception("Impressora não cadastrada");
					}

					//if (!Realsoft_Sistema::Retorno->Equals("Default") & !Realsoft_Sistema::Modo->Equals("Default"))
					//{

					//	/*Boolean VerificarECFAtivo = Realsoft_Consultas::Consultar_ECFAtivo(__Serie, Realsoft_Sistema::Terminal);


					//	if (VerificarECFAtivo == false)
					//	{
					//		MessageBox::Show("IMPRESSORA NÃO CADASTRADA, FAVOR VERIFIQUE", "Ativar ECF", MessageBoxButtons::OK, MessageBoxIcon::Error);
					//		Application::Exit();
					//	}*/
					//}


			 }
			 catch(Exception ^ex)
			 {
				 Realsoft_Sistema::FinalizarVenda = false;
				 Realsoft_Sistema::LimparCampos = false;
				 Realsoft_Sistema::AtivarExcluirItem = false;
				 Realsoft_Sistema::RecuperarCupom = false;
				 Realsoft_Sistema::ExibirDesconto = false;


				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 
			 }
		 }
private: System::Void fechamentoDeTurnoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form12 ^FehamentoTurno = gcnew Form12();
			 FehamentoTurno->ShowDialog();
		 }
private: System::Void operacaoFiscalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form11 ^_Operacao = gcnew Form11();
			 _Operacao->ShowDialog();
		 }
private: System::Void ajudaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			FormAjuda ^ajuda = gcnew FormAjuda();
			ajuda->ShowDialog();


		 }
private: System::Void cancelarCupomToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 Realsoft_Sistema::ModoConsulta = true;

 				TxCodigo->BackColor = Color::Salmon;
				//TxQaunt->BackColor = Color::FromArgb(Convert::ToInt32(Convert::ToByte(124)), Convert::ToInt32(Convert::ToByte(15)), Convert::ToInt32(Convert::ToByte(16)));
				//TxPrecoUnit->BackColor = Color::FromArgb(Convert::ToInt32(Convert::ToByte(124)), Convert::ToInt32(Convert::ToByte(15)), Convert::ToInt32(Convert::ToByte(16)));
				
				 
			 }
			 catch(Exception ^ex)
			 {
			 }
		 }

		 private: Boolean MdConsulta;
private: void ModoConsultaAtivo()
				  {
					  try
					  {
						  if (TxCodigo->Text->Equals(""))
							{
								MessageBox::Show("Produto não encontrado","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
								return;
							}
							else
							{
								if (TxCodigo->Text->Trim()->IndexOf("X") > -1)
								{
									try
									{
									String ^_Quant = TxCodigo->Text->Trim()->Substring(0,TxCodigo->Text->Trim()->IndexOf("X"));
									Realsoft_Sistema::QtdDigitado = Convert::ToDecimal(_Quant);							
									TxCodigo->Text = TxCodigo->Text->Trim()->Substring(TxCodigo->Text->Trim()->IndexOf("X") + 1);

									if (_Quant->Trim()->IndexOf(",") > -1)
									{
										TxQaunt->Text = Convert::ToString(Realsoft_Sistema::QtdDigitado);
									}
									else
									{
										TxQaunt->Text = Convert::ToString(Realsoft_Sistema::QtdDigitado);
									}

									Realsoft_Sistema::ItemPesado = true;

									}
									catch(Exception ^ex)
									{
										MessageBox::Show(L"Favor Informar o código correto","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
										return;
										TxCodigo->ResetText();
								}
							}

							if (TxCodigo->Text->Trim()->Substring(0,1)->Equals("2") & TxCodigo->Text->Length > 6)
							{
								try
								{
									Realsoft_Sistema::ModoQuantidade = false;
									TxQaunt->Text = "1";

									if (TxCodigo->Text->Length != 13)
									{
										MessageBox::Show(L"Produto não encontrado", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
										return;
										TxCodigo->ResetText();
									}

									Realsoft_Sistema::ItemPesado = true;

							 try
							 {
								 String ^Quant1;

								 Realsoft_Sistema::CodigoProduto = Int32::Parse(TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialCodigoEtiqueta, Realsoft_Sistema::PosicaoFinalCodigoEtiqueta));
								 
								 //TxQaunt->Text = "0," + TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialValorEtiqueta,Realsoft_Sistema::PosicaoFinalValorEtiqueta);
								 
								 int  Quantidade = int::Parse(TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialValorEtiqueta,Realsoft_Sistema::PosicaoFinalValorEtiqueta));
								 
								 String ^ValorQuanti = Quantidade.ToString();

								 if (ValorQuanti->Length == 2)
								 {
									 Quant1 = "0," + ValorQuanti;
								 }								 
								 else if (ValorQuanti->Length == 3)
								 {
									 Quant1 = "0," + ValorQuanti;
								 }
								 else if (ValorQuanti->Length == 4)
								 {
									 Quant1 = "0," + ValorQuanti;
								 }
								 else if (ValorQuanti->Length == 5)
								 {
									 String ^Ac = ValorQuanti->Substring(0,1);
									 String ^Ac1 = ValorQuanti->Substring(1, 4);

									 Quant1 = Ac + "," + Ac1;
								 }
								 else
								 {
									 String ^Ac = ValorQuanti->Substring(0, 2);
									 String ^Ac1 = ValorQuanti->Substring(2, 4);

									 Quant1 = Ac + "," + Ac1;
								 }


								 Double Quantidade2 = Double::Parse(Quant1);

								 TxQaunt->Text = Quantidade2.ToString();

								 if (Realsoft_Sistema::CodigoMercadoriaDigito == 0)
								 {
									 if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorCodigoBarras)
									 {
										 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaPorCodigoBarras(Convert::ToString(Realsoft_Sistema::CodigoProduto));
									 }
									 else if (Realsoft_Sistema::CodigoMercadoriaEtiquetaPorId)
									 {
										 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaPorId(Convert::ToString(Realsoft_Sistema::CodigoProduto));
									 }
									 else
									 {
										 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiqueta(Convert::ToString(Realsoft_Sistema::CodigoProduto));
									 }
								 }
								 else
								 {
									 Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_MercadoriaEtiquetaComDigito(Convert::ToString(Realsoft_Sistema::CodigoProduto));
								 }
							 }
							 catch(Exception ^ex)
							 {
								Realsoft_Sistema::FinalizarVenda = false;
								Realsoft_Sistema::LimparCampos = false;
								Realsoft_Sistema::AtivarExcluirItem = false;
								Realsoft_Sistema::RecuperarCupom = false;

								TxQaunt->Text = "1";
								
								throw gcnew Exception("Produto Inválido");
								
								TxCodigo->ResetText();								
								
								
							 }
								}									
								catch(Exception ^ex)
								{
									MessageBox::Show(L"Produto Inválido","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
									return;
									TxCodigo->ResetText();
								}
							}
							else
							{						 
								//Realsoft_Sistema::CodigoProduto = Int32::Parse(TxCodigo->Text);

								Realsoft_Geral::_mercadoria = Realsoft_Consultas::Consultar_Mercadorias(Convert::ToString(TxCodigo->Text));
						 
								if (Realsoft_Geral::_mercadoria != nullptr)
								{
									if (Realsoft_Sistema::QtdDigitado == 0)
									{
										if (Realsoft_Geral::_mercadoria->Fracionado && Realsoft_Sistema::SelecionarEnterProdutoPesado)
										{
											//Realsoft_Sistema::ModoBalanca = true;
											MdConsulta = true;
										}
										else if (!Realsoft_Geral::_mercadoria->Fracionado && TxQaunt->Text->Trim()->IndexOf(",") > -1)
										{
											TxCodigo->Text = "";
											TxQaunt->Text = "1";
											TxQaunt->Focus();

											MessageBox::Show(L"Quantidade de produto inválido", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
											return;
										}
									}
								}
							}

							if (Realsoft_Geral::_mercadoria == nullptr)
							{
								Realsoft_Sistema::FinalizarVenda = false;
							    Realsoft_Sistema::LimparCampos = false;
								TxCodigo->ResetText();
								MessageBox::Show("Produto não cadastrado","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
								return;
								
							}
							else
							{
							}

							String ^Descricao = Realsoft_Geral::_mercadoria->DescricaoMercadoria->ToUpper();

						if (Descricao->Length > 29)
						{
							Descricao = Descricao->Substring(0, 29);
						}

						TxPrecoUnit->Text = "";

						if (Realsoft_Geral::_mercadoria->PrecoVenda <= 0)
						{   
							MessageBox::Show(L"Preço de venda não cadastrado","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
							TxCodigo->ResetText();
						}

						TxPrecoUnit->Text = Convert::ToString(Realsoft_Geral::_mercadoria->PrecoVenda);

						LbDescricao->Text = Descricao;
						//LblUnidadeMedida.Text = Mercadoria.UnidadeMedida;

						this->Refresh();
						System::Threading::Thread::Sleep(50);

						Realsoft_Sistema::TipoQuantidade = "I";
						Decimal ^ValorTotalItem = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Realsoft_Geral::_mercadoria->PrecoVenda * Convert::ToInt32(TxQaunt->Text), 2));
						Decimal ^ValorItem = Convert::ToDecimal(ValorTotalItem);
						Decimal ^ValorDesconto = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Convert::ToDecimal(ValorItem) * (Realsoft_Geral::_mercadoria->Desconto / 100), 2));
						String ^Quantidade = TxQaunt->Text;
						//If Not Mercadoria.Fracionado Or ItemPesado Then

						if (Realsoft_Sistema::ItemPesado && TxQaunt->Text->IndexOf(",") > -1)
						{
							//If Not ModoQuantidade Then

							if (Realsoft_Sistema::QtdDigitado == 0 & Realsoft_Sistema::ItemPesado)
							{
								Decimal ValorEtiqueta;

								try
								{
									if (Realsoft_Sistema::ValorEtiqueta == Realsoft_Sistema::ValorEtiqueta)
									{
										ValorEtiqueta = Convert::ToDecimal(TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialValorEtiqueta, Realsoft_Sistema::PosicaoFinalValorEtiqueta));
										ValorEtiqueta = ValorEtiqueta / 100;
										Quantidade = Convert::ToString(Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(true, ValorEtiqueta / Realsoft_Geral::_mercadoria->PrecoVenda, 3)));
										ValorEtiqueta = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Realsoft_Geral::_mercadoria->PrecoVenda * Convert::ToDecimal(Quantidade), 2));
										TxQaunt->Text = Quantidade;
									}
									else
									{
										Quantidade = TxCodigo->Text->Substring(Realsoft_Sistema::PosicaoInicialValorEtiqueta, Realsoft_Sistema::PosicaoFinalValorEtiqueta);                                    
										Quantidade = Convert::ToString(Convert::ToDecimal(Quantidade) / 1000);
										ValorEtiqueta = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Realsoft_Geral::_mercadoria->PrecoVenda * Convert::ToDecimal(Quantidade), 2));
										TxQaunt->Text = Quantidade;
									}

								}
								catch (Exception ^ex)
								{
									Realsoft_Sistema::FinalizarVenda = false;
									Realsoft_Sistema::LimparCampos = false;
									Realsoft_Sistema::AtivarExcluirItem = false;
									Realsoft_Sistema::RecuperarCupom = false;
								
								}

								TxPrecoUnit->Text = Convert::ToString(ValorEtiqueta);
								
								Realsoft_Sistema::TipoQuantidade = "F";
								ValorItem = ValorEtiqueta;
							}
							else
							{
								//if (Realsoft_Geral::_mercadoria->Fracionado)
								//{
								//	Realsoft_Sistema::TipoQuantidade = "F";
								//	ValorTotalItem = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Realsoft_Geral::_mercadoria->PrecoVenda * (Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Convert::ToDecimal(TxQaunt->Text), 3))), 2));
								//	ValorItem = ValorTotalItem;
								//	ValorDesconto = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Convert::ToDecimal(ValorItem) * (Realsoft_Geral::_mercadoria->Desconto / 100), 2));
								//	Quantidade = Convert::ToString(Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Convert::ToDecimal(TxQaunt->Text), 3)));
								//}
							}

							ValorItem = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Decimal::Subtract(Convert::ToDecimal(ValorItem) , Convert::ToDecimal(ValorDesconto)), 2));

						}
						else if (MdConsulta == true)//(Realsoft_Sistema::ModoBalanca)
						{
							Realsoft_Sistema::ModoBalanca = false;
							MdConsulta = false;

							double PesoBalanca;

							try
							{
								String^ __porta__ = Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "BALANCA", "PORTACOMUNICACAO", "");

								Realsoft_ComunicaBalanca::Balanca::OpenPorta(__porta__);

								Realsoft_ComunicaBalanca::Balanca::Pede();

								Realsoft_Sistema::PesoBalanca = Realsoft_ComunicaBalanca::Balanca::Recebe();

								Realsoft_ComunicaBalanca::Balanca::_serialPort->Close();

								if (Realsoft_Sistema::PesoBalanca == 0)
								{
									throw gcnew Exception("BALANCA COM PESO ZERADO, FAVOR VERIFIQUE");
								}
								else
								{
									TxQaunt->Text = Realsoft_Sistema::PesoBalanca.ToString();
									LbTotal->Text = Decimal::Multiply(Decimal::Parse(Realsoft_Sistema::PesoBalanca.ToString()), Decimal::Parse(TxPrecoUnit->Text)).ToString("#####0.00");
								}

								
								
							}
							catch (Exception ^ex)
							{
								Realsoft_Sistema::FinalizarVenda = false;
								Realsoft_Sistema::LimparCampos = false;
								Realsoft_Sistema::AtivarExcluirItem = false;
								Realsoft_Sistema::RecuperarCupom = false;

								throw ex;
							}


							//Realsoft_Sistema::TipoQuantidade = "F";
							//ValorTotalItem = Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Realsoft_Geral::_mercadoria->PrecoVenda * Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Decimal::Parse(Convert::ToString(Realsoft_Sistema::PesoBalanca)), 3)), 2));
							//ValorItem = ValorTotalItem;

							//TxPrecoUnit->Text = ValorItem->ToString("#####0.00");
							/////ValorDesconto = Convert.ToDecimal(Util.TruncarArredondar_Valor(ValorItem * (Mercadoria.Desconto / 100), 2));
							//Quantidade = Convert::ToString(Convert::ToDecimal(Realsoft_Truncar::TruncarArredondar_Valor(Decimal::Parse(Convert::ToString(Realsoft_Sistema::PesoBalanca)), 3)));
							//TxQaunt->Text = Quantidade;
						}
						else
						{
							TxPrecoUnit->Text = ValorItem->ToString("#####0.00");
						}
						
		
							Realsoft_Sistema::ModoConsulta = false;

 							TxCodigo->BackColor = Color::White;
							TxQaunt->BackColor = Color::White;
							TxPrecoUnit->BackColor = Color::White;


							TxCodigo->Focus();
						}
				 
					  }
					  catch(Exception ^ex)
					  {
						  MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					  }
				  }
private: System::Void publicidadeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			FormPublicidade ^_Publicidade = gcnew FormPublicidade();
			_Publicidade->ShowDialog();

			 //Publicidade::Iniciar("",500);
			/*LbDescricao->Text = "CAIXA EM INTERVALO";

			TxCodigo->Enabled = false;
			TxPrecoUnit->Enabled = false;
			TxQaunt->Enabled = false;
			LbSubTotal->Enabled = false;
			DgLista->Visible = false;*/



		 }
private: System::Void iniciarVendaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				
					//TxCodigo->ResetText();
					//LbDescricao->ResetText();
					//TxQaunt->ResetText();
					//LbTotal->ResetText();
					//TxPrecoUnit->ResetText();
					//DgLista->Rows->Clear();				

					TxCodigo->Focus();

					

					if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
						Realsoft_Bematech::AbreCupom("");
						Realsoft_Bematech::ICOO();
					}
					else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
								 								
						Realsoft_Elgin::COO_DocAtual();
																
					}
					else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{
								
								
					}
					else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					{

					}
					else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
					{
						Realsoft_Sistema::_Cupom = Realsoft_BematechNaoFiscal::PadraoCupom();
					}
					else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
					{
						Realsoft_Sistema::_Cupom = Realsoft_BematechNaoFiscal::PadraoCupomDefault();
					}

					else
					{
						throw gcnew Exception("Impressora não cadastrada");
					}
				
				
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 return;
			 }
		 }
private: System::Void abastecimentoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form16 ^Abastecimetno = gcnew Form16();
			 Abastecimetno->ShowDialog();
		 }
private: System::Void Form2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

			try
			{				
				Application::Exit();
			}
			catch (Exception ^ex)
			{
				MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		 }
private: System::Void excluirItemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form10 ^ExcluirItem = gcnew Form10();
			 ExcluirItem->ShowDialog();
		 }

private: System::Void Form2_Shown(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {

			 }
			 catch(Exception ^ex)
			 {
				MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			 }
		 }
private: System::Void mercadoriasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 FormMercadorias ^_mercadorias = gcnew FormMercadorias();
			 _mercadorias->ShowDialog();
		 }
private: System::Void descontoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 FormDesconto ^Desconto = gcnew FormDesconto();
			 Desconto->ShowDialog();
		 }
private: System::Void Form2_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void LbMensagem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void recuperarCupomToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	FormCupom ^cupom = gcnew FormCupom();
	cupom->ShowDialog();
}

private: System::Void abrieGavetaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{

		if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{
			Realsoft_Bematech::AbreGaveta();
		}
		else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{
			Realsoft_Daruma::AcionaGaveta();
		}
		else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{
			Realsoft_Elgin::AbreGavaeta();
		}
		else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
		{

		}
		else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
		{

			int charCode = 27;
			int charCode2 = 118;
			int charCode3 = 140;
			Char specialChar = Convert::ToChar(charCode);
			Char specialChar2 = Convert::ToChar(charCode2);
			Char specialChar3 = Convert::ToChar(charCode3);
			String ^s_cmdTX = "" + specialChar + specialChar2 + specialChar3;

			Realsoft_BematechNaoFiscal::EnviarComando(s_cmdTX, s_cmdTX->Length);
		}
		else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
		{
			
			Realsoft_Bematech::AbreGaveta();
			

		}
		else
		{
			throw gcnew Exception("IMPRESSORA NÃO CADASTRADA");
		}
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void funcaoAdministrativaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form15 ^adm = gcnew Form15();

	adm->ShowDialog();
}
private: System::Void defaultToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		//Realsoft_INI::gravaarquivoini("IMPRESSORA", "MARCAIMPRESSORA", "Default");
		//Realsoft_INI::gravaarquivoini("IMPRESSORA", "MODOIMPRESSAO", "Default");

		//Application::Restart();
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void padraoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		//Realsoft_INI::gravaarquivoini("IMPRESSORA", "MARCAIMPRESSORA", "Bematech");
		//Realsoft_INI::gravaarquivoini("IMPRESSORA", "MODOIMPRESSAO", "Fiscal");

		//Application::Restart();
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	Realsoft_Pagamento ^Pgto = gcnew Realsoft_Pagamento();
	Pgto->ShowDialog();
}
private: System::Void acrescimoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	FormAcrescimo ^acrescimo = gcnew FormAcrescimo();
	acrescimo->ShowDialog();
}
};
}
