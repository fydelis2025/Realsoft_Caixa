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
	/// <summary>
	/// Summary for FormTroco
	/// </summary>

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	public ref class FormTroco : public System::Windows::Forms::Form
	{
	public:
		FormTroco(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormTroco::FormTroco_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormTroco()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  LbTroco;

	private: System::ComponentModel::BackgroundWorker^  BkTroco;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  LbPago;
	private:
	public: System::Windows::Forms::Label^  LbSub;



	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label6;
	public:

	public: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTroco::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LbTroco = (gcnew System::Windows::Forms::Label());
			this->BkTroco = (gcnew System::ComponentModel::BackgroundWorker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LbPago = (gcnew System::Windows::Forms::Label());
			this->LbSub = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(8, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TROCO";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(231, 141);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(28, 33);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// LbTroco
			// 
			this->LbTroco->AutoSize = true;
			this->LbTroco->BackColor = System::Drawing::Color::Transparent;
			this->LbTroco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbTroco->ForeColor = System::Drawing::Color::Yellow;
			this->LbTroco->Location = System::Drawing::Point(260, 208);
			this->LbTroco->Name = L"LbTroco";
			this->LbTroco->Size = System::Drawing::Size(84, 37);
			this->LbTroco->TabIndex = 3;
			this->LbTroco->Text = L"0,00";
			// 
			// BkTroco
			// 
			this->BkTroco->WorkerReportsProgress = true;
			this->BkTroco->WorkerSupportsCancellation = true;
			this->BkTroco->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormTroco::BkTroco_DoWork);
			this->BkTroco->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &FormTroco::BkTroco_ProgressChanged);
			this->BkTroco->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &FormTroco::BkTroco_RunWorkerCompleted);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 51);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Sub Total";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(5, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 51);
			this->label3->TabIndex = 5;
			this->label3->Text = L"VALOR PAGO";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LbPago
			// 
			this->LbPago->AutoSize = true;
			this->LbPago->BackColor = System::Drawing::Color::Transparent;
			this->LbPago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbPago->ForeColor = System::Drawing::Color::White;
			this->LbPago->Location = System::Drawing::Point(260, 138);
			this->LbPago->Name = L"LbPago";
			this->LbPago->Size = System::Drawing::Size(84, 37);
			this->LbPago->TabIndex = 6;
			this->LbPago->Text = L"0,00";
			// 
			// LbSub
			// 
			this->LbSub->AutoSize = true;
			this->LbSub->BackColor = System::Drawing::Color::Transparent;
			this->LbSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbSub->ForeColor = System::Drawing::Color::White;
			this->LbSub->Location = System::Drawing::Point(260, 77);
			this->LbSub->Name = L"LbSub";
			this->LbSub->Size = System::Drawing::Size(84, 37);
			this->LbSub->TabIndex = 7;
			this->LbSub->Text = L"0,00";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(231, 77);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(28, 33);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(231, 212);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(28, 33);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(20, 6);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(332, 38);
			this->label6->TabIndex = 10;
			this->label6->Text = L"VENDA FINALIZADA";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FormTroco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(388, 267);
			this->ControlBox = false;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->LbSub);
			this->Controls->Add(this->LbPago);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LbTroco);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormTroco";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &FormTroco::FormTroco_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormTroco::FormTroco_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormTroco_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 try
				 {
					 if (e->KeyCode == Keys::Escape)
					 {
						 Realsoft_Sistema::FinalizarVenda = true;
						 Realsoft_Sistema::LimparCampos = false;
						 Realsoft_Sistema::AtivarExcluirItem = false;
						 Realsoft_Sistema::RecuperarCupom = false;
						 Realsoft_Sistema::ExibirDesconto = false;
						 Realsoft_Sistema::_Prevenda = false;

						 this->Close();
					 }
				 }
				 catch(Exception ^ex)
				 {
					 BkTroco->CancelAsync();
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
					 
				 }
			 }
private: System::Void BkTroco_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	try
	{
		BkTroco->ReportProgress(0, Realsoft_Sistema::Troco);
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BkTroco_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
	try
	{		
		LbTroco->Text = Realsoft_Sistema::Troco.ToString("#####0.00");
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BkTroco_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
	BkTroco->CancelAsync();
}
private: System::Void FormTroco_Load(System::Object^  sender, System::EventArgs^  e) {

	if (!BkTroco->IsBusy)
	{
		BkTroco->RunWorkerAsync();
	}
}
};
}
