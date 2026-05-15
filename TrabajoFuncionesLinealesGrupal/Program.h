#pragma once
#include "Controlador.h"
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
	private:
		Controlador^ ObjControlador;

	public:
		Program(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ObjControlador = gcnew Controlador();
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

	private: System::Windows::Forms::Button^ ReflexOriginButton;

	private: System::Windows::Forms::Button^ ReflexYButton;
	private: System::Windows::Forms::Button^ ReflexXButton;






	private: System::Windows::Forms::GroupBox^ GroupScaleBox;
	private: System::Windows::Forms::TextBox^ TextScale;


	private: System::Windows::Forms::Label^ LabelScaled;


	private: System::Windows::Forms::Button^ ConfirmScaleButton;
	private: System::Windows::Forms::GroupBox^ GroupRotateBox;
	private: System::Windows::Forms::Button^ ConfirmRoCButton;
	private: System::Windows::Forms::TextBox^ TextRotate;


	private: System::Windows::Forms::Label^ LabelAngle1;


	private: System::Windows::Forms::Button^ ButtonCleanPC;
	private: System::Windows::Forms::Label^ LabelPointAct;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ ConfirmDesplazarButton;

	private: System::Windows::Forms::TextBox^ TextDespX;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextDespY;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ConfirmRoFButton;




















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
			this->ReflexOriginButton = (gcnew System::Windows::Forms::Button());
			this->ReflexYButton = (gcnew System::Windows::Forms::Button());
			this->ReflexXButton = (gcnew System::Windows::Forms::Button());
			this->GroupScaleBox = (gcnew System::Windows::Forms::GroupBox());
			this->ConfirmScaleButton = (gcnew System::Windows::Forms::Button());
			this->TextScale = (gcnew System::Windows::Forms::TextBox());
			this->LabelScaled = (gcnew System::Windows::Forms::Label());
			this->GroupRotateBox = (gcnew System::Windows::Forms::GroupBox());
			this->ConfirmRoFButton = (gcnew System::Windows::Forms::Button());
			this->ConfirmRoCButton = (gcnew System::Windows::Forms::Button());
			this->TextRotate = (gcnew System::Windows::Forms::TextBox());
			this->LabelAngle1 = (gcnew System::Windows::Forms::Label());
			this->ButtonCleanPC = (gcnew System::Windows::Forms::Button());
			this->LabelPointAct = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TextDespY = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ConfirmDesplazarButton = (gcnew System::Windows::Forms::Button());
			this->TextDespX = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GroupCoordBox->SuspendLayout();
			this->GroupFigureBox->SuspendLayout();
			this->GroupReflexBox->SuspendLayout();
			this->GroupScaleBox->SuspendLayout();
			this->GroupRotateBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnConfirmCord
			// 
			this->btnConfirmCord->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->btnConfirmCord->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnConfirmCord.BackgroundImage")));
			this->btnConfirmCord->FlatAppearance->BorderSize = 3;
			this->btnConfirmCord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfirmCord->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->btnConfirmCord->Location = System::Drawing::Point(22, 82);
			this->btnConfirmCord->Name = L"btnConfirmCord";
			this->btnConfirmCord->Size = System::Drawing::Size(201, 38);
			this->btnConfirmCord->TabIndex = 0;
			this->btnConfirmCord->Text = L"Crear punto";
			this->btnConfirmCord->UseVisualStyleBackColor = false;
			this->btnConfirmCord->Click += gcnew System::EventHandler(this, &Program::btnConfirmCord_Click);
			// 
			// LabelCoordX
			// 
			this->LabelCoordX->AutoSize = true;
			this->LabelCoordX->BackColor = System::Drawing::Color::LightCyan;
			this->LabelCoordX->Location = System::Drawing::Point(19, 25);
			this->LabelCoordX->Name = L"LabelCoordX";
			this->LabelCoordX->Size = System::Drawing::Size(20, 16);
			this->LabelCoordX->TabIndex = 1;
			this->LabelCoordX->Text = L"X:";
			// 
			// LabelCoordY
			// 
			this->LabelCoordY->AutoSize = true;
			this->LabelCoordY->BackColor = System::Drawing::Color::LightCyan;
			this->LabelCoordY->Location = System::Drawing::Point(20, 54);
			this->LabelCoordY->Name = L"LabelCoordY";
			this->LabelCoordY->Size = System::Drawing::Size(21, 16);
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
			this->GroupCoordBox->Location = System::Drawing::Point(922, 40);
			this->GroupCoordBox->Name = L"GroupCoordBox";
			this->GroupCoordBox->Size = System::Drawing::Size(242, 133);
			this->GroupCoordBox->TabIndex = 3;
			this->GroupCoordBox->TabStop = false;
			this->GroupCoordBox->Text = L"COORDENADAS";
			// 
			// TextCoordY
			// 
			this->TextCoordY->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextCoordY->Location = System::Drawing::Point(89, 54);
			this->TextCoordY->Name = L"TextCoordY";
			this->TextCoordY->Size = System::Drawing::Size(135, 22);
			this->TextCoordY->TabIndex = 5;
			// 
			// TextCoorX
			// 
			this->TextCoorX->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextCoorX->Location = System::Drawing::Point(88, 22);
			this->TextCoorX->Name = L"TextCoorX";
			this->TextCoorX->Size = System::Drawing::Size(135, 22);
			this->TextCoorX->TabIndex = 4;
			// 
			// GroupFigureBox
			// 
			this->GroupFigureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupFigureBox.BackgroundImage")));
			this->GroupFigureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupFigureBox->Controls->Add(this->ListFigureCombo);
			this->GroupFigureBox->Controls->Add(this->ConfirnFigureButton);
			this->GroupFigureBox->Location = System::Drawing::Point(922, 179);
			this->GroupFigureBox->Name = L"GroupFigureBox";
			this->GroupFigureBox->Size = System::Drawing::Size(242, 110);
			this->GroupFigureBox->TabIndex = 4;
			this->GroupFigureBox->TabStop = false;
			this->GroupFigureBox->Text = L"FiGURAS PREESTABLECIDAS";
			// 
			// ListFigureCombo
			// 
			this->ListFigureCombo->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ListFigureCombo->FormattingEnabled = true;
			this->ListFigureCombo->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Cuadrado", L"Triangulo", L"Estrella", L"Pentagono",
					L"Rombo"
			});
			this->ListFigureCombo->Location = System::Drawing::Point(23, 26);
			this->ListFigureCombo->Name = L"ListFigureCombo";
			this->ListFigureCombo->Size = System::Drawing::Size(201, 24);
			this->ListFigureCombo->TabIndex = 1;
			// 
			// ConfirnFigureButton
			// 
			this->ConfirnFigureButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ConfirnFigureButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirnFigureButton.BackgroundImage")));
			this->ConfirnFigureButton->FlatAppearance->BorderSize = 3;
			this->ConfirnFigureButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirnFigureButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ConfirnFigureButton->Location = System::Drawing::Point(23, 66);
			this->ConfirnFigureButton->Name = L"ConfirnFigureButton";
			this->ConfirnFigureButton->Size = System::Drawing::Size(201, 35);
			this->ConfirnFigureButton->TabIndex = 0;
			this->ConfirnFigureButton->Text = L"Aceptar";
			this->ConfirnFigureButton->UseVisualStyleBackColor = false;
			this->ConfirnFigureButton->Click += gcnew System::EventHandler(this, &Program::btnAceptar_Click);
			// 
			// PanelDiagram
			// 
			this->PanelDiagram->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PanelDiagram->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PanelDiagram->Location = System::Drawing::Point(23, 9);
			this->PanelDiagram->Name = L"PanelDiagram";
			this->PanelDiagram->Size = System::Drawing::Size(870, 870);
			this->PanelDiagram->TabIndex = 5;
			this->PanelDiagram->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Program::PanelDiagram_Paint);
			// 
			// GroupReflexBox
			// 
			this->GroupReflexBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupReflexBox.BackgroundImage")));
			this->GroupReflexBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupReflexBox->Controls->Add(this->ReflexOriginButton);
			this->GroupReflexBox->Controls->Add(this->ReflexYButton);
			this->GroupReflexBox->Controls->Add(this->ReflexXButton);
			this->GroupReflexBox->Location = System::Drawing::Point(922, 295);
			this->GroupReflexBox->Name = L"GroupReflexBox";
			this->GroupReflexBox->Size = System::Drawing::Size(242, 121);
			this->GroupReflexBox->TabIndex = 6;
			this->GroupReflexBox->TabStop = false;
			this->GroupReflexBox->Text = L"EJE DE REFLEXION";
			// 
			// ReflexOriginButton
			// 
			this->ReflexOriginButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ReflexOriginButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReflexOriginButton.BackgroundImage")));
			this->ReflexOriginButton->FlatAppearance->BorderSize = 3;
			this->ReflexOriginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ReflexOriginButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ReflexOriginButton->Location = System::Drawing::Point(65, 66);
			this->ReflexOriginButton->Name = L"ReflexOriginButton";
			this->ReflexOriginButton->Size = System::Drawing::Size(113, 35);
			this->ReflexOriginButton->TabIndex = 5;
			this->ReflexOriginButton->Text = L"Origen";
			this->ReflexOriginButton->UseVisualStyleBackColor = false;
			this->ReflexOriginButton->Click += gcnew System::EventHandler(this, &Program::ReflexOriginButton_Click);
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
			this->ReflexYButton->Click += gcnew System::EventHandler(this, &Program::ReflexYButton_Click);
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
			this->ReflexXButton->Click += gcnew System::EventHandler(this, &Program::ReflexXButton_Click);
			// 
			// GroupScaleBox
			// 
			this->GroupScaleBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupScaleBox.BackgroundImage")));
			this->GroupScaleBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupScaleBox->Controls->Add(this->ConfirmScaleButton);
			this->GroupScaleBox->Controls->Add(this->TextScale);
			this->GroupScaleBox->Controls->Add(this->LabelScaled);
			this->GroupScaleBox->Location = System::Drawing::Point(922, 422);
			this->GroupScaleBox->Name = L"GroupScaleBox";
			this->GroupScaleBox->Size = System::Drawing::Size(242, 111);
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
			this->ConfirmScaleButton->Location = System::Drawing::Point(23, 62);
			this->ConfirmScaleButton->Name = L"ConfirmScaleButton";
			this->ConfirmScaleButton->Size = System::Drawing::Size(201, 35);
			this->ConfirmScaleButton->TabIndex = 2;
			this->ConfirmScaleButton->Text = L"Aceptar";
			this->ConfirmScaleButton->UseVisualStyleBackColor = false;
			this->ConfirmScaleButton->Click += gcnew System::EventHandler(this, &Program::ConfirmScaleButton_Click);
			// 
			// TextScale
			// 
			this->TextScale->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextScale->Location = System::Drawing::Point(89, 25);
			this->TextScale->Name = L"TextScale";
			this->TextScale->Size = System::Drawing::Size(135, 22);
			this->TextScale->TabIndex = 4;
			// 
			// LabelScaled
			// 
			this->LabelScaled->AutoSize = true;
			this->LabelScaled->BackColor = System::Drawing::Color::LightCyan;
			this->LabelScaled->Location = System::Drawing::Point(20, 31);
			this->LabelScaled->Name = L"LabelScaled";
			this->LabelScaled->Size = System::Drawing::Size(48, 16);
			this->LabelScaled->TabIndex = 1;
			this->LabelScaled->Text = L"Valor:";
			// 
			// GroupRotateBox
			// 
			this->GroupRotateBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GroupRotateBox.BackgroundImage")));
			this->GroupRotateBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GroupRotateBox->Controls->Add(this->ConfirmRoFButton);
			this->GroupRotateBox->Controls->Add(this->ConfirmRoCButton);
			this->GroupRotateBox->Controls->Add(this->TextRotate);
			this->GroupRotateBox->Controls->Add(this->LabelAngle1);
			this->GroupRotateBox->Location = System::Drawing::Point(922, 539);
			this->GroupRotateBox->Name = L"GroupRotateBox";
			this->GroupRotateBox->Size = System::Drawing::Size(242, 153);
			this->GroupRotateBox->TabIndex = 8;
			this->GroupRotateBox->TabStop = false;
			this->GroupRotateBox->Text = L"ROTACION";
			// 
			// ConfirmRoFButton
			// 
			this->ConfirmRoFButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ConfirmRoFButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmRoFButton.BackgroundImage")));
			this->ConfirmRoFButton->FlatAppearance->BorderSize = 3;
			this->ConfirmRoFButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirmRoFButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ConfirmRoFButton->Location = System::Drawing::Point(21, 59);
			this->ConfirmRoFButton->Name = L"ConfirmRoFButton";
			this->ConfirmRoFButton->Size = System::Drawing::Size(201, 35);
			this->ConfirmRoFButton->TabIndex = 9;
			this->ConfirmRoFButton->Text = L"Figura";
			this->ConfirmRoFButton->UseVisualStyleBackColor = false;
			this->ConfirmRoFButton->Click += gcnew System::EventHandler(this, &Program::ConfirmRoFButton_Click);
			// 
			// ConfirmRoCButton
			// 
			this->ConfirmRoCButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ConfirmRoCButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmRoCButton.BackgroundImage")));
			this->ConfirmRoCButton->FlatAppearance->BorderSize = 3;
			this->ConfirmRoCButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirmRoCButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ConfirmRoCButton->Location = System::Drawing::Point(22, 103);
			this->ConfirmRoCButton->Name = L"ConfirmRoCButton";
			this->ConfirmRoCButton->Size = System::Drawing::Size(201, 35);
			this->ConfirmRoCButton->TabIndex = 8;
			this->ConfirmRoCButton->Text = L"Centro";
			this->ConfirmRoCButton->UseVisualStyleBackColor = false;
			this->ConfirmRoCButton->Click += gcnew System::EventHandler(this, &Program::ConfirmRoCButton_Click);
			// 
			// TextRotate
			// 
			this->TextRotate->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextRotate->Location = System::Drawing::Point(89, 26);
			this->TextRotate->Name = L"TextRotate";
			this->TextRotate->Size = System::Drawing::Size(135, 22);
			this->TextRotate->TabIndex = 4;
			// 
			// LabelAngle1
			// 
			this->LabelAngle1->AutoSize = true;
			this->LabelAngle1->BackColor = System::Drawing::Color::LightCyan;
			this->LabelAngle1->Location = System::Drawing::Point(19, 30);
			this->LabelAngle1->Name = L"LabelAngle1";
			this->LabelAngle1->Size = System::Drawing::Size(44, 16);
			this->LabelAngle1->TabIndex = 1;
			this->LabelAngle1->Text = L"Dato:";
			// 
			// ButtonCleanPC
			// 
			this->ButtonCleanPC->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ButtonCleanPC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonCleanPC.BackgroundImage")));
			this->ButtonCleanPC->FlatAppearance->BorderSize = 3;
			this->ButtonCleanPC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonCleanPC->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ButtonCleanPC->Location = System::Drawing::Point(922, 845);
			this->ButtonCleanPC->Name = L"ButtonCleanPC";
			this->ButtonCleanPC->Size = System::Drawing::Size(242, 34);
			this->ButtonCleanPC->TabIndex = 9;
			this->ButtonCleanPC->Text = L"Limpiar";
			this->ButtonCleanPC->UseVisualStyleBackColor = false;
			this->ButtonCleanPC->Click += gcnew System::EventHandler(this, &Program::ButtonCleanPC_Click);
			// 
			// LabelPointAct
			// 
			this->LabelPointAct->AutoSize = true;
			this->LabelPointAct->BackColor = System::Drawing::Color::Azure;
			this->LabelPointAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelPointAct->Location = System::Drawing::Point(919, 9);
			this->LabelPointAct->Name = L"LabelPointAct";
			this->LabelPointAct->Size = System::Drawing::Size(128, 17);
			this->LabelPointAct->TabIndex = 6;
			this->LabelPointAct->Text = L"SIN REGISTROS";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->TextDespY);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->ConfirmDesplazarButton);
			this->groupBox1->Controls->Add(this->TextDespX);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(922, 698);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(242, 141);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"DESPLAZAMIENTO";
			// 
			// TextDespY
			// 
			this->TextDespY->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextDespY->Location = System::Drawing::Point(89, 54);
			this->TextDespY->Name = L"TextDespY";
			this->TextDespY->Size = System::Drawing::Size(135, 22);
			this->TextDespY->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightCyan;
			this->label2->Location = System::Drawing::Point(19, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Y:";
			// 
			// ConfirmDesplazarButton
			// 
			this->ConfirmDesplazarButton->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ConfirmDesplazarButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmDesplazarButton.BackgroundImage")));
			this->ConfirmDesplazarButton->FlatAppearance->BorderSize = 3;
			this->ConfirmDesplazarButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirmDesplazarButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->ConfirmDesplazarButton->Location = System::Drawing::Point(23, 93);
			this->ConfirmDesplazarButton->Name = L"ConfirmDesplazarButton";
			this->ConfirmDesplazarButton->Size = System::Drawing::Size(201, 35);
			this->ConfirmDesplazarButton->TabIndex = 8;
			this->ConfirmDesplazarButton->Text = L"Aceptar";
			this->ConfirmDesplazarButton->UseVisualStyleBackColor = false;
			this->ConfirmDesplazarButton->Click += gcnew System::EventHandler(this, &Program::ConfirmDesplazarButton_Click);
			// 
			// TextDespX
			// 
			this->TextDespX->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->TextDespX->Location = System::Drawing::Point(89, 26);
			this->TextDespX->Name = L"TextDespX";
			this->TextDespX->Size = System::Drawing::Size(135, 22);
			this->TextDespX->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightCyan;
			this->label1->Location = System::Drawing::Point(19, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X:";
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 891);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->LabelPointAct);
			this->Controls->Add(this->ButtonCleanPC);
			this->Controls->Add(this->GroupRotateBox);
			this->Controls->Add(this->GroupScaleBox);
			this->Controls->Add(this->GroupReflexBox);
			this->Controls->Add(this->PanelDiagram);
			this->Controls->Add(this->GroupFigureBox);
			this->Controls->Add(this->GroupCoordBox);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void btnConfirmCord_Click(System::Object^ sender, System::EventArgs^ e) {

			if (TextCoorX->Text->Trim()->Length == 0 || TextCoordY->Text->Trim()->Length == 0) {
				MessageBox::Show(L"Por favor, complete ambos campos de coordenadas.", L"Error de Entrada", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			try {
				int x = System::Convert::ToInt32(TextCoorX->Text);
				int y = System::Convert::ToInt32(TextCoordY->Text);

				int limite = 430;

				if (Math::Abs(x) > limite || Math::Abs(y) > limite) {
					MessageBox::Show(L"Coordenada fuera de rango.\nIngrese valores entre -" + limite + L" y " + limite + L".",
						L"Limite Excedido", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				ObjControlador->SetPuntoCentral(x, y);

				LabelPointAct->Text = L"Punto actual: (" + x + L", " + y + L")";

				PanelDiagram->Invalidate();

			}
			//Errores posibles al poner una coordenada
			catch (System::FormatException^) {
				MessageBox::Show(L"Entrada no valida. Por favor, use solo numeros enteros.", L"Error de Formato", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (System::OverflowException^) {
				MessageBox::Show(L"El numero ingresado es demasiado grande.", L"Error de Capacidad", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Void PanelDiagram_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			// Dibujo de ejes
			int cX = PanelDiagram->Width / 2;
			int cY = PanelDiagram->Height / 2;
			Pen^ pEjes = gcnew Pen(Color::LightGray, 1);
			g->DrawLine(pEjes, cX, 0, cX, PanelDiagram->Height);
			g->DrawLine(pEjes, 0, cY, PanelDiagram->Width, cY);

			//Dibujo general
			if (ObjControlador != nullptr) {
				ObjControlador->DibujarTodo(g, cX, cY);
			}
		}

		private: System::Void ReflexXButton_Click(System::Object^ sender, System::EventArgs^ e) {
			ObjControlador->AplicarReflexionX();
			
			PanelDiagram->Invalidate();
		}

		private: System::Void ReflexYButton_Click(System::Object^ sender, System::EventArgs^ e) {
			ObjControlador->AplicarReflexionY();

			PanelDiagram->Invalidate();
		}
		
		private: System::Void ReflexOriginButton_Click(System::Object^ sender, System::EventArgs^ e) {
			ObjControlador->AplicarReflexionOrigen();

			PanelDiagram->Invalidate();
		}

		private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
			if (ListFigureCombo->SelectedItem == nullptr) {
				MessageBox::Show(L"Seleccione una figura del combobox.", L"Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return; 
			}

			String^ nombre = ListFigureCombo->SelectedItem->ToString();

			// Le pedimos al Controlador que genere la figura seleccionada
			if (ObjControlador != nullptr) {
				ObjControlador->SetFigura(nombre); 

				PanelDiagram->Invalidate();
			}
		}

		private: System::Void ButtonCleanPC_Click(System::Object^ sender, System::EventArgs^ e) {
			ObjControlador->limpiarDibujo();
			PanelDiagram->Invalidate();
		}

		private: System::Void ConfirmScaleButton_Click(System::Object^ sender, System::EventArgs^ e) {

			if (TextScale->Text->Trim()->Length == 0) {
				MessageBox::Show(L"Por favor, complete el campo.", L"Error de Entrada", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			try {
				float scale = System::Convert::ToSingle(TextScale->Text);
				int limite = 2;

				if (Math::Abs(scale) > limite) {
					MessageBox::Show(L"Coordenada fuera de rango.\nIngrese valores entre -" + limite + L" y " + limite + L".",
						L"Limite Excedido", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				if (!ObjControlador->AplicarEscala(scale)) {
					MessageBox::Show("La escala excede los limites de la pantalla.", "Limite Excedido", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}

				ObjControlador->AplicarEscala(scale);



				PanelDiagram->Invalidate();

			}
			//Errores posibles al poner una coordenada
			catch (System::FormatException^) {
				MessageBox::Show(L"Entrada no válida. Por favor, use solo números enteros.", L"Error de Formato", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (System::OverflowException^) {
				MessageBox::Show(L"El numero ingresado es demasiado grande.", L"Error de Capacidad", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Void ConfirmRoCButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (TextRotate->Text->Trim()->Length == 0) {
				MessageBox::Show(L"Por favor, ingrese un angulo.", L"Error de Entrada",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			try {
				float angulo = System::Convert::ToSingle(TextRotate->Text);

				if (System::Math::Abs(angulo) > 360) {
					MessageBox::Show(L"Ingrese un ángulo entre -360 y 360.",
						L"Límite Excedido", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				ObjControlador->AplicarRotacionCentro(angulo);
				PanelDiagram->Invalidate();
			}
			catch (System::FormatException^) {
				MessageBox::Show(L"Entrada no válida. Use números.", L"Error de Formato",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Void ConfirmRoFButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (TextRotate->Text->Trim()->Length == 0) {
				MessageBox::Show(L"Por favor, ingrese un ángulo.", L"Error de Entrada",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			try {
				float angulo = System::Convert::ToSingle(TextRotate->Text);

				if (System::Math::Abs(angulo) > 360) {
					MessageBox::Show(L"Ingrese un ángulo entre -360 y 360.",
						L"Límite Excedido", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				ObjControlador->AplicarRotacionFigura(angulo);
				PanelDiagram->Invalidate();
			}
			catch (System::FormatException^) {
				MessageBox::Show(L"Entrada no válida. Use números.", L"Error de Formato",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


		private: System::Void ConfirmDesplazarButton_Click(System::Object^ sender, System::EventArgs^ e) {
			float dx = 0.0f;
			float dy = 0.0f;

			if (TextDespX->Text->Trim()->Length > 0) {
				try { dx = System::Convert::ToSingle(TextDespX->Text); }
				catch (...) { dx = 0.0f; }
			}

			if (TextDespY->Text->Trim()->Length > 0) {
				try { dy = System::Convert::ToSingle(TextDespY->Text); }
				catch (...) { dy = 0.0f; }
			}

			if (ObjControlador != nullptr) {
				float futuraX = ObjControlador->PuntoCentralFigura.X + dx;
				float futuraY = ObjControlador->PuntoCentralFigura.Y - dy;

				//Comprobar si excede los 430 píxeles en valor absoluto
				if (Math::Abs(futuraX) > 430 || Math::Abs(futuraY) > 430) {

					System::Windows::Forms::DialogResult resultado;
					resultado = MessageBox::Show("La figura se saldra de los limites. Deseas reiniciar al centro",
						"Limite excedido",
						MessageBoxButtons::YesNo,
						MessageBoxIcon::Warning);

					if (resultado == System::Windows::Forms::DialogResult::Yes) {
						// Opción de regresar al inicio usando el método existente
						ObjControlador->limpiarDibujo();
						PanelDiagram->Invalidate();
					}
					return;
				}

				ObjControlador->AplicarDesplazamiento(dx, dy);
				PanelDiagram->Invalidate();
			}
		}

};}