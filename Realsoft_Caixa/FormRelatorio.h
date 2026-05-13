#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace std;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;
	using namespace System::Runtime::InteropServices;
	using namespace MySql::Data;
	using namespace MySql::Data::MySqlClient;


	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);

	/// <summary>
	/// Summary for FormRelatorio
	/// </summary>
	public ref class FormRelatorio : public System::Windows::Forms::Form
	{
	public:
		FormRelatorio(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->KeyPreview = true;
			//this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormRelatorio::FormRelatorio_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormRelatorio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  TxDataInicio;
	private: System::Windows::Forms::MaskedTextBox^  TxDataFinal;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRelatorio::typeid));
			this->TxDataInicio = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TxDataFinal = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TxDataInicio
			// 
			this->TxDataInicio->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxDataInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxDataInicio->Location = System::Drawing::Point(12, 94);
			this->TxDataInicio->Mask = L"##/##/####";
			this->TxDataInicio->Name = L"TxDataInicio";
			this->TxDataInicio->Size = System::Drawing::Size(140, 31);
			this->TxDataInicio->TabIndex = 0;
			this->TxDataInicio->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormRelatorio::TxDataInicio_KeyDown);
			// 
			// TxDataFinal
			// 
			this->TxDataFinal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxDataFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxDataFinal->Location = System::Drawing::Point(158, 94);
			this->TxDataFinal->Mask = L"##/##/####";
			this->TxDataFinal->Name = L"TxDataFinal";
			this->TxDataFinal->Size = System::Drawing::Size(140, 31);
			this->TxDataFinal->TabIndex = 1;
			this->TxDataFinal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormRelatorio::TxDataFinal_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(12, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Data Inicial";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(155, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Data Final";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(292, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Re Impressão do fechamento";
			// 
			// FormRelatorio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(313, 151);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxDataFinal);
			this->Controls->Add(this->TxDataInicio);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormRelatorio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormRelatorio::FormRelatorio_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormRelatorio_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Escape)
		{
			this->Close();
		}
	}
private: System::Void TxDataInicio_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		TxDataFinal->Focus();
	}
}


private: System::Void TxDataFinal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		try
		{
			if (String::IsNullOrEmpty(TxDataFinal->Text))
			{
				throw gcnew Exception("FAVOR INFORME A DATA FINAL");
			}
			else
			{
				if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
				{
					Realsoft_Bematech::Imprime_RelatorioFechamento(DateTime::Parse(TxDataInicio->Text), DateTime::Parse(TxDataFinal->Text),0);
				}
				else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
				{

				}
				else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
				{

				}
				else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
				{

				}
				else
				{
					//Imprime_Fechamento(Realsoft_Sistema::IDOperador, 0);
				}
			}
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
};
}
