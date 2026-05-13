#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace System::Collections::Generic;
	using namespace System::Net::NetworkInformation;
	using namespace System::Net;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);
	/// <summary>
	/// Summary for Realsoft_Pagamento
	/// </summary>
	public ref class Realsoft_Pagamento : public System::Windows::Forms::Form
	{
	public:
		Realsoft_Pagamento(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			//this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &Realsoft_Pagamento::Realsoft_Pagamento_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Realsoft_Pagamento()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  TxNumeroCartao;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  TxFatura;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  TxTitular;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  TxValor;

	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Realsoft_Pagamento::typeid));
			this->TxNumeroCartao = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxFatura = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxTitular = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TxValor = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TxNumeroCartao
			// 
			this->TxNumeroCartao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxNumeroCartao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxNumeroCartao->Location = System::Drawing::Point(17, 120);
			this->TxNumeroCartao->Name = L"TxNumeroCartao";
			this->TxNumeroCartao->Size = System::Drawing::Size(209, 29);
			this->TxNumeroCartao->TabIndex = 1;
			this->TxNumeroCartao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Realsoft_Pagamento::TxNumeroCartao_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(14, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Número do Cartão ou CPF";
			// 
			// TxFatura
			// 
			this->TxFatura->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxFatura->Enabled = false;
			this->TxFatura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxFatura->Location = System::Drawing::Point(232, 120);
			this->TxFatura->Name = L"TxFatura";
			this->TxFatura->Size = System::Drawing::Size(98, 29);
			this->TxFatura->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(229, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Valor Fatura";
			// 
			// TxTitular
			// 
			this->TxTitular->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxTitular->Enabled = false;
			this->TxTitular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxTitular->Location = System::Drawing::Point(17, 178);
			this->TxTitular->Name = L"TxTitular";
			this->TxTitular->Size = System::Drawing::Size(209, 29);
			this->TxTitular->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(14, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Titular";
			// 
			// TxValor
			// 
			this->TxValor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxValor->Location = System::Drawing::Point(232, 178);
			this->TxValor->Name = L"TxValor";
			this->TxValor->Size = System::Drawing::Size(98, 29);
			this->TxValor->TabIndex = 7;
			this->TxValor->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Realsoft_Pagamento::TxValor_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(229, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Valor pago";
			// 
			// Realsoft_Pagamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(367, 249);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxValor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TxTitular);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxFatura);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TxNumeroCartao);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Realsoft_Pagamento";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Realsoft_Pagamento::Realsoft_Pagamento_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TxNumeroCartao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter)
		{
			TxValor->Focus();
		}
	}
private: System::Void TxValor_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	try
	{
		if (e->KeyCode == Keys::Enter)
		{
			TxValor->Focus();
		}
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Realsoft_Pagamento_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Escape)
	{
		this->Close();
	}
}
};
}
