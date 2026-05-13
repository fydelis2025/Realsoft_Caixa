#include "Form2.h"
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;


namespace Realsoft_Caixa {

	/// <summary>
	/// Summary for Realsoft_Principal
	/// </summary>
	public ref class Realsoft_Principal :  public System::Windows::Forms::Timer
	{
	public:
		Realsoft_Principal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Realsoft_Principal(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Required for Windows.Forms Class Composition Designer support
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Realsoft_Principal()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private: static Form2 ^Principal = gcnew Form2();


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			components = gcnew System::ComponentModel::Container();
		}

		public: void IniciarFormPrincipal(String^ Operador)
		{
			if (Principal == nullptr)
			{
				Principal = gcnew Form2();
			}
		
			try
			{
				//FMensagem->SetMensagem(Mensagem);
				//Principal->LbUsuario->Text = Operador;
				Principal->ShowDialog();
			}
			catch(Exception ^ex)
			{
				throw ex;
			}

	
		}
#pragma endregion
	};
}
