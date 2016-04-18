#pragma once
#include "VietnameseChecker.h"
namespace SuperWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task_Config
	/// </summary>
	public ref class Task_Config : public System::Windows::Forms::Form
	{
	public:
		Task_Config(void)
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
		~Task_Config()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Begin - End";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(235, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Duration";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(236, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"02 hours 00 minutes";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Hexadecimal = true;
			this->numericUpDown1->Location = System::Drawing::Point(161, 40);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(18, 26);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Task_Config::numericUpDown1_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 39);
			this->textBox1->MaxLength = 19;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 26);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"08 : 00  -  10 : 00";
			this->textBox1->Enter += gcnew System::EventHandler(this, &Task_Config::textBox1_Enter);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Task_Config::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(12, 94);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(332, 103);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Task*";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"&Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task_Config::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(381, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"C&ancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Task_Config::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(381, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"&Set";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Task_Config::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Task_Config::timer1_Tick);
			// 
			// Task_Config
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 209);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Name = L"Task_Config";
			this->Text = L"Task_Config";
			this->Load += gcnew System::EventHandler(this, &Task_Config::Task_Config_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:String^ taskContent;
			   int start_time;
			   int end_time;
		 private : int position;
				   String^ tmp;
				   int lastP;
 private: bool isTiengViet(wchar_t c)
{ 
	if((c==_as)||(c==_af)||(c==_ar)||(c==_ax)||(c==_aj)
	 ||(c==_aw)||(c==_aws)||(c==_awr)||(c==_awx)||(c==_awj)||(c==_awf)
	 ||(c==_aas)||(c==_aaf)||(c==_aar)||(c==_aax)||(c==_aaj)||(c==_aa)
	 ///***************************************************//
	 ||(c==_os)||(c==_of)||(c==_or)||(c==_ox)||(c==_oj)
	 ||(c==_ow)||(c==_ows)||(c==_owr)||(c==_owx)||(c==_owj)||(c==_owf)
	 ||(c==_oos)||(c==_oof)||(c==_oor)||(c==_oox)||(c==_ooj)||(c==_oo)
	  ///***************************************************//
	 ||(c==_is)||(c==_iff)||(c==_ir)||(c==_ix)||(c==_ij)
	 ||(c==_ys)||(c==_yf)||(c==_yr)||(c==_yx)||(c==_yj)
	  ///***************************************************//
	 ||(c==_us)||(c==_uf)||(c==_ur)||(c==_ux)||(c==_uj)
	 ||(c==_uw)||(c==_uws)||(c==_uwr)||(c==_uwx)||(c==_uwj)||(c==_uwf)
	  ///***************************************************//
	 ||(c==_es)||(c==_ef)||(c==_er)||(c==_ex)||(c==_ej)
	 ||(c==_ee)||(c==_ees)||(c==_eer)||(c==_eex)||(c==_eej)||(c==_eef)
	
	 
	 // 66 tu
	 
	 
	 
	 
	 )//||(c==)
		return true;
	

	return false;
};
	private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			
			 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 	 int  pos = textBox1->SelectionStart;
				 if ( pos == 0 || pos == 1)
				 {
				 textBox1->SelectionStart = 0;
				 textBox1->SelectionLength = 2;
				 position=1; 
				 }
				  if ( pos == 5 || pos == 6)
				 {
				 textBox1->SelectionStart = 5;
				 textBox1->SelectionLength = 2;
				 position=2;

				 }
				   if ( pos == 12 || pos == 13)
				 {
				 textBox1->SelectionStart = 12;
				 textBox1->SelectionLength = 2;
				 position=3;

				 }
				    if ( pos == 17 || pos == 18)
				 {
				 textBox1->SelectionStart = 17;
				 textBox1->SelectionLength = 2;
				 position=4;

				 }
					tmp = textBox1->SelectedText;
		 }
private: System::Void Task_Config_Load(System::Object^  sender, System::EventArgs^  e) {
			 lastP=0;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox3->Text= "";
			this->textBox1->Text = L"08 : 00  -  10 : 00";
			tmp = "";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 if ( textBox3->Text->Length<20)
			 {
				 MessageBox::Show("Content of task is not shorten than 20 characters");
				 return;
			 }
			 for ( int i = 0 ; i < textBox3->Text->Length; i++)
			 {
				 if ( isTiengViet( textBox3->Text[i]))
				 {
				 MessageBox::Show("Content of task don't have Vietnamese accent  ");
				  return;
				 
				 }
			 
			 }
			 taskContent = textBox3->Text;
			 String^ resultT = this->textBox1->Text;
			 int sH = Convert::ToInt32(resultT->Substring(0,2));
			 int sM = Convert::ToInt32(resultT->Substring(5,2));
			 int eH = Convert::ToInt32(resultT->Substring(12,2));
			 int eM = Convert::ToInt32(resultT->Substring(17,2));
			 start_time= sH*60 + sM;
			 end_time=  eH*60 + eM ;
			 this->Hide();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 taskContent="";
			 this->Hide();
		 }
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 e->KeyChar='\0';

		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 int v=  (int)numericUpDown1->Value;
			int isIncrease=  v- lastP;
			if (isIncrease==0 )
				return;
			int num = Convert::ToInt32(tmp);
				if (isIncrease>0)
				num++;
				if (isIncrease<0)
					num--;

				if (position==1)
				{
				 if (num<8) num = 8;
				 if (num >17) num = 17;
				String ^ a =   num < 10 ? "0"+Convert::ToString(num):Convert::ToString(num);
				String ^ tmpStr = this->textBox1->Text->Remove(0,2);		
				this->textBox1->Text = a+this->textBox1->Text->Remove(0,2);				
				}
					if (position==2)
				{
				 if (num<0) num = 59;
				 if (num >=60) num = 0;
				String ^ a =   num < 10 ? "0"+Convert::ToString(num):Convert::ToString(num);
				String ^ tmpStr = this->textBox1->Text->Remove(5,2);		
				this->textBox1->Text = tmpStr->Insert(5,a);	
				textBox1->SelectionStart=5;
				}
						if (position==3)
				{
				 if (num<8) num = 8;
				 if (num >17) num = 17;
				String ^ a =   num < 10 ? "0"+Convert::ToString(num):Convert::ToString(num);
				String ^ tmpStr = this->textBox1->Text->Remove(12,2);		
				this->textBox1->Text = tmpStr->Insert(12,a);	
				textBox1->SelectionStart= 12;
				}
							if (position==4)
				{
				 if (num<0) num = 59;
				 if (num >=60) num = 0;
				String ^ a =   num < 10 ? "0"+Convert::ToString(num):Convert::ToString(num);
				String ^ tmpStr = this->textBox1->Text->Remove(17,2);		
				this->textBox1->Text = tmpStr->Insert(17,a);	
				textBox1->SelectionStart=17;
				}
				lastP = 50;
				numericUpDown1->Value=50;
		 }
};
}
