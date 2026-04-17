#pragma once

namespace TrabajoFuncionesLinealesGrupal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		Program(void)
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
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnConfirmCord;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textCoordY;
	private: System::Windows::Forms::TextBox^ textCoorX;
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
			this->btnConfirmCord = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textCoorX = (gcnew System::Windows::Forms::TextBox());
			this->textCoordY = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnConfirmCord
			// 
			this->btnConfirmCord->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnConfirmCord->Location = System::Drawing::Point(52, 102);
			this->btnConfirmCord->Name = L"btnConfirmCord";
			this->btnConfirmCord->Size = System::Drawing::Size(123, 48);
			this->btnConfirmCord->TabIndex = 0;
			this->btnConfirmCord->Text = L"Confirmar";
			this->btnConfirmCord->UseVisualStyleBackColor = true;
			// 
			// label1
			// hola carajo este es un comentario de prueba en git
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X:";
			this->label1->Click += gcnew System::EventHandler(this, &Program::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Y:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textCoordY);
			this->groupBox1->Controls->Add(this->textCoorX);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnConfirmCord);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(870, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 168);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"COORDENADAS";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Program::groupBox1_Enter);
			// 
			// textCoorX
			// 
			this->textCoorX->Location = System::Drawing::Point(75, 21);
			this->textCoorX->Name = L"textCoorX";
			this->textCoorX->Size = System::Drawing::Size(100, 22);
			this->textCoorX->TabIndex = 4;
			// 
			// textCoordY
			// 
			this->textCoordY->Location = System::Drawing::Point(75, 51);
			this->textCoordY->Name = L"textCoordY";
			this->textCoordY->Size = System::Drawing::Size(100, 22);
			this->textCoordY->TabIndex = 5;
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1082, 653);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
