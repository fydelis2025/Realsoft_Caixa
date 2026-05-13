#include<io.h>
#include<iostream>
#include"FormPrecos.h"
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

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);

	/// <summary>
	/// Summary for FormMercadorias
	/// </summary>
	public ref class FormMercadorias : public System::Windows::Forms::Form
	{
	public:
		FormMercadorias(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormMercadorias::FormMercadorias_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMercadorias()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TextBox^  TxValidade;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  TxPeso;
	private: System::Windows::Forms::TextBox^  TxQuantidade;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  CbOrigem;
	private: System::Windows::Forms::TextBox^  TxConversao;
	private: System::Windows::Forms::ComboBox^  CbUnidade;
	private: System::Windows::Forms::TextBox^  TxDescricao;
	private: System::Windows::Forms::TextBox^  TxEAN;
	private: System::Windows::Forms::TextBox^  TxCodigo;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  CbSecao;
	private: System::Windows::Forms::ComboBox^  CbFamilia;
	private: System::Windows::Forms::ComboBox^  CbSubGrupo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  CbGrupo;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  CbTributaria;










































	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  CbCST;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::ComboBox^  CbPisCofins;
	private: System::Windows::Forms::TextBox^  TxCFOP;
	private: System::Windows::Forms::TextBox^  TxCFOPTransferencia;
	private: System::Windows::Forms::TextBox^  TxCFOPDevolucao;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  TxCodigoNCM;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  LBDescricaoNCM;
	private: System::Windows::Forms::TextBox^  TxLucro;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  TxPrecoVenda;
	private: System::Windows::Forms::TextBox^  TxPrecoCusto;
	private: System::Windows::Forms::TextBox^  TxICMS;
	private: System::Windows::Forms::TextBox^  TxBaseCalculo;
	private: System::Windows::Forms::TextBox^  TxBaseCST;
	private: System::Windows::Forms::TextBox^  TxMVA;
	private: System::Windows::Forms::TextBox^  TxValorPis;
	private: System::Windows::Forms::TextBox^  TxValorCofins;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  TxIPI;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::ComboBox^  TxAliquota;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  TxPrecoSugerido;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: Megasoft::MegasoftButton^  BtNovo;
private: Megasoft::MegasoftButton^  BtSalvar;
private: Megasoft::MegasoftButton^  BtPrecos;
private: System::Windows::Forms::CheckBox^  chprodutopesavel;
private: Megasoft::MegasoftButton^  BtGerarCodigo;



















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMercadorias::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->BtGerarCodigo = (gcnew Megasoft::MegasoftButton());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->TxValidade = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->TxPeso = (gcnew System::Windows::Forms::TextBox());
			this->TxQuantidade = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CbOrigem = (gcnew System::Windows::Forms::ComboBox());
			this->TxConversao = (gcnew System::Windows::Forms::TextBox());
			this->CbUnidade = (gcnew System::Windows::Forms::ComboBox());
			this->TxDescricao = (gcnew System::Windows::Forms::TextBox());
			this->TxEAN = (gcnew System::Windows::Forms::TextBox());
			this->TxCodigo = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->CbSecao = (gcnew System::Windows::Forms::ComboBox());
			this->CbFamilia = (gcnew System::Windows::Forms::ComboBox());
			this->CbSubGrupo = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CbGrupo = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CbTributaria = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->CbCST = (gcnew System::Windows::Forms::ComboBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->CbPisCofins = (gcnew System::Windows::Forms::ComboBox());
			this->TxCFOP = (gcnew System::Windows::Forms::TextBox());
			this->TxCFOPTransferencia = (gcnew System::Windows::Forms::TextBox());
			this->TxCFOPDevolucao = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->TxCodigoNCM = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LBDescricaoNCM = (gcnew System::Windows::Forms::Label());
			this->TxLucro = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->TxPrecoVenda = (gcnew System::Windows::Forms::TextBox());
			this->TxPrecoCusto = (gcnew System::Windows::Forms::TextBox());
			this->TxICMS = (gcnew System::Windows::Forms::TextBox());
			this->TxBaseCalculo = (gcnew System::Windows::Forms::TextBox());
			this->TxBaseCST = (gcnew System::Windows::Forms::TextBox());
			this->TxMVA = (gcnew System::Windows::Forms::TextBox());
			this->TxValorPis = (gcnew System::Windows::Forms::TextBox());
			this->TxValorCofins = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->TxIPI = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->TxAliquota = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxPrecoSugerido = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->BtNovo = (gcnew Megasoft::MegasoftButton());
			this->BtSalvar = (gcnew Megasoft::MegasoftButton());
			this->BtPrecos = (gcnew Megasoft::MegasoftButton());
			this->chprodutopesavel = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(771, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CADASTRO DE MERCADORIAS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->BtGerarCodigo);
			this->groupBox2->Controls->Add(this->label36);
			this->groupBox2->Controls->Add(this->TxValidade);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->TxPeso);
			this->groupBox2->Controls->Add(this->TxQuantidade);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->CbOrigem);
			this->groupBox2->Controls->Add(this->TxConversao);
			this->groupBox2->Controls->Add(this->CbUnidade);
			this->groupBox2->Controls->Add(this->TxDescricao);
			this->groupBox2->Controls->Add(this->TxEAN);
			this->groupBox2->Controls->Add(this->TxCodigo);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(12, 104);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(753, 106);
			this->groupBox2->TabIndex = 425;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Geral";
			// 
			// BtGerarCodigo
			// 
			this->BtGerarCodigo->BackColor = System::Drawing::Color::Transparent;
			this->BtGerarCodigo->ButtonColor = System::Drawing::Color::DarkOrange;
			this->BtGerarCodigo->ButtonText = L"";
			this->BtGerarCodigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtGerarCodigo->ImageAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BtGerarCodigo->ImageSize = System::Drawing::Size(20, 20);
			this->BtGerarCodigo->Location = System::Drawing::Point(341, 29);
			this->BtGerarCodigo->Name = L"BtGerarCodigo";
			this->BtGerarCodigo->Size = System::Drawing::Size(19, 22);
			this->BtGerarCodigo->TabIndex = 435;
			this->BtGerarCodigo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BtGerarCodigo->Click += gcnew System::EventHandler(this, &FormMercadorias::BtGerarCodigo_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(198, 56);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(48, 13);
			this->label36->TabIndex = 468;
			this->label36->Text = L"Validade";
			// 
			// TxValidade
			// 
			this->TxValidade->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValidade->Location = System::Drawing::Point(199, 73);
			this->TxValidade->Name = L"TxValidade";
			this->TxValidade->Size = System::Drawing::Size(100, 20);
			this->TxValidade->TabIndex = 467;
			this->TxValidade->Text = L"0";
			this->TxValidade->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxValidade_KeyDown);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(112, 57);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(31, 13);
			this->label19->TabIndex = 466;
			this->label19->Text = L"Peso";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(7, 57);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 13);
			this->label18->TabIndex = 465;
			this->label18->Text = L"Quantidade";
			// 
			// TxPeso
			// 
			this->TxPeso->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxPeso->Location = System::Drawing::Point(114, 73);
			this->TxPeso->Name = L"TxPeso";
			this->TxPeso->Size = System::Drawing::Size(79, 20);
			this->TxPeso->TabIndex = 464;
			this->TxPeso->Text = L"0,00";
			this->TxPeso->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxPeso_KeyDown);
			// 
			// TxQuantidade
			// 
			this->TxQuantidade->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxQuantidade->Location = System::Drawing::Point(9, 73);
			this->TxQuantidade->Name = L"TxQuantidade";
			this->TxQuantidade->Size = System::Drawing::Size(99, 20);
			this->TxQuantidade->TabIndex = 463;
			this->TxQuantidade->Text = L"0";
			this->TxQuantidade->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxQuantidade_KeyDown);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(458, 56);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 13);
			this->label16->TabIndex = 451;
			this->label16->Text = L"Origem Mercadoria";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(669, 56);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 13);
			this->label15->TabIndex = 450;
			this->label15->Text = L"Conversão";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(303, 56);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 13);
			this->label13->TabIndex = 448;
			this->label13->Text = L"Unidade";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(366, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 440;
			this->label8->Text = L"Descrição";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(117, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 13);
			this->label9->TabIndex = 439;
			this->label9->Text = L"Código EAN";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(5, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 438;
			this->label10->Text = L"Código";
			// 
			// CbOrigem
			// 
			this->CbOrigem->FormattingEnabled = true;
			this->CbOrigem->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"0 - Nacional", L"1 - Estrangeira - Importação direta",
					L"2 - Estrangeira - Adquirida no mercado interno"
			});
			this->CbOrigem->Location = System::Drawing::Point(460, 72);
			this->CbOrigem->Name = L"CbOrigem";
			this->CbOrigem->Size = System::Drawing::Size(206, 21);
			this->CbOrigem->TabIndex = 434;
			this->CbOrigem->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbOrigem_KeyDown);
			// 
			// TxConversao
			// 
			this->TxConversao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxConversao->Location = System::Drawing::Point(670, 73);
			this->TxConversao->Name = L"TxConversao";
			this->TxConversao->Size = System::Drawing::Size(77, 20);
			this->TxConversao->TabIndex = 430;
			this->TxConversao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxConversao_KeyDown);
			// 
			// CbUnidade
			// 
			this->CbUnidade->FormattingEnabled = true;
			this->CbUnidade->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"UN", L"KG", L"CX" });
			this->CbUnidade->Location = System::Drawing::Point(304, 73);
			this->CbUnidade->Name = L"CbUnidade";
			this->CbUnidade->Size = System::Drawing::Size(154, 21);
			this->CbUnidade->TabIndex = 429;
			this->CbUnidade->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbUnidade_KeyDown);
			// 
			// TxDescricao
			// 
			this->TxDescricao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxDescricao->Location = System::Drawing::Point(364, 30);
			this->TxDescricao->Name = L"TxDescricao";
			this->TxDescricao->Size = System::Drawing::Size(385, 20);
			this->TxDescricao->TabIndex = 421;
			this->TxDescricao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxDescricao_KeyDown);
			// 
			// TxEAN
			// 
			this->TxEAN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxEAN->Location = System::Drawing::Point(117, 30);
			this->TxEAN->Name = L"TxEAN";
			this->TxEAN->Size = System::Drawing::Size(219, 20);
			this->TxEAN->TabIndex = 420;
			this->TxEAN->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxEAN_KeyDown);
			// 
			// TxCodigo
			// 
			this->TxCodigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCodigo->Location = System::Drawing::Point(8, 30);
			this->TxCodigo->Name = L"TxCodigo";
			this->TxCodigo->Size = System::Drawing::Size(103, 20);
			this->TxCodigo->TabIndex = 419;
			this->TxCodigo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxCodigo_KeyDown);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->CbSecao);
			this->groupBox4->Controls->Add(this->CbFamilia);
			this->groupBox4->Controls->Add(this->CbSubGrupo);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->CbGrupo);
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(13, 215);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(752, 53);
			this->groupBox4->TabIndex = 427;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Grupo/Subgrupo";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(212, 11);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 13);
			this->label14->TabIndex = 455;
			this->label14->Text = L"SubGrupo";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(543, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(38, 13);
			this->label12->TabIndex = 454;
			this->label12->Text = L"Seção";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(395, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 13);
			this->label11->TabIndex = 453;
			this->label11->Text = L"Familia";
			this->label11->Visible = false;
			// 
			// CbSecao
			// 
			this->CbSecao->FormattingEnabled = true;
			this->CbSecao->Location = System::Drawing::Point(545, 26);
			this->CbSecao->Name = L"CbSecao";
			this->CbSecao->Size = System::Drawing::Size(140, 21);
			this->CbSecao->TabIndex = 452;
			this->CbSecao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbSecao_KeyDown);
			// 
			// CbFamilia
			// 
			this->CbFamilia->FormattingEnabled = true;
			this->CbFamilia->Location = System::Drawing::Point(397, 26);
			this->CbFamilia->Name = L"CbFamilia";
			this->CbFamilia->Size = System::Drawing::Size(142, 21);
			this->CbFamilia->TabIndex = 451;
			this->CbFamilia->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbFamilia_KeyDown);
			// 
			// CbSubGrupo
			// 
			this->CbSubGrupo->FormattingEnabled = true;
			this->CbSubGrupo->Location = System::Drawing::Point(208, 26);
			this->CbSubGrupo->Name = L"CbSubGrupo";
			this->CbSubGrupo->Size = System::Drawing::Size(183, 21);
			this->CbSubGrupo->TabIndex = 450;
			this->CbSubGrupo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbSubGrupo_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(4, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 447;
			this->label2->Text = L"Grupo";
			// 
			// CbGrupo
			// 
			this->CbGrupo->FormattingEnabled = true;
			this->CbGrupo->Location = System::Drawing::Point(7, 26);
			this->CbGrupo->Name = L"CbGrupo";
			this->CbGrupo->Size = System::Drawing::Size(195, 21);
			this->CbGrupo->TabIndex = 446;
			this->CbGrupo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbGrupo_KeyDown);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->CbTributaria);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->CbCST);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->CbPisCofins);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(12, 273);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(753, 66);
			this->groupBox3->TabIndex = 428;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"ICMS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(534, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 456;
			this->label3->Text = L"Situação Tributária";
			// 
			// CbTributaria
			// 
			this->CbTributaria->FormattingEnabled = true;
			this->CbTributaria->Location = System::Drawing::Point(535, 30);
			this->CbTributaria->Name = L"CbTributaria";
			this->CbTributaria->Size = System::Drawing::Size(207, 21);
			this->CbTributaria->TabIndex = 455;
			this->CbTributaria->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbTributaria_KeyDown);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(277, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 13);
			this->label17->TabIndex = 454;
			this->label17->Text = L"CST";
			// 
			// CbCST
			// 
			this->CbCST->FormattingEnabled = true;
			this->CbCST->Location = System::Drawing::Point(277, 30);
			this->CbCST->Name = L"CbCST";
			this->CbCST->Size = System::Drawing::Size(252, 21);
			this->CbCST->TabIndex = 453;
			this->CbCST->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbCST_KeyDown);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(5, 15);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 13);
			this->label25->TabIndex = 441;
			this->label25->Text = L"Pis/Cofins";
			// 
			// CbPisCofins
			// 
			this->CbPisCofins->FormattingEnabled = true;
			this->CbPisCofins->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"01 TRIBUTAÇÃO NORMAL", L"04 TRUBUTAÇÃO MONOFÁSICA",
					L"05 TRIBUTAÇÃO SUBSTITUIÇÃO TRIBUTARIA", L"06 TRIBUTAÇÃO ALÍQUOTA ZERO", L"07 ISENTO", L"08 NÃO TRIBUTADO"
			});
			this->CbPisCofins->Location = System::Drawing::Point(8, 30);
			this->CbPisCofins->Name = L"CbPisCofins";
			this->CbPisCofins->Size = System::Drawing::Size(263, 21);
			this->CbPisCofins->TabIndex = 440;
			this->CbPisCofins->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::CbPisCofins_KeyDown);
			// 
			// TxCFOP
			// 
			this->TxCFOP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCFOP->Location = System::Drawing::Point(135, 32);
			this->TxCFOP->Name = L"TxCFOP";
			this->TxCFOP->Size = System::Drawing::Size(75, 20);
			this->TxCFOP->TabIndex = 447;
			this->TxCFOP->Text = L"1102";
			this->TxCFOP->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxCFOP_KeyDown);
			// 
			// TxCFOPTransferencia
			// 
			this->TxCFOPTransferencia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCFOPTransferencia->Location = System::Drawing::Point(220, 32);
			this->TxCFOPTransferencia->Name = L"TxCFOPTransferencia";
			this->TxCFOPTransferencia->Size = System::Drawing::Size(100, 20);
			this->TxCFOPTransferencia->TabIndex = 448;
			this->TxCFOPTransferencia->Text = L"1102";
			this->TxCFOPTransferencia->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxCFOPTransferencia_KeyDown);
			// 
			// TxCFOPDevolucao
			// 
			this->TxCFOPDevolucao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCFOPDevolucao->Location = System::Drawing::Point(326, 32);
			this->TxCFOPDevolucao->Name = L"TxCFOPDevolucao";
			this->TxCFOPDevolucao->Size = System::Drawing::Size(100, 20);
			this->TxCFOPDevolucao->TabIndex = 449;
			this->TxCFOPDevolucao->Text = L"1102";
			this->TxCFOPDevolucao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxCFOPDevolucao_KeyDown);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(132, 16);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(35, 13);
			this->label27->TabIndex = 452;
			this->label27->Text = L"CFOP";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(326, 16);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(90, 13);
			this->label28->TabIndex = 453;
			this->label28->Text = L"CFOP Devolução";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(217, 16);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(103, 13);
			this->label30->TabIndex = 454;
			this->label30->Text = L"CFOP Transferencia";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(429, 16);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(65, 13);
			this->label31->TabIndex = 455;
			this->label31->Text = L"Preço Custo";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(535, 16);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(69, 13);
			this->label32->TabIndex = 456;
			this->label32->Text = L"Preço Venda";
			// 
			// TxCodigoNCM
			// 
			this->TxCodigoNCM->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCodigoNCM->Location = System::Drawing::Point(6, 32);
			this->TxCodigoNCM->Name = L"TxCodigoNCM";
			this->TxCodigoNCM->Size = System::Drawing::Size(103, 20);
			this->TxCodigoNCM->TabIndex = 469;
			this->TxCodigoNCM->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxCodigoNCM_KeyDown);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(3, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 471;
			this->label6->Text = L"Código NCM";
			// 
			// LBDescricaoNCM
			// 
			this->LBDescricaoNCM->ForeColor = System::Drawing::Color::Red;
			this->LBDescricaoNCM->Location = System::Drawing::Point(6, 58);
			this->LBDescricaoNCM->Name = L"LBDescricaoNCM";
			this->LBDescricaoNCM->Size = System::Drawing::Size(737, 18);
			this->LBDescricaoNCM->TabIndex = 473;
			// 
			// TxLucro
			// 
			this->TxLucro->BackColor = System::Drawing::Color::DarkRed;
			this->TxLucro->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxLucro->ForeColor = System::Drawing::Color::White;
			this->TxLucro->Location = System::Drawing::Point(649, 32);
			this->TxLucro->Name = L"TxLucro";
			this->TxLucro->Size = System::Drawing::Size(95, 20);
			this->TxLucro->TabIndex = 475;
			this->TxLucro->Text = L"0,00";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(646, 16);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(90, 13);
			this->label38->TabIndex = 476;
			this->label38->Text = L"Margem de Lucro";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::Transparent;
			this->groupBox6->Controls->Add(this->chprodutopesavel);
			this->groupBox6->Controls->Add(this->label38);
			this->groupBox6->Controls->Add(this->TxLucro);
			this->groupBox6->Controls->Add(this->LBDescricaoNCM);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->TxCodigoNCM);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->label31);
			this->groupBox6->Controls->Add(this->label30);
			this->groupBox6->Controls->Add(this->label28);
			this->groupBox6->Controls->Add(this->label27);
			this->groupBox6->Controls->Add(this->TxPrecoVenda);
			this->groupBox6->Controls->Add(this->TxPrecoCusto);
			this->groupBox6->Controls->Add(this->TxCFOPDevolucao);
			this->groupBox6->Controls->Add(this->TxCFOPTransferencia);
			this->groupBox6->Controls->Add(this->TxCFOP);
			this->groupBox6->ForeColor = System::Drawing::Color::White;
			this->groupBox6->Location = System::Drawing::Point(13, 430);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(753, 95);
			this->groupBox6->TabIndex = 430;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Outras informações";
			// 
			// TxPrecoVenda
			// 
			this->TxPrecoVenda->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxPrecoVenda->Location = System::Drawing::Point(538, 32);
			this->TxPrecoVenda->Name = L"TxPrecoVenda";
			this->TxPrecoVenda->Size = System::Drawing::Size(105, 20);
			this->TxPrecoVenda->TabIndex = 451;
			this->TxPrecoVenda->Text = L"0,00";
			this->TxPrecoVenda->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxPrecoVenda_KeyDown);
			// 
			// TxPrecoCusto
			// 
			this->TxPrecoCusto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxPrecoCusto->Location = System::Drawing::Point(432, 32);
			this->TxPrecoCusto->Name = L"TxPrecoCusto";
			this->TxPrecoCusto->Size = System::Drawing::Size(100, 20);
			this->TxPrecoCusto->TabIndex = 450;
			this->TxPrecoCusto->Text = L"0,00";
			this->TxPrecoCusto->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxPrecoCusto_KeyDown);
			// 
			// TxICMS
			// 
			this->TxICMS->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxICMS->Location = System::Drawing::Point(6, 34);
			this->TxICMS->Name = L"TxICMS";
			this->TxICMS->Size = System::Drawing::Size(70, 20);
			this->TxICMS->TabIndex = 423;
			this->TxICMS->Text = L"0,00";
			this->TxICMS->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxICMS_KeyDown);
			// 
			// TxBaseCalculo
			// 
			this->TxBaseCalculo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxBaseCalculo->Location = System::Drawing::Point(82, 34);
			this->TxBaseCalculo->Name = L"TxBaseCalculo";
			this->TxBaseCalculo->Size = System::Drawing::Size(70, 20);
			this->TxBaseCalculo->TabIndex = 424;
			this->TxBaseCalculo->Text = L"0,00";
			this->TxBaseCalculo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxBaseCalculo_KeyDown);
			// 
			// TxBaseCST
			// 
			this->TxBaseCST->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxBaseCST->Location = System::Drawing::Point(158, 34);
			this->TxBaseCST->Name = L"TxBaseCST";
			this->TxBaseCST->Size = System::Drawing::Size(70, 20);
			this->TxBaseCST->TabIndex = 425;
			this->TxBaseCST->Text = L"0,00";
			this->TxBaseCST->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxBaseCST_KeyDown);
			// 
			// TxMVA
			// 
			this->TxMVA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxMVA->Location = System::Drawing::Point(234, 34);
			this->TxMVA->Name = L"TxMVA";
			this->TxMVA->Size = System::Drawing::Size(70, 20);
			this->TxMVA->TabIndex = 426;
			this->TxMVA->Text = L"0,00";
			this->TxMVA->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxMVA_KeyDown);
			// 
			// TxValorPis
			// 
			this->TxValorPis->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValorPis->Location = System::Drawing::Point(386, 34);
			this->TxValorPis->Name = L"TxValorPis";
			this->TxValorPis->Size = System::Drawing::Size(70, 20);
			this->TxValorPis->TabIndex = 427;
			this->TxValorPis->Text = L"0,00";
			this->TxValorPis->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxValorPis_KeyDown);
			// 
			// TxValorCofins
			// 
			this->TxValorCofins->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValorCofins->Location = System::Drawing::Point(470, 34);
			this->TxValorCofins->Name = L"TxValorCofins";
			this->TxValorCofins->Size = System::Drawing::Size(70, 20);
			this->TxValorCofins->TabIndex = 428;
			this->TxValorCofins->Text = L"0,00";
			this->TxValorCofins->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxValorCofins_KeyDown);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(4, 18);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(33, 13);
			this->label21->TabIndex = 435;
			this->label21->Text = L"ICMS";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(155, 18);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(55, 13);
			this->label22->TabIndex = 436;
			this->label22->Text = L"Base CST";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(79, 18);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(57, 13);
			this->label23->TabIndex = 437;
			this->label23->Text = L"Bs Calculo";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(231, 18);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(30, 13);
			this->label24->TabIndex = 438;
			this->label24->Text = L"MVA";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(378, 18);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(48, 13);
			this->label26->TabIndex = 440;
			this->label26->Text = L"Valor Pis";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(461, 18);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(63, 13);
			this->label29->TabIndex = 443;
			this->label29->Text = L"Valor Cofins";
			// 
			// TxIPI
			// 
			this->TxIPI->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxIPI->Location = System::Drawing::Point(310, 34);
			this->TxIPI->Name = L"TxIPI";
			this->TxIPI->Size = System::Drawing::Size(70, 20);
			this->TxIPI->TabIndex = 447;
			this->TxIPI->Text = L"0,00";
			this->TxIPI->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxIPI_KeyDown);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(307, 18);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 13);
			this->label20->TabIndex = 448;
			this->label20->Text = L"IPI";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(544, 18);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(45, 13);
			this->label37->TabIndex = 450;
			this->label37->Text = L"Aliquota";
			// 
			// TxAliquota
			// 
			this->TxAliquota->FormattingEnabled = true;
			this->TxAliquota->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"07", L"12", L"17", L"25", L"27" });
			this->TxAliquota->Location = System::Drawing::Point(546, 32);
			this->TxAliquota->Name = L"TxAliquota";
			this->TxAliquota->Size = System::Drawing::Size(85, 21);
			this->TxAliquota->TabIndex = 456;
			this->TxAliquota->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::TxAliquota_KeyDown);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(639, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 475;
			this->label7->Text = L"Margem %";
			// 
			// TxPrecoSugerido
			// 
			this->TxPrecoSugerido->BackColor = System::Drawing::Color::DarkRed;
			this->TxPrecoSugerido->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxPrecoSugerido->ForeColor = System::Drawing::Color::White;
			this->TxPrecoSugerido->Location = System::Drawing::Point(642, 34);
			this->TxPrecoSugerido->Name = L"TxPrecoSugerido";
			this->TxPrecoSugerido->Size = System::Drawing::Size(95, 20);
			this->TxPrecoSugerido->TabIndex = 474;
			this->TxPrecoSugerido->Text = L"0,00";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->TxPrecoSugerido);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->TxAliquota);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->TxIPI);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->TxValorCofins);
			this->groupBox1->Controls->Add(this->TxValorPis);
			this->groupBox1->Controls->Add(this->TxMVA);
			this->groupBox1->Controls->Add(this->TxBaseCST);
			this->groupBox1->Controls->Add(this->TxBaseCalculo);
			this->groupBox1->Controls->Add(this->TxICMS);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(12, 347);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(753, 73);
			this->groupBox1->TabIndex = 429;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Fiscal";
			// 
			// BtNovo
			// 
			this->BtNovo->BackColor = System::Drawing::Color::Transparent;
			this->BtNovo->BaseColor = System::Drawing::Color::White;
			this->BtNovo->ButtonColor = System::Drawing::Color::SteelBlue;
			this->BtNovo->ButtonText = L"Novo ";
			this->BtNovo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtNovo->ForeColor = System::Drawing::Color::Black;
			this->BtNovo->ImageSize = System::Drawing::Size(32, 32);
			this->BtNovo->Location = System::Drawing::Point(13, 535);
			this->BtNovo->Name = L"BtNovo";
			this->BtNovo->Size = System::Drawing::Size(107, 43);
			this->BtNovo->TabIndex = 431;
			this->BtNovo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BtNovo->Click += gcnew System::EventHandler(this, &FormMercadorias::BtNovo_Click);
			// 
			// BtSalvar
			// 
			this->BtSalvar->BackColor = System::Drawing::Color::Transparent;
			this->BtSalvar->BaseColor = System::Drawing::Color::White;
			this->BtSalvar->ButtonColor = System::Drawing::Color::SteelBlue;
			this->BtSalvar->ButtonText = L"Salvar";
			this->BtSalvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtSalvar->ForeColor = System::Drawing::Color::Black;
			this->BtSalvar->ImageSize = System::Drawing::Size(32, 32);
			this->BtSalvar->Location = System::Drawing::Point(126, 535);
			this->BtSalvar->Name = L"BtSalvar";
			this->BtSalvar->Size = System::Drawing::Size(107, 43);
			this->BtSalvar->TabIndex = 432;
			this->BtSalvar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BtSalvar->Click += gcnew System::EventHandler(this, &FormMercadorias::BtSalvar_Click);
			// 
			// BtPrecos
			// 
			this->BtPrecos->BackColor = System::Drawing::Color::Transparent;
			this->BtPrecos->BaseColor = System::Drawing::Color::White;
			this->BtPrecos->ButtonColor = System::Drawing::Color::SteelBlue;
			this->BtPrecos->ButtonText = L"Precificação";
			this->BtPrecos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtPrecos->ForeColor = System::Drawing::Color::Black;
			this->BtPrecos->ImageSize = System::Drawing::Size(32, 32);
			this->BtPrecos->Location = System::Drawing::Point(239, 535);
			this->BtPrecos->Name = L"BtPrecos";
			this->BtPrecos->Size = System::Drawing::Size(123, 43);
			this->BtPrecos->TabIndex = 433;
			this->BtPrecos->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BtPrecos->Click += gcnew System::EventHandler(this, &FormMercadorias::BtPrecos_Click);
			// 
			// chprodutopesavel
			// 
			this->chprodutopesavel->AutoSize = true;
			this->chprodutopesavel->BackColor = System::Drawing::Color::Transparent;
			this->chprodutopesavel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->chprodutopesavel->ForeColor = System::Drawing::Color::White;
			this->chprodutopesavel->Location = System::Drawing::Point(644, 70);
			this->chprodutopesavel->Name = L"chprodutopesavel";
			this->chprodutopesavel->Size = System::Drawing::Size(102, 17);
			this->chprodutopesavel->TabIndex = 434;
			this->chprodutopesavel->Text = L"Produto Pesável";
			this->chprodutopesavel->UseVisualStyleBackColor = false;
			// 
			// FormMercadorias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 600);
			this->ControlBox = false;
			this->Controls->Add(this->BtPrecos);
			this->Controls->Add(this->BtSalvar);
			this->Controls->Add(this->BtNovo);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormMercadorias";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &FormMercadorias::FormMercadorias_Load);
			this->Shown += gcnew System::EventHandler(this, &FormMercadorias::FormMercadorias_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormMercadorias::FormMercadorias_KeyDown);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormMercadorias_Shown(System::Object^  sender, System::EventArgs^  e) {
				
			 }
