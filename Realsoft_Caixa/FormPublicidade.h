#include<iostream>
#include<stdio.h>
#include<vector>
#include<exception>
#pragma once



namespace Realsoft_Caixa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace std;
	using namespace System::Runtime::InteropServices;
	using namespace Realsoft_Class;

	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);

	/// <summary>
	/// Summary for FormPublicidade
	/// </summary>
	public ref class FormPublicidade : public System::Windows::Forms::Form
	{
	public:
		FormPublicidade(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			 //this->KeyDown += gcnew KeyEventHandler( Form2_KeyDown );
			this->KeyDown += gcnew  KeyEventHandler(this, &FormPublicidade::FormPublicidade_KeyDown);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPublicidade()
		{
			if (components)
			{
				delete components;
			}
		}
	public: static System::Windows::Forms::PictureBox^  PictureBox1;
	protected:

	protected:

	protected:

	protected:

	protected:

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 

	protected: 


	private: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::TextBox^  TxSenhaOperador;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	internal: 
	private: 

	private: 
	internal: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPublicidade::typeid));
			this->PictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxSenhaOperador = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// PictureBox1
			// 
			this->PictureBox1->BackColor = System::Drawing::Color::White;
			this->PictureBox1->Location = System::Drawing::Point(24, 105);
			this->PictureBox1->Name = L"PictureBox1";
			this->PictureBox1->Size = System::Drawing::Size(766, 400);
			this->PictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox1->TabIndex = 1;
			this->PictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 529);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Senha do Operador:";
			// 
			// TxSenhaOperador
			// 
			this->TxSenhaOperador->BackColor = System::Drawing::Color::White;
			this->TxSenhaOperador->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxSenhaOperador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TxSenhaOperador->ForeColor = System::Drawing::Color::Black;
			this->TxSenhaOperador->Location = System::Drawing::Point(15, 545);
			this->TxSenhaOperador->MaxLength = 16;
			this->TxSenhaOperador->Name = L"TxSenhaOperador";
			this->TxSenhaOperador->Size = System::Drawing::Size(261, 33);
			this->TxSenhaOperador->TabIndex = 4;
			this->TxSenhaOperador->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxSenhaOperador->UseSystemPasswordChar = true;
			this->TxSenhaOperador->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormPublicidade::TxSenhaOperador_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(329, 529);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(388, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Suporte: www.realsoft.net.br";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(360, 560);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(315, 31);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Contato (71)3667-2873";
			// 
			// FormPublicidade
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(802, 603);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxSenhaOperador);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FormPublicidade";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FormPublicidade::FormPublicidade_FormClosed);
			this->Load += gcnew System::EventHandler(this, &FormPublicidade::FormPublicidade_Load);
			this->Shown += gcnew System::EventHandler(this, &FormPublicidade::FormPublicidade_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormPublicidade::FormPublicidade_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: static Boolean Publicidade = true;

		private: static System::Threading::Thread ^Thread;// = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(TempoExposicao));

		private: static ArrayList Imagens = gcnew ArrayList();
		
		private: static Login ^logon = gcnew Login();

	private: System::Void FormPublicidade_Load(System::Object^  sender, System::EventArgs^  e) {

				 try
				 {
					 Inicializacao();
					 
				 }
				 catch(Exception ^ex)
				 {
					 MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
					
			 }

	private: System::Void FormPublicidade_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		if(e->KeyCode == Keys::Escape)
		{
			MessageBox::Show("Favor informe a senha do operador para voltar ao sistema","Erro",MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
	}

	private: System::Void TxSenhaOperador_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

			try
			{
				if (e->KeyCode == Keys::Enter)
				{

					 if (TxSenhaOperador->Text->Trim()->Length == 0)
					 {
						 throw gcnew Exception("Operador inválido");
					 }
					 else
					 {
						 String ^Descript = Realsoft_Criptografia::Encrypt(TxSenhaOperador->Text, Realsoft_Sistema::passPhrase, Realsoft_Sistema::saltValue, Realsoft_Sistema::hashAlgorithm, Realsoft_Sistema::_interacao, Realsoft_Sistema::_initvector, Realsoft_Sistema::keySize);

						 logon = Realsoft_Consultas::Consultar_UsuarioOperador(Descript);		
					 
						if (logon != nullptr)
						{	
							
							this->Hide();

							
						}
						else
						{
							throw gcnew Exception("Operador não confere");
							return;
						}
					 }
				}
			}
			catch(Exception ^ex){

				MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
	}
   
	private: void Inicializacao()
	{
		Thread = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(TempoExposicao));

		if (!Thread->IsAlive)
		{
			array<String^>^ arr = System::IO::Directory::GetFiles(Realsoft_Sistema::CaminhoPublicidade);

			for (int i =0; i <= arr->Length - 1; i++)
			{
				if (arr[i]->IndexOf(".png") > -1 && arr[i]->IndexOf(".jpg") > -1)
				{
					Imagens.Add(System::Drawing::Bitmap::FromFile(arr[i]));
				}
			}

			Thread->Start();
		}
	}

	public: void PararPublicidade()
	{
		Thread->Interrupt();
		Thread->Abort();
		Thread = nullptr;
	}


   private: static void TempoExposicao()
	{
		while (Publicidade) {
			try {
				
				array<String^>^ arr = System::IO::Directory::GetFiles(Realsoft_Sistema::CaminhoPublicidade);

				for (int i =0; i <= arr->Length - 1; i++)
				{
					if (arr[i]->IndexOf(".png") > -1 || arr[i]->IndexOf(".jpg") > -1)
					{
						PictureBox1->Image = System::Drawing::Bitmap::FromFile(arr[i]);

						System::Threading::Thread::Sleep(5000);
					}
				}


			} catch (Exception ^ex) {

				MessageBox::Show(ex->Message,"Erro",MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void FormPublicidade_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

			 Application::Exit();
		 }
private: System::Void FormPublicidade_Shown(System::Object^  sender, System::EventArgs^  e) {

			 TxSenhaOperador->Focus();
			 TxSenhaOperador->Text = "";
		 }
};
}
