#include<io.h>
#include<iostream>
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
	/// <summary>
	/// Summary for FormPrecos
	/// </summary>

		[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);
	public ref class FormPrecos : public System::Windows::Forms::Form
	{
	public:
		FormPrecos(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormPrecos::FormPrecos_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPrecos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label33;
	protected: 
	private: System::Windows::Forms::Label^  label34;

	private: System::Windows::Forms::TextBox^  TxConsultarDescricao;
	private: System::Windows::Forms::TextBox^  TxConsultarEAN;

	private: System::Windows::Forms::DataGridView^  DgLista;






	private: Megasoft::MegasoftButton^  BtPesquizar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  EAN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Descricao;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PrecoVenda;
	private: System::Windows::Forms::DataGridViewButtonColumn^  gravar;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPrecos::typeid));
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->TxConsultarDescricao = (gcnew System::Windows::Forms::TextBox());
			this->TxConsultarEAN = (gcnew System::Windows::Forms::TextBox());
			this->DgLista = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EAN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descricao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrecoVenda = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gravar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->BtPesquizar = (gcnew Megasoft::MegasoftButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->BeginInit();
			this->SuspendLayout();
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(338, 537);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(55, 13);
			this->label33->TabIndex = 400;
			this->label33->Text = L"Descrição";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->ForeColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(12, 539);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 13);
			this->label34->TabIndex = 399;
			this->label34->Text = L"Código EAN";
			// 
			// TxConsultarDescricao
			// 
			this->TxConsultarDescricao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxConsultarDescricao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TxConsultarDescricao->Location = System::Drawing::Point(341, 553);
			this->TxConsultarDescricao->Name = L"TxConsultarDescricao";
			this->TxConsultarDescricao->Size = System::Drawing::Size(390, 29);
			this->TxConsultarDescricao->TabIndex = 397;
			this->TxConsultarDescricao->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormPrecos::TxConsultarDescricao_KeyPress);
			// 
			// TxConsultarEAN
			// 
			this->TxConsultarEAN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxConsultarEAN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxConsultarEAN->Location = System::Drawing::Point(12, 553);
			this->TxConsultarEAN->Name = L"TxConsultarEAN";
			this->TxConsultarEAN->Size = System::Drawing::Size(323, 29);
			this->TxConsultarEAN->TabIndex = 396;
			this->TxConsultarEAN->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormPrecos::TxConsultarEAN_KeyDown);
			// 
			// DgLista
			// 
			this->DgLista->AllowUserToAddRows = false;
			this->DgLista->AllowUserToDeleteRows = false;
			this->DgLista->AllowUserToResizeColumns = false;
			this->DgLista->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DarkOrange;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->DgLista->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DgLista->BackgroundColor = System::Drawing::Color::White;
			this->DgLista->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::DarkOrange;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DgLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DgLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Codigo, this->EAN,
					this->Descricao, this->PrecoVenda, this->gravar
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::PaleGreen;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DgLista->DefaultCellStyle = dataGridViewCellStyle3;
			this->DgLista->GridColor = System::Drawing::SystemColors::Desktop;
			this->DgLista->Location = System::Drawing::Point(12, 112);
			this->DgLista->Name = L"DgLista";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DgLista->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->DgLista->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::PaleTurquoise;
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Wheat;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->DgLista->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->DgLista->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::White;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DgLista->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DgLista->Size = System::Drawing::Size(778, 420);
			this->DgLista->TabIndex = 394;
			this->DgLista->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormPrecos::DgLista_CellClick);
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Codigo";
			this->Codigo->Name = L"Codigo";
			// 
			// EAN
			// 
			this->EAN->FillWeight = 150;
			this->EAN->HeaderText = L"EAN";
			this->EAN->Name = L"EAN";
			this->EAN->Width = 150;
			// 
			// Descricao
			// 
			this->Descricao->FillWeight = 300;
			this->Descricao->HeaderText = L"Descrição";
			this->Descricao->Name = L"Descricao";
			this->Descricao->Width = 300;
			// 
			// PrecoVenda
			// 
			this->PrecoVenda->HeaderText = L"Venda";
			this->PrecoVenda->Name = L"PrecoVenda";
			// 
			// gravar
			// 
			this->gravar->FillWeight = 70;
			this->gravar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gravar->HeaderText = L"Gravar";
			this->gravar->Name = L"gravar";
			this->gravar->Text = L"Gravar";
			this->gravar->UseColumnTextForButtonValue = true;
			this->gravar->Width = 70;
			// 
			// BtPesquizar
			// 
			this->BtPesquizar->BackColor = System::Drawing::Color::Transparent;
			this->BtPesquizar->ButtonColor = System::Drawing::Color::DarkOrange;
			this->BtPesquizar->ButtonText = L"";
			this->BtPesquizar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BtPesquizar->ImageSize = System::Drawing::Size(32, 32);
			this->BtPesquizar->Location = System::Drawing::Point(737, 539);
			this->BtPesquizar->Name = L"BtPesquizar";
			this->BtPesquizar->Size = System::Drawing::Size(51, 48);
			this->BtPesquizar->TabIndex = 401;
			this->BtPesquizar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BtPesquizar->Click += gcnew System::EventHandler(this, &FormPrecos::BtPesquizar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(103, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(579, 37);
			this->label1->TabIndex = 402;
			this->label1->Text = L"PRECIFICAÇÃO DE MERCADORIAS";
			// 
			// FormPrecos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 601);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtPesquizar);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->TxConsultarDescricao);
			this->Controls->Add(this->TxConsultarEAN);
			this->Controls->Add(this->DgLista);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormPrecos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &FormPrecos::FormPrecos_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormPrecos::FormPrecos_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormPrecos_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					DgLista->Columns[0]->Frozen = true;
					DgLista->Columns[0]->ReadOnly = true;
					DgLista->Columns[0]->Resizable = DataGridViewTriState::True;

					DgLista->Columns[1]->Frozen = true;
					DgLista->Columns[1]->ReadOnly = true;
					DgLista->Columns[1]->Resizable = DataGridViewTriState::True;

					DgLista->Columns[2]->Frozen = true;
					DgLista->Columns[2]->ReadOnly = true;
					DgLista->Columns[2]->Resizable = DataGridViewTriState::True;

					DgLista->Columns[3]->Frozen = false;
					DgLista->Columns[3]->ReadOnly = false;
					DgLista->Columns[3]->Resizable = DataGridViewTriState::False;


					List<Mercadoria^>^ __merc = Realsoft_Consultas::Listar_Mercadorias();
					array<String ^>^ args;

					for (int __contador = 0; __contador <= __merc->Count - 1; __contador++)
					{
						args = gcnew array<String ^>(4);
						args[0] = __merc[__contador]->Codigo.ToString();
						args[1] = __merc[__contador]->EAN;
						args[2] = __merc[__contador]->DescricaoMercadoria;
						args[3] = __merc[__contador]->PrecoVenda.ToString("#####0.00");

						DgLista->Rows->Add(args);

					}

				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }
private: System::Void FormPrecos_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode == Keys::Escape)
			 {
				 this->Close();
			 }
		 }