private: System::Void FormMercadorias_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if(e->KeyCode == Keys::Escape)
			 {
				this->Close();
			 }
		 }
private: System::Void FormMercadorias_Load(System::Object^  sender, System::EventArgs^  e) {

			  try
				 {

					 String ^VerificaOpcao = Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "CLIENTESERVIDOR", "xxxx");
					 
					 Boolean Retorno = Boolean::Parse(VerificaOpcao);

					 if (Retorno.Equals(true))
					 {
						 throw gcnew Exception("FUNÇÃO NÃO AUTORIZADA, FAVOR VERIFIQUE");						 
					 }

					 List<Realsoft_Grupo^>^ __Grupo__ = Realsoft_Consultas::Listar_Grupo();
					 List<Realsoft_SubGrupo^>^ __SubGrupo__ = Realsoft_Consultas::Listar_SubGrupo();
					 List<Realsoft_Familia^>^ __Familia__ = Realsoft_Consultas::Listar_Familia();
					 List<Realsoft_Secao^>^ __Secao__ = Realsoft_Consultas::Listar_Secao();
					 List<Realsoft_SituacaoTriburaria^>^ __Situacaotributaria__ = Realsoft_Consultas::Listar_SituacaoTributaria();
					 List<Realsoft_CST^>^ __cst__ = Realsoft_Consultas::Listar_CST();

					 for (int _grupo = 0; _grupo < __Grupo__->Count; _grupo++)
					 {
						 CbGrupo->Items->Add(__Grupo__[_grupo]->Descricao);
					 }

					 for (int _subgrupo = 0; _subgrupo < __SubGrupo__->Count; _subgrupo++)
					 {
						 CbSubGrupo->Items->Add(__SubGrupo__[_subgrupo]->Descricao);
					 }

					 for (int _familia = 0; _familia < __Familia__->Count; _familia++)
					 {
						 CbFamilia->Items->Add(__Familia__[_familia]->Descricao);
					 }

					 for (int _secao = 0; _secao < __Secao__->Count; _secao++)
					 {
						 CbSecao->Items->Add(__Secao__[_secao]->Descricao);
					 }

					 for (int _situacaotributaria = 0; _situacaotributaria < __Situacaotributaria__->Count; _situacaotributaria++)
					 {
						 CbTributaria->Items->Add(__Situacaotributaria__[_situacaotributaria]->Codigo + " - " + __Situacaotributaria__[_situacaotributaria]->Descricao);
					 }

					 for (int _cst = 0; _cst < __cst__->Count; _cst++)
					 {
						 CbCST->Items->Add(__cst__[_cst]->Codigo.ToString() + " - " + __cst__[_cst]->Descricao);
					 }
				 }
				 catch(Exception ^ex)
				 {					 
					 MessageBox::Show(ex->Message,"Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 this->Close();
				 }
		 }
