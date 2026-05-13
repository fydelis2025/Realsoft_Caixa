#pragma once

namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace Realsoft_DLL;
	using namespace Realsoft_Class;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	/// <summary>
	/// Summary for FormCupom
	/// </summary>
	public ref class FormCupom : public System::Windows::Forms::Form
	{
	public:
		FormCupom(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			this->KeyDown += gcnew  KeyEventHandler(this, &FormCupom::FormCupom_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCupom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  TxCupom;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormCupom::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TxCupom = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(7, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L" NUMERO DO CUPOM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TxCupom
			// 
			this->TxCupom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCupom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxCupom->Location = System::Drawing::Point(89, 88);
			this->TxCupom->Name = L"TxCupom";
			this->TxCupom->Size = System::Drawing::Size(209, 47);
			this->TxCupom->TabIndex = 1;
			this->TxCupom->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCupom::TxCupom_KeyDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 70);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(62, 64);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// FormCupom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(310, 146);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->TxCupom);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormCupom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormCupom::FormCupom_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
	private: System::Void TxCupom_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {
					 if (e->KeyCode == Keys::Enter)
					 {
						 if (TxCupom->Text == "" || int::Parse(TxCupom->Text) < 0)
						 {
							 MessageBox::Show("Cupom inválido","Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
							 return;
						 }
						 else
						 {
							 Realsoft_Sistema::iCOO = int::Parse(TxCupom->Text);
							Realsoft_Sistema::RecuperarCupom = true;
							Realsoft_Sistema::FinalizarVenda = false;
							Realsoft_Sistema::LimparCampos = false;
							Realsoft_Sistema::AtivarExcluirItem = false;

							this->Close();
						 }
					 }
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 return;
				 }
			 }
	private: System::Void FormCupom_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {
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
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 return;
				 }
			 }
};
}
