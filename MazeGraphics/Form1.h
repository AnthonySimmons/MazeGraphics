#pragma once
#include "Maze.h"
//#include <atlstr.h>
#include <vcclr.h>
namespace MazeGraphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			draw = false;
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
			 Maze* nMaze;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;

			 bool draw;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(106, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseMove);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseDown);
			this->pictureBox1->MouseHover += gcnew System::EventHandler(this, &Form1::pictureBox1_MouseHover);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseUp);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Random Maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Size:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"File Maze";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(75, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"File Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Solution:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 192);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Solve";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 293);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(88, 100);
			this->textBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 277);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Visited:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 400);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Path:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 416);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(88, 123);
			this->textBox4->TabIndex = 13;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(13, 234);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"BFS";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(13, 257);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(46, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"DFS";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(13, 562);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(58, 17);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Marker";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(12, 585);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(55, 17);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Eraser";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 626);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Maze";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void ranMaze(void)
		{
			if(textBox1->Text != "")
			{
				int x = System::Convert::ToInt32(textBox1->Text);
				if(x > 0)
				{
					nMaze = new Maze(x*x);
					nMaze->randomMaze();
				}
			}

		}

		void fileMaze()
		{

			pin_ptr<const wchar_t> wch = PtrToStringChars( textBox2->Text );
			//System::String * str = textBox1->Text;
			//CString str3(str); 


			ifstream input;
			input.open(wch);
			//string fileName = textBox2->Text;
			//input.open(textBox2->Text->ToCharArray());
			int x = 0;
			input>>x;
			nMaze = new Maze(x*x);
			nMaze->fromFile(input);
		}

		void drawMaze(void)
		{
			int s = sqrt((float)nMaze->getSize());
			int thick = 4;
			if(s > 30){thick = 3;}
			if(s > 60){thick = 2;}
			if(s >90 ){	thick = 1;}

			float div = (pictureBox1->Width-thick)/s;
			Graphics^ g = pictureBox1->CreateGraphics();
			g->Clear(Color::White);

			SolidBrush ^black = gcnew SolidBrush(Color::Black);
			SolidBrush ^white = gcnew SolidBrush(Color::White);
			SolidBrush ^red = gcnew SolidBrush(Color::Red);
			SolidBrush ^green = gcnew SolidBrush(Color::Green);

			//g->FillRectangle(black, 0, 0, pictureBox1->Width, pictureBox1->Height);
			//g->FillRectangle(white, 5, 5, pictureBox1->Width-10, pictureBox1->Height-10);

			if(nMaze->isSolved())
			{

				for(int i = 0; i < nMaze->getSize(); i++)
				{
					if(nMaze->getVisited(i))
					{
						//textBox3->Text += i.ToString()+" ";
						int x = i % s;
						int y = 0;
						int t = i;
						while(t >= s)
						{
							t -= s;
							y++;
						}
						g->FillRectangle(red, x*div, y*div, div, div); 
					}

					if(nMaze->getPath(i))
					{
						//textBox4->Text += i+" ";
						int x = i % s;
						int y = 0;
						int t = i;
						while(t >= s)
						{
							t -= s;
							y++;
						}
						g->FillRectangle(green, x*div, y*div, div, div); 
					}


				}

			}


			for(int i = 0; i < 4*nMaze->getSize(); i++)
			{
				int j = i % 4;
				if(!nMaze->getDoors(i))
				{
					int t = floor((float)(i/4));
					int x = t % s;
					int y = 0;
					while(t >= s)
					{
						t -= s;
						y++;
					}
					int wid = 0; 
					int tall = 0;

					if(j < 2)
					{
						wid = div;
						tall = thick;
						if(j == 1)
						{
							y++;
						}
					}
					else
					{
						wid = thick;
						tall = div;

						if(j == 2)
						{
							x++;
						}
					}
					g->FillRectangle(black, (float)x*(div), (float)y*(div), (float)wid, (float)tall);
				}

			}

			//g->FillRectangle(black, (float)(s*div), 0.0, (float)thick, (float)(s*div));
			//g->FillRectangle(black, 0.0, (float)(s*div), (float)(s*div), (float)thick);

			g->FillRectangle(white, 0.0, 0.0, div, (float)thick);
			g->FillRectangle(white, (float)(s*div-div)+thick, (float)(s*div), (float)div, (float)thick);

			delete g;
		}

		void solve()
		{
			if(nMaze->isSolved())
			{
				nMaze->reset();
			}
			if(radioButton1->Checked)
			{
				nMaze->BFS();
			}
			else if(radioButton2->Checked)
			{
				nMaze->DFS();
			}
		}
		void showVisitedPath(void)
		{
			textBox3->Clear();
			textBox4->Clear();
			for(int i = 0; i < nMaze->getSize(); i++)
			{
				if(nMaze->getVisited(i))
				{
					textBox3->AppendText(i.ToString()+" ");
				}
				if(nMaze->getPath(i))
				{
					textBox4->AppendText(i.ToString()+" ");
				}
			}
		}
		void userDraw(System::Windows::Forms::MouseEventArgs^  e)
		{
				 
			int s = sqrt((float)(nMaze->getSize()));
			

			int thick = 4;
			if(s > 30){thick = 3;}
			if(s > 60){thick = 2;}
			if(s > 90){thick = 1;}
			
			float div = (pictureBox1->Width-2*thick)/s;

			Graphics^ g = pictureBox1->CreateGraphics();
			SolidBrush ^green = gcnew SolidBrush(Color::Green);
			SolidBrush ^white = gcnew SolidBrush(Color::White);

			int tmpX = floor((float)e->X/(div));
			tmpX *= (div);
			int tmpY = floor((float)e->Y/(div));
			tmpY *= (div);

			if(radioButton3->Checked)
			{
				g->FillRectangle(green, (float)tmpX+thick, (float)tmpY+thick, div-thick, div-thick);
			}
			if(radioButton4->Checked)
			{
				g->FillRectangle(white, (float)tmpX+thick, (float)tmpY+thick, div-thick, div-thick);
			}


			delete g;
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 ranMaze(); 
				 textBox3->Clear();
				 textBox4->Clear();
				 radioButton3->Checked = true;
				 drawMaze();


			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 fileMaze();
				 drawMaze();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 solve();
				 drawMaze();
				 showVisitedPath();
			 }
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			userDraw(e);
			draw = true;
			
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 draw = false;
		 }
private: System::Void pictureBox1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if(draw)
			 {
				userDraw(e);
			 }
		 }
};
}

