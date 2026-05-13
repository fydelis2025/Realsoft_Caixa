#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPagamento
	/// </summary>
	public ref class FormPagamento : public System::Windows::Forms::Form
	{
	public:
		FormPagamento(void)
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
		~FormPagamento()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::TextBox^  TxNumero;
	internal: System::Windows::Forms::TextBox^  TxDevido;
	internal: System::Windows::Forms::TextBox^  TxCliente;
	protected:

	protected:


	private: System::Windows::Forms::Label^  label1;
	internal:
	private: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::TextBox^  TxValorPagar;
	private:

	private:
	private: System::Windows::Forms::Label^  label3;
	internal:
	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPagamento::typeid));
			this->TxNumero = (gcnew System::Windows::Forms::TextBox());
			this->TxDevido = (gcnew System::Windows::Forms::TextBox());
			this->TxCliente = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxValorPagar = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TxNumero
			// 
			this->TxNumero->BackColor = System::Drawing::Color::White;
			this->TxNumero->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxNumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxNumero->Location = System::Drawing::Point(12, 116);
			this->TxNumero->MaxLength = 200;
			this->TxNumero->Name = L"TxNumero";
			this->TxNumero->Size = System::Drawing::Size(181, 40);
			this->TxNumero->TabIndex = 103;
			this->TxNumero->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxNumero->UseSystemPasswordChar = true;
			// 
			// TxDevido
			// 
			this->TxDevido->BackColor = System::Drawing::Color::White;
			this->TxDevido->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxDevido->Enabled = false;
			this->TxDevido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxDevido->Location = System::Drawing::Point(199, 116);
			this->TxDevido->MaxLength = 200;
			this->TxDevido->Name = L"TxDevido";
			this->TxDevido->Size = System::Drawing::Size(99, 40);
			this->TxDevido->TabIndex = 104;
			this->TxDevido->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxDevido->UseSystemPasswordChar = true;
			// 
			// TxCliente
			// 
			this->TxCliente->BackColor = System::Drawing::Color::White;
			this->TxCliente->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCliente->Enabled = false;
			this->TxCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxCliente->Location = System::Drawing::Point(12, 181);
			this->TxCliente->MaxLength = 200;
			this->TxCliente->Name = L"TxCliente";
			this->TxCliente->Size = System::Drawing::Size(391, 40);
			this->TxCliente->TabIndex = 105;
			this->TxCliente->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxCliente->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 106;
			this->label1->Text = L"Número do Cartão";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(196, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 107;
			this->label2->Text = L"Total Devido";
			// 
			// TxValorPagar
			// 
			this->TxValorPagar->BackColor = System::Drawing::Color::White;
			this->TxValorPagar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxValorPagar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxValorPagar->Location = System::Drawing::Point(304, 116);
			this->TxValorPagar->MaxLength = 200;
			this->TxValorPagar->Name = L"TxValorPagar";
			this->TxValorPagar->Size = System::Drawing::Size(99, 40);
			this->TxValorPagar->TabIndex = 108;
			this->TxValorPagar->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxValorPagar->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(301, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 109;
			this->label3->Text = L"Valor a pagar";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 110;
			this->label4->Text = L"Cliente";
			// 
			// FormPagamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(416, 233);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxValorPagar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxCliente);
			this->Controls->Add(this->TxDevido);
			this->Controls->Add(this->TxNumero);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormPagamento";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