private: System::Void TxCodigo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 TxEAN->Focus();
			 }
		 }
private: System::Void TxEAN_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 try
				 {
				 
					 _mercadoria = Realsoft_Consultas::Consultar_MercadoriaPorCodigoBarras(TxEAN->Text);

					 if(_mercadoria == nullptr)
					 {
						TxDescricao->Focus();
					 }
					 else
					 {	
						 TxCodigo->Enabled = false;
						 TxCodigo->Text = _mercadoria->Codigo.ToString();
						TxEAN->Text = _mercadoria->EAN;
						TxDescricao->Text = _mercadoria->DescricaoMercadoria;
						TxCodigoNCM->Text = _mercadoria->CodigoNCM.ToString();
						LBDescricaoNCM->Text = _mercadoria->DescricaoNCM;
						//_mercadoria->CPFCNPJ = TxCPFCNPJ->Text;
						//_mercadoria->Fabricante = LBFabricante->Text;
						CbGrupo->Text = _mercadoria->Grupo;
						CbSubGrupo->Text = _mercadoria->SubGrupo;
						CbFamilia->Text = _mercadoria->Familia;
						CbSecao->Text = _mercadoria->Secao;
						CbUnidade->Text = _mercadoria->Unidade;
						TxConversao->Text = _mercadoria->Conversao.ToString();
						CbOrigem->Text = _mercadoria->Origem;
						CbCST->Text = _mercadoria->CST;
						String^ Tributaria = Realsoft_Consultas::Consultar_SituacaoTributariaNome(_mercadoria->SituacaoTributaria);
						CbTributaria->Text = Tributaria;
						TxQuantidade->Text = _mercadoria->Quantidade;
						TxPeso->Text = _mercadoria->Peso.ToString();
						TxICMS->Text = _mercadoria->ICMS.ToString();
						TxBaseCalculo->Text = _mercadoria->BaseCalculo.ToString();
						TxBaseCST->Text = _mercadoria->BaseCST.ToString();
						TxMVA->Text = _mercadoria->MVA.ToString();
						TxIPI->Text = _mercadoria->IPI.ToString();
						TxValidade->Text = _mercadoria->Validade.ToString();
						TxAliquota->Text = _mercadoria->Aliquota.ToString();
						CbPisCofins->Text = _mercadoria->PisCofins;
						TxValorPis->Text = _mercadoria->ValorPis.ToString();
						TxValorCofins->Text = _mercadoria->ValorCofins.ToString();
						TxCFOP->Text = _mercadoria->CFOP.ToString();
						TxCFOPTransferencia->Text = _mercadoria->CFOPTransferencia.ToString();
						TxCFOPDevolucao->Text = _mercadoria->CFOPDevolucao.ToString();
						TxPrecoCusto->Text = _mercadoria->PrecoCusto.ToString();
						TxPrecoVenda->Text = _mercadoria->PrecoVenda.ToString();
						chprodutopesavel->Checked = _mercadoria->Fracionado;
						
						 throw gcnew Exception("MERCDORIA JA CADASTRADA");
						 return;
					 }
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }
		 }
