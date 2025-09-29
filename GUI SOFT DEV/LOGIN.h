#pragma once
#include "BAO RTU HUB.h"
#include "BAO RTU HUB STUDENT.h"



namespace GUISOFTDEV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LOGIN
	/// </summary>
	public ref class LOGIN : public System::Windows::Forms::Form
	{
	public:
		LOGIN(void)
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
		~LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtstudent;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnadmin;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;











	protected:

	protected:




	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LOGIN::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtstudent = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnadmin = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 98);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(527, 55);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(358, 449);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Location = System::Drawing::Point(683, 12);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(202, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(509, 41);
			this->label1->TabIndex = 4;
			this->label1->Text = L"RIZAL TECHNOLOGIAL UNIVESITY";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"HP Simplified", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(78, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(367, 35);
			this->label2->TabIndex = 5;
			this->label2->Text = L"BAO RESERVATION SYSTEM";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"HP Simplified", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(207, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 30);
			this->label3->TabIndex = 6;
			this->label3->Text = L"LOG IN";
			// 
			// txtstudent
			// 
			this->txtstudent->BackColor = System::Drawing::SystemColors::Window;
			this->txtstudent->Location = System::Drawing::Point(127, 102);
			this->txtstudent->Multiline = true;
			this->txtstudent->Name = L"txtstudent";
			this->txtstudent->Size = System::Drawing::Size(248, 25);
			this->txtstudent->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(40, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"STUDENT NO.";
			// 
			// btnadmin
			// 
			this->btnadmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadmin->Location = System::Drawing::Point(166, 151);
			this->btnadmin->Name = L"btnadmin";
			this->btnadmin->Size = System::Drawing::Size(164, 25);
			this->btnadmin->TabIndex = 9;
			this->btnadmin->Text = L"LOG IN AS ADMIN ";
			this->btnadmin->UseVisualStyleBackColor = true;
			this->btnadmin->Click += gcnew System::EventHandler(this, &LOGIN::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnadmin);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->txtstudent);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(24, 263);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(486, 240);
			this->panel1->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(166, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 25);
			this->button2->TabIndex = 10;
			this->button2->Text = L"LOG IN AS STUDENT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LOGIN::button2_Click);
			// 
			// LOGIN
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(897, 536);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LOGIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LOGIN";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Getting the value of textbox
		String^ studID = txtstudent->Text;
		// Valitdate the value of textbox
		if (studID->Length == 0) {

			MessageBox::Show("Please Enter student ID", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {
			// Check if the Entered value is on the array of admin login
			array<String^>^ Database = { "2023-107740",
				"2023-104093",
				"01234567890",
				"2023-103839",
				"2023-111860",
				"2023-104231" };
			bool found = false;

			// initialize "admin" to get the value of "Database"
			for each (String ^ admin in Database) {
				if (studID == admin) {
					found = true;
					break;
				}
			}
			// Opening of the BAO RTU HUB form if true
			if (found) {
				BAORTUHUB^ adminpage = gcnew BAORTUHUB();
				this->Hide();
				adminpage->Show();

			}
			else {
				MessageBox::Show("Student ID not found", "Error", MessageBoxButtons:: RetryCancel, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// the same as above
		String^ studID = txtstudent->Text;
		if (studID->Length == 0) {

			MessageBox::Show("Please Enter student ID", "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
		}
		else {

			array<String^>^ Database = { "2023-102904" , "2023-103131" ,"2023-104311" ,"2023-104357" ,"2023-108495" ,"2023-103453" ,"2023-113140" ,"2023-104193" ,"2019-100849" ,"2023-103779",
			"2023-108757" ,"2023-111860" ,"2023-104380" ,"2023-102696" ,"2023-108105" ,"2023-110661" ,"90123135661", "2023 - 105193","2020-106695" ,"2023-103839" ,"2023-101413" ,"2023-109022" ,"2023-111108" ,"2023-102675" ,
			"2023-102361" ,"2023-102622" ,"2023-102389" ,"2023-102805" ,"2023-103353" ,"2023-103247" ,"2023-103829" ,"2023-104018" ,"2023-102741" ,"2023-103325" ,"90123146134" ,"2023-106893" ,"2023-104231" ,"2023-103843" ,
			"2023-103399" ,"2023-109576" ,"2023-107942" ,"2023-107740" ,"2023-104093" ,"2023-104341" ,"01234567890" };
			bool found = false;
			for each (String ^ admin in Database) {

				if (studID == admin) {
					found = true;
					break;
				}


			}
				if (found) {
					BAORTUHUBSTUDENT^ adminpage = gcnew BAORTUHUBSTUDENT();
					this->Hide();
					adminpage->Show();
				}
				else {
					MessageBox::Show("Student ID not found", "Error", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
				}
		}

	}
	
};
}
