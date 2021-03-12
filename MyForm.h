#pragma once
#include <cstdlib>
#include <time.h>
#include <msclr/marshal.h>
using namespace msclr::interop;
using namespace System::Text;
namespace LabPr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ txtR;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnSave1;
	private: System::Windows::Forms::Button^ btnExecute1;
	private: System::Windows::Forms::TextBox^ txtMas;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnFile1;
	private: System::Windows::Forms::Button^ btnGen1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txtFile1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnSelect1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtMax1;
	private: System::Windows::Forms::TextBox^ txtMin1;
	private: System::Windows::Forms::TextBox^ txtCount1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ btnFile2;

	private: System::Windows::Forms::Button^ btnGen2;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ txtFile2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnSelect2;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ txtMax2;

	private: System::Windows::Forms::TextBox^ txtMin2;

	private: System::Windows::Forms::TextBox^ txtCount2;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtMatr;
	private: System::Windows::Forms::TextBox^ txtResult2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnExecute2;
	private: System::Windows::Forms::Button^ btnSave2;
	private: System::Windows::Forms::Button^ btnExecute3;
	private: System::Windows::Forms::TextBox^ txtResult3;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txtN;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ btnFile3;
	private: System::Windows::Forms::Button^ btnGen3;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ txtFile3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ txtSelect3;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TextBox^ txtMax3;
	private: System::Windows::Forms::TextBox^ txtMin3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnSave3;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ btnSave4;

	private: System::Windows::Forms::Button^ btnExecute4;

	private: System::Windows::Forms::TextBox^ txtResult4;

	private: System::Windows::Forms::TextBox^ txtStr;

	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ btnFile4;

	private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::TextBox^ txtFile4;

	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ btnSelect4;






	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtR = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnSave1 = (gcnew System::Windows::Forms::Button());
			this->btnExecute1 = (gcnew System::Windows::Forms::Button());
			this->txtMas = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnFile1 = (gcnew System::Windows::Forms::Button());
			this->btnGen1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtFile1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnSelect1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtMax1 = (gcnew System::Windows::Forms::TextBox());
			this->txtMin1 = (gcnew System::Windows::Forms::TextBox());
			this->txtCount1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnSave2 = (gcnew System::Windows::Forms::Button());
			this->txtResult2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnExecute2 = (gcnew System::Windows::Forms::Button());
			this->txtMatr = (gcnew System::Windows::Forms::TextBox());
			this->btnFile2 = (gcnew System::Windows::Forms::Button());
			this->btnGen2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtFile2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnSelect2 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->txtMax2 = (gcnew System::Windows::Forms::TextBox());
			this->txtMin2 = (gcnew System::Windows::Forms::TextBox());
			this->txtCount2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->btnSave3 = (gcnew System::Windows::Forms::Button());
			this->btnExecute3 = (gcnew System::Windows::Forms::Button());
			this->txtResult3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnFile3 = (gcnew System::Windows::Forms::Button());
			this->btnGen3 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->txtFile3 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtSelect3 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->txtMax3 = (gcnew System::Windows::Forms::TextBox());
			this->txtMin3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->btnSave4 = (gcnew System::Windows::Forms::Button());
			this->btnExecute4 = (gcnew System::Windows::Forms::Button());
			this->txtResult4 = (gcnew System::Windows::Forms::TextBox());
			this->txtStr = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btnFile4 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->txtFile4 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btnSelect4 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(852, 518);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtR);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->btnSave1);
			this->tabPage1->Controls->Add(this->btnExecute1);
			this->tabPage1->Controls->Add(this->txtMas);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->btnFile1);
			this->tabPage1->Controls->Add(this->btnGen1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(844, 489);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Çàäàíèå 52";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtR
			// 
			this->txtR->Location = System::Drawing::Point(358, 290);
			this->txtR->Name = L"txtR";
			this->txtR->ReadOnly = true;
			this->txtR->Size = System::Drawing::Size(326, 22);
			this->txtR->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(296, 293);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Ðàäèóñ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(231, 290);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(39, 22);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"(0;0)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 293);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(219, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Êîîðäèíàòû öåíòðà îêðóæíîñòè";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Ðåçóëüòàò";
			// 
			// btnSave1
			// 
			this->btnSave1->Location = System::Drawing::Point(690, 263);
			this->btnSave1->Name = L"btnSave1";
			this->btnSave1->Size = System::Drawing::Size(148, 57);
			this->btnSave1->TabIndex = 11;
			this->btnSave1->Text = L"Ñîõðàíèòü â ôàéë";
			this->btnSave1->UseVisualStyleBackColor = true;
			this->btnSave1->Click += gcnew System::EventHandler(this, &MyForm::btnSave1_Click);
			// 
			// btnExecute1
			// 
			this->btnExecute1->Location = System::Drawing::Point(690, 182);
			this->btnExecute1->Name = L"btnExecute1";
			this->btnExecute1->Size = System::Drawing::Size(148, 66);
			this->btnExecute1->TabIndex = 10;
			this->btnExecute1->Text = L"Âûïîëíèòü";
			this->btnExecute1->UseVisualStyleBackColor = true;
			this->btnExecute1->Click += gcnew System::EventHandler(this, &MyForm::btnExecute1_Click);
			// 
			// txtMas
			// 
			this->txtMas->Location = System::Drawing::Point(6, 204);
			this->txtMas->Name = L"txtMas";
			this->txtMas->Size = System::Drawing::Size(678, 22);
			this->txtMas->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Èñõîäíûå äàííûå";
			// 
			// btnFile1
			// 
			this->btnFile1->Location = System::Drawing::Point(690, 99);
			this->btnFile1->Name = L"btnFile1";
			this->btnFile1->Size = System::Drawing::Size(148, 66);
			this->btnFile1->TabIndex = 9;
			this->btnFile1->Text = L"Ââîä èç ôàéëà";
			this->btnFile1->UseVisualStyleBackColor = true;
			this->btnFile1->Click += gcnew System::EventHandler(this, &MyForm::btnFile1_Click);
			// 
			// btnGen1
			// 
			this->btnGen1->Location = System::Drawing::Point(690, 20);
			this->btnGen1->Name = L"btnGen1";
			this->btnGen1->Size = System::Drawing::Size(148, 66);
			this->btnGen1->TabIndex = 8;
			this->btnGen1->Text = L"Ãåíåðàöèÿ";
			this->btnGen1->UseVisualStyleBackColor = true;
			this->btnGen1->Click += gcnew System::EventHandler(this, &MyForm::btnGen1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtFile1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->btnSelect1);
			this->groupBox2->Location = System::Drawing::Point(380, 11);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(304, 154);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ââîä èç ôàéëà";
			// 
			// txtFile1
			// 
			this->txtFile1->Location = System::Drawing::Point(55, 43);
			this->txtFile1->Name = L"txtFile1";
			this->txtFile1->Size = System::Drawing::Size(230, 22);
			this->txtFile1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ôàéë";
			// 
			// btnSelect1
			// 
			this->btnSelect1->Location = System::Drawing::Point(22, 102);
			this->btnSelect1->Name = L"btnSelect1";
			this->btnSelect1->Size = System::Drawing::Size(263, 33);
			this->btnSelect1->TabIndex = 0;
			this->btnSelect1->Text = L"Âûáðàòü ôàéë";
			this->btnSelect1->UseVisualStyleBackColor = true;
			this->btnSelect1->Click += gcnew System::EventHandler(this, &MyForm::btnSelect1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtMax1);
			this->groupBox1->Controls->Add(this->txtMin1);
			this->groupBox1->Controls->Add(this->txtCount1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(356, 154);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ãåíåðàöèÿ";
			// 
			// txtMax1
			// 
			this->txtMax1->Location = System::Drawing::Point(275, 113);
			this->txtMax1->Name = L"txtMax1";
			this->txtMax1->Size = System::Drawing::Size(69, 22);
			this->txtMax1->TabIndex = 5;
			// 
			// txtMin1
			// 
			this->txtMin1->Location = System::Drawing::Point(275, 72);
			this->txtMin1->Name = L"txtMin1";
			this->txtMin1->Size = System::Drawing::Size(69, 22);
			this->txtMin1->TabIndex = 4;
			// 
			// txtCount1
			// 
			this->txtCount1->Location = System::Drawing::Point(275, 31);
			this->txtCount1->Name = L"txtCount1";
			this->txtCount1->Size = System::Drawing::Size(69, 22);
			this->txtCount1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ìàêñèìàëüíîå çíà÷åíèå äèàïîçîíà";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ìèíèìàëüíîå çíà÷åíèå äèàïîçîíà";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Êîëè÷åñòâî ýëåìåíòîâ â ìàññèâå";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnSave2);
			this->tabPage2->Controls->Add(this->txtResult2);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->btnExecute2);
			this->tabPage2->Controls->Add(this->txtMatr);
			this->tabPage2->Controls->Add(this->btnFile2);
			this->tabPage2->Controls->Add(this->btnGen2);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(844, 489);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Çàäàíèå 112";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnSave2
			// 
			this->btnSave2->Location = System::Drawing::Point(600, 391);
			this->btnSave2->Name = L"btnSave2";
			this->btnSave2->Size = System::Drawing::Size(238, 66);
			this->btnSave2->TabIndex = 18;
			this->btnSave2->Text = L"Ñîõðàíèòü â ôàéë";
			this->btnSave2->UseVisualStyleBackColor = true;
			this->btnSave2->Click += gcnew System::EventHandler(this, &MyForm::btnSave2_Click);
			// 
			// txtResult2
			// 
			this->txtResult2->Location = System::Drawing::Point(600, 333);
			this->txtResult2->Name = L"txtResult2";
			this->txtResult2->ReadOnly = true;
			this->txtResult2->Size = System::Drawing::Size(238, 22);
			this->txtResult2->TabIndex = 17;
			this->txtResult2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(597, 294);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 16);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Ðåçóëüòàò";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// btnExecute2
			// 
			this->btnExecute2->Location = System::Drawing::Point(600, 204);
			this->btnExecute2->Name = L"btnExecute2";
			this->btnExecute2->Size = System::Drawing::Size(238, 66);
			this->btnExecute2->TabIndex = 15;
			this->btnExecute2->Text = L"Âûïîëíèòü";
			this->btnExecute2->UseVisualStyleBackColor = true;
			this->btnExecute2->Click += gcnew System::EventHandler(this, &MyForm::btnExecute2_Click);
			// 
			// txtMatr
			// 
			this->txtMatr->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMatr->Location = System::Drawing::Point(10, 171);
			this->txtMatr->Multiline = true;
			this->txtMatr->Name = L"txtMatr";
			this->txtMatr->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtMatr->Size = System::Drawing::Size(573, 312);
			this->txtMatr->TabIndex = 14;
			this->txtMatr->WordWrap = false;
			// 
			// btnFile2
			// 
			this->btnFile2->Location = System::Drawing::Point(690, 94);
			this->btnFile2->Name = L"btnFile2";
			this->btnFile2->Size = System::Drawing::Size(148, 66);
			this->btnFile2->TabIndex = 13;
			this->btnFile2->Text = L"Ââîä èç ôàéëà";
			this->btnFile2->UseVisualStyleBackColor = true;
			this->btnFile2->Click += gcnew System::EventHandler(this, &MyForm::btnFile2_Click);
			// 
			// btnGen2
			// 
			this->btnGen2->Location = System::Drawing::Point(690, 15);
			this->btnGen2->Name = L"btnGen2";
			this->btnGen2->Size = System::Drawing::Size(148, 66);
			this->btnGen2->TabIndex = 12;
			this->btnGen2->Text = L"Ãåíåðàöèÿ";
			this->btnGen2->UseVisualStyleBackColor = true;
			this->btnGen2->Click += gcnew System::EventHandler(this, &MyForm::btnGen2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtFile2);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->btnSelect2);
			this->groupBox3->Location = System::Drawing::Point(380, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(304, 154);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ââîä èç ôàéëà";
			// 
			// txtFile2
			// 
			this->txtFile2->Location = System::Drawing::Point(55, 43);
			this->txtFile2->Name = L"txtFile2";
			this->txtFile2->Size = System::Drawing::Size(230, 22);
			this->txtFile2->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 16);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Ôàéë";
			// 
			// btnSelect2
			// 
			this->btnSelect2->Location = System::Drawing::Point(22, 102);
			this->btnSelect2->Name = L"btnSelect2";
			this->btnSelect2->Size = System::Drawing::Size(263, 33);
			this->btnSelect2->TabIndex = 0;
			this->btnSelect2->Text = L"Âûáðàòü ôàéë";
			this->btnSelect2->UseVisualStyleBackColor = true;
			this->btnSelect2->Click += gcnew System::EventHandler(this, &MyForm::btnSelect2_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->txtMax2);
			this->groupBox4->Controls->Add(this->txtMin2);
			this->groupBox4->Controls->Add(this->txtCount2);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Location = System::Drawing::Point(6, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(356, 154);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ãåíåðàöèÿ";
			// 
			// txtMax2
			// 
			this->txtMax2->Location = System::Drawing::Point(275, 113);
			this->txtMax2->Name = L"txtMax2";
			this->txtMax2->Size = System::Drawing::Size(69, 22);
			this->txtMax2->TabIndex = 5;
			// 
			// txtMin2
			// 
			this->txtMin2->Location = System::Drawing::Point(275, 72);
			this->txtMin2->Name = L"txtMin2";
			this->txtMin2->Size = System::Drawing::Size(69, 22);
			this->txtMin2->TabIndex = 4;
			// 
			// txtCount2
			// 
			this->txtCount2->Location = System::Drawing::Point(275, 31);
			this->txtCount2->Name = L"txtCount2";
			this->txtCount2->Size = System::Drawing::Size(69, 22);
			this->txtCount2->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 116);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(247, 16);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Ìàêñèìàëüíîå çíà÷åíèå äèàïîçîíà";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 75);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(241, 16);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Ìèíèìàëüíîå çíà÷åíèå äèàïîçîíà";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 34);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(236, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Ðàçìåðíîñòü êâàäðàòíîé ìàòðèöû";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->btnSave3);
			this->tabPage3->Controls->Add(this->btnExecute3);
			this->tabPage3->Controls->Add(this->txtResult3);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->txtN);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->btnFile3);
			this->tabPage3->Controls->Add(this->btnGen3);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(844, 489);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Çàäàíèå 168";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 147);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 16);
			this->label19->TabIndex = 24;
			this->label19->Text = L"Ðåçóëüòàò";
			// 
			// btnSave3
			// 
			this->btnSave3->Location = System::Drawing::Point(435, 226);
			this->btnSave3->Name = L"btnSave3";
			this->btnSave3->Size = System::Drawing::Size(403, 66);
			this->btnSave3->TabIndex = 23;
			this->btnSave3->Text = L"Ñîõðàíèòü â ôàéë";
			this->btnSave3->UseVisualStyleBackColor = true;
			this->btnSave3->Click += gcnew System::EventHandler(this, &MyForm::btnSave3_Click);
			// 
			// btnExecute3
			// 
			this->btnExecute3->Location = System::Drawing::Point(598, 147);
			this->btnExecute3->Name = L"btnExecute3";
			this->btnExecute3->Size = System::Drawing::Size(240, 46);
			this->btnExecute3->TabIndex = 22;
			this->btnExecute3->Text = L"Âûïîëíèòü";
			this->btnExecute3->UseVisualStyleBackColor = true;
			this->btnExecute3->Click += gcnew System::EventHandler(this, &MyForm::btnExecute3_Click);
			// 
			// txtResult3
			// 
			this->txtResult3->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResult3->Location = System::Drawing::Point(6, 171);
			this->txtResult3->Multiline = true;
			this->txtResult3->Name = L"txtResult3";
			this->txtResult3->ReadOnly = true;
			this->txtResult3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtResult3->Size = System::Drawing::Size(394, 288);
			this->txtResult3->TabIndex = 21;
			this->txtResult3->WordWrap = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(446, 174);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(15, 16);
			this->label18->TabIndex = 20;
			this->label18->Text = L"n";
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(480, 171);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(90, 22);
			this->txtN->TabIndex = 19;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(446, 149);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(124, 16);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Èñõîäíûå äàííûå";
			// 
			// btnFile3
			// 
			this->btnFile3->Location = System::Drawing::Point(690, 82);
			this->btnFile3->Name = L"btnFile3";
			this->btnFile3->Size = System::Drawing::Size(148, 44);
			this->btnFile3->TabIndex = 17;
			this->btnFile3->Text = L"Ââîä èç ôàéëà";
			this->btnFile3->UseVisualStyleBackColor = true;
			this->btnFile3->Click += gcnew System::EventHandler(this, &MyForm::btnFile3_Click);
			// 
			// btnGen3
			// 
			this->btnGen3->Location = System::Drawing::Point(690, 15);
			this->btnGen3->Name = L"btnGen3";
			this->btnGen3->Size = System::Drawing::Size(148, 44);
			this->btnGen3->TabIndex = 16;
			this->btnGen3->Text = L"Ãåíåðàöèÿ";
			this->btnGen3->UseVisualStyleBackColor = true;
			this->btnGen3->Click += gcnew System::EventHandler(this, &MyForm::btnGen3_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->txtFile3);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->txtSelect3);
			this->groupBox5->Location = System::Drawing::Point(380, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(304, 120);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ââîä èç ôàéëà";
			// 
			// txtFile3
			// 
			this->txtFile3->Location = System::Drawing::Point(55, 31);
			this->txtFile3->Name = L"txtFile3";
			this->txtFile3->Size = System::Drawing::Size(230, 22);
			this->txtFile3->TabIndex = 7;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 31);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 16);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Ôàéë";
			// 
			// txtSelect3
			// 
			this->txtSelect3->Location = System::Drawing::Point(22, 67);
			this->txtSelect3->Name = L"txtSelect3";
			this->txtSelect3->Size = System::Drawing::Size(263, 33);
			this->txtSelect3->TabIndex = 0;
			this->txtSelect3->Text = L"Âûáðàòü ôàéë";
			this->txtSelect3->UseVisualStyleBackColor = true;
			this->txtSelect3->Click += gcnew System::EventHandler(this, &MyForm::txtSelect3_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->txtMax3);
			this->groupBox6->Controls->Add(this->txtMin3);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Location = System::Drawing::Point(6, 6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(356, 120);
			this->groupBox6->TabIndex = 14;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Ãåíåðàöèÿ";
			// 
			// txtMax3
			// 
			this->txtMax3->Location = System::Drawing::Point(275, 72);
			this->txtMax3->Name = L"txtMax3";
			this->txtMax3->Size = System::Drawing::Size(69, 22);
			this->txtMax3->TabIndex = 5;
			// 
			// txtMin3
			// 
			this->txtMin3->Location = System::Drawing::Point(275, 31);
			this->txtMin3->Name = L"txtMin3";
			this->txtMin3->Size = System::Drawing::Size(69, 22);
			this->txtMin3->TabIndex = 4;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 75);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(247, 16);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Ìàêñèìàëüíîå çíà÷åíèå äèàïîçîíà";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 34);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(241, 16);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Ìèíèìàëüíîå çíà÷åíèå äèàïîçîíà";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->btnSave4);
			this->tabPage4->Controls->Add(this->btnExecute4);
			this->tabPage4->Controls->Add(this->txtResult4);
			this->tabPage4->Controls->Add(this->txtStr);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->btnFile4);
			this->tabPage4->Controls->Add(this->groupBox7);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(844, 489);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Çàäàíèå 249";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// btnSave4
			// 
			this->btnSave4->Location = System::Drawing::Point(9, 284);
			this->btnSave4->Name = L"btnSave4";
			this->btnSave4->Size = System::Drawing::Size(455, 66);
			this->btnSave4->TabIndex = 25;
			this->btnSave4->Text = L"Ñîõðàíèòü â ôàéë";
			this->btnSave4->UseVisualStyleBackColor = true;
			this->btnSave4->Click += gcnew System::EventHandler(this, &MyForm::btnSave4_Click);
			// 
			// btnExecute4
			// 
			this->btnExecute4->Location = System::Drawing::Point(9, 205);
			this->btnExecute4->Name = L"btnExecute4";
			this->btnExecute4->Size = System::Drawing::Size(455, 62);
			this->btnExecute4->TabIndex = 24;
			this->btnExecute4->Text = L"Âûïîëíèòü";
			this->btnExecute4->UseVisualStyleBackColor = true;
			this->btnExecute4->Click += gcnew System::EventHandler(this, &MyForm::btnExecute4_Click);
			// 
			// txtResult4
			// 
			this->txtResult4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResult4->Location = System::Drawing::Point(489, 65);
			this->txtResult4->Multiline = true;
			this->txtResult4->Name = L"txtResult4";
			this->txtResult4->ReadOnly = true;
			this->txtResult4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtResult4->Size = System::Drawing::Size(349, 418);
			this->txtResult4->TabIndex = 22;
			this->txtResult4->WordWrap = false;
			// 
			// txtStr
			// 
			this->txtStr->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtStr->Location = System::Drawing::Point(9, 34);
			this->txtStr->Name = L"txtStr";
			this->txtStr->Size = System::Drawing::Size(829, 22);
			this->txtStr->TabIndex = 21;
			this->txtStr->TextChanged += gcnew System::EventHandler(this, &MyForm::txtStr_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 15);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(118, 16);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Èñõîäíàÿ ñòðîêà";
			// 
			// btnFile4
			// 
			this->btnFile4->Location = System::Drawing::Point(316, 65);
			this->btnFile4->Name = L"btnFile4";
			this->btnFile4->Size = System::Drawing::Size(148, 120);
			this->btnFile4->TabIndex = 19;
			this->btnFile4->Text = L"Ââîä èç ôàéëà";
			this->btnFile4->UseVisualStyleBackColor = true;
			this->btnFile4->Click += gcnew System::EventHandler(this, &MyForm::btnFile4_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->txtFile4);
			this->groupBox7->Controls->Add(this->label20);
			this->groupBox7->Controls->Add(this->btnSelect4);
			this->groupBox7->Location = System::Drawing::Point(6, 65);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(304, 120);
			this->groupBox7->TabIndex = 18;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Ââîä èç ôàéëà";
			// 
			// txtFile4
			// 
			this->txtFile4->Location = System::Drawing::Point(55, 31);
			this->txtFile4->Name = L"txtFile4";
			this->txtFile4->Size = System::Drawing::Size(230, 22);
			this->txtFile4->TabIndex = 7;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 31);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(43, 16);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Ôàéë";
			// 
			// btnSelect4
			// 
			this->btnSelect4->Location = System::Drawing::Point(22, 67);
			this->btnSelect4->Name = L"btnSelect4";
			this->btnSelect4->Size = System::Drawing::Size(263, 33);
			this->btnSelect4->TabIndex = 0;
			this->btnSelect4->Text = L"Âûáðàòü ôàéë";
			this->btnSelect4->UseVisualStyleBackColor = true;
			this->btnSelect4->Click += gcnew System::EventHandler(this, &MyForm::btnSelect4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 543);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Èíäèâèäóëüíûå çàäàíèÿ";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnGen1_Click(System::Object^ sender, System::EventArgs^ e) {
		txtMas->Text = "";
		if(txtCount1->Text == "" || txtMin1->Text == "" || txtMax1->Text == "")
			MessageBox::Show("Ïðîâåðüòå êîððåêòíîñòü ââîäà!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		int count = Convert::ToInt32(txtCount1->Text);
		if (count % 2 != 0)
		{
			MessageBox::Show("Êîëè÷åñòâî ýëëåìåíòîâ â ìàññèâå äîëæíî áûòü êðàòíî 2-ì!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			int max = Convert::ToInt32(txtMax1->Text);
			int min = Convert::ToInt32(txtMin1->Text);
			srand(time(NULL));
			for (int i = 0; i < count; i++) {
				txtMas->Text += (rand() % (max - min + 1) + min).ToString() + " ";
			}

		}
	}
private: System::Void btnSelect1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;

	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		txtFile1->Text = opFileD->FileName;
	else
		txtFile1 ->Text = "";
}
private: System::Void btnFile1_Click(System::Object^ sender, System::EventArgs^ e) {
	if(txtFile1->Text == "")
		MessageBox::Show("Òðåáóåòñÿ âûáðàòü ôàéë!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	txtMas->Text = System::IO::File::ReadAllText(txtFile1->Text);
}
private: System::Void btnExecute1_Click(System::Object^ sender, System::EventArgs^ e) {
	array<String^>^ str = txtMas->Text->Split(' ');
	array<int>^ mas = gcnew array<int>(1000);
	int count = 0;
	for each (String ^ q in str)
		if (!q->Equals(""))
		{
			mas[count] = Convert::ToInt32(q);
			count++;
		}
	if(count%2==1)
		MessageBox::Show("Êîëè÷åñòâî ýëëåìåíòîâ â ìàññèâå äîëæíî áûòü êðàòíî 2-ì!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	double rMax = 0;
	for (int i = 0; i+1 < count; i += 2)
	{
		int x = mas[i];
		int y = mas[i+1];
		double r = Math::Sqrt(x*x+y*y);
		if (r > rMax)
			rMax = r;
	}
	txtR->Text = Convert::ToString(rMax);
}
private: System::Void btnSave1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;


	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		System::IO::File::WriteAllText(opFileD->FileName, "Êîîðäèíàòû â íà÷àëå êîîðäèíàò, R = "+txtR->Text);
}
private: System::Void btnGen2_Click(System::Object^ sender, System::EventArgs^ e) {
	txtMatr->Text = "";
	if (txtCount2->Text == "" || txtMin2->Text == "" || txtMax2->Text == "")
		MessageBox::Show("Ïðîâåðüòå êîððåêòíîñòü ââîäà!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	
	int count = Convert::ToInt32(txtCount2->Text);
	int max = Convert::ToInt32(txtMax2->Text);
	int min = Convert::ToInt32(txtMin2->Text);
	srand(time(NULL));
	for (int i = 0; i < count; i++)
	{
		for(int j=0; j<count; j++)
			txtMatr->Text += String::Format("{0,7}", (rand() % (max - min + 1) + min).ToString() + " ");
		txtMatr->Text += System::Environment::NewLine;
	}
}
private: System::Void btnSelect2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;

	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		txtFile2->Text = opFileD->FileName;
	else
		txtFile2->Text = "";
}
private: System::Void btnFile2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtFile2->Text == "")
		MessageBox::Show("Òðåáóåòñÿ âûáðàòü ôàéë!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	txtMatr->Text = System::IO::File::ReadAllText(txtFile2->Text);
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSave2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;


	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		System::IO::File::WriteAllText(opFileD->FileName, txtResult2->Text);
}
private: System::Void btnExecute2_Click(System::Object^ sender, System::EventArgs^ e) {
	if(txtMatr->Text == "")
		MessageBox::Show("Òðåáóåòñÿ ñîçäàòü èëè ââåñòè ìàòðèöó!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	array<double, 2>^ mas = gcnew array<double, 2>(100,100);
	int i = 0, j = 0, jCount = 0;
	array<String^>^ str = txtMatr->Text->Split('\n');
	for each (String^ tempstr in str)
	{
		array<String^>^ line = tempstr->Split(' ');
		for each (String ^ elem in line)
		{
			if (elem != " " && elem != "" && elem != "\r")
			{
				mas[i,j] = Convert::ToInt32(elem);
				j++;
			}
		}
		if(j>0){
			i++;
		}
		if(j>jcount){
			jCount = j;
		}
		j = 0;
	}
	if(i!=jCount)
		MessageBox::Show("Ìàòðèöà["+i+","+jCount+"] íå êâàäðàòíàÿ!","Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else
	{
		int counter = i;
		for (int i = 0; i < counter; i++)
			for (int j = 0; j < i; j++)
				if (mas[i, j] != mas[j, i])
				{
					txtResult2->Text = "Ìàòðèöà íå ñèììåòðè÷íàÿ!";
					return;
				}
		txtResult2->Text = "Ìàòðèöà ñèììåòðè÷íàÿ!";
	}
}
private: System::Void btnGen3_Click(System::Object^ sender, System::EventArgs^ e) {
	txtN->Text = "";
	if (txtMin3->Text == "" || txtMax3->Text == "")
		MessageBox::Show("Ïðîâåðüòå êîððåêòíîñòü ââîäà!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	int max = Convert::ToInt32(txtMax1->Text);
	int min = Convert::ToInt32(txtMin1->Text);
	srand(time(NULL));
	txtN->Text = (rand() % (max - min + 1) + min).ToString() + " ";
	}

private: System::Void txtSelect3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;

	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		txtFile3->Text = opFileD->FileName;
	else
		txtFile3->Text = "";

}
private: System::Void btnFile3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtFile3->Text == "")
		MessageBox::Show("Òðåáóåòñÿ âûáðàòü ôàéë!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	txtMatr->Text = System::IO::File::ReadAllText(txtFile3->Text);
}
private: System::Void btnSave3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;


	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		System::IO::File::WriteAllText(opFileD->FileName, txtResult3->Text);
}
private: System::Void btnExecute3_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResult3->Text = "  #    Çíà÷åíèå"+ System::Environment::NewLine;;
	int n = Convert::ToInt32(txtN->Text);
	int sum = 0;
	for(int i=1;i<=n;i++)
		txtResult3->Text += String::Format("{0, 3}", i) + String::Format("{0,12:F4}", sum+Math::Pow(-1, i + 1) / i)+System::Environment::NewLine;
}

