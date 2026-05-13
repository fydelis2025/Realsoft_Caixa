#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;
	using namespace System::IO;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);
	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			this->KeyDown += gcnew  KeyEventHandler(this, &Form5::Form5_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}

	internal: System::Windows::Forms::Label^  TbOpcao;
	internal: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	internal: 
	private: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  TxOpcao;
	internal: System::Windows::Forms::TextBox^  TxOpcao1;
	internal: System::Windows::Forms::TextBox^  TxOpcao2;
	private: System::Windows::Forms::Label^  label4;
	internal: 
	internal: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel1;
	internal: 
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::TextBox^  TxDataFinal;
	private: 

	internal: System::Windows::Forms::TextBox^  TxDataInicial;
	private: 

	private: System::Windows::Forms::Label^  label10;
	internal: 
	private: System::Windows::Forms::Label^  label9;
	private: 

	internal: 




	private: 

	private: 


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form5::typeid));
			this->TbOpcao = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->TxOpcao1 = (gcnew System::Windows::Forms::TextBox());
			this->TxOpcao2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxDataFinal = (gcnew System::Windows::Forms::TextBox());
			this->TxDataInicial = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// TbOpcao
			// 
			this->TbOpcao->BackColor = System::Drawing::Color::Transparent;
			this->TbOpcao->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TbOpcao->ForeColor = System::Drawing::Color::Black;
			this->TbOpcao->Location = System::Drawing::Point(24, 140);
			this->TbOpcao->Name = L"TbOpcao";
			this->TbOpcao->Size = System::Drawing::Size(255, 232);
			this->TbOpcao->TabIndex = 90;
			this->TbOpcao->Text = resources->GetString(L"TbOpcao.Text");
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(24, 424);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 122);
			this->label1->TabIndex = 91;
			this->label1->Text = L"1. Impressa\r\n2. Arquivo\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(97, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 92;
			this->label2->Text = L"Opção 01";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(24, 388);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Opção 02";
			// 
			// TxOpcao
			// 
			this->TxOpcao->BackColor = System::Drawing::Color::White;
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao->ForeColor = System::Drawing::Color::Black;
			this->TxOpcao->Location = System::Drawing::Point(315, 513);
			this->TxOpcao->MaxLength = 16;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(130, 33);
			this->TxOpcao->TabIndex = 94;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form5::TxOpcao_KeyDown);
			// 
			// TxOpcao1
			// 
			this->TxOpcao1->BackColor = System::Drawing::Color::White;
			this->TxOpcao1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxOpcao1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao1->ForeColor = System::Drawing::Color::Black;
			this->TxOpcao1->Location = System::Drawing::Point(479, 513);
			this->TxOpcao1->MaxLength = 16;
			this->TxOpcao1->Name = L"TxOpcao1";
			this->TxOpcao1->Size = System::Drawing::Size(131, 33);
			this->TxOpcao1->TabIndex = 95;
			this->TxOpcao1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form5::TxOpcao1_KeyDown);
			// 
			// TxOpcao2
			// 
			this->TxOpcao2->BackColor = System::Drawing::Color::White;
			this->TxOpcao2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxOpcao2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao2->ForeColor = System::Drawing::Color::Black;
			this->TxOpcao2->Location = System::Drawing::Point(643, 513);
			this->TxOpcao2->MaxLength = 16;
			this->TxOpcao2->Name = L"TxOpcao2";
			this->TxOpcao2->Size = System::Drawing::Size(132, 33);
			this->TxOpcao2->TabIndex = 96;
			this->TxOpcao2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form5::TxOpcao2_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(155, 388);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 20);
			this->label4->TabIndex = 97;
			this->label4->Text = L"Opção 03";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(143, 424);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 122);
			this->label5->TabIndex = 98;
			this->label5->Text = L"1. Data\r\n2. Redução";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->TxDataFinal);
			this->panel1->Controls->Add(this->TxDataInicial);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(342, 187);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(390, 139);
			this->panel1->TabIndex = 99;
			this->panel1->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(287, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 20);
			this->label10->TabIndex = 104;
			this->label10->Text = L"Atenção";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Location = System::Drawing::Point(261, 81);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 52);
			this->label9->TabIndex = 103;
			this->label9->Text = L"Formato da data deve ser ddMMaaaa";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(130, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 20);
			this->label8->TabIndex = 102;
			this->label8->Text = L"Data Final";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(3, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 20);
			this->label7->TabIndex = 101;
			this->label7->Text = L"Data Inicial";
			// 
			// TxDataFinal
			// 
			this->TxDataFinal->BackColor = System::Drawing::Color::White;
			this->TxDataFinal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxDataFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxDataFinal->Location = System::Drawing::Point(134, 90);
			this->TxDataFinal->MaxLength = 16;
			this->TxDataFinal->Name = L"TxDataFinal";
			this->TxDataFinal->Size = System::Drawing::Size(121, 29);
			this->TxDataFinal->TabIndex = 100;
			this->TxDataFinal->Text = L"02/11/2013";
			this->TxDataFinal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxDataFinal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form5::TxDataFinal_KeyDown);
			// 
			// TxDataInicial
			// 
			this->TxDataInicial->BackColor = System::Drawing::Color::White;
			this->TxDataInicial->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxDataInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxDataInicial->Location = System::Drawing::Point(7, 90);
			this->TxDataInicial->MaxLength = 16;
			this->TxDataInicial->Name = L"TxDataInicial";
			this->TxDataInicial->Size = System::Drawing::Size(121, 29);
			this->TxDataInicial->TabIndex = 99;
			this->TxDataInicial->Text = L"01/11/2013";
			this->TxDataInicial->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxDataInicial->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form5::TxDataInicial_KeyDown);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(3, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(384, 20);
			this->label6->TabIndex = 98;
			this->label6->Text = L"Informe o Período";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 600);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TxOpcao2);
			this->Controls->Add(this->TxOpcao1);
			this->Controls->Add(this->TxOpcao);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TbOpcao);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form5::Form5_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {

				 try
				 {
					 TxDataInicial->Text = DateTime::Now.ToString("dd/MM/yyyy");
					 TxDataFinal->Text = DateTime::Now.ToString("dd/MM/yyyy");
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }

			 }