private: System::Void TxDescricao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxQuantidade->Focus();
			 }
		 }
private: System::Void TxQuantidade_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxPeso->Focus();
			 }
		 }
private: System::Void TxPeso_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxValidade->Focus();
			 }
		 }
private: System::Void TxValidade_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbUnidade->Focus();
			 }
		 }
private: System::Void CbUnidade_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbOrigem->Focus();
			 }
		 }
private: System::Void CbOrigem_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if(e->KeyCode == Keys::Enter)
			 {
				 TxConversao->Focus();
			 }
		 }
private: System::Void TxConversao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbGrupo->Focus();
			 }
		 }
private: System::Void CbGrupo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbSubGrupo->Focus();
			 }
		 }
private: System::Void CbSubGrupo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbFamilia->Focus();
			 }
		 }
private: System::Void CbFamilia_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbSecao->Focus();
			 }
		 }
private: System::Void CbSecao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbPisCofins->Focus();
			 }
		 }
private: System::Void CbPisCofins_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbCST->Focus();
			 }
		 }
private: System::Void CbCST_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 CbTributaria->Focus();
			 }
		 }
private: System::Void CbTributaria_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxICMS->Focus();
			 }
		 }
private: System::Void TxICMS_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxBaseCalculo->Focus();
			 }
		 }
