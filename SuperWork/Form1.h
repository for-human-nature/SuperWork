#pragma once
#include "DefineTask.h"
#include "vector"
#include "Task_Config.h"
namespace SuperWork {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column3;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column1, 
				this->Column2, this->Column3});
			this->dataGridView1->Location = System::Drawing::Point(44, 56);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(325, 474);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &Form1::dataGridView1_DoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 536);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"&Export Excel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(158, 536);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"&Hide";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(273, 536);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"&Close";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Junior";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(130, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Senior";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(202, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Supervisor";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(315, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Leader";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(26, 454);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 60000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"No.";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Task";
			this->Column2->MinimumWidth = 250;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 250;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Done";
			this->Column3->Name = L"Column3";
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column3->Width = 40;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 564);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->ShowInTaskbar = false;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int time;
		std::vector <SuperWork::TimeTask::Task_Time *> * task ;
private: void Tock( void)
				 {
					  DateTime ^ Dtime = DateTime::Now;
				 int hour = Dtime ->Hour;
				 int mins = Dtime ->Minute;
				 int t =  hour*60+mins;
				 if ((t <480)||( t > 17*60+30)||( (t > 12*60 ) && (t< 13*60+30) ))
					 return;
				 if (t>13*60+30)
				 time = t-90;
				 else
					 time =t;
				 panel1->Refresh();
				 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
			 {
				 Tock();
				 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
		 {
			 Graphics^ g = e->Graphics;
			 Brush ^ b = gcnew SolidBrush(Color::Goldenrod);
			 Pen ^ p = gcnew Pen(Color::Gold,4.0F);
			 	 float d =  ((float)(time-480)/480)* panel1->Height;
				 RectangleF  rectLAB = RectangleF(0.0F, d, (float)panel1->Width, (float)panel1->Height-d );
				 Rectangle  rectLab = Rectangle(0.0, d, panel1->Width, panel1->Height-d );
				 Brush ^ brushT1 = gcnew Drawing2D::LinearGradientBrush(rectLAB,Color::SteelBlue,Color::White,Drawing2D::LinearGradientMode::Horizontal);
				 Brush ^ brushT2 = gcnew Drawing2D::LinearGradientBrush(rectLAB,Color::White,Color::SteelBlue,Drawing2D::LinearGradientMode::Horizontal);
				 Pen ^ ps1 = gcnew Pen(brushT1, panel1->Width/2);
				 Pen ^ ps2 = gcnew Pen(brushT2, panel1->Width/2);
				 g->DrawLine(ps1,(float)panel1->Width/4, d, (float)panel1->Width/4, (float)panel1->Height );
				 g->DrawLine(ps2, 3*(float)panel1->Width/4, d, 3*(float)panel1->Width/4, (float)panel1->Height );
		
			 //////////////////////
				// array<SuperWork::TimeTask::Task_Time > ^arrT = task.to_array();
			 for (int i = 0 ;i< task->size(); i++ )
			 {
				 SuperWork::TimeTask::Task_Time * t = task->at(i);
			  if (t->type== TimeTask::DEAD_TIME)
			  {
				  RectangleF  rectLAB = RectangleF(0.0F,0,(float)panel1->Width,d);
				 Rectangle  rectLab = Rectangle(0,0,panel1->Width,d);
				 Brush ^ brushT1 = gcnew Drawing2D::LinearGradientBrush(rectLAB, Color::Red, Color::White, Drawing2D::LinearGradientMode::Horizontal);
				 Brush ^ brushT2 = gcnew Drawing2D::LinearGradientBrush(rectLAB, Color::White, Color::Red, Drawing2D::LinearGradientMode::Horizontal);
				 Pen ^ ps1 = gcnew Pen(brushT1, panel1->Width/2);
				 Pen ^ ps2 = gcnew Pen(brushT2, panel1->Width/2);
				  if (t->end_time==0)
				  {				
					if (t->start_time==0)
					{
						 g->DrawLine(ps1, (float)panel1->Width/4, 0.0F, (float)panel1->Width/4, d );
						g->DrawLine(ps2, 3*(float)panel1->Width/4, 0.0F, 3*(float)panel1->Width/4, d );
					 }
					 else
					{
						float s =  ((float)(t->start_time-480)/480)* panel1->Height;
						g->DrawLine(ps1, (float)panel1->Width/4, s, (float)panel1->Width/4, d );
						g->DrawLine(ps2, 3*(float)panel1->Width/4, s, 3*(float)panel1->Width/4, d );
					}	  
				  }
				  else
				  {
						float s =  ((float)(t->start_time-480)/480)* panel1->Height;
						float en =  ((float)(t->end_time-480)/480)* panel1->Height;
						g->DrawLine(ps1, (float)panel1->Width/4, s, (float)panel1->Width/4, en );
						g->DrawLine(ps2, 3*(float)panel1->Width/4, s, 3*(float)panel1->Width/4, en);		  
				  }
			  }
			  else if (t->type== TimeTask::EXPAND_TIME)
			  {
				    RectangleF  rectLAB = RectangleF(0.0F,0,(float)panel1->Width,d);
				 Rectangle  rectLab = Rectangle(0,0,panel1->Width,d);
				 Brush ^ brushT1 = gcnew Drawing2D::LinearGradientBrush(rectLAB, Color::YellowGreen, Color::White, Drawing2D::LinearGradientMode::Horizontal);
				 Brush ^ brushT2 = gcnew Drawing2D::LinearGradientBrush(rectLAB, Color::White, Color::YellowGreen, Drawing2D::LinearGradientMode::Horizontal);
				 Pen ^ ps1 = gcnew Pen(brushT1, panel1->Width/2);
				 Pen ^ ps2 = gcnew Pen(brushT2, panel1->Width/2);
				 float s =  ((float)(t->start_time-480)/480)* panel1->Height;
						float en =  ((float)(t->end_time-480)/480)* panel1->Height;
						g->DrawLine(ps1, (float)panel1->Width/4, s, (float)panel1->Width/4, en );
						g->DrawLine(ps2, 3*(float)panel1->Width/4, s, 3*(float)panel1->Width/4, en);	
			  }
			  else if (t->type== TimeTask::LABOR_TIME)
			  {
				      RectangleF  rectLAB = RectangleF(0.0F,0,(float)panel1->Width,d);
				 Rectangle  rectLab = Rectangle(0,0,panel1->Width,d);
				 Brush ^ brushT1 = gcnew Drawing2D::LinearGradientBrush(rectLAB, Color::Green, Color::White, Drawing2D::LinearGradientMode::Horizontal);
				 Brush ^ brushT2 = gcnew Drawing2D::LinearGradientBrush(rectLAB, Color::White, Color::Green, Drawing2D::LinearGradientMode::Horizontal);
				 Pen ^ ps1 = gcnew Pen(brushT1, panel1->Width/2);
				 Pen ^ ps2 = gcnew Pen(brushT2, panel1->Width/2);
				 float s =  ((float)(t->start_time-480)/480)* panel1->Height;
						float en =  ((float)(t->end_time-480)/480)* panel1->Height;
						g->DrawLine(ps1, (float)panel1->Width/4, s, (float)panel1->Width/4, en );
						g->DrawLine(ps2, 3*(float)panel1->Width/4, s, 3*(float)panel1->Width/4, en);
			  }
			 }

			 ///////////////////////////
			 g->DrawLine(p,0.0F,d,(float)panel1->Width,d);

			 


		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 task = new std::vector< SuperWork::TimeTask::Task_Time *>();
			 SuperWork::TimeTask::Task_Time *  t  = new TimeTask::Task_Time();
			
			 task->push_back(t);
			 timer1->Start();
			 Tock();
		 }
private: System::Void dataGridView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Task_Config ^  tc = gcnew Task_Config();
			 tc->ShowDialog();
			 if (tc->taskContent!="" )
			 {
				 if ((time <= tc->start_time)&&(time < tc->end_time))
				 {		
					 SuperWork::TimeTask::Task_Time *  t  = new TimeTask::Task_Time();
					 t->type=TimeTask::LABOR_TIME;
					 t->start_time= tc->start_time;
					 t->end_time= tc->end_time;
					 SuperWork::TimeTask::Task_Time *  tEND = (SuperWork::TimeTask::Task_Time *)(*(task->end()-1));
					 if (tEND->end_time==0)
					{	
						tEND->end_time=time;
						task->at(task->size()-1)= tEND;
					 }
			       task->push_back(t);
				 dataGridView1->Rows->Add("",tc->taskContent,false);		
				 }
			  }

			 for (int i = 0 ; i < dataGridView1->Rows->Count-1; i++ )
			 {
				 dataGridView1->Rows[i]->Cells[0]->Value= (i+1).ToString();
			 }


		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};
}
