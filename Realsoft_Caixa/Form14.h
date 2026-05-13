#include<iostream>
#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO;
	using namespace Realsoft_Class;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	/// <summary>
	/// Summary for Form14
	/// </summary>
	public ref class Form14 : public System::Windows::Forms::Form
	{
	public:
		Form14(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Form14::Form14_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form14()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  TxtMensagem;

	internal:
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::ComponentModel::IContainer^  components;

	internal: 
	protected: 

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form14::typeid));
			this->TxtMensagem = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TxtMensagem
			// 
			this->TxtMensagem->BackColor = System::Drawing::Color::Transparent;
			this->TxtMensagem->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtMensagem->ForeColor = System::Drawing::Color::Yellow;
			this->TxtMensagem->Location = System::Drawing::Point(10, 72);
			this->TxtMensagem->Name = L"TxtMensagem";
			this->TxtMensagem->Size = System::Drawing::Size(384, 80);
			this->TxtMensagem->TabIndex = 45;
			this->TxtMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// timer1
			// 
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form14::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(147, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 29);
			this->label1->TabIndex = 47;
			this->label1->Text = L"ATENÇÃO";
			// 
			// Form14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(406, 161);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->TxtMensagem);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form14";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Activated += gcnew System::EventHandler(this, &Form14::Form14_Activated);
			this->Load += gcnew System::EventHandler(this, &Form14::Form14_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form14::Form14_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form14_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 this->Opacity = 0;

					 if (ConfiguracaoTEF::_ModoTEF == true)
					 {
						 TxtMensagem->Text = "AGUARDE PROCESSANDO TEF...";
						 
						 ComunicacaoTEF::ApagaArquivoResposta();

						 ComunicacaoTEF::IniciaTransacaoTEF();

						 //BKProcess->RunWorkerAsync();
						 timer1->Enabled = true;
					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }

	//public: void SetMensagem(String ^Mensagem)
	//		{
	//			TxtMensagem->Text = Mensagem;
	//		}
	private: System::Void Form14_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

				 if (e->KeyCode == Keys::Escape)
				 {
					 this->timer1->Enabled = false;

					 this->Close();
				 }
			 }
	private: System::Void Form14_Activated(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 if (TEF::PararMensagem == true)
					 {
						 this->Close();
					 }

				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }

			 Decimal SomaTotal, Saldo;
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 if (File::Exists("C:\\TEF_DIAL\\RESP\\intpos.001"))
					 {

						 Boolean _aguarda = ComunicacaoTEF::AguardarTransacaoTEF();

						 if (ConfiguracaoTEF::AguardarTransacao != true)
						 {
							 TxtMensagem->Text = ConfiguracaoTEF::MsgOperador;
							 timer1->Enabled = false;
						 }
						 else
						 {
							 this->timer1->Enabled = false;

							 this->Opacity = 100;

							 TxtMensagem->Text = ConfiguracaoTEF::MsgOperador;


							 if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 SomaTotal = Decimal::Subtract(Realsoft_Sistema::SubTotalVenda, ConfiguracaoTEF::ValorPago);
								 Saldo = Decimal::Compare(Realsoft_Sistema::SubTotalVenda, ConfiguracaoTEF::ValorPago);

								 if (Saldo != 0)
								 {

								 }
								 else
								 {
									 ComunicacaoTEF::FinalizarTransacaoPage();
									 Realsoft_Sistema::FinalizarVenda = true;

									 this->Close();
								 }

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 SomaTotal = Decimal::Subtract(Realsoft_Sistema::SubTotalVenda, ConfiguracaoTEF::ValorPago);
								 Saldo = Decimal::Compare(Realsoft_Sistema::SubTotalVenda, ConfiguracaoTEF::ValorPago);

								 if (Saldo != 0)
								 {
									 Realsoft_Sistema::SubTotalVenda = SomaTotal;

									 this->Close();
								 }
								 else
								 {
									 Realsoft_Elgin::TerminaFechamentoComDesconto(Realsoft_Geral::FormaPagamento->Descricao, "", "$", Realsoft_Sistema::ValorDesconto.ToString(), ConfiguracaoTEF::ValorPago.ToString(), "");
									 Realsoft_Elgin::ImprimiTransacaoTEF();

									 ComunicacaoTEF::FinalizarTransacaoPage();
									 Realsoft_Sistema::FinalizarVenda = true;

									 Realsoft_Elgin::FinalizaPagamento("");

									 Realsoft_Elgin::Guilhotina();
									 Realsoft_Elgin::AbreGavaeta();

									 this->Close();
								 }

							 }
							 else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							 {
								 SomaTotal = Decimal::Subtract(Realsoft_Sistema::SubTotalVenda, ConfiguracaoTEF::ValorPago);
								 Saldo = Decimal::Compare(Realsoft_Sistema::SubTotalVenda, ConfiguracaoTEF::ValorPago);

								 if (Saldo != 0)
								 {
									 ComunicacaoTEF::FinalizarTransacaoPage();
									 Realsoft_Daruma::EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, ConfiguracaoTEF::ValorPago.ToString(), "");									 

									 String ^Caminho = Environment::CurrentDirectory;
									 String ^Data = DateTime::Now.ToString("dd_MM_yyyy_HH_mm_ss");

									 Realsoft_Daruma::ImprimeTefCartoes("C:\\TEF_DIAL\\RESP\\intpos.001", ConfiguracaoTEF::ValorPago.ToString());

									 File::Copy("C:\\TEF_DIAL\\RESP\\intpos.001", Caminho + "\\Comprovante\\ComprovanteTEF_" + Data + ".txt");

									 ComunicacaoTEF::ApagaArquivoResposta();

									 this->Close();
								 }
								 else
								 {
									 ComunicacaoTEF::FinalizarTransacaoPage();

									 Realsoft_Daruma::EfetuaFormaPagamento(Realsoft_Geral::FormaPagamento->Descricao, ConfiguracaoTEF::ValorPago.ToString(), "Volte Sempre");

									 Realsoft_Sistema::FinalizarVenda = true;

									 Realsoft_Daruma::ImprimeRespostaTef("C:\\TEF_DIAL\\RESP\\IntPos.001");

									 ComunicacaoTEF::ApagaArquivoResposta();

									 this->Close();
								 }


							 }
							 else
							 {
								 throw gcnew Exception("IMPRESSORA NÃO CADASTRADA");
							 }

						 }
					 }
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
	}

};
}