private: System::Void TxBaseCalculo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxBaseCST->Focus();
			 }
		 }
private: System::Void TxBaseCST_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxMVA->Focus();
			 }
		 }
private: System::Void TxMVA_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxIPI->Focus();
			 }
		 }
private: System::Void TxIPI_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxValorPis->Focus();
			 }
		 }
private: System::Void TxValorPis_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxValorCofins->Focus();
			 }
		 }
private: System::Void TxValorCofins_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxAliquota->Focus();
			 }
		 }
private: System::Void TxAliquota_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxCodigoNCM->Focus();
			 }
		 }
private: System::Void TxCodigoNCM_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxCFOP->Focus();
			 }
		 }
private: System::Void TxCFOP_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxCFOPTransferencia->Focus();
			 }
		 }
private: System::Void TxCFOPTransferencia_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxCFOPDevolucao->Focus();
			 }
		 }
private: System::Void TxCFOPDevolucao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxPrecoCusto->Focus();
			 }

		 }
private: System::Void TxPrecoCusto_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 TxPrecoVenda->Focus();
			 }
		 }
private: System::Void TxPrecoVenda_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Enter)
			 {
				 
			 }
		 }

private: System::Void BtPrecos_Click(System::Object^  sender, System::EventArgs^  e) {
			 FormPrecos ^p = gcnew FormPrecos();
			 p->ShowDialog();
		 }

		 private: static Random ^_Codigo = gcnew Random();
		 private: Realsoft_Class::Mercadoria ^_mercadoria;