private: System::Void Form5_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 	
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
			 if (e->KeyCode == Keys::Enter)
			 {
				 try
				 {
					 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 if (TxOpcao->Text->Equals("1"))
						 {
							 Realsoft_Bematech::Imprime_LeituraX();							 
						 }
						 else if (TxOpcao->Text->Equals("2"))
						 {
							 //Leitura LMFC

							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text->Equals("3"))
						 {
							 //Leitura LMFS

							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text == "5")
						 {
							 //Leitura Espelho MFD 
							 TxOpcao1->Focus();	
						 }
						 else if (TxOpcao->Text == "6")
						 {
							 //Leitura Espelho MFD 
							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text->Trim()->Length == 7)
						 {

						 }
						 else if (TxOpcao->Text->Trim()->Length == 8)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 9)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 10)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 11)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 12)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 13)
						 {
						 }
						 else
						 {
							 throw gcnew Exception("OPÇÃO INVÁLIDA");
							 return;
						 }
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 if (TxOpcao->Text->Equals("1"))
						 {
							 Realsoft_Elgin::Elgin_EmiteLeituraX();
						 }
						 else if (TxOpcao->Text->Equals("2"))
						 {
							 //Leitura LMFC
							 
							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text->Equals("3"))
						 {
							 //Leitura LMFS

							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text == "5")
						 {
							 //Leitura Espelho MFD 
							 TxOpcao1->Focus();
						 }
						 else if(TxOpcao->Text == "6")
						 {
							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text->Trim()->Length == 7)
						 {
							
						 }
						 else if (TxOpcao->Text->Trim()->Length == 8)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 9)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 10)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 11)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 12)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 13)
						 {
						 }
						 else
						 {
							 throw gcnew Exception("OPÇÃO INVÁLIDA");
							 return;
						 }
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 if (TxOpcao->Text->Equals("1"))
						 {
							 Realsoft_Daruma::LeituraX();
						 }
						 else if (TxOpcao->Text->Equals("2"))
						 {
							 //Leitura LMFC

							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text->Equals("3"))
						 {
							 //Leitura LMFS

							 TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text->Equals("5"))
						 {
							 //Leitura Espelho MFD 
							 TxOpcao1->Focus();
						 }
						 else if(TxOpcao->Text->Equals("6"))
						 {
							  TxOpcao1->Focus();
						 }
						 else if (TxOpcao->Text->Equals("7"))
						 {
							 System::Windows::Forms::DialogResult  Pergunta;

							Pergunta = MessageBox::Show("Deseja gerar a tabela de produtos?","Atenção",MessageBoxButtons::YesNo, MessageBoxIcon::Question);

							if (Pergunta == System::Windows::Forms::DialogResult::Yes)
							{
								//Realsoft_Utilitario::GerarTabProd();
							}
						 }
						 else if (TxOpcao->Text->Trim()->Length == 8)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 9)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 10)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 11)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 12)
						 {
						 }
						 else if (TxOpcao->Text->Trim()->Length == 13)
						 {
						 }
						 else
						 {
							 throw gcnew Exception("OPÇÃO INVÁLIDA");
							 return;
						 }
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 if (TxOpcao->Text->Equals(1))
						 {

						 }
					 }
					 else
					 {
						MessageBox::Show("Impressora não cadastrada","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					 }
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }
		 }