private: System::Void DgLista_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 try
			 {
				if (e->ColumnIndex == 4)
                {
					System::Windows::Forms::DialogResult _resultado;

                    
                    _resultado = MessageBox::Show("Deseja realmente alterar o preço da mercadoria " + DgLista->CurrentRow->Cells[0]->Value + " Alteração de preços","Realsoft", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

					 if (_resultado == System::Windows::Forms::DialogResult::Yes)
					 {
						 Realsoft_Consultas::Update_Precificacao_Mercadoria(DgLista->CurrentRow->Cells[0]->Value->ToString(), DgLista->CurrentRow->Cells[1]->Value->ToString(), DgLista->CurrentRow->Cells[2]->Value->ToString(), Decimal::Parse(DgLista->CurrentRow->Cells[3]->Value->ToString()));

						 throw gcnew Exception("PREÇO ATUALIZADO COM SUCESSO");
					 }
				}
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void TxConsultarEAN_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if(e->KeyCode == Keys::Enter)
				 {
					 DgLista->Rows->Clear();

					 List<Mercadoria^>^ __merc = Realsoft_Consultas::Listar_MercadoriasEAN(TxConsultarEAN->Text);
					 
					 if (__merc != nullptr)
					 {
						 array<String ^>^ args;

						 int __contador = 0;

						 for (__contador = 0; __contador <= __merc->Count - 1; __contador++)
						 {
							 args = gcnew array<String ^>(10);
							 args[0] = __merc[__contador]->Codigo.ToString();
							 args[1] = __merc[__contador]->EAN;
							 args[2] = __merc[__contador]->DescricaoMercadoria;
							 args[3] = __merc[__contador]->PrecoVenda.ToString("#####0.00");

							 DgLista->Rows->Add(args);

						 }
					 }
					 else
					 {
						 throw gcnew Exception("MERCADORIA NÃO ENCONTRADA");
					 }
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void BtPesquizar_Click(System::Object^  sender, System::EventArgs^  e) {
			 
				 DgLista->Rows->Clear();

				 List<Mercadoria^>^ __merc = Realsoft_Consultas::Listar_Mercadorias();
				 array<String ^>^ args;

				 int __contador = 0;

				 for (__contador = 0; __contador <= __merc->Count - 1; __contador++)
				 {
					 args = gcnew array<String ^>(10);
					 args[0] = __merc[__contador]->Codigo.ToString();
					 args[1] = __merc[__contador]->EAN;
					 args[2] = __merc[__contador]->DescricaoMercadoria;
					 args[3] = __merc[__contador]->PrecoVenda.ToString("#####0.00");

					 DgLista->Rows->Add(args);

				 }
		 }
private: System::Void TxConsultarDescricao_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			 try
			 {
				  DgLista->Rows->Clear();

				 List<Mercadoria^>^ _merc = Realsoft_Consultas::Listar_Mercadorias_Digitado(TxConsultarDescricao->Text);
				 
				 array<String ^>^ args;

				 for (int i = 0; i <= _merc->Count -1; i++)
				 {	
					 args = gcnew array<String ^>(10);
					 args[0] = _merc[i]->Codigo.ToString();
					 args[1] = _merc[i]->EAN;
					 args[2] = _merc[i]->DescricaoMercadoria;
					 args[3] = _merc[i]->PrecoVenda.ToString("#####0.00");

					 DgLista->Rows->Add(args);
				 }
			 }
			 catch(Exception^ ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
};
}
