#include"Form2.h"
#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;
	/// <summary>
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		Form6(void)
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
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::TextBox^  TxValor;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	internal: 

	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form6::typeid));
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TxValor
			// 
			this->TxValor->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxValor->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxValor->Location = System::Drawing::Point(118, 115);
			this->TxValor->MaxLength = 20;
			this->TxValor->Name = L"TxValor";
			this->TxValor->Size = System::Drawing::Size(226, 34);
			this->TxValor->TabIndex = 116;
			this->TxValor->Text = L"0,00";
			this->TxValor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxValor->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form6::TxValor_KeyDown);
			this->TxValor->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form6::TxValor_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(115, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 117;
			this->label1->Text = L"VALOR";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 99);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 64);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 119;
			this->pictureBox1->TabStop = false;
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(383, 189);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxValor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: static Movimentacao ^_Mov = gcnew Movimentacao();
		
public: static int ReotornoOperador = 0;
public: static String ^_Operador;

public: void setOperador(int Operador, String ^Nome)
			{
				ReotornoOperador = Operador;
				_Operador = Nome;
				Realsoft_Sistema::IDOperador = Operador;
			}


	private: static Login ^Login;

	private: System::Void TxValor_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			if(e->KeyCode == Keys::Enter)
			 {
				 try
				 {
					 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 Realsoft_Bematech::ImprimeSuprimento(TxValor->Text);
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 try
						 {
							Realsoft_Elgin::Suprimento(Decimal::Parse(TxValor->Text),"");

						 }
						 catch(Exception ^ex)
						 {
							 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 
						 }
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {
						 Realsoft_Daruma::Suprimento(TxValor->Text,"");
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Epson") & Realsoft_Sistema::Modo->Equals("Fiscal"))
					 {

					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
					 {
						 Realsoft_BematechNaoFiscal::ImprimirRelatorioInicial(Decimal::Parse(TxValor->Text));
					 }
					 else if (Realsoft_Sistema::Retorno->Equals("Default") & Realsoft_Sistema::Modo->Equals("Default"))
					 {

					 }
					 else
					 {
						 MessageBox::Show("Impressora não cadastrada","Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
						 return;
					 }

						 Form2 ^_Principal = gcnew Form2();		

						 if (_Operador->Length > 11)
						 {
							 _Principal->LbUsuario->Text = _Operador->Substring(0,10);
						 }
						 else
						 {
							_Principal->LbUsuario->Text = _Operador->ToUpper();
						 }

						 this->Hide();	

						 _Mov->Turno = Realsoft_Consultas::Consultar_TurnoOperando();
						 _Mov->DataMovimentacao = DateTime::Now;
						 _Mov->Tipo = Realsoft_Consultas::Consultar_TipoMovimentacao("ABERTURA");
						 _Mov->DescricaoMov = "ABERTURA";
						 _Mov->Valor = Decimal::Parse(TxValor->Text);
						 _Mov->OPerador = ReotornoOperador;
						 _Mov->Fiscal = 0;
						 _Mov->Finalizado = false;
						 _Mov->DataCriacao = DateTime::Now;
					 
						 Realsoft_Consultas::Insere_MovimentacaoCaixa(_Mov);

						 _Principal->ShowDialog();

				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 return;
				 }
			 }
			 }
private: System::Void TxValor_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			
			 if (!Char::IsNumber(e->KeyChar) && !(e->KeyChar == ',') && !(e->KeyChar == '.') && !(e->KeyChar == Convert::ToChar(8)))
            {
                e->Handled = true;
            }
		 }
private: System::Void Form6_Load(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
};
}
