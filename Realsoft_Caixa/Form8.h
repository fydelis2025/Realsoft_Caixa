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
	/// Summary for Form8
	/// </summary>
	public ref class Form8 : public System::Windows::Forms::Form
	{
	public:
		Form8(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			this->KeyDown += gcnew  KeyEventHandler(this, &Form8::Form8_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form8()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::TextBox^  TxValor;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form8::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(15, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 13);
			this->label1->TabIndex = 120;
			this->label1->Text = L"NÚMERO DA PREVENDA";
			// 
			// TxValor
			// 
			this->TxValor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValor->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxValor->Location = System::Drawing::Point(18, 106);
			this->TxValor->MaxLength = 20;
			this->TxValor->Name = L"TxValor";
			this->TxValor->Size = System::Drawing::Size(173, 41);
			this->TxValor->TabIndex = 119;
			this->TxValor->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form8::TxValor_KeyDown);
			this->TxValor->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form8::TxValor_KeyPress);
			// 
			// Form8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(220, 164);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxValor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form8::Form8_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form8::Form8_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TxValor_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				if (!Char::IsNumber(e->KeyChar) && !(e->KeyChar == ',') && !(e->KeyChar == '.') && !(e->KeyChar == Convert::ToChar(8)))
			    {
					e->Handled = true;
				}
			 }
	private: System::Void Form8_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

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

			 public: static String ^Descricao;			 

private: System::Void TxValor_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			 if (e->KeyCode == Keys::Enter)
			 {
				 try
				 {
					 if(TxValor->Text != "")
					 {
						Descricao = TxValor->Text;
						Realsoft_Sistema::_Prevenda = true;

						this->Close();
					 }
					 else
					 {
						 throw gcnew Exception("PREVENDA INFORMADA, NÃO EXISTE");
					 }
				 }
				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }
		 }
private: System::Void Form8_Load(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 String ^Retorno = Realsoft_INI::GetIniString(Realsoft_INI::nomeArquivoINI(), "GERAL", "HABILITARMODULOPREVENDA", "xxxx");
				 
				 Boolean ModoPrevenda = Boolean::Parse(Retorno);

				 if (ModoPrevenda == false)
				 {
					 throw gcnew Exception("MODULO PREVENDA NÃO CONFIGURADO");
				 }

			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message,L"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 this->Close();
			 }
		 }
};
}
