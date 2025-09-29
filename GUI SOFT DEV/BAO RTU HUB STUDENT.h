#pragma once

namespace GUISOFTDEV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for BAORTUHUBSTUDENT
	/// </summary>
	public ref class BAORTUHUBSTUDENT : public System::Windows::Forms::Form
	{
	public:
		BAORTUHUBSTUDENT(void)
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
		~BAORTUHUBSTUDENT()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;







	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ sETTINGSToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ vIEWToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ tblBooksStud;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtProductName;
	private: System::Windows::Forms::TextBox^ txtProductPrice;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtProductQuantity;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ tblcart;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtEnterStudentNo;

	private: System::Windows::Forms::DataGridView^ tblcheckout;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtReceiptTotal;







	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtStudentNo;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ tblReceipt;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ lblTime;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BAORTUHUBSTUDENT::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sETTINGSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vIEWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tblBooksStud = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtProductName = (gcnew System::Windows::Forms::TextBox());
			this->txtProductPrice = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtProductQuantity = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tblReceipt = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtReceiptTotal = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtStudentNo = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtEnterStudentNo = (gcnew System::Windows::Forms::TextBox());
			this->tblcheckout = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tblcart = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblBooksStud))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblReceipt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblcheckout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblcart))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(30, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(598, 71);
			this->panel1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(404, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 41);
			this->label3->TabIndex = 4;
			this->label3->Text = L"HUB";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(434, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 41);
			this->label2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 41);
			this->label1->TabIndex = 2;
			this->label1->Text = L"BUSINESS AFFAIRS  UNIT";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sETTINGSToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(1622, 12);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(106, 40);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sETTINGSToolStripMenuItem
			// 
			this->sETTINGSToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->sETTINGSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->vIEWToolStripMenuItem });
			this->sETTINGSToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sETTINGSToolStripMenuItem->Name = L"sETTINGSToolStripMenuItem";
			this->sETTINGSToolStripMenuItem->Size = System::Drawing::Size(98, 36);
			this->sETTINGSToolStripMenuItem->Text = L"MENU";
			// 
			// vIEWToolStripMenuItem
			// 
			this->vIEWToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->vIEWToolStripMenuItem->Name = L"vIEWToolStripMenuItem";
			this->vIEWToolStripMenuItem->Size = System::Drawing::Size(190, 36);
			this->vIEWToolStripMenuItem->Text = L"LOG OUT";
			this->vIEWToolStripMenuItem->Click += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::vIEWToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(585, 573);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 75);
			this->button1->TabIndex = 19;
			this->button1->Text = L"ADD TO CART";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::button1_Click);
			// 
			// tblBooksStud
			// 
			this->tblBooksStud->AllowUserToAddRows = false;
			this->tblBooksStud->AllowUserToDeleteRows = false;
			this->tblBooksStud->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblBooksStud->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblBooksStud->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblBooksStud->Location = System::Drawing::Point(30, 116);
			this->tblBooksStud->Name = L"tblBooksStud";
			this->tblBooksStud->ReadOnly = true;
			this->tblBooksStud->Size = System::Drawing::Size(792, 437);
			this->tblBooksStud->TabIndex = 20;
			this->tblBooksStud->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BAORTUHUBSTUDENT::tblBooksStud_CellClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(241, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"NAME";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(420, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"PRICE(PHP)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(733, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"STOCKS";
			// 
			// txtProductName
			// 
			this->txtProductName->Location = System::Drawing::Point(29, 571);
			this->txtProductName->Multiline = true;
			this->txtProductName->Name = L"txtProductName";
			this->txtProductName->Size = System::Drawing::Size(332, 26);
			this->txtProductName->TabIndex = 26;
			// 
			// txtProductPrice
			// 
			this->txtProductPrice->Location = System::Drawing::Point(383, 571);
			this->txtProductPrice->Multiline = true;
			this->txtProductPrice->Name = L"txtProductPrice";
			this->txtProductPrice->Size = System::Drawing::Size(185, 26);
			this->txtProductPrice->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(648, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 34);
			this->button2->TabIndex = 30;
			this->button2->Text = L"LOG OUT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::button2_Click);
			// 
			// txtProductQuantity
			// 
			this->txtProductQuantity->Location = System::Drawing::Point(383, 615);
			this->txtProductQuantity->Multiline = true;
			this->txtProductQuantity->Name = L"txtProductQuantity";
			this->txtProductQuantity->Size = System::Drawing::Size(185, 33);
			this->txtProductQuantity->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"HP Simplified", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(210, 624);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 24);
			this->label4->TabIndex = 32;
			this->label4->Text = L"TYPE QUANTITY:";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lblTime);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->tblReceipt);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->txtReceiptTotal);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->txtStudentNo);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->txtTotal);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->txtEnterStudentNo);
			this->tabPage1->Controls->Add(this->tblcheckout);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->tblcart);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(620, 616);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"CART";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// lblTime
			// 
			this->lblTime->AutoSize = true;
			this->lblTime->Location = System::Drawing::Point(359, 507);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(36, 13);
			this->lblTime->TabIndex = 23;
			this->lblTime->Text = L"TIME:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"HP Simplified", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(369, 499);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 23);
			this->label15->TabIndex = 22;
			// 
			// tblReceipt
			// 
			this->tblReceipt->AllowUserToAddRows = false;
			this->tblReceipt->AllowUserToDeleteRows = false;
			this->tblReceipt->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblReceipt->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblReceipt->Location = System::Drawing::Point(9, 482);
			this->tblReceipt->Name = L"tblReceipt";
			this->tblReceipt->ReadOnly = true;
			this->tblReceipt->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblReceipt->Size = System::Drawing::Size(336, 123);
			this->tblReceipt->TabIndex = 21;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"HP Simplified", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(349, 65);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(244, 64);
			this->button6->TabIndex = 20;
			this->button6->Text = L"CHECKOUT";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"HP Simplified", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(362, 539);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(220, 51);
			this->button5->TabIndex = 19;
			this->button5->Text = L"DONE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::button5_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(346, 435);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 13);
			this->label14->TabIndex = 18;
			this->label14->Text = L"TOTAL:";
			// 
			// txtReceiptTotal
			// 
			this->txtReceiptTotal->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->txtReceiptTotal->Location = System::Drawing::Point(349, 451);
			this->txtReceiptTotal->Name = L"txtReceiptTotal";
			this->txtReceiptTotal->Size = System::Drawing::Size(209, 20);
			this->txtReceiptTotal->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 435);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"STUDENT NAME:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"HP Simplified", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(276, 409);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 24);
			this->label12->TabIndex = 12;
			this->label12->Text = L"RECEIPT";
			// 
			// txtStudentNo
			// 
			this->txtStudentNo->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->txtStudentNo->Location = System::Drawing::Point(6, 451);
			this->txtStudentNo->Name = L"txtStudentNo";
			this->txtStudentNo->Size = System::Drawing::Size(209, 20);
			this->txtStudentNo->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(373, 293);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(209, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(370, 277);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"ENTER CHANGE:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(370, 228);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"TOTAL:";
			// 
			// txtTotal
			// 
			this->txtTotal->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->txtTotal->Location = System::Drawing::Point(373, 244);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(209, 20);
			this->txtTotal->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"HP Simplified", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(373, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(176, 47);
			this->button4->TabIndex = 6;
			this->button4->Text = L"PAY";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(370, 180);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(152, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"ENTER STUDENT NUMBER:";
			// 
			// txtEnterStudentNo
			// 
			this->txtEnterStudentNo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEnterStudentNo->Location = System::Drawing::Point(373, 196);
			this->txtEnterStudentNo->Name = L"txtEnterStudentNo";
			this->txtEnterStudentNo->Size = System::Drawing::Size(176, 20);
			this->txtEnterStudentNo->TabIndex = 4;
			// 
			// tblcheckout
			// 
			this->tblcheckout->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblcheckout->Location = System::Drawing::Point(6, 185);
			this->tblcheckout->Name = L"tblcheckout";
			this->tblcheckout->Size = System::Drawing::Size(336, 212);
			this->tblcheckout->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"HP Simplified", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(276, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 24);
			this->label8->TabIndex = 2;
			this->label8->Text = L"CHECKOUT";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"HP Simplified", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(348, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(245, 40);
			this->button3->TabIndex = 1;
			this->button3->Text = L"DELETE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::button3_Click);
			// 
			// tblcart
			// 
			this->tblcart->AllowUserToAddRows = false;
			this->tblcart->AllowUserToDeleteRows = false;
			this->tblcart->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblcart->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblcart->Location = System::Drawing::Point(6, 6);
			this->tblcart->Name = L"tblcart";
			this->tblcart->ReadOnly = true;
			this->tblcart->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblcart->Size = System::Drawing::Size(336, 123);
			this->tblcart->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(845, 21);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(628, 642);
			this->tabControl1->TabIndex = 29;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &BAORTUHUBSTUDENT::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// BAORTUHUBSTUDENT
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1497, 685);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtProductQuantity);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->txtProductPrice);
			this->Controls->Add(this->txtProductName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tblBooksStud);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BAORTUHUBSTUDENT";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BAORTUHUBSTUDENT";
			this->Load += gcnew System::EventHandler(this, &BAORTUHUBSTUDENT::BAORTUHUBSTUDENT_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblBooksStud))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblReceipt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblcheckout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblcart))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// connecting to the database
		String^ connstring = "Server=localhost;port=3310;database=dbschool;uid=root;password=6072";
		MySqlConnection^ connect = gcnew MySqlConnection(connstring);


		// showing the database

		void autoupdateaproduct() {

			try {
				connect->Open();
				MessageBox::Show("Connection Established");
				MySqlDataAdapter^ bookslist = gcnew MySqlDataAdapter("SELECT * FROM addproduct", connect);
				DataTable^ datatable = gcnew DataTable();
				bookslist->Fill(datatable);
				tblBooksStud->DataSource = datatable;
				connect->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Cant read the data");

			}
		}
		void autoupdatereceipt() {
			try {
				connect->Open();
				MySqlDataAdapter^ cart = gcnew MySqlDataAdapter("SELECT * FROM studentcart", connect);
				DataTable^ datatablecart = gcnew DataTable();
				cart->Fill(datatablecart);
				tblReceipt->DataSource = datatablecart;
				connect->Close();
			}
			catch (Exception^ e) {
				
				
			}
		}

		void autoupdatecart() {

			try {
				connect->Open();
				MySqlDataAdapter^ cart = gcnew MySqlDataAdapter("SELECT * FROM studentcart", connect);
				DataTable^ datatablecart = gcnew DataTable();
				cart->Fill(datatablecart);
				tblcart->DataSource = datatablecart;
				connect->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Cant read the data");
			}
		}

		void autoupdatecheckout() {
			connect->Open();
			MySqlDataAdapter^ cart = gcnew MySqlDataAdapter("SELECT * FROM studentcart", connect);
			DataTable^ datatablecart = gcnew DataTable();
			cart->Fill(datatablecart);
			tblcheckout->DataSource = datatablecart;
			connect->Close();
		}

		void clearFields() {

			txtProductName->Text = "";
			txtProductPrice->Text = "";
			txtProductQuantity->Text = "";
		}

		// printing
		Bitmap^ CaptureTabControlImage(TabControl^ tabControl1)
		{
			Bitmap^ bitmap = gcnew Bitmap(tabControl1->Width, tabControl1->Height);
			tabControl1->DrawToBitmap(bitmap, tabControl1->ClientRectangle);
			return bitmap;
		}

	private: System::Void vIEWToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//logout 
		this->Close();
	}

	private: System::Void BAORTUHUBSTUDENT_Load(System::Object^ sender, System::EventArgs^ e) {
		// showing datetime 
		System::DateTime now = System::DateTime::Now;
		this->lblTime->Text = now.ToString();


	try {

		autoupdateaproduct();
		autoupdatecart();
		autoupdatecheckout();
		autoupdatereceipt();
		
	}
	catch (Exception^ e) {
		MessageBox::Show("Can't read the data");


	}
}
	private: System::Void tblBooksStud_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		// cell click 
		String^ clickPID = tblBooksStud->Rows[tblBooksStud->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		try {
			connect->Open();
			MySqlDataAdapter^ readproduct = gcnew MySqlDataAdapter("SELECT PRODUCTNAME, PRODUCTPRICE FROM addproduct WHERE PID = " + clickPID, connect);
			DataTable^ dt = gcnew DataTable();
			readproduct->Fill(dt);

			String^ prodname = dt->Rows[0]->ItemArray[0]->ToString();
			String^ prodprice = dt->Rows[0]->ItemArray[1]->ToString();
			txtProductName->Text = prodname;
			txtProductPrice->Text = prodprice;
			connect->Close();
		}
		catch (Exception^ e) {

			MessageBox::Show("Failed to Read");

		}
		



}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			   
			   String^ Productname = txtProductName->Text;
			   double Productprice = Convert::ToDouble(txtProductPrice->Text);
			   int Productquantity = Convert::ToInt32(txtProductQuantity->Text);


			   connect->Open();
			   String^ Query = "INSERT INTO studentcart (PRODUCTNAME, PRODUCTPRICE, PRODUCTQUANTITY) VALUE (@Productname,@Productprice,@Productquantity)";
			   MySqlCommand^ addtocart = gcnew MySqlCommand(Query,connect);


			   addtocart->Parameters->AddWithValue("@Productname", Productname);
			   addtocart->Parameters->AddWithValue("@Productprice", Productprice);
			   addtocart->Parameters->AddWithValue("@Productquantity", Productquantity);

			   try{

				   addtocart->ExecuteNonQuery();
				   MessageBox::Show(Productname + " Inserted succesfully");
				   connect->Close();
				   clearFields();
				   autoupdatecart();
				   autoupdatecheckout();
				   autoupdatereceipt();
				}
				catch (Exception^ e) {
			   MessageBox::Show("Failed add to cart");
					}
	   }


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}





	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {


		String^ clickPID = tblcheckout->Rows[tblcheckout->CurrentCell->RowIndex]->Cells[0]->Value->ToString();


		connect->Open();
		MySqlCommand^ insertdata = gcnew MySqlCommand("DELETE FROM studentcart WHERE PID = " + clickPID, connect);
		insertdata->ExecuteNonQuery();
		connect->Close();
		MessageBox::Show("PRODUCT DELETED");
		autoupdatecart();
		autoupdatecheckout();
		autoupdatereceipt();
		
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed To delete");
	}

	
}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// initializing totalPrice
	double totalPrice = 0.0;
	try {
		connect->Open();

		MySqlDataAdapter^ cart = gcnew MySqlDataAdapter("SELECT PRODUCTPRICE, PRODUCTQUANTITY FROM studentcart", connect);
		DataTable^ datatablecart = gcnew DataTable();
		cart->Fill(datatablecart);

		//Getting the total of the product entered
		for each (DataRow ^ row in datatablecart->Rows) {

		//initialize for product price and quantity
			double prodprice = Convert::ToDouble(row->ItemArray[0]);
				int prodquantity = Convert::ToInt32(row->ItemArray[1]);



				// computation for total price
				totalPrice += prodprice * prodquantity;

				
				
		}
		// Show to textboxt the total price
		txtTotal->Text = totalPrice.ToString();
		
		connect->Close();
	}
	catch (Exception^ e) {

		MessageBox::Show("FAILED TO CHECKOUT");
		connect->Close();
		
	}
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


	// for receipt
	String^ getStudentno = txtEnterStudentNo->Text;
	String^ getTotal = txtTotal->Text;

	txtStudentNo->Text = getStudentno;
	txtReceiptTotal->Text = getTotal;
	
	try {
			
			connect->Open();

			
			MySqlDataAdapter^ cart = gcnew MySqlDataAdapter("SELECT PRODUCTNAME, PRODUCTPRICE, PRODUCTQUANTITY FROM studentcart", connect);
			DataTable^ datatablecart = gcnew DataTable();
			cart->Fill(datatablecart);
			tblReceipt->DataSource = datatablecart;

			
			connect->Close();
			

	}

	
	catch (Exception^ e) {
		MessageBox::Show("Failed to Read");

	}




	

	
}

	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {


		Bitmap^ tabControlImage = CaptureTabControlImage(this->tabControl1);
		e->Graphics->DrawImage(tabControlImage, e->MarginBounds);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		
	try {

		connect->Open();
		// Create the SQL command to update addproduct
		MySqlCommand^ command = gcnew MySqlCommand(
			"UPDATE addproduct "
			"JOIN studentcart ON addproduct.PRODUCTNAME = studentcart.PRODUCTNAME "
			"SET addproduct.PRODUCTQUANTITY = addproduct.PRODUCTQUANTITY - studentcart.PRODUCTQUANTITY ",
			connect);

		// Execute the SQL command
		command->ExecuteNonQuery();
		connect->Close();
		MessageBox::Show("QUANTITY UPDATED");


		autoupdatecart();
		autoupdatecheckout();
		autoupdatereceipt();
	}
	catch (Exception^ ex) {


		MessageBox::Show("FAILED TO MINUS QUANTITY");
	}

	
	try {

		// just delete and print
		connect->Open();
		MySqlCommand^ deletedata = gcnew MySqlCommand("DELETE FROM studentcart", connect);
		deletedata->ExecuteNonQuery();


		connect->Close();
		MessageBox::Show("TRANSACTION SUCCESSFUL");

		printPreviewDialog1->Document = printDocument1;
		printPreviewDialog1->ShowDialog();

	}
	catch (Exception^ ex) {


		connect->Close();
		MessageBox::Show("Failed Exit");

	}

	


}


};
}
