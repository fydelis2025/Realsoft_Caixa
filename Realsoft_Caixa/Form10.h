#include<exception>
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

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);
	/// <summary>
	/// Summary for Form10
	/// </summary>
	public ref class Form10 : public System::Windows::Forms::Form
	{
	public:
		Form10(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->KeyPreview = true;
			this->KeyDown += gcnew  KeyEventHandler(this, &Form10::Form10_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form10()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TextBox^  TxValor;
	private: 


	public: System::Windows::Forms::TextBox^  TxSenhaFiscal;
	private: 

	private: 

	private: 

	private: 
	private: System::Windows::Forms::Label^  label3;
	public: 
	internal: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form10::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->TxSenhaFiscal = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(168, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 16);
			this->label1->TabIndex = 123;
			this->label1->Text = L"Posição do Item";
			// 
			// TxValor
			// 
			this->TxValor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValor->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxValor->Location = System::Drawing::Point(168, 102);
			this->TxValor->MaxLength = 20;
			this->TxValor->Name = L"TxValor";
			this->TxValor->Size = System::Drawing::Size(147, 29);
			this->TxValor->TabIndex = 122;
			this->TxValor->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form10::TxValor_KeyDown);
			this->TxValor->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form10::TxValor_KeyPress);
			// 
			// TxSenhaFiscal
			// 
			this->TxSenhaFiscal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxSenhaFiscal->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxSenhaFiscal->Location = System::Drawing::Point(15, 102);
			this->TxSenhaFiscal->MaxLength = 20;
			this->TxSenhaFiscal->Name = L"TxSenhaFiscal";
			this->TxSenhaFiscal->Size = System::Drawing::Size(147, 29);
			this->TxSenhaFiscal->TabIndex = 126;
			this->TxSenhaFiscal->UseSystemPasswordChar = true;
			this->TxSenhaFiscal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form10::TxSenhaFiscal_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(12, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 16);
			this->label3->TabIndex = 127;
			this->label3->Text = L"Senha do Fiscal";
			// 
			// Form10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(322, 142);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxSenhaFiscal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxValor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(150, 0);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form10";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->TopMost = true;
			this->Shown += gcnew System::EventHandler(this, &Form10::Form10_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form10::Form10_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: static String ^Retorno;

	private: System::Void TxValor_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				if (!Char::IsNumber(e->KeyChar) && !(e->KeyChar == ',') && !(e->KeyChar == '.') && !(e->KeyChar == Convert::ToChar(8)))
				{
					e->Handled = true;
				}
			 }

public: static int _posicao;
	

private: System::Void TxValor_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 try
			 {
				 if (e->KeyCode == Keys::Enter)
				 {
					 if (TxValor->Text->Trim()->Equals(""))
					 {
						 throw gcnew Exception("Valor inválido");
						 
					 }
					 else
					 {
						 if (TxValor->Text->Trim()->Length > 0)
						 {
							 //Realsoft_Sistema::AtivarExcluirItem = true;
							 Realsoft_Sistema::ExcluirItem = int::Parse(TxValor->Text);
					 
							 Realsoft_Sistema::RecuperarCupom = false;
							Realsoft_Sistema::FinalizarVenda = false;
							Realsoft_Sistema::LimparCampos = false;
							Realsoft_Sistema::AtivarExcluirItem = true;
						 
							 this->Close();
						 }
						 else
						 {
							 Realsoft_Sistema::RecuperarCupom = false;
							Realsoft_Sistema::FinalizarVenda = false;
							Realsoft_Sistema::LimparCampos = false;
							Realsoft_Sistema::AtivarExcluirItem = false;

							 throw gcnew Exception("Valor inválido");							 
						 }
					 }
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
private: System::Void Form10_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

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

		  
		  private: static int _fiscal;

private: System::Void TxSenhaFiscal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			  if (e->KeyCode == Keys::Enter)
			 {
				 try
				 {
					 if (TxSenhaFiscal->Text->Trim()->Equals(""))
					 {
						 throw gcnew Exception("Senha do fiscal não confere");
					 }
					 else
					 {
						 String ^Descript = Realsoft_Criptografia::Encrypt(TxSenhaFiscal->Text, Realsoft_Sistema::passPhrase, Realsoft_Sistema::saltValue, Realsoft_Sistema::hashAlgorithm, Realsoft_Sistema::_interacao, Realsoft_Sistema::_initvector, Realsoft_Sistema::keySize);

						 Realsoft_Geral::logon = Realsoft_Consultas::Consultar_UsuarioFiscal(Descript);
						 
						 if (Realsoft_Geral::logon != nullptr)
						  {	
							 _fiscal = Realsoft_Geral::logon->IDFiscal;

							 TxValor->Focus();
						  }
						  else
						  {
							throw gcnew Exception("Senha do fiscal não confere");
							
						  }

						
					 }
				 }
				catch(Exception ^ex)
				{
					MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				 
			 }
		 }
private: System::Void Form10_Shown(System::Object^  sender, System::EventArgs^  e) {
			 TxSenhaFiscal->Focus();
		 }
};
}
