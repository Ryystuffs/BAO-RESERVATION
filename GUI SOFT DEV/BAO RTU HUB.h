#pragma once
#include "ADD PRODUCT.h"

namespace GUISOFTDEV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for BAORTUHUB
	/// </summary>
	public ref class BAORTUHUB : public System::Windows::Forms::Form
	{
	public:
		BAORTUHUB(void)
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
		~BAORTUHUB()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ sETTINGSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pRODUCTSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aDDPRODUCTSToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ lOGOUTToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridView^ tblBooks;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtName;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtPrice;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtQuantity;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ button1;


















	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sETTINGSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pRODUCTSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aDDPRODUCTSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lOGOUTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tblBooks = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblBooks))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sETTINGSToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(1226, 12);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(226, 40);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sETTINGSToolStripMenuItem
			// 
			this->sETTINGSToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->sETTINGSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->pRODUCTSToolStripMenuItem,
					this->lOGOUTToolStripMenuItem
			});
			this->sETTINGSToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sETTINGSToolStripMenuItem->Name = L"sETTINGSToolStripMenuItem";
			this->sETTINGSToolStripMenuItem->Size = System::Drawing::Size(98, 36);
			this->sETTINGSToolStripMenuItem->Text = L"MENU";
			// 
			// pRODUCTSToolStripMenuItem
			// 
			this->pRODUCTSToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->pRODUCTSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aDDPRODUCTSToolStripMenuItem });
			this->pRODUCTSToolStripMenuItem->Name = L"pRODUCTSToolStripMenuItem";
			this->pRODUCTSToolStripMenuItem->Size = System::Drawing::Size(214, 36);
			this->pRODUCTSToolStripMenuItem->Text = L"PRODUCTS";
			// 
			// aDDPRODUCTSToolStripMenuItem
			// 
			this->aDDPRODUCTSToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->aDDPRODUCTSToolStripMenuItem->Name = L"aDDPRODUCTSToolStripMenuItem";
			this->aDDPRODUCTSToolStripMenuItem->Size = System::Drawing::Size(274, 36);
			this->aDDPRODUCTSToolStripMenuItem->Text = L"ADD PRODUCTS";
			this->aDDPRODUCTSToolStripMenuItem->Click += gcnew System::EventHandler(this, &BAORTUHUB::aDDPRODUCTSToolStripMenuItem_Click);
			// 
			// lOGOUTToolStripMenuItem
			// 
			this->lOGOUTToolStripMenuItem->BackColor = System::Drawing::SystemColors::Info;
			this->lOGOUTToolStripMenuItem->Name = L"lOGOUTToolStripMenuItem";
			this->lOGOUTToolStripMenuItem->Size = System::Drawing::Size(214, 36);
			this->lOGOUTToolStripMenuItem->Text = L"LOGOUT";
			this->lOGOUTToolStripMenuItem->Click += gcnew System::EventHandler(this, &BAORTUHUB::lOGOUTToolStripMenuItem_Click);
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
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(141, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(598, 117);
			this->panel1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(161, 56);
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
			this->label2->Location = System::Drawing::Point(443, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 41);
			this->label2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(58, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 41);
			this->label4->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"HP Simplified", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(182, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 18);
			this->label6->TabIndex = 8;
			this->label6->Text = L"NAME";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"HP Simplified", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(469, 155);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 18);
			this->label7->TabIndex = 9;
			this->label7->Text = L"PRICE(PHP)";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"HP Simplified", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(765, 155);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 18);
			this->label8->TabIndex = 10;
			this->label8->Text = L"AVAILABILITY";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(32, 407);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 24);
			this->label9->TabIndex = 12;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tblBooks
			// 
			this->tblBooks->AllowUserToAddRows = false;
			this->tblBooks->AllowUserToDeleteRows = false;
			this->tblBooks->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblBooks->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblBooks->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblBooks->Location = System::Drawing::Point(26, 186);
			this->tblBooks->Name = L"tblBooks";
			this->tblBooks->ReadOnly = true;
			this->tblBooks->RowHeadersWidth = 70;
			this->tblBooks->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblBooks->Size = System::Drawing::Size(848, 358);
			this->tblBooks->TabIndex = 13;
			this->tblBooks->UseWaitCursor = true;
			this->tblBooks->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BAORTUHUB::tblBooks_CellClick);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->btnUpdate);
			this->panel2->Controls->Add(this->txtQuantity);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->txtPrice);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->txtName);
			this->panel2->Location = System::Drawing::Point(894, 68);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(558, 499);
			this->panel2->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(284, 407);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 69);
			this->button1->TabIndex = 7;
			this->button1->Text = L"DELETE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BAORTUHUB::button1_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(17, 407);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(261, 69);
			this->btnUpdate->TabIndex = 6;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &BAORTUHUB::btnUpdate_Click);
			// 
			// txtQuantity
			// 
			this->txtQuantity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtQuantity->Location = System::Drawing::Point(17, 313);
			this->txtQuantity->Multiline = true;
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(402, 50);
			this->txtQuantity->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 267);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(233, 25);
			this->label11->TabIndex = 4;
			this->label11->Text = L"PRODUCT QUANTITY:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 139);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(190, 25);
			this->label10->TabIndex = 3;
			this->label10->Text = L"PRODUCT PRICE:";
			// 
			// txtPrice
			// 
			this->txtPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPrice->Location = System::Drawing::Point(17, 183);
			this->txtPrice->Multiline = true;
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(402, 50);
			this->txtPrice->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"PRODUCT NAME:";
			// 
			// txtName
			// 
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtName->Location = System::Drawing::Point(17, 66);
			this->txtName->Multiline = true;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(402, 50);
			this->txtName->TabIndex = 0;
			// 
			// BAORTUHUB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1475, 590);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tblBooks);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"BAORTUHUB";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &BAORTUHUB::BAORTUHUB_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblBooks))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
		// connecting to the MYSQL workbench
		String^ connstring = "Server=localhost;port=3310;database=dbschool;uid=root;password=6072";
		MySqlConnection^ connect = gcnew MySqlConnection(connstring);
		

		// BOOKLISt
		void autoupdatetable() {
			try {
				connect->Open();
				// intialize "booklist" to get the value form database table name "addproduct"
				MySqlDataAdapter^ bookslist = gcnew MySqlDataAdapter("SELECT * FROM addproduct", connect);
				// creating a datatable
				DataTable^ datatable = gcnew DataTable();
				// filling the datatble with booklist which is 
				bookslist->Fill(datatable);
				// showing the datable via datagirdview which named "tblBooks"
				tblBooks->DataSource = datatable;	
				connect->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Can't read the data");
			}
		}
		

	private: System::Void lOGOUTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// getting the result from a message show box
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to log out?", "Question", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		// closing the application 
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}


	private: System::Void aDDPRODUCTSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// OPEN ADD PRODUCT FORM
			ADDPRODUCT^ ADD = gcnew ADDPRODUCT();
			ADD->Show();
	}
	

	private: System::Void BAORTUHUB_Load(System::Object^ sender, System::EventArgs^ e) {
	autoupdatetable();

	
	}
	private: System::Void tblBooks_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// CELL CLICK PID
	String^ clickPID = tblBooks->Rows[tblBooks->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	try {
		
		connect->Open();
		MySqlDataAdapter^ readproduct = gcnew MySqlDataAdapter("SELECT PRODUCTNAME, PRODUCTPRICE, PRODUCTQUANTITY FROM addproduct WHERE PID = " + clickPID, connect);
		DataTable^ dt = gcnew DataTable();
		readproduct->Fill(dt);
		String^ prodname = dt->Rows[0]->ItemArray[0]->ToString();
		String^ prodprice = dt->Rows[0]->ItemArray[1]->ToString();
		String^ prodquantity = dt->Rows[0]->ItemArray[2]->ToString();
		// automatically showing the cell click on the textbox
		txtName->Text = prodname;
		txtPrice->Text = prodprice;
		txtQuantity->Text = prodquantity;
		connect->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to Read");

	}

}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	// Initializing the cellclick and textbox
	String^ clickPID = tblBooks->Rows[tblBooks->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	String^	ProductName = txtName->Text;
	int ProductPrice = Convert::ToInt32(txtPrice->Text);
	int ProductQuantity = Convert::ToInt32(txtQuantity->Text);
	try {
		connect->Open();

		// take note MySqlDataAdapter if only read the data and MySqlCommand CUD
		// Initialize "insertdata" and update the product from database
		// always create a paramaeters
		MySqlCommand^ insertdata = gcnew MySqlCommand("UPDATE addproduct SET PRODUCTNAME=@productname, PRODUCTPRICE=@productprice, PRODUCTQUANTITY=@productquantity WHERE PID= "+ clickPID, connect);


		// partner the parameters with the initialize data of the textbox above
		insertdata->Parameters->AddWithValue("@productname",ProductName);
		insertdata->Parameters->AddWithValue("@productprice", ProductPrice);
		insertdata->Parameters->AddWithValue("@productquantity", ProductQuantity);


		// Execute the action
		insertdata->ExecuteNonQuery();
		connect->Close();
		MessageBox::Show("Updated Succesfully");
		autoupdatetable();


	}
	catch (Exception^ e) {
		MessageBox::Show("Can't Update");
	}

}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try {

		// table cell click
		String^ clickPID = tblBooks->Rows[tblBooks->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		connect->Open();
		// delete product
		MySqlCommand^ insertdata = gcnew MySqlCommand("DELETE FROM addproduct WHERE PID = " + clickPID, connect);
		insertdata->ExecuteNonQuery();
		connect->Close();
		MessageBox::Show("PRODUCT DELETED");
		autoupdatetable();

		
	
	}
	catch (Exception^ e){
		MessageBox::Show("Failed To delete");
	}
}
};
}
