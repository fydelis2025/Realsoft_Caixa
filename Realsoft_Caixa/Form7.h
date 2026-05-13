
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

	[DllImport("wininet.dll")]
	extern bool InternetGetConnectedState(int Description, int ReservedValue);
	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->KeyPreview = true;
			this->KeyDown += gcnew  KeyEventHandler(this, &Form7::Form7_KeyDown);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::TextBox^  TxOpcao;
	protected:

	protected: 









	internal: System::Windows::Forms::Label^  Label2;
	private: System::Windows::Forms::DataGridView^  DgLista;




	private: System::Windows::Forms::Label^  LbMensagem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ITEM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CODIGO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DESCRICAO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  VALOR;

	private:

	internal: System::Windows::Forms::TextBox^  TxTelefone;
	private:


	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  TxOpcao1;

	internal:




	internal:


	private:



	internal:

	internal:

	internal:

	internal:



	internal: 

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form7::typeid));
			this->TxOpcao = (gcnew System::Windows::Forms::TextBox());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->DgLista = (gcnew System::Windows::Forms::DataGridView());
			this->ITEM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CODIGO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DESCRICAO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VALOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LbMensagem = (gcnew System::Windows::Forms::Label());
			this->TxTelefone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxOpcao1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->BeginInit();
			this->SuspendLayout();
			// 
			// TxOpcao
			// 
			this->TxOpcao->BackColor = System::Drawing::Color::White;
			this->TxOpcao->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxOpcao->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxOpcao->ForeColor = System::Drawing::Color::Black;
			this->TxOpcao->Location = System::Drawing::Point(198, 474);
			this->TxOpcao->MaxLength = 10;
			this->TxOpcao->Name = L"TxOpcao";
			this->TxOpcao->Size = System::Drawing::Size(140, 34);
			this->TxOpcao->TabIndex = 73;
			this->TxOpcao->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao->Visible = false;
			this->TxOpcao->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form7::TxOpcao_KeyDown);
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Arial", 18));
			this->Label2->ForeColor = System::Drawing::Color::Yellow;
			this->Label2->Location = System::Drawing::Point(193, 444);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(98, 27);
			this->Label2->TabIndex = 81;
			this->Label2->Text = L"OPÇÃO";
			this->Label2->Visible = false;
			// 
			// DgLista
			// 
			this->DgLista->AllowUserToAddRows = false;
			this->DgLista->AllowUserToDeleteRows = false;
			this->DgLista->AllowUserToResizeColumns = false;
			this->DgLista->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Yellow;
			this->DgLista->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DgLista->BackgroundColor = System::Drawing::Color::White;
			this->DgLista->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DgLista->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DgLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ITEM, this->CODIGO,
					this->DESCRICAO, this->VALOR
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->DgLista->DefaultCellStyle = dataGridViewCellStyle3;
			this->DgLista->GridColor = System::Drawing::Color::White;
			this->DgLista->Location = System::Drawing::Point(7, 82);
			this->DgLista->Name = L"DgLista";
			this->DgLista->RowHeadersVisible = false;
			this->DgLista->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->DgLista->Size = System::Drawing::Size(518, 325);
			this->DgLista->TabIndex = 83;
			this->DgLista->Visible = false;
			// 
			// ITEM
			// 
			this->ITEM->HeaderText = L"ITEM";
			this->ITEM->Name = L"ITEM";
			// 
			// CODIGO
			// 
			this->CODIGO->HeaderText = L"CODIGO";
			this->CODIGO->Name = L"CODIGO";
			this->CODIGO->Visible = false;
			// 
			// DESCRICAO
			// 
			this->DESCRICAO->FillWeight = 200;
			this->DESCRICAO->HeaderText = L"DESCRIÇÃO";
			this->DESCRICAO->Name = L"DESCRICAO";
			this->DESCRICAO->Width = 200;
			// 
			// VALOR
			// 
			this->VALOR->HeaderText = L"VALOR";
			this->VALOR->Name = L"VALOR";
			// 
			// LbMensagem
			// 
			this->LbMensagem->BackColor = System::Drawing::Color::Transparent;
			this->LbMensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbMensagem->ForeColor = System::Drawing::Color::White;
			this->LbMensagem->Location = System::Drawing::Point(12, 54);
			this->LbMensagem->Name = L"LbMensagem";
			this->LbMensagem->Size = System::Drawing::Size(513, 353);
			this->LbMensagem->TabIndex = 84;
			// 
			// TxTelefone
			// 
			this->TxTelefone->BackColor = System::Drawing::Color::White;
			this->TxTelefone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxTelefone->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxTelefone->ForeColor = System::Drawing::Color::Black;
			this->TxTelefone->Location = System::Drawing::Point(7, 474);
			this->TxTelefone->MaxLength = 10;
			this->TxTelefone->Name = L"TxTelefone";
			this->TxTelefone->Size = System::Drawing::Size(185, 34);
			this->TxTelefone->TabIndex = 86;
			this->TxTelefone->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxTelefone->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form7::TxTelefone_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 18));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(12, 444);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 27);
			this->label4->TabIndex = 88;
			this->label4->Text = L"TELEFONE";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 18));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(380, 443);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 27);
			this->label3->TabIndex = 90;
			this->label3->Text = L"OPÇÃO";
			this->label3->Visible = false;
			// 
			// TxOpcao1
			// 
			this->TxOpcao1->BackColor = System::Drawing::Color::White;
			this->TxOpcao1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TxOpcao1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F));
			this->TxOpcao1->ForeColor = System::Drawing::Color::Black;
			this->TxOpcao1->Location = System::Drawing::Point(385, 473);
			this->TxOpcao1->MaxLength = 10;
			this->TxOpcao1->Name = L"TxOpcao1";
			this->TxOpcao1->Size = System::Drawing::Size(140, 34);
			this->TxOpcao1->TabIndex = 89;
			this->TxOpcao1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TxOpcao1->Visible = false;
			this->TxOpcao1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form7::TxOpcao1_KeyDown);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(537, 519);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TxOpcao1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TxTelefone);
			this->Controls->Add(this->DgLista);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->TxOpcao);
			this->Controls->Add(this->LbMensagem);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form7::Form7_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form7_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

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
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form7_Load(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 Boolean retorno = isConnectedDLL();

				 if (retorno)
				 {
					 LbMensagem->Text = "INFORME O DDD E O NUMERO DO TELEFONE";
				 }
				 else
				 {
					 throw gcnew Exception("SEM CONEXÃO COM A INTERNET, POR FAVOR VERIFIQUE");
				 }
			 }
			 catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 this->Close();
			 }
		 }


