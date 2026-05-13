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
	using namespace System::Xml;
	using namespace System::Text::RegularExpressions;


	[DllImport("user32.dll")]
	//[return: MarshalAs(UnmanagedType.bool)]
	extern bool EnableWindow(IntPtr hWnd, bool bEnable);

	/// <summary>
	/// Summary for Form15
	/// </summary>
	public ref class Form15 : public System::Windows::Forms::Form
	{
	public:
		Form15(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->KeyPreview = true;
			this->KeyDown += gcnew  KeyEventHandler(this, &Form15::Form15_KeyDown);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form15()
		{
			if (components)
			{
				delete components;
			}
		}

	internal: System::Windows::Forms::Label^  Lbmensagem;

	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::TextBox^  TxOpcao;
	internal: System::Windows::Forms::TextBox^  TxCodigo;

	internal: System::Windows::Forms::Label^  LbCodigo;
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::TextBox^  TxOpcao2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form15::typeid));
			this->Lbmensagem = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->TxCodigo = (gcnew System::Windows::Forms::TextBox());
			this->LbCodigo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Lbmensagem
			// 
			this->Lbmensagem->BackColor = System::Drawing::Color::Transparent;
			this->Lbmensagem->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbmensagem->ForeColor = System::Drawing::Color::White;
			this->Lbmensagem->Location = System::Drawing::Point(12, 91);
			this->Lbmensagem->Name = L"Lbmensagem";
			this->Lbmensagem->Size = System::Drawing::Size(374, 213);
			this->Lbmensagem->TabIndex = 95;
			this->Lbmensagem->Text = L"1 - TEF Administrativo\r\n2 - Recarga de Celular\r\n3 - Recarga PIN";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::Yellow;
			this->Label2->Location = System::Drawing::Point(168, 318);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(105, 29);
			this->Label2->TabIndex = 94;
			this->Label2->Text = L"OPÇÃO:";
			// 
			// TxOpcao
			// 
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao->Location = System::Drawing::Point(173, 350);
			this->TxOpcao->MaxLength = 2;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(100, 40);
			this->TxOpcao->TabIndex = 93;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form15::TxOpcao_KeyDown);
			// 
			// TxCodigo
			// 
			this->TxCodigo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxCodigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxCodigo->Location = System::Drawing::Point(18, 350);
			this->TxCodigo->MaxLength = 10;
			this->TxCodigo->Name = L"TxCodigo";
			this->TxCodigo->Size = System::Drawing::Size(149, 40);
			this->TxCodigo->TabIndex = 96;
			this->TxCodigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxCodigo->Visible = false;
			this->TxCodigo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form15::TxCodigo_KeyDown);
			// 
			// LbCodigo
			// 
			this->LbCodigo->AutoSize = true;
			this->LbCodigo->BackColor = System::Drawing::Color::Transparent;
			this->LbCodigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbCodigo->ForeColor = System::Drawing::Color::Yellow;
			this->LbCodigo->Location = System::Drawing::Point(13, 314);
			this->LbCodigo->Name = L"LbCodigo";
			this->LbCodigo->Size = System::Drawing::Size(109, 29);
			this->LbCodigo->TabIndex = 97;
			this->LbCodigo->Text = L"CODIGO";
			this->LbCodigo->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(273, 318);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 29);
			this->label1->TabIndex = 99;
			this->label1->Text = L"OPÇÃO:";
			this->label1->Visible = false;
			// 
			// TxOpcao2
			// 
			this->TxOpcao2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxOpcao2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxOpcao2->Location = System::Drawing::Point(278, 350);
			this->TxOpcao2->MaxLength = 2;
			this->TxOpcao2->Name = L"TxOpcao2";
			this->TxOpcao2->Size = System::Drawing::Size(100, 40);
			this->TxOpcao2->TabIndex = 98;
			this->TxOpcao2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao2->Visible = false;
			this->TxOpcao2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form15::TxOpcao2_KeyDown);
			// 
			// Form15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(398, 417);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxOpcao2);
			this->Controls->Add(this->LbCodigo);
			this->Controls->Add(this->TxCodigo);
			this->Controls->Add(this->Lbmensagem);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->TxOpcao);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form15";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form15::Form15_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		try
		{
			if (e->KeyCode == Keys::Enter)
			{

				if (TxOpcao->Text == "2")
				{
					TxOpcao->ResetText();
					Lbmensagem->ResetText();

					Lbmensagem->Text =  "1 - CANCELAR TRANSACAO" + Environment::NewLine;
					Lbmensagem->Text += "2 - CONSULTAR STATUS" + Environment::NewLine;
					Lbmensagem->Text += "3 - CONSULTA TOTAIS" + Environment::NewLine;

					TxOpcao2->Visible = true;
					label1->Visible = true;

					TxOpcao2->Focus();

				}
				else if (TxOpcao->Text == "3")
				{
					TxCodigo->Focus();
					TxCodigo->Visible = true;
				}
				else if (TxOpcao->Text == "1")
				{
					if (ConfiguracaoTEF::PadraoTEF->Equals("PAYGO"))
					{
						ComunicacaoTEF::FuncoesAdministrativas();
					}
					else if (ConfiguracaoTEF::PadraoTEF->Equals("SOFTWAREEXPRESS"))
					{

					}
					
				}
			}
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: XmlNode ^Elemento(XmlNode ^no, String ^elemento)
{
	for (int n = 0; n < no->ChildNodes->Count; n++)
	{
		if (no->ChildNodes[n]->Name->Equals(elemento))
			return no->ChildNodes[n];
	}

	return Elemento(no->LastChild, elemento);
}


private: System::Void TxCodigo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		try
		{
			if (TxOpcao->Text == "2")
			{
				if (!String::IsNullOrEmpty(TxCodigo->Text))
				{
					String^ Result = Realsoft_Recarga::ConfirmarCompra(TxCodigo->Text, "1");

					XmlDocument ^_xdoc = gcnew XmlDocument();

					_xdoc->LoadXml(Result);

					XmlNode ^ide = Elemento(_xdoc, "cellcard");

					XmlNode ^ret_codigo = Elemento(ide, "codigo");
					int retorno_transacao = int::Parse(ret_codigo->LastChild->Value);

					if (retorno_transacao != 0)
					{
						XmlNode ^mensagem = Elemento(ide, "mensagem");
						String^ _mensagem = mensagem->LastChild->Value;

						throw gcnew Exception(_mensagem);
					}

					else
					{
						Realsoft_Daruma::ImprimeRecargaCancelamento("", TxCodigo->Text);
						throw gcnew Exception("TRANSAÇÃO ABORTADA COM SUCESSO");
					}
				}
				else
				{
					throw gcnew Exception("PARA CANCELAR É PRECISO INFORMAR O CODIGO DA RECARGA");
				}
			}
			else if (TxOpcao->Text == "3")
			{
				Random ^rd = gcnew Random();

				String^Codigo = "200" + rd->Next(999999).ToString();

				String^ Result = Realsoft_Recarga::RecargaPIN(Codigo, "223", "BA");

				XmlDocument ^_xdoc = gcnew XmlDocument();

				_xdoc->LoadXml(Result);

				XmlNode ^ide = Elemento(_xdoc, "cellcard");

				XmlNode ^Transacao = Elemento(ide, "codigoTransacao");
				String^ _Transacao = Transacao->LastChild->Value;

				XmlNode ^Cod_On = Elemento(ide, "cod_online");
				String^ _Cod_On = Cod_On->LastChild->Value;

				XmlNode ^Serie = Elemento(ide, "serie");
				String^ _Serie = Serie->LastChild->Value;

				XmlNode ^Pin = Elemento(ide, "pin");
				String^ _Pin = Pin->LastChild->Value;

				XmlNode ^Preco = Elemento(ide, "preco");
				Decimal _Preco = Decimal::Parse(Preco->LastChild->Value->ToString()->Replace(".",","));

				XmlNode ^Validade = Elemento(ide, "vencimento");
				DateTime _Validade = DateTime::Parse(Validade->LastChild->Value);

				if (_Transacao == "3")
				{
					Result = Realsoft_Recarga::ConfirmarCompra("7", "0");

					Realsoft_BematechNaoFiscal::ImprimirComprovantePIN("",_Validade,_Pin,"",_Preco.ToString(),"",_Serie,_Cod_On);
				}
				else
				{
					throw gcnew Exception("Refaça a transação");
				}


			}
			else
			{

			}
		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void Form15_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
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
private: System::Void TxOpcao2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		if (TxOpcao2->Text == "1")
		{
			TxCodigo->Visible = true;
			LbCodigo->Visible = true;
			TxCodigo->Focus();
		}
	}
}
};
}