private: System::Void BtNovo_Click(System::Object^  sender, System::EventArgs^  e) {

			 _mercadoria  = nullptr;

			TxCodigo->Text = _Codigo->Next(999999).ToString();
            TxEAN->Text = "";
            TxDescricao->Text = "";
            TxCodigoNCM->Text = "11000000";
            //LBDescricaoNCM.ResetText();
            //TxCodigoFornecedor->Text = "";
            //LbFornecedor->Text = "";
            /*CbGrupo->SelectedIndex = 1;
            CbSubGrupo->SelectedIndex = 1;
            CbFamilia->SelectedIndex = 1;
            CbSecao->SelectedIndex = 1;
            CbUnidade->SelectedIndex = 1;
            CbTributaria->SelectedIndex = 1;*/
            TxConversao->Text = "0,00";
            //CbOrigem->SelectedIndex = 1;
            //CbCST->SelectedIndex = 4;
            TxQuantidade->Text = "0";
            TxPeso->Text = "0,00";
            TxICMS->Text = "0,00";
            TxBaseCalculo->Text = "0,00";
            TxBaseCST->Text = "0,00";
            TxMVA->Text = "0,00";
            //CbPisCofins->SelectedIndex = 1;
            TxValorPis->Text = "0,00";
            TxValorCofins->Text = "0,00";
            TxCFOP->Text = "1102";
            TxCFOPTransferencia->Text = "1152";
            TxCFOPDevolucao->Text = "1201";
            TxPrecoCusto->Text = "0,00";
            TxPrecoVenda->Text = "0,00";
            TxAliquota->Text = "0,00";
            TxIPI->Text = "0,00";

			TxEAN->Focus();

		 }