private: System::Void TxOpcao_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	try
	{
		if (e->KeyCode == Keys::Enter)
		{

			if (!String::IsNullOrEmpty(TxOpcao->Text))
			{
	
				if (TxOpcao->Text == "1")
				{
					DgLista->Visible = true;
					LbMensagem->Visible = false;

					DgLista->Rows->Clear();

					String^ Result = Realsoft_Recarga::ListarOperadora();

					XmlDocument ^_xdoc = gcnew XmlDocument();

					_xdoc->LoadXml(Result);

					XmlNodeList ^elemList = _xdoc->GetElementsByTagName("produto");

					for (int i = 0; i < elemList->Count; i++)
					{
						XmlNode ^Raiz = Elemento(elemList[i], "nomeProduto");

						XmlNode ^Cod_produto = Elemento(elemList[i], "codigoProduto");

						String ^Operadora = Raiz->LastChild->Value->Substring(0, 3);
						
						if (Operadora == "TIM")
						{
							XmlNode ^Valor = Elemento(elemList[i], "precovendaProduto");							

							array<String^>^Param = gcnew array<String^>(4);

							Param[0] = Convert::ToString(i + 1);
							Param[1] = Cod_produto->LastChild->Value;
							Param[2] = Raiz->LastChild->Value;
							Param[3] = Valor->LastChild->Value;

							DgLista->Rows->Add(Param);
						}


						TxOpcao->Visible = false;
						TxOpcao1->Visible = true;
						Label2->Visible = false;
						label3->Visible = true;
						TxOpcao1->Focus();
					}
				}
				else if (TxOpcao->Text == "2")
				{
					DgLista->Visible = true;
					LbMensagem->Visible = false;

					DgLista->Rows->Clear();

					String^ Result = Realsoft_Recarga::ListarOperadora();

					XmlDocument ^_xdoc = gcnew XmlDocument();

					_xdoc->LoadXml(Result);

					XmlNodeList ^elemList = _xdoc->GetElementsByTagName("produto");

					for (int i = 0; i < elemList->Count; i++)
					{
						XmlNode ^Raiz = Elemento(elemList[i], "nomeProduto");

						XmlNode ^Cod_produto = Elemento(elemList[i], "codigoProduto");

						String ^Operadora = Raiz->LastChild->Value->Substring(0, 5);

						if (Operadora == "CLARO")
						{

							XmlNode ^Valor = Elemento(elemList[i], "precovendaProduto");

							array<String^>^Param = gcnew array<String^>(4);

							Param[0] = Convert::ToString(i + 1);
							Param[1] = Cod_produto->LastChild->Value;
							Param[2] = Raiz->LastChild->Value;
							Param[3] = Valor->LastChild->Value;

							DgLista->Rows->Add(Param);
						}

						TxOpcao->Visible = false;
						TxOpcao1->Visible = true;
						Label2->Visible = false;
						label3->Visible = true;
						TxOpcao1->Focus();
					}
				}
				else if (TxOpcao->Text == "3")
				{
					DgLista->Visible = true;
					LbMensagem->Visible = false;

					DgLista->Rows->Clear();

					String^ Result = Realsoft_Recarga::ListarOperadora();

					XmlDocument ^_xdoc = gcnew XmlDocument();

					_xdoc->LoadXml(Result);

					XmlNodeList ^elemList = _xdoc->GetElementsByTagName("produto");

					for (int i = 0; i < elemList->Count; i++)
					{
						XmlNode ^Raiz = Elemento(elemList[i], "nomeProduto");

						XmlNode ^Cod_produto = Elemento(elemList[i], "codigoProduto");

						String ^Operadora = Raiz->LastChild->Value->Substring(0, 4);

						if (Operadora == "VIVO")
						{

							XmlNode ^Valor = Elemento(elemList[i], "precovendaProduto");

							array<String^>^Param = gcnew array<String^>(4);

							Param[0] = Convert::ToString(i + 1);
							Param[1] = Cod_produto->LastChild->Value;
							Param[2] = Raiz->LastChild->Value;
							Param[3] = Valor->LastChild->Value;

							DgLista->Rows->Add(Param);
						}

						TxOpcao->Visible = false;
						TxOpcao1->Visible = true;
						Label2->Visible = false;
						label3->Visible = true;
						TxOpcao1->Focus();
					}
				}
				else if (TxOpcao->Text == "4")
				{
					DgLista->Visible = true;
					LbMensagem->Visible = false;

					DgLista->Rows->Clear();

					String^ Result = Realsoft_Recarga::ListarOperadora();

					XmlDocument ^_xdoc = gcnew XmlDocument();

					_xdoc->LoadXml(Result);

					XmlNodeList ^elemList = _xdoc->GetElementsByTagName("produto");

					for (int i = 0; i < elemList->Count; i++)
					{
						XmlNode ^Raiz = Elemento(elemList[i], "nomeProduto");

						XmlNode ^Cod_produto = Elemento(elemList[i], "codigoProduto");

						String ^Operadora = Raiz->LastChild->Value->Substring(0, 2);

						if (Operadora == "OI")
						{
							XmlNode ^Valor = Elemento(elemList[i], "precovendaProduto");

							array<String^>^Param = gcnew array<String^>(4);

							Param[0] = Convert::ToString(i + 1);
							Param[1] = Cod_produto->LastChild->Value;
							Param[2] = Raiz->LastChild->Value;
							Param[3] = Valor->LastChild->Value;

							DgLista->Rows->Add(Param);
						}

						TxOpcao->Visible = false;
						TxOpcao1->Visible = true;
						Label2->Visible = false;
						label3->Visible = true;
						TxOpcao1->Focus();
					}
				}
				else if (TxOpcao->Text == "5")
				{
					DgLista->Visible = true;
					LbMensagem->Visible = false;

					DgLista->Rows->Clear();

					String^ Result = Realsoft_Recarga::ListarOperadora();

					XmlDocument ^_xdoc = gcnew XmlDocument();

					_xdoc->LoadXml(Result);

					XmlNodeList ^elemList = _xdoc->GetElementsByTagName("produto");

					for (int i = 0; i < elemList->Count; i++)
					{
						XmlNode ^Raiz = Elemento(elemList[i], "nomeProduto");

						XmlNode ^Cod_produto = Elemento(elemList[i], "codigoProduto");


						XmlNode ^Valor = Elemento(elemList[i], "precovendaProduto");

						array<String^>^Param = gcnew array<String^>(4);

						Param[0] = Convert::ToString(i + 1);
						Param[1] = Cod_produto->LastChild->Value;
						Param[2] = Raiz->LastChild->Value;
						Param[3] = Valor->LastChild->Value;

						DgLista->Rows->Add(Param);
					}
					TxOpcao->Visible = false;
					TxOpcao1->Visible = true;
					Label2->Visible = false;
					label3->Visible = true;
					TxOpcao1->Focus();
				}
				
			}
			else
			{
				throw gcnew Exception("OPÇÃO INVALIDA");
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

private: System::Void TxTelefone_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		try
		{
			String ^Valida = "^[0-9]{2}-[0-9]{4}-[0-9]{4}$";
			
			Int64 Numero =  Convert::ToInt64(TxTelefone->Text);

			String^ Resultado = String::Format("{0:##-####-####}", Numero);
			
			Match ^validacao = Regex::Match(Resultado, Valida);

			if (validacao->Success)
			{
				LbMensagem->Text = "";

				String^ Result = Realsoft_Recarga::ListarOperadora();

				XmlDocument ^_xdoc = gcnew XmlDocument();

				_xdoc->LoadXml(Result);

				XmlNodeList ^elemList = _xdoc->GetElementsByTagName("nomeOperadora");

				for (int i = 0; i < elemList->Count; i++)
				{
					LbMensagem->Text += i + 1 + " - " + elemList[i]->InnerXml + Environment::NewLine;
				}

				TxOpcao->Visible = true;
				TxOpcao->Focus();
				Label2->Visible = true;
			}
			else
			{
				throw gcnew Exception("TELEFONE INFORMADO COM FORMATO INVÁLIDO");
			}

		}
		catch (Exception ^ex)
		{
			MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

		 private: static String^ CodigoCompra = nullptr;
		 private: static Decimal Preco;
		 private: static String^ CodigoProduto;
		 private: Realsoft_RecOnline ^__reconline = nullptr;
		 private: static String^ DescricaoRec = nullptr;

private: System::Void TxOpcao1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter)
	{
		String ^getTexto = nullptr;
		String ^Descricao = "";
		
		for each(DataGridViewRow ^linha in DgLista->Rows)
		{
			for each (DataGridViewCell ^celula in DgLista->Rows[linha->Index]->Cells)
			{
				if (celula->ColumnIndex == 0)
				{
					getTexto = celula->Value->ToString();

					if (getTexto == TxOpcao1->Text)
					{
						DgLista->CurrentCell = celula;
			
						CodigoProduto = DgLista->CurrentRow->Cells[1]->Value->ToString();

						Preco = Decimal::Parse(DgLista->CurrentRow->Cells[3]->Value->ToString()->Replace(".",","));

						DescricaoRec = DgLista->CurrentRow->Cells[2]->Value->ToString();

						DgLista->CurrentRow->DefaultCellStyle->BackColor = Color::Red;


						}
					}
				}
			}

		
		System::Windows::Forms::DialogResult Pergunta;

		Pergunta = MessageBox::Show("Deseja realmente enviar a recarga?", "Atenção", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (Pergunta == System::Windows::Forms::DialogResult::Yes)
		{
			try
			{
				__reconline = gcnew Realsoft_RecOnline();

				Random ^Codigo = gcnew Random();

				CodigoCompra = "200" + Codigo->Next(999999).ToString();

				String^ TrataNumeroDDD = TxTelefone->Text->Replace("-", "")->Substring(0, 2);
				String^ TrataNumero = TxTelefone->Text->Replace("-", "")->Substring(2, 8);

				String^ Result = Realsoft_Recarga::CompraRecarga(CodigoCompra, CodigoProduto, Preco, TrataNumeroDDD, TrataNumero, "1", Realsoft_Geral::logon->Descricao);

				XmlDocument ^_xdoc = gcnew XmlDocument();

				_xdoc->LoadXml(Result);

				XmlNode ^ide = Elemento(_xdoc, "cellcard");

				XmlNode ^Transacao = Elemento(ide, "codigoTransacao");
				int _Transacao = int::Parse(Transacao->LastChild->Value);


				XmlNode ^CodigoTransacao = Elemento(ide, "codigo");
				__reconline->CodigoTransacao = int::Parse(CodigoTransacao->LastChild->Value);

				
				if (_Transacao == 5)
				{
					XmlNode ^cod_online = Elemento(ide, "cod_online");
					__reconline->RetornoCodigo = int::Parse(cod_online->LastChild->Value);

					XmlNode ^produto = Elemento(ide, "produto");
					__reconline->Produto = int::Parse(produto->LastChild->Value);

					XmlNode ^preco = Elemento(ide, "preco");
					__reconline->Preco = Decimal::Parse(preco->LastChild->Value);

					XmlNode ^face = Elemento(ide, "face");
					__reconline->Face = Decimal::Parse(face->LastChild->Value);

					XmlNode ^vencimento = Elemento(ide, "vencimento");
					__reconline->Vencimento = DateTime::Parse(vencimento->LastChild->Value);

					XmlNode ^pago = Elemento(ide, "pago");
					__reconline->Pago = Decimal::Parse(pago->LastChild->Value);

					XmlNode ^ddd = Elemento(ide, "ddd");
					__reconline->DDD = int::Parse(ddd->LastChild->Value);

					XmlNode ^fone = Elemento(ide, "fone");
					__reconline->Telefone = int::Parse(fone->LastChild->Value);

					XmlNode ^mensagem = Elemento(ide, "mensagem");
					__reconline->Mensagem = mensagem->LastChild->Value;

					XmlNode ^nsu = Elemento(ide, "nsu");
					__reconline->NSU = nsu->LastChild->Value;

					XmlNode ^dataRV = Elemento(ide, "dataRV");
					__reconline->DataRV = DateTime::Parse(dataRV->LastChild->Value);

					Threading::Thread::Sleep(3000);

					try
					{
						Result = Realsoft_Recarga::ConfirmarCompra(CodigoCompra, "0");

						XmlDocument ^_xdoc = gcnew XmlDocument();

						_xdoc->LoadXml(Result);

						XmlNode ^ide = Elemento(_xdoc, "cellcard");

						XmlNode ^ret_codigo = Elemento(ide, "codigo");
						int retorno_transacao = int::Parse(ret_codigo->LastChild->Value);

						if (retorno_transacao != 0)
						{
							MessageBox::Show(__reconline->Mensagem + " Clique em OK para imprimir o comprovante", "Recarga Online", MessageBoxButtons::OK, MessageBoxIcon::Information);

							if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{

							}
							else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{
							}
							else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{
								Realsoft_Daruma::ImprimeRecargaOnline(DescricaoRec, __reconline->DataRV, TrataNumeroDDD, __reconline->RetornoCodigo.ToString(), Realsoft_Geral::logon->Descricao, Preco.ToString(), TrataNumero, __reconline->NSU, "REALSOFFT - OBRIGADO E VOLTE SEMPRE", CodigoCompra);
							}
							else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							{
								Realsoft_BematechNaoFiscal::ImprimirComprovanteRecarga(DescricaoRec, __reconline->DataRV, TrataNumeroDDD, __reconline->RetornoCodigo.ToString(), Realsoft_Geral::logon->Descricao, Preco.ToString(), TrataNumero, __reconline->NSU, "REALSOFFT - OBRIGADO E VOLTE SEMPRE", CodigoCompra);
							}
							else
							{
								throw gcnew Exception("IMPRESSORA NÃO CADASTRADA");
							}

							DgLista->Visible = false;
							LbMensagem->Text = "";
							LbMensagem->Visible = true;

							this->Close();

						}
						else
						{
							throw gcnew Exception("REFAÇA A TRANSAÇÃO");
						}
					}
					catch (Exception ^ex)
					{

						LbMensagem->ResetText();
						DgLista->Visible = false;

						LbMensagem->Text = "OCORREU UM PROBLEMA AO CONFIRMAR A RECARGA O MESMO SERÁ CANCELADO..." + Environment::NewLine;

						LbMensagem->Text += "POR FAVOR AGUARDE O CANCELAMENTO DA RECARGA" + Environment::NewLine;

						Threading::Thread::Sleep(5000);

						String^ Result = Realsoft_Recarga::ConfirmarCompra(CodigoCompra, "1");

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
							LbMensagem->Text += "TRANSAÇÃO ABORTADA COM SUCESSO" + Environment::NewLine;

							Threading::Thread::Sleep(5000);

							LbMensagem->Text += "AGUARDE A IMPRESSÃO DO COMPROVANTE DE CANCELAMENTO" + Environment::NewLine;

							LbMensagem->Text += "IMPRIMINDO COMPROVANTE";

							if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{

							}
							else if (Realsoft_Sistema::Retorno->Equals("Elgin") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{

							}
							else if (Realsoft_Sistema::Retorno->Equals("Daruma") & Realsoft_Sistema::Modo->Equals("Fiscal"))
							{

							}
							else if (Realsoft_Sistema::Retorno->Equals("Bematech") & Realsoft_Sistema::Modo->Equals("NaoFiscal"))
							{
								Realsoft_BematechNaoFiscal::ImprimirComprovanteCancelamento(TrataNumeroDDD + TrataNumero, CodigoCompra);
							}
							else
							{
								throw gcnew Exception("IMPRESSORA NÃO CADASTRADA");
							}

							this->Close();
						}
					}
				}
				else
				{
					if (_Transacao == 0)
					{
						System::Windows::Forms::DialogResult  Pergunta;

						XmlNode ^mensagem = Elemento(ide, "mensagem");
						__reconline->Mensagem = mensagem->LastChild->Value;

						Pergunta = MessageBox::Show(__reconline->Mensagem + " Deseja abortar a tranzação ", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);

						if (Pergunta == System::Windows::Forms::DialogResult::OK)
						{							
							throw gcnew Exception("TRANSAÇÃO ABORTADA COM SUCESSO");
						}
						
					}
				}
			}
			catch (Exception ^ex)
			{
				MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
		}

	}
}

private: bool isConnectedDLL()
{
	try
	{
		int desc;

		return InternetGetConnectedState(desc, 0);
	}
	catch (Exception ^ex)
	{
		MessageBox::Show(ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};
}