private: System::Void TxOpcao1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if (e->KeyCode == Keys::Enter) // 1 = Impressa/ 2 = Arquivo
				 {
					 if (TxOpcao1->Text->Trim()->Length == 1)
					 {
						 TxOpcao2->Focus();
					 }
					 else if (TxOpcao1->Text->Trim()->Length == 2)
					 {
						 TxOpcao2->Focus();
					 }

					 else
					 {
						 MessageBox::Show("Opção inválida","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
						 return;
					 }
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void TxOpcao2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				

					 panel1->Visible = true;
					 TxDataInicial->Focus();
				
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void TxDataInicial_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 try
			 {
				 if (e->KeyCode == Keys::Enter)
				 {
					TxDataFinal->Focus();
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void TxDataFinal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 	 
				if (e->KeyCode == Keys::Enter)
				 {
					 try
						 {
						 String ^DtInicial = TxDataInicial->Text->Trim()->Replace("/","");
						 String ^DtFinal = TxDataFinal->Text->Trim()->Replace("/","");

						 if (TxOpcao->Text->Equals("1")  & TxOpcao2->Text->Equals("1"))
						 {
							 //Impresso por data

							if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								Realsoft_Bematech::ImprimeLeituraMemoriaFiscalData(DtInicial, DtFinal);

								panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Realsoft_Daruma::LMFCImpresso(TxDataInicial->Text, TxDataFinal->Text);

								panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();
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
						 else if (TxOpcao->Text->Equals("2") & TxOpcao1->Text->Equals("1")& TxOpcao2->Text == "1")//Leitura Memoria fiscal Completa
						 {
							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Realsoft_Bematech::ImprimeLeituraMemoriaFiscalData(DtInicial, DtFinal);
								 
								 panel1->Visible = false;

								 TxOpcao->Text = "";
								 TxOpcao1->Text = "";
								 TxOpcao2->Text = "";
								 TxOpcao->Focus();
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Realsoft_Elgin::ImprimieMemoriaLMFC(DtInicial,DtFinal);
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								Realsoft_Daruma::LMFCImpresso(DtInicial, DtFinal);	

								panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();
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
						 else if (TxOpcao->Text == "2" & TxOpcao1->Text =="2" & TxOpcao2->Text =="1")//gera arquivo leitura de memoria fiscal por data
						 {
							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Realsoft_Elgin::GeraLeituraMemoriaLMFC(DtInicial,DtFinal);

								 String ^Caminho = Environment::CurrentDirectory + "\\ArquivoECF\\LeituraLMFC\\LeituraFiscal.txt";

								 File::Move("IMPR2.txt", Caminho);

								 panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();

								 throw gcnew Exception("ARQUIVO GERADO COM SUCESSO "+ Caminho);
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
									
								panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
							
							 }
							 
						 }				 
						 else if (TxOpcao->Text == "3" & TxOpcao1->Text =="1" & TxOpcao2->Text =="1")//Leitura Memoria fiscal simples
						 {
							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Realsoft_Elgin::ImprimieMemoriaLMFS(DtInicial,DtFinal);
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								Realsoft_Daruma::LMFCImpresso(DtInicial, DtFinal);	

								panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();
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
						 else if (TxOpcao->Text =="3" & TxOpcao1->Text =="2" & TxOpcao2->Text =="1")//Leitura Memoria fiscal simples
						 {
							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 Realsoft_Elgin::GeraLeituraMemoriaLMFS(DtInicial,DtFinal);

								 String ^Caminho = Environment::CurrentDirectory + "\\ArquivoECF\\LeituraLMFC\\LeituraFiscal.txt";

								 File::Move("IMPR2.txt", Caminho);

								 panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();

								 throw gcnew Exception("ARQUIVO GERADO COM SUCESSO "+ Caminho);
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
									
								panel1->Visible = false;

								TxOpcao->Text = "";
								TxOpcao1->Text = "";
								TxOpcao2->Text = "";
								TxOpcao->Focus();
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
							
							 }
						 }
						 else if (TxOpcao->Text =="5" & TxOpcao1->Text =="2" & TxOpcao2->Text =="1")
						 {
							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 try
								 {
									 panel1->Visible = false;

									 String ^Retorno = Realsoft_Elgin::EspelhoMFD(DtInicial, DtFinal);

									 throw gcnew Exception(Retorno);
								 }
								 catch (Exception ^ex)
								 {
									 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

								 int Ret = Realsoft_Daruma::EspelhoMFD(Realsoft_Daruma::Tipo::p2.ToString(), DtInicial, DtFinal);

								 if (Ret == 0)
								 {
									 throw gcnew Exception("Erro de comunicação, não foi possível enviar o método. ");
								 }

								 panel1->Visible = false;

								 TxOpcao->Text = "";
								 TxOpcao1->Text = "";
								 TxOpcao2->Text = "";
								 TxOpcao->Focus();
							 }

						 }
						 else if (TxOpcao->Text == "6" & TxOpcao1->Text == "1" & TxOpcao2->Text =="1")
						 {
							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 if (TxOpcao1->Text->Equals("2"))
								 {
									 Realsoft_Daruma::GerarRelatorioAtoCotep(2, DtInicial, DtFinal);

									 panel1->Visible = false;

									 TxOpcao->Text = "";
									 TxOpcao1->Text = "";
									 TxOpcao2->Text = "";
									 TxOpcao->Focus();
								 }
								 else
								 {
									 Realsoft_Daruma::GerarRelatorioAtoCotep(1, DtInicial, DtFinal);

									 panel1->Visible = false;

									 TxOpcao->Text = "";
									 TxOpcao1->Text = "";
									 TxOpcao2->Text = "";
									 TxOpcao->Focus();
								 }
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {

							 }
							 else
							 {

							 }
						 }
						 else if (TxOpcao->Text == "6" & TxOpcao1->Text == "2" & TxOpcao2->Text == "1")
						 {
							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 String ^RetCaminho = Realsoft_Daruma::gerarArquivoMF(DtInicial, DtFinal);
								 throw gcnew Exception(RetCaminho);
							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								  short retorno = Realsoft_Elgin::DownloadArqMFD(DtInicial, DtFinal);

								  Realsoft_Elgin::ArqMFD(DtInicial, DtFinal);

								  panel1->Visible = false;
								  TxOpcao->Text = "";
								  TxOpcao1->Text = "";
								  TxOpcao2->Text = "";
								  TxOpcao->Focus();

								  throw gcnew Exception("LEITURA EFETUADA COM SUCESSO ");
							 }
						 }
						 else 
						 {
							 //Arquivo por data
							 throw gcnew Exception("OPÇÃO INVÁLIDA");

						 }
					 }
					 catch(Exception ^ex)
					 {
						 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
				 }
			 
		 }
};
}