private: System::Void BtSalvar_Click(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				if (_mercadoria == nullptr)
				 {

					 String^ CodigoEAN = Realsoft_Consultas::Consultar_CodigoBarras(TxEAN->Text);

					 if (CodigoEAN == nullptr)
					 {
						 _mercadoria = gcnew Mercadoria();

						 _mercadoria->Codigo = Convert::ToDecimal(TxCodigo->Text);
						_mercadoria->EAN = TxEAN->Text;
						_mercadoria->DescricaoMercadoria = TxDescricao->Text;
						_mercadoria->CodigoNCM = Convert::ToDecimal(TxCodigoNCM->Text);
						_mercadoria->DescricaoNCM = LBDescricaoNCM->Text;
						//_mercadoria->CPFCNPJ = TxCPFCNPJ->Text;
						//_mercadoria->Fabricante = LBFabricante->Text;
						_mercadoria->Grupo = CbGrupo->Text;
						_mercadoria->SubGrupo = CbSubGrupo->Text;
						_mercadoria->Familia = CbFamilia->Text;
						_mercadoria->Secao = CbSecao->Text;
						_mercadoria->Unidade = CbUnidade->Text;
						_mercadoria->Conversao = Convert::ToDecimal(TxConversao->Text);
						_mercadoria->Origem = CbOrigem->Text;
						_mercadoria->CST = CbCST->Text;
						String^ Tributaria = Realsoft_Consultas::Consultar_SituacaoTributaria(CbTributaria->Text);
						_mercadoria->SituacaoTributaria = Tributaria;
						_mercadoria->Quantidade = TxQuantidade->Text;
						_mercadoria->Peso = Convert::ToDecimal(Decimal::Parse(TxPeso->Text).ToString("#####0.00"));
						_mercadoria->ICMS = Convert::ToDecimal(Decimal::Parse(TxICMS->Text).ToString("#####0.00"));
						_mercadoria->BaseCalculo = Convert::ToDecimal(Decimal::Parse(TxBaseCalculo->Text).ToString("#####0.00"));
						_mercadoria->BaseCST = Convert::ToDecimal(Decimal::Parse(TxBaseCST->Text).ToString("#####0.00"));
						_mercadoria->MVA = Convert::ToDecimal(Decimal::Parse(TxMVA->Text).ToString("#####0.00"));
						_mercadoria->IPI = Convert::ToDecimal(Decimal::Parse(TxIPI->Text).ToString("#####0.00"));
						_mercadoria->Validade = Convert::ToInt32(TxValidade->Text);
						_mercadoria->Aliquota = Convert::ToDecimal(TxAliquota->Text);
						_mercadoria->PisCofins = CbPisCofins->Text;
						_mercadoria->ValorPis = Convert::ToDecimal(Decimal::Parse(TxValorPis->Text).ToString("#####0.00"));
						_mercadoria->ValorCofins = Convert::ToDecimal(Decimal::Parse(TxValorCofins->Text).ToString("#####0.00"));
						_mercadoria->CFOP = Convert::ToDecimal(TxCFOP->Text);
						_mercadoria->CFOPTransferencia = Convert::ToDecimal(TxCFOPTransferencia->Text);
						_mercadoria->CFOPDevolucao = Convert::ToDecimal(TxCFOPDevolucao->Text);
						_mercadoria->PrecoCusto = Convert::ToDecimal(Decimal::Parse(TxPrecoCusto->Text).ToString("#####0.00"));
						_mercadoria->PrecoVenda = Convert::ToDecimal(Decimal::Parse(TxPrecoVenda->Text).ToString("#####0.00"));
						_mercadoria->Fracionado = chprodutopesavel->Checked;
						_mercadoria->Ativo = true;

						Realsoft_Consultas::Insere_MercadoriaCaixa(_mercadoria);

						MessageBox::Show("Mercadoria criada com sucesso","Cadastro de Mercadorias",MessageBoxButtons::OK,MessageBoxIcon::Information);
					 }
					 else
					 {
						 throw gcnew Exception("MERCADORIA JA CADASTRADA");
					 }
				 }
				 else
				 {
					 _mercadoria->Codigo = Convert::ToDecimal(TxCodigo->Text);
					_mercadoria->EAN = TxEAN->Text;
					_mercadoria->DescricaoMercadoria = TxDescricao->Text;
					_mercadoria->CodigoNCM = Convert::ToDecimal(TxCodigoNCM->Text);
					_mercadoria->DescricaoNCM = LBDescricaoNCM->Text;
					//_mercadoria->CPFCNPJ = TxCPFCNPJ->Text;
					//_mercadoria->Fabricante = LBFabricante->Text;
					_mercadoria->Grupo = CbGrupo->Text;
					_mercadoria->SubGrupo = CbSubGrupo->Text;
					_mercadoria->Familia = CbFamilia->Text;
					_mercadoria->Secao = CbSecao->Text;
					_mercadoria->Unidade = CbUnidade->Text;
					_mercadoria->Conversao = Convert::ToDecimal(TxConversao->Text);
					_mercadoria->Origem = CbOrigem->Text;
					_mercadoria->CST = CbCST->Text;
					String^ Tributaria = Realsoft_Consultas::Consultar_SituacaoTributaria(CbTributaria->Text);
					_mercadoria->SituacaoTributaria = Tributaria;
					_mercadoria->Quantidade = TxQuantidade->Text;
					_mercadoria->Peso = Convert::ToDecimal(Decimal::Parse(TxPeso->Text).ToString("#####0.00"));
					_mercadoria->ICMS = Convert::ToDecimal(Decimal::Parse(TxICMS->Text).ToString("#####0.00"));
					_mercadoria->BaseCalculo = Convert::ToDecimal(Decimal::Parse(TxBaseCalculo->Text).ToString("#####0.00"));
					_mercadoria->BaseCST = Convert::ToDecimal(Decimal::Parse(TxBaseCST->Text).ToString("#####0.00"));
					_mercadoria->MVA = Convert::ToDecimal(Decimal::Parse(TxMVA->Text).ToString("#####0.00"));
					_mercadoria->IPI = Convert::ToDecimal(Decimal::Parse(TxIPI->Text).ToString("#####0.00"));
					_mercadoria->Validade = Convert::ToInt32(TxValidade->Text);
					_mercadoria->Aliquota = Convert::ToDecimal(TxAliquota->Text);
					_mercadoria->PisCofins = CbPisCofins->Text;
					_mercadoria->ValorPis = Convert::ToDecimal(Decimal::Parse(TxValorPis->Text).ToString("#####0.00"));
					_mercadoria->ValorCofins = Convert::ToDecimal(Decimal::Parse(TxValorCofins->Text).ToString("#####0.00"));
					_mercadoria->CFOP = Convert::ToDecimal(TxCFOP->Text);
					_mercadoria->CFOPTransferencia = Convert::ToDecimal(TxCFOPTransferencia->Text);
					_mercadoria->CFOPDevolucao = Convert::ToDecimal(TxCFOPDevolucao->Text);
					_mercadoria->PrecoCusto = Convert::ToDecimal(Decimal::Parse(TxPrecoCusto->Text).ToString("#####0.00"));
					_mercadoria->PrecoVenda = Convert::ToDecimal(Decimal::Parse(TxPrecoVenda->Text).ToString("#####0.00"));
					_mercadoria->Fracionado = chprodutopesavel->Checked;
					_mercadoria->Ativo = true;

						Realsoft_Consultas::Update_Mercadoria(_mercadoria);

						MessageBox::Show("Mercadoria atualizada com sucesso","Cadastro de Mercadorias",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		
		 }
private: System::Void BtGerarCodigo_Click(System::Object^  sender, System::EventArgs^  e) {
			 TxEAN->Text = _Codigo->Next(999999).ToString();
	}
};
}