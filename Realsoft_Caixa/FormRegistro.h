#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormRegistro
	/// </summary>
	public ref class FormRegistro : public System::Windows::Forms::Form
	{
	public:
		FormRegistro(void)
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
		~FormRegistro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  TxLicenca;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: Megasoft::MegasoftButton^  BtAtivar;
	private: Megasoft::MegasoftButton^  BtDemo;
	private: Megasoft::MegasoftButton^  BtFechar;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRegistro::typeid));
			this->TxLicenca = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BtAtivar = (gcnew Megasoft::MegasoftButton());
			this->BtDemo = (gcnew Megasoft::MegasoftButton());
			this->BtFechar = (gcnew Megasoft::MegasoftButton());
			this->SuspendLayout();
			// 
			// TxLicenca
			// 
			this->TxLicenca->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxLicenca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxLicenca->Location = System::Drawing::Point(31, 104);
			this->TxLicenca->Mask = L"#####-#####-#####";
			this->TxLicenca->Name = L"TxLicenca";
			this->TxLicenca->Size = System::Drawing::Size(204, 31);
			this->TxLicenca->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(28, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Chave de ativação";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(37, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"LICENÇA DE USO";
			// 
			// BtAtivar
			// 
			this->BtAtivar->BackColor = System::Drawing::Color::Transparent;
			this->BtAtivar->BaseColor = System::Drawing::Color::SteelBlue;
			this->BtAtivar->ButtonText = L"Ativar";
			this->BtAtivar->ForeColor = System::Drawing::Color::Yellow;
			this->BtAtivar->Location = System::Drawing::Point(31, 166);
			this->BtAtivar->Name = L"BtAtivar";
			this->BtAtivar->Size = System::Drawing::Size(71, 52);
			this->BtAtivar->TabIndex = 3;
			// 
			// BtDemo
			// 
			this->BtDemo->BackColor = System::Drawing::Color::Transparent;
			this->BtDemo->BaseColor = System::Drawing::Color::SteelBlue;
			this->BtDemo->ButtonText = L"Demo";
			this->BtDemo->ForeColor = System::Drawing::Color::Yellow;
			this->BtDemo->Location = System::Drawing::Point(108, 166);
			this->BtDemo->Name = L"BtDemo";
			this->BtDemo->Size = System::Drawing::Size(71, 52);
			this->BtDemo->TabIndex = 4;
			// 
			// BtFechar
			// 
			this->BtFechar->BackColor = System::Drawing::Color::Transparent;
			this->BtFechar->BaseColor = System::Drawing::Color::SteelBlue;
			this->BtFechar->ButtonText = L"Fechar";
			this->BtFechar->ForeColor = System::Drawing::Color::Yellow;
			this->BtFechar->Location = System::Drawing::Point(185, 166);
			this->BtFechar->Name = L"BtFechar";
			this->BtFechar->Size = System::Drawing::Size(71, 52);
			this->BtFechar->TabIndex = 5;
			this->BtFechar->Click += gcnew System::EventHandler(this, &FormRegistro::BtFechar_Click);
			// 
			// FormRegistro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 262);
			this->ControlBox = false;
			this->Controls->Add(this->BtFechar);
			this->Controls->Add(this->BtDemo);
			this->Controls->Add(this->BtAtivar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxLicenca);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormRegistro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtFechar_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
};
}
