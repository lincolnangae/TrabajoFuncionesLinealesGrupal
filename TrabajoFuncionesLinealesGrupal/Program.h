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
	private: System::Windows::Forms::Label^ LabelCoordX;
	private: System::Windows::Forms::Label^ LabelCoordY;


	private: System::Windows::Forms::GroupBox^ GroupCoordBox;
	private: System::Windows::Forms::TextBox^ TextCoordY;
	private: System::Windows::Forms::TextBox^ TextCoorX;



	private: System::Windows::Forms::GroupBox^ GroupFigureBox;
	private: System::Windows::Forms::Button^ ConfirnFigureButton;
	private: System::Windows::Forms::Panel^ PanelDiagram;
	private: System::Windows::Forms::ComboBox^ ListFigureCombo;








	private: System::Windows::Forms::GroupBox^ GroupReflexBox;
	private: System::Windows::Forms::Button^ ReflexYMXButton;
	private: System::Windows::Forms::Button^ ReflexOriginButton;
	private: System::Windows::Forms::Button^ ReflexBiscButton;
	private: System::Windows::Forms::Button^ ReflexYButton;
	private: System::Windows::Forms::Button^ ReflexXButton;






	private: System::Windows::Forms::GroupBox^ GroupScaleBox;
	private: System::Windows::Forms::TextBox^ TextScaleYPr;
	private: System::Windows::Forms::TextBox^ TextScaleXPr;
	private: System::Windows::Forms::Label^ LabelScaleX;
	private: System::Windows::Forms::Label^ LabelScaleY;
	private: System::Windows::Forms::Button^ ConfirmScaleButton;
	private: System::Windows::Forms::GroupBox^ GroupRotateBox;
	private: System::Windows::Forms::Button^ ConfirmRotateButton;
	private: System::Windows::Forms::TextBox^ TextRotatePr;
	private: System::Windows::Forms::Label^ LabelAngle;
	private: System::Windows::Forms::Button^ ButtonCleanPC;


















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Program::typeid));
			this->btnConfirmCord = (gcnew System::Windows::Forms::Button());
			this->LabelCoordX = (gcnew System::Windows::Forms::Label());
			this->LabelCoordY = (gcnew System::Windows::Forms::Label());
			this->GroupCoordBox = (gcnew System::Windows::Forms::GroupBox());
			this->TextCoordY = (gcnew System::Windows::Forms::TextBox());
			this->TextCoorX = (gcnew System::Windows::Forms::TextBox());
			this->GroupFigureBox = (gcnew System::Windows::Forms::GroupBox());
			this->ListFigureCombo = (gcnew System::Windows::Forms::ComboBox());
			this->ConfirnFigureButton = (gcnew System::Windows::Forms::Button());
			this->PanelDiagram = (gcnew System::Windows::Forms::Panel());
			this->GroupReflexBox = (gcnew System::Windows::Forms::GroupBox());
			this->ReflexYMXButton = (gcnew System::Windows::Forms::Button());
			this->ReflexOriginButton = (gcnew System::Windows::Forms::Button());
			this->ReflexBiscButton = (gcnew System::Windows::Forms::Button());
			this->ReflexYButton = (gcnew System::Windows::Forms::Button());
			this->ReflexXButton = (gcnew System::Windows::Forms::Button());
			this->GroupScaleBox = (gcnew System::Windows::Forms::GroupBox());
			this->ConfirmScaleButton = (gcnew System::Windows::Forms::Button());
			this->TextScaleYPr = (gcnew System::Windows::Forms::TextBox());
			this->TextScaleXPr = (gcnew System::Windows::Forms::TextBox());
			this->LabelScaleX = (gcnew System::Windows::Forms::Label());
			this->LabelScaleY = (gcnew System::Windows::Forms::Label());
			this->GroupRotateBox = (gcnew System::Windows::Forms::GroupBox());
			this->ConfirmRotateButton = (gcnew System::Windows::Forms::Button());
			this->TextRotatePr = (gcnew System::Windows::Forms::TextBox());
			this->LabelAngle = (gcnew System::Windows::Forms::Label());
			this->ButtonCleanPC = (gcnew System::Windows::Forms::Button());
			this->GroupCoordBox->SuspendLayout();
			this->GroupFigureBox->SuspendLayout();
			this->GroupReflexBox->SuspendLayout();
			this->GroupScaleBox->SuspendLayout();
			this->GroupRotateBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnConfirmCord
			// 
			this->btnConfirmCord->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->btnConfirmCord->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnConfirmCord.BackgroundImage")));
			this->btnConfirmCord->FlatAppearance->BorderSize = 3;
			this->btnConfirmCord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfirmCord->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->btnConfirmCord->Location = System::Drawing::Point(22, 104);
			this->btnConfirmCord->Name = L"btnConfirmCord";
			this->btnConfirmCord->Size = System::Drawing::Size(201, 38);
			this->btnConfirmCord->TabIndex = 0;
			this->btnConfirmCord->Text = L"Crear punto";
			this->btnConfirmCord->UseVisualStyleBackColor = false;
			// 
			// LabelCoordX
			// 
			this->LabelCoordX->AutoSize = true;
			this->LabelCoordX->BackColor = System::Drawing::Color::LightCyan;
			this->LabelCoordX->Location = System::Drawing::Point(19, 25);
			this->LabelCoordX->Name = L"LabelCoordX";
			this->LabelCoordX->Size = System::Drawing::Size(21, 19);
			this->LabelCoordX->TabIndex = 1;
			this->LabelCoordX->Text = L"X:";
			// 
			// LabelCoordY
			// 
			this->LabelCoordY->AutoSize = true;
			this->LabelCoordY->BackColor = System::Drawing::Color::LightCyan;
			this->LabelCoordY->Location = System::Drawing::Point(19, 60);
			this->LabelCoordY->Name = L"LabelCoordY";
			this->LabelCoordY->Size = System::Drawing::Size(21, 19);
			this->LabelCoordY->TabIndex = 2;
			this->LabelCoordY->Text = L"Y:";
			// 
			// GroupCoordBox
			// 
			this->GroupCoordBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupCoordBox.BackgroundImage")));
			this->GroupCoordBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupCoordBox->Controls->Add(this->TextCoordY);
			this->GroupCoordBox->Controls->Add(this->TextCoorX);
			this->GroupCoordBox->Controls->Add(this->LabelCoordX);
			this->GroupCoordBox->Controls->Add(this->btnConfirmCord);
			this->GroupCoordBox->Controls->Add(this->LabelCoordY);
			this->GroupCoordBox->Location = System::Drawing::Point(928, 14);
			this->GroupCoordBox->Name = L"GroupCoordBox";
			this->GroupCoordBox->Size = System::Drawing::Size(242, 155);
			this->GroupCoordBox->TabIndex = 3;
			this->GroupCoordBox->TabStop = false;
			this->GroupCoordBox->Text = L"COORDENADAS";
			// 
			// TextCoordY
			// 
			this->TextCoordY->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextCoordY->Location = System::Drawing::Point(89, 60);
			this->TextCoordY->Name = L"TextCoordY";
			this->TextCoordY->Size = System::Drawing::Size(135, 27);
			this->TextCoordY->TabIndex = 5;
			// 
			// TextCoorX
			// 
			this->TextCoorX->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextCoorX->Location = System::Drawing::Point(88, 22);
			this->TextCoorX->Name = L"TextCoorX";
			this->TextCoorX->Size = System::Drawing::Size(135, 27);
			this->TextCoorX->TabIndex = 4;
			// 
			// GroupFigureBox
			// 
			this->GroupFigureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupFigureBox.BackgroundImage")));
			this->GroupFigureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupFigureBox->Controls->Add(this->ListFigureCombo);
			this->GroupFigureBox->Controls->Add(this->ConfirnFigureButton);
			this->GroupFigureBox->Location = System::Drawing::Point(928, 176);
			this->GroupFigureBox->Name = L"GroupFigureBox";
			this->GroupFigureBox->Size = System::Drawing::Size(242, 128);
			this->GroupFigureBox->TabIndex = 4;
			this->GroupFigureBox->TabStop = false;
			this->GroupFigureBox->Text = L"FiGURAS PREESTABLECIDAS";
			// 
			// ListFigureCombo
			// 
			this->ListFigureCombo->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ListFigureCombo->FormattingEnabled = true;
			this->ListFigureCombo->Location = System::Drawing::Point(23, 26);
			this->ListFigureCombo->Name = L"ListFigureCombo";
			this->ListFigureCombo->Size = System::Drawing::Size(201, 27);
			this->ListFigureCombo->TabIndex = 1;
			// 
			// ConfirnFigureButton
			// 
			this->ConfirnFigureButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ConfirnFigureButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirnFigureButton.BackgroundImage")));
			this->ConfirnFigureButton->FlatAppearance->BorderSize = 3;
			this->ConfirnFigureButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirnFigureButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ConfirnFigureButton->Location = System::Drawing::Point(22, 75);
			this->ConfirnFigureButton->Name = L"ConfirnFigureButton";
			this->ConfirnFigureButton->Size = System::Drawing::Size(201, 35);
			this->ConfirnFigureButton->TabIndex = 0;
			this->ConfirnFigureButton->Text = L"Aceptar";
			this->ConfirnFigureButton->UseVisualStyleBackColor = false;
			// 
			// PanelDiagram
			// 
			this->PanelDiagram->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PanelDiagram->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelDiagram.BackgroundImage")));
			this->PanelDiagram->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PanelDiagram->Location = System::Drawing::Point(23, 9);
			this->PanelDiagram->Name = L"PanelDiagram";
			this->PanelDiagram->Size = System::Drawing::Size(870, 870);
			this->PanelDiagram->TabIndex = 5;
			// 
			// GroupReflexBox
			// 
			this->GroupReflexBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupReflexBox.BackgroundImage")));
			this->GroupReflexBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupReflexBox->Controls->Add(this->ReflexYMXButton);
			this->GroupReflexBox->Controls->Add(this->ReflexOriginButton);
			this->GroupReflexBox->Controls->Add(this->ReflexBiscButton);
			this->GroupReflexBox->Controls->Add(this->ReflexYButton);
			this->GroupReflexBox->Controls->Add(this->ReflexXButton);
			this->GroupReflexBox->Location = System::Drawing::Point(928, 311);
			this->GroupReflexBox->Name = L"GroupReflexBox";
			this->GroupReflexBox->Size = System::Drawing::Size(242, 155);
			this->GroupReflexBox->TabIndex = 6;
			this->GroupReflexBox->TabStop = false;
			this->GroupReflexBox->Text = L"REFLEXION";
			// 
			// ReflexYMXButton
			// 
			this->ReflexYMXButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ReflexYMXButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReflexYMXButton.BackgroundImage")));
			this->ReflexYMXButton->FlatAppearance->BorderSize = 3;
			this->ReflexYMXButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReflexYMXButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ReflexYMXButton->Location = System::Drawing::Point(65, 111);
			this->ReflexYMXButton->Name = L"ReflexYMXButton";
			this->ReflexYMXButton->Size = System::Drawing::Size(113, 35);
			this->ReflexYMXButton->TabIndex = 7;
			this->ReflexYMXButton->Text = L"Y = -X";
			this->ReflexYMXButton->UseVisualStyleBackColor = false;
			// 
			// ReflexOriginButton
			// 
			this->ReflexOriginButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ReflexOriginButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReflexOriginButton.BackgroundImage")));
			this->ReflexOriginButton->FlatAppearance->BorderSize = 3;
			this->ReflexOriginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReflexOriginButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ReflexOriginButton->Location = System::Drawing::Point(123, 68);
			this->ReflexOriginButton->Name = L"ReflexOriginButton";
			this->ReflexOriginButton->Size = System::Drawing::Size(113, 35);
			this->ReflexOriginButton->TabIndex = 5;
			this->ReflexOriginButton->Text = L"Origen";
			this->ReflexOriginButton->UseVisualStyleBackColor = false;
			// 
			// ReflexBiscButton
			// 
			this->ReflexBiscButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ReflexBiscButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReflexBiscButton.BackgroundImage")));
			this->ReflexBiscButton->FlatAppearance->BorderSize = 3;
			this->ReflexBiscButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReflexBiscButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ReflexBiscButton->Location = System::Drawing::Point(6, 68);
			this->ReflexBiscButton->Name = L"ReflexBiscButton";
			this->ReflexBiscButton->Size = System::Drawing::Size(113, 35);
			this->ReflexBiscButton->TabIndex = 4;
			this->ReflexBiscButton->Text = L"Bisectriz";
			this->ReflexBiscButton->UseVisualStyleBackColor = false;
			// 
			// ReflexYButton
			// 
			this->ReflexYButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ReflexYButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReflexYButton.BackgroundImage")));
			this->ReflexYButton->FlatAppearance->BorderSize = 3;
			this->ReflexYButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReflexYButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ReflexYButton->Location = System::Drawing::Point(123, 25);
			this->ReflexYButton->Name = L"ReflexYButton";
			this->ReflexYButton->Size = System::Drawing::Size(113, 35);
			this->ReflexYButton->TabIndex = 3;
			this->ReflexYButton->Text = L"Eje Y";
			this->ReflexYButton->UseVisualStyleBackColor = false;
			// 
			// ReflexXButton
			// 
			this->ReflexXButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ReflexXButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReflexXButton.BackgroundImage")));
			this->ReflexXButton->FlatAppearance->BorderSize = 3;
			this->ReflexXButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReflexXButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ReflexXButton->Location = System::Drawing::Point(6, 25);
			this->ReflexXButton->Name = L"ReflexXButton";
			this->ReflexXButton->Size = System::Drawing::Size(113, 35);
			this->ReflexXButton->TabIndex = 2;
			this->ReflexXButton->Text = L"Eje X";
			this->ReflexXButton->UseVisualStyleBackColor = false;
			// 
			// GroupScaleBox
			// 
			this->GroupScaleBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupScaleBox.BackgroundImage")));
			this->GroupScaleBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupScaleBox->Controls->Add(this->ConfirmScaleButton);
			this->GroupScaleBox->Controls->Add(this->TextScaleYPr);
			this->GroupScaleBox->Controls->Add(this->TextScaleXPr);
			this->GroupScaleBox->Controls->Add(this->LabelScaleX);
			this->GroupScaleBox->Controls->Add(this->LabelScaleY);
			this->GroupScaleBox->Location = System::Drawing::Point(928, 474);
			this->GroupScaleBox->Name = L"GroupScaleBox";
			this->GroupScaleBox->Size = System::Drawing::Size(242, 157);
			this->GroupScaleBox->TabIndex = 7;
			this->GroupScaleBox->TabStop = false;
			this->GroupScaleBox->Text = L"HOMOTECIA";
			// 
			// ConfirmScaleButton
			// 
			this->ConfirmScaleButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ConfirmScaleButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmScaleButton.BackgroundImage")));
			this->ConfirmScaleButton->FlatAppearance->BorderSize = 3;
			this->ConfirmScaleButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirmScaleButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ConfirmScaleButton->Location = System::Drawing::Point(23, 103);
			this->ConfirmScaleButton->Name = L"ConfirmScaleButton";
			this->ConfirmScaleButton->Size = System::Drawing::Size(201, 35);
			this->ConfirmScaleButton->TabIndex = 2;
			this->ConfirmScaleButton->Text = L"Aceptar";
			this->ConfirmScaleButton->UseVisualStyleBackColor = false;
			// 
			// TextScaleYPr
			// 
			this->TextScaleYPr->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextScaleYPr->Location = System::Drawing::Point(88, 61);
			this->TextScaleYPr->Name = L"TextScaleYPr";
			this->TextScaleYPr->Size = System::Drawing::Size(135, 27);
			this->TextScaleYPr->TabIndex = 5;
			// 
			// TextScaleXPr
			// 
			this->TextScaleXPr->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextScaleXPr->Location = System::Drawing::Point(88, 22);
			this->TextScaleXPr->Name = L"TextScaleXPr";
			this->TextScaleXPr->Size = System::Drawing::Size(135, 27);
			this->TextScaleXPr->TabIndex = 4;
			// 
			// LabelScaleX
			// 
			this->LabelScaleX->AutoSize = true;
			this->LabelScaleX->BackColor = System::Drawing::Color::LightCyan;
			this->LabelScaleX->Location = System::Drawing::Point(19, 25);
			this->LabelScaleX->Name = L"LabelScaleX";
			this->LabelScaleX->Size = System::Drawing::Size(21, 19);
			this->LabelScaleX->TabIndex = 1;
			this->LabelScaleX->Text = L"X:";
			// 
			// LabelScaleY
			// 
			this->LabelScaleY->AutoSize = true;
			this->LabelScaleY->BackColor = System::Drawing::Color::LightCyan;
			this->LabelScaleY->Location = System::Drawing::Point(19, 64);
			this->LabelScaleY->Name = L"LabelScaleY";
			this->LabelScaleY->Size = System::Drawing::Size(21, 19);
			this->LabelScaleY->TabIndex = 2;
			this->LabelScaleY->Text = L"Y:";
			// 
			// GroupRotateBox
			// 
			this->GroupRotateBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupRotateBox.BackgroundImage")));
			this->GroupRotateBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupRotateBox->Controls->Add(this->ConfirmRotateButton);
			this->GroupRotateBox->Controls->Add(this->TextRotatePr);
			this->GroupRotateBox->Controls->Add(this->LabelAngle);
			this->GroupRotateBox->Location = System::Drawing::Point(928, 648);
			this->GroupRotateBox->Name = L"GroupRotateBox";
			this->GroupRotateBox->Size = System::Drawing::Size(242, 130);
			this->GroupRotateBox->TabIndex = 8;
			this->GroupRotateBox->TabStop = false;
			this->GroupRotateBox->Text = L"ROTACION";
			// 
			// ConfirmRotateButton
			// 
			this->ConfirmRotateButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ConfirmRotateButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmRotateButton.BackgroundImage")));
			this->ConfirmRotateButton->FlatAppearance->BorderSize = 3;
			this->ConfirmRotateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirmRotateButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ConfirmRotateButton->Location = System::Drawing::Point(22, 72);
			this->ConfirmRotateButton->Name = L"ConfirmRotateButton";
			this->ConfirmRotateButton->Size = System::Drawing::Size(201, 35);
			this->ConfirmRotateButton->TabIndex = 8;
			this->ConfirmRotateButton->Text = L"Aceptar";
			this->ConfirmRotateButton->UseVisualStyleBackColor = false;
			// 
			// TextRotatePr
			// 
			this->TextRotatePr->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextRotatePr->Location = System::Drawing::Point(89, 26);
			this->TextRotatePr->Name = L"TextRotatePr";
			this->TextRotatePr->Size = System::Drawing::Size(135, 27);
			this->TextRotatePr->TabIndex = 4;
			// 
			// LabelAngle
			// 
			this->LabelAngle->AutoSize = true;
			this->LabelAngle->BackColor = System::Drawing::Color::LightCyan;
			this->LabelAngle->Location = System::Drawing::Point(19, 30);
			this->LabelAngle->Name = L"LabelAngle";
			this->LabelAngle->Size = System::Drawing::Size(57, 19);
			this->LabelAngle->TabIndex = 1;
			this->LabelAngle->Text = L"Angulo:";
			// 
			// ButtonCleanPC
			// 
			this->ButtonCleanPC->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ButtonCleanPC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonCleanPC.BackgroundImage")));
			this->ButtonCleanPC->FlatAppearance->BorderSize = 3;
			this->ButtonCleanPC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonCleanPC->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ButtonCleanPC->Location = System::Drawing::Point(928, 799);
			this->ButtonCleanPC->Name = L"ButtonCleanPC";
			this->ButtonCleanPC->Size = System::Drawing::Size(236, 49);
			this->ButtonCleanPC->TabIndex = 9;
			this->ButtonCleanPC->Text = L"Limpiar";
			this->ButtonCleanPC->UseVisualStyleBackColor = false;
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 891);
			this->Controls->Add(this->ButtonCleanPC);
			this->Controls->Add(this->GroupRotateBox);
			this->Controls->Add(this->GroupScaleBox);
			this->Controls->Add(this->GroupReflexBox);
			this->Controls->Add(this->PanelDiagram);
			this->Controls->Add(this->GroupFigureBox);
			this->Controls->Add(this->GroupCoordBox);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Source Han Sans CN Bold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Program";
			this->Text = L"Program";
			this->GroupCoordBox->ResumeLayout(false);
			this->GroupCoordBox->PerformLayout();
			this->GroupFigureBox->ResumeLayout(false);
			this->GroupReflexBox->ResumeLayout(false);
			this->GroupScaleBox->ResumeLayout(false);
			this->GroupScaleBox->PerformLayout();
			this->GroupRotateBox->ResumeLayout(false);
			this->GroupRotateBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
