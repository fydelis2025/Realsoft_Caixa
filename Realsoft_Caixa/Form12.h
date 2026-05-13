#include<io.h>
#include<iostream>
#include"FormMovimentacao.h"
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
	using namespace MySql::Data;
	using namespace MySql::Data::MySqlClient;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);
	/// <summary>
	/// Summary for Form12
	/// </summary>
	public ref class Form12 : public System::Windows::Forms::Form
	{
	public:
		Form12(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Form12::Form12_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form12()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::DataGridView^  DgLista;

	public: 







	private: 


	internal: 


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fechamentoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  encerrarCaixaToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Descricao;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Valor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Retirada;

	internal: 




	public: 






	internal: 

	public: 





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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form12::typeid));
			this->DgLista = (gcnew System::Windows::Forms::DataGridView());
			this->Descricao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Valor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Retirada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fechamentoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encerrarCaixaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// DgLista
			// 
			this->DgLista->AllowUserToAddRows = false;
			this->DgLista->AllowUserToDeleteRows = false;
			this->DgLista->AllowUserToResizeColumns = false;
			this->DgLista->AllowUserToResizeRows = false;
			this->DgLista->BackgroundColor = System::Drawing::Color::White;
			this->DgLista->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DgLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DgLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Descricao, this->Valor,
					this->Retirada
			});
			this->DgLista->GridColor = System::Drawing::SystemColors::Desktop;
			this->DgLista->Location = System::Drawing::Point(24, 109);
			this->DgLista->Name = L"DgLista";
			this->DgLista->RowHeadersVisible = false;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->DgLista->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DgLista->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DgLista->Size = System::Drawing::Size(752, 338);
			this->DgLista->TabIndex = 122;
			this->DgLista->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form12::DgLista_CellContentClick);
			this->DgLista->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form12::DgLista_KeyDown);
			this->DgLista->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form12::DgLista_KeyPress);
			// 
			// Descricao
			// 
			this->Descricao->FillWeight = 550;
			this->Descricao->Frozen = true;
			this->Descricao->HeaderText = L"Descricao";
			this->Descricao->Name = L"Descricao";
			this->Descricao->Width = 550;
			// 
			// Valor
			// 
			this->Valor->HeaderText = L"Valor";
			this->Valor->Name = L"Valor";
			// 
			// Retirada
			// 
			this->Retirada->HeaderText = L"Retirada";
			this->Retirada->Name = L"Retirada";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fechamentoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(32, 517);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(105, 24);
			this->menuStrip1->TabIndex = 125;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// fechamentoToolStripMenuItem
			// 
			this->fechamentoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->encerrarCaixaToolStripMenuItem });
			this->fechamentoToolStripMenuItem->Name = L"fechamentoToolStripMenuItem";
			this->fechamentoToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->fechamentoToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->fechamentoToolStripMenuItem->Text = L"&Fechamento";
			// 
			// encerrarCaixaToolStripMenuItem
			// 
			this->encerrarCaixaToolStripMenuItem->Name = L"encerrarCaixaToolStripMenuItem";
			this->encerrarCaixaToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->encerrarCaixaToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->encerrarCaixaToolStripMenuItem->Text = L"Fechamento - Caixa";
			this->encerrarCaixaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form12::encerrarCaixaToolStripMenuItem_Click);
			// 
			// Form12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 600);
			this->ControlBox = false;
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->DgLista);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form12";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form12::Form12_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form12::Form12_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form12_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
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
	private: System::Void Form12_Load(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			DgLista->Rows->Clear();

			List<Realsoft_FormaPgto^>^ Forma = Realsoft_Consultas::Listar_MovimentacaoPagamento();

			for (int i = 0; i <= Forma->Count - 1; i++)
			{
				array<String ^>^ args = gcnew array<String ^>(3);

				args[0] = Forma[i]->Descricao;
				args[1] = Realsoft_Consultas::Consultar_MovimentacaoPagamento(Forma[i]->Descricao, Realsoft_Sistema::IDOperador).ToString("#####0.00");
				
				if (Forma[i]->Descricao->Equals("Dinheiro"))
				{
					args[2] = "";
				}
				else
				{
					args[2] = Realsoft_Consultas::Consultar_MovimentacaoPagamento(Forma[i]->Descricao, Realsoft_Sistema::IDOperador).ToString("#####0.00");
				}

				DgLista->Rows->Add(args);
			}

			DgLista->Columns[0]->Frozen = true;
			DgLista->Columns[0]->ReadOnly = true;
			DgLista->Columns[0]->Resizable = DataGridViewTriState::True;

			DgLista->Columns[1]->Frozen = true;
			DgLista->Columns[1]->ReadOnly = true;
			DgLista->Columns[1]->Resizable = DataGridViewTriState::True;

			DgLista->Columns[2]->Frozen = false;
			DgLista->Columns[2]->ReadOnly = false;
			DgLista->Columns[2]->Resizable = DataGridViewTriState::True;
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		 
private: static bool srvred = false;

private: System::Void encerrarCaixaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 System::Windows::Forms::DialogResult  Pergunta;

				 Pergunta = MessageBox::Show("Deseja finalizar o ECF, para troca de turno?","Atenção",MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

				 if (Pergunta == System::Windows::Forms::DialogResult::Yes)
				 {

						for(int i = 0;i<= DgLista->Rows->Count -1; i++)
						{
							Realsoft_Geral::Criar_Tesouraria(DgLista->Rows[i]->Cells[0]->Value->ToString(), Decimal::Parse(DgLista->Rows[i]->Cells[1]->Value->ToString()), Decimal::Parse(DgLista->Rows[i]->Cells[2]->Value->ToString()), Decimal::Parse(DgLista->Rows[i]->Cells[2]->Value->ToString()));
						}

						Decimal Total = 0;

						for each(DataGridViewRow ^Coluna in DgLista->Rows)
						{
							Decimal Valor = Convert::ToDecimal(Coluna->Cells[2]->Value->ToString());

							Total = Decimal::Add(Total, Valor);
						}

						Realsoft_Geral::Movimentacao_Caixa("FECHAMENTO TURNO", Total);

						if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						{
							Realsoft_Bematech::Imprime_Fechamento(Realsoft_Sistema::IDOperador, Total);
						}
						else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						{
							Realsoft_Elgin::ImprimeFechamento();
						}
						else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						{
							Realsoft_Daruma::Imprime_Fechamento();
						}
						else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						{
							Realsoft_BematechNaoFiscal::ImprimeFechamentoCaixa(Realsoft_Sistema::IDOperador,Total);
							Application::Restart();
						}
						else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
						{
							Realsoft_BematechNaoFiscal::ImprimeFechamentoCaixa(Realsoft_Sistema::IDOperador, Total);
							Application::Restart();
						}
						else
						{
							throw gcnew Exception("OPÇÃO INVÁLIDA");
						}

						int _turnoOperando = Realsoft_Consultas::Consultar_TurnoOperando();

						String ^RetornaDescricao = Realsoft_Consultas::Consultar_DescricaoTurnoOperando(_turnoOperando);

						Realsoft_Consultas::Encerra_TurnoAtual(RetornaDescricao);

						Realsoft_Consultas::Update_CaixaemUso(true);

						Ping ^ pingSender = gcnew Ping;
						IPAddress^ address = IPAddress::Loopback;
						PingReply ^ reply = pingSender->Send(Realsoft_Sistema::Ipservidor,10);

						if (reply->Status == IPStatus::Success)
						{

							FormMovimentacao ^__mov__ = gcnew FormMovimentacao();
							__mov__->ShowDialog();
						}
						else
						{
							srvred = true;
							throw gcnew Exception("SERVIDOR NAO ENCONTRADO OU FORA DA REDE");
						}

				 }				 
				 else if (Pergunta == System::Windows::Forms::DialogResult::No)
				 {
					 System::Windows::Forms::DialogResult  RDZ;

					 RDZ = MessageBox::Show("Deseja realmente emitir a redução Z?", "Atenção", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

					 if (Pergunta == System::Windows::Forms::DialogResult::Yes)
					 {

						 for (int i = 0; i <= DgLista->Rows->Count - 1; i++)
						 {
							 Realsoft_Geral::Criar_Tesouraria(DgLista->Rows[i]->Cells[0]->Value->ToString(), Decimal::Parse(DgLista->Rows[i]->Cells[1]->Value->ToString()), Decimal::Parse(DgLista->Rows[i]->Cells[2]->Value->ToString()), Decimal::Parse(DgLista->Rows[i]->Cells[2]->Value->ToString()));
						 }

						 Decimal Total = 0;

						 for each(DataGridViewRow ^Coluna in DgLista->Rows)
						 {
							 Decimal Valor = Convert::ToDecimal(Coluna->Cells[2]->Value->ToString());

							 Total = Decimal::Add(Total, Valor);
						 }

						 Realsoft_Geral::Movimentacao_Caixa("REDUCAOZ", Total);

						 int _turnoOperando = Realsoft_Consultas::Consultar_TurnoOperando();

						 String ^RetornaDescricao = Realsoft_Consultas::Consultar_DescricaoTurnoOperando(_turnoOperando);

						 Realsoft_Consultas::Encerra_TurnoAtual(RetornaDescricao);

						 Realsoft_Consultas::Update_CaixaemUso(true);

						 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Realsoft_Bematech::Imprime_Fechamento(Realsoft_Sistema::IDOperador, Total);

							 Realsoft_Bematech::ImprimeReducaoZ("", "");
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Realsoft_Elgin::ImprimeReduacoZ();
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
						 {
							 Realsoft_Daruma::ImprimeReducaoZ("", "");
						 }
						 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
						 {
							 Realsoft_BematechNaoFiscal::ImprimeFechamentoCaixa(Realsoft_Sistema::IDOperador, Total);

						 }
						 else
						 {
							 throw gcnew Exception("OPÇÃO INVÁLIDA");
						 }

						 

						 Ping ^ pingSender = gcnew Ping;
						 IPAddress^ address = IPAddress::Loopback;
						 PingReply ^ reply = pingSender->Send(Realsoft_Sistema::Ipservidor, 10);

						 if (reply->Status == IPStatus::Success)
						 {

							 FormMovimentacao ^__mov__ = gcnew FormMovimentacao();
							 __mov__->ShowDialog();
						 }
						 else
						 {
							 srvred = true;
							 throw gcnew Exception("SERVIDOR NAO ENCONTRADO OU FORA DA REDE");
						 }
						 
						 this->Close();
					 }
				 }
				 else
				 {
					 this->Close();
				 }

			 }
			 catch(Exception ^ex)
			 {
				MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 finally
			 {
				 if (srvred.Equals(true))
				 {
					 Application::Restart();
				 }
			 }
		 }
private: System::Void DgLista_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void DgLista_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		DgLista->Columns[2]->Frozen = true;
		DgLista->Columns[2]->ReadOnly = true;
		DgLista->Columns[2]->Resizable = DataGridViewTriState::True;


	}
}
private: System::Void DgLista_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	try
	{
		DgLista->Rows[0]->Cells[2]->Value = DgLista->Rows[0]->Cells[2]->Value + Convert::ToString(e->KeyChar);
					
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