private: System::Void btnFile4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtFile4->Text == "")
		MessageBox::Show("Òðåáóåòñÿ âûáðàòü ôàéë!", "Âíèìàíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	txtMatr->Text = System::IO::File::ReadAllText(txtFile4->Text);
}
private: System::Void btnSelect4_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;

	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		txtFile4->Text = opFileD->FileName;
	else
		txtFile4->Text = "";
}
private: System::Void btnSave4_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opFileD = gcnew OpenFileDialog;
	opFileD->Title = "Âûáîð ôàéëà";
	opFileD->InitialDirectory = "d:\\";
	opFileD->Filter = "Òåêñòîâûå ôàéëû (*.txt)|*.txt";
	opFileD->ShowReadOnly = false;
	opFileD->RestoreDirectory = true;


	if (opFileD->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		System::IO::File::WriteAllText(opFileD->FileName, txtResult4->Text);
}
private: System::Void btnExecute4_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context^ marshal = gcnew marshal_context();
	const char* managed = marshal->marshal_as<const char*>(txtStr->Text+" ");
	int i = 0;
	int a = 0, b = 0;
	bool firstd = false, znak = false, write = false;
	char z;
	while (managed[i]!=NULL)
	{
		if (!znak) {
			switch (managed[i])
			{
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '0':
				a = a * 10 + (Convert::ToInt32(managed[i])-48);
				firstd = true;
				break;
			case '+':
			case '-':
			case '*':
			case '/':
				if (firstd) 
				{
					z = managed[i];
					znak = true;
				}
				break;
			default:
				a = 0;
				break;
			}
		}
		else
		{
			switch (managed[i])
			{
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '0':
				b = b * 10 + (Convert::ToInt32(managed[i]) - 48);
				break;
			default:
				write = true;
				znak = false;
				break;
			}
		}
		if (write == true)
		{
			int result;
			if (z == '+') result = a + b;
			if (z == '-') result = a - b;
			if (z == '*') result = a * b;
			if (z == '/') result = a / b;
			Encoding^ encoding = Encoding::GetEncoding(1251);
			txtResult4->Text += Convert::ToString(a) + " " + encoding->GetString(gcnew array<unsigned char>(1) { z }, 0, 1) +" " + Convert::ToString(b) + " = " + Convert::ToString(result) + System::Environment::NewLine;
			a = 0;
			b = 0;
			znak = false;
			write = false;
			firstd = false;
		}
		i++;
	}
}
private: System::Void txtStr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

