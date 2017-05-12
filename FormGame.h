#pragma once
#include <map>

//defined the number of squares
#define NUMSQUARES 9

//enumerate typed for status of game
enum GAME_STATUS{OVER,NOTOVER,TIE };

namespace MyTicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormGame
	/// </summary>
	public ref class FormGame : public System::Windows::Forms::Form
	{
	public:
		FormGame(void)
		{
			InitializeComponent();
			InitializeGame();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		//Raj - New elements
		unsigned short int PlayerNumber;
		System::Drawing::Image ^currentImage, ^o_image, ^x_image, ^o_image_rescaled, ^x_image_rescaled;
		Dictionary<String^, String^>^ ScoreBoard;
		unsigned short int countSelections;
		int x1, x2, y1, y2;
		bool GameOver;
		unsigned int eventCount;
		unsigned short int scorePlayer1, scorePlayer2;
		

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  labelScore2;
	private: System::Windows::Forms::Label^  labelScore1;
	private: System::Windows::Forms::ToolStripMenuItem^  resetScoreToolStripMenuItem;


	private: System::Windows::Forms::Label^  label1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelScore2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelScore1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetScoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->splitContainer1->Location = System::Drawing::Point(0, 27);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::Black;
			this->splitContainer1->Panel1->Controls->Add(this->panel11);
			this->splitContainer1->Panel1->Controls->Add(this->panel10);
			this->splitContainer1->Panel1->Controls->Add(this->tableLayoutPanel1);
			this->splitContainer1->Panel1->Controls->Add(this->panel9);
			this->splitContainer1->Panel1->Controls->Add(this->panel8);
			this->splitContainer1->Panel1->Controls->Add(this->panel7);
			this->splitContainer1->Panel1->Controls->Add(this->panel6);
			this->splitContainer1->Panel1->Controls->Add(this->panel5);
			this->splitContainer1->Panel1->Controls->Add(this->panel4);
			this->splitContainer1->Panel1->Controls->Add(this->panel3);
			this->splitContainer1->Panel1->Controls->Add(this->panel2);
			this->splitContainer1->Panel1->Controls->Add(this->panel1);
			this->splitContainer1->Size = System::Drawing::Size(533, 306);
			this->splitContainer1->SplitterDistance = 255;
			this->splitContainer1->TabIndex = 0;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Yellow;
			this->panel11->Controls->Add(this->label5);
			this->panel11->Location = System::Drawing::Point(309, 1);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(221, 37);
			this->panel11->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(66, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"SCORE";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Controls->Add(this->label1);
			this->panel10->Location = System::Drawing::Point(309, 153);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(221, 101);
			this->panel10->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 101);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Aquamarine;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->labelScore2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelScore1, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(309, 41);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(221, 106);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// labelScore2
			// 
			this->labelScore2->AutoSize = true;
			this->labelScore2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore2->Location = System::Drawing::Point(114, 53);
			this->labelScore2->Name = L"labelScore2";
			this->labelScore2->Size = System::Drawing::Size(103, 52);
			this->labelScore2->TabIndex = 2;
			this->labelScore2->Text = L"0";
			this->labelScore2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(4, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Player 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(114, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Player 2";
			// 
			// labelScore1
			// 
			this->labelScore1->AutoSize = true;
			this->labelScore1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore1->Location = System::Drawing::Point(4, 53);
			this->labelScore1->Name = L"labelScore1";
			this->labelScore1->Size = System::Drawing::Size(103, 52);
			this->labelScore1->TabIndex = 3;
			this->labelScore1->Text = L"0";
			this->labelScore1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Wheat;
			this->panel9->Location = System::Drawing::Point(207, 177);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(96, 81);
			this->panel9->TabIndex = 3;
			this->panel9->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Wheat;
			this->panel8->Location = System::Drawing::Point(105, 177);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(96, 81);
			this->panel8->TabIndex = 3;
			this->panel8->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Wheat;
			this->panel7->Location = System::Drawing::Point(3, 177);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(96, 81);
			this->panel7->TabIndex = 3;
			this->panel7->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Wheat;
			this->panel6->Location = System::Drawing::Point(207, 90);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(96, 81);
			this->panel6->TabIndex = 2;
			this->panel6->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Wheat;
			this->panel5->Location = System::Drawing::Point(105, 90);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(96, 81);
			this->panel5->TabIndex = 2;
			this->panel5->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Wheat;
			this->panel4->Location = System::Drawing::Point(3, 90);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(96, 81);
			this->panel4->TabIndex = 2;
			this->panel4->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Wheat;
			this->panel3->Location = System::Drawing::Point(207, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(96, 81);
			this->panel3->TabIndex = 1;
			this->panel3->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Wheat;
			this->panel2->Location = System::Drawing::Point(105, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(96, 81);
			this->panel2->TabIndex = 1;
			this->panel2->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Wheat;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(96, 81);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &FormGame::panel_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->resetScoreToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(533, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormGame::newGameToolStripMenuItem_Click);
			// 
			// resetScoreToolStripMenuItem
			// 
			this->resetScoreToolStripMenuItem->Name = L"resetScoreToolStripMenuItem";
			this->resetScoreToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->resetScoreToolStripMenuItem->Text = L"Reset Score";
			this->resetScoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormGame::resetScoreToolStripMenuItem_Click);
			// 
			// FormGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 333);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"FormGame";
			this->Text = L"Tic Tac Toe";
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void InitializeGame(void)
		{
			int k = 0;

			eventCount = 0;

			PlayerNumber = 1;
			GameOver = false;

			scorePlayer1 = 0;
			scorePlayer2 = 0;

			this->label1->Text = "Player 1, your turn. Put your \"X\" in one of the boxes";

			o_image_rescaled = gcnew System::Drawing::Bitmap("drawn_o.png");
			x_image_rescaled = gcnew System::Drawing::Bitmap("drawn_x.png");

			currentImage = x_image_rescaled;

			this->panel1->Text = "panel1";
			this->panel2->Text = "panel2";
			this->panel3->Text = "panel3";
			this->panel4->Text = "panel4";
			this->panel5->Text = "panel5";
			this->panel6->Text = "panel6";
			this->panel7->Text = "panel7";
			this->panel8->Text = "panel8";
			this->panel9->Text = "panel9";

			std::map<std::string, int> board;
			
			ScoreBoard = gcnew Dictionary<String^, String^>();
			ScoreBoard->Add("Top-Left", " ");
			ScoreBoard->Add("Top-Mid", " ");
			ScoreBoard->Add("Top-Right", " ");
			ScoreBoard->Add("Mid-Left", " ");
			ScoreBoard->Add("Mid-Mid", " ");
			ScoreBoard->Add("Mid-Right", " ");
			ScoreBoard->Add("Bottom-Left", " ");
			ScoreBoard->Add("Bottom-Mid", " ");
			ScoreBoard->Add("Bottom-Right", " ");

			countSelections = 0;

			//Reset Background images
			
			panel1->BackgroundImage = nullptr;
			panel2->BackgroundImage = nullptr;
			panel3->BackgroundImage = nullptr;
			panel4->BackgroundImage = nullptr;
			panel5->BackgroundImage = nullptr;
			panel6->BackgroundImage = nullptr;
			panel7->BackgroundImage = nullptr;
			panel8->BackgroundImage = nullptr;
			panel9->BackgroundImage = nullptr;
		

			//Reset drawings
			clear_graphics();
			
			//Allow clicks
			enable_panels();

			
		}


private: System::Void panel_Click(System::Object^  sender, System::EventArgs^  e) {

	System::Windows::Forms::Panel ^panel;
	panel = cli::safe_cast<System::Windows::Forms::Panel ^>(sender);
	GAME_STATUS gameStatus;

	if (!GameOver)
	{
		//this->label2->Text = System::Convert::ToString(++countSelections);

		//Increment number of moves
		++countSelections;

		if (panel->Text == "panel1")
			ScoreBoard["Top-Left"] = (PlayerNumber == 1 ? "X" : "O");

		if (panel->Text == "panel2")
			ScoreBoard["Top-Mid"] = (PlayerNumber == 1 ? "X" : "O");

		if (panel->Text == "panel3")
			ScoreBoard["Top-Right"] = (PlayerNumber == 1 ? "X" : "O");

		if (panel->Text == "panel4")
			ScoreBoard["Mid-Left"] = (PlayerNumber == 1 ? "X" : "O");

		if (panel->Text == "panel5")
			ScoreBoard["Mid-Mid"] = (PlayerNumber == 1 ? "X" : "O");

		if (panel->Text == "panel6")
			ScoreBoard["Mid-Right"] = (PlayerNumber == 1 ? "X" : "O");

		if (panel->Text == "panel7")
			ScoreBoard["Bottom-Left"] = (PlayerNumber == 1 ? "X" : "O");


		if (panel->Text == "panel8")
			ScoreBoard["Bottom-Mid"] = (PlayerNumber == 1 ? "X" : "O");


		if (panel->Text == "panel9")
			ScoreBoard["Bottom-Right"] = (PlayerNumber == 1 ? "X" : "O");

		
		//Disable the panel so that it cannot be clicked again.
		panel->Enabled = false;

		//Call the paint handler to draw either X or O

		if (PlayerNumber == 1)
		{
			currentImage = x_image_rescaled;

			panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::paintEventBackgroundImage);
			panel->Invalidate();

			//Check for winner
			gameStatus = CheckForWinner();

			if (gameStatus == NOTOVER)
			{
				PlayerNumber = 2;
				this->label1->Text = "Player 2, your turn. Put your \"O\" in one of the boxes";
			}
			else if (gameStatus == OVER)
			{
				GameOver = 1;
				this->label1->Text = "Player 1 wins the game !!!";
				scorePlayer1++;
				labelScore1->Text = System::Convert::ToString(scorePlayer1);
			}
			else
			{
				GameOver = 1;
				countSelections = 0;
				this->label1->Text = "TIE GAME !!!";
			}


		}
		else
		{
			currentImage = o_image_rescaled;
			panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::paintEventBackgroundImage);
			panel->Invalidate();

			//Check for winner
			gameStatus = CheckForWinner();

			if (gameStatus == NOTOVER)
			{
				PlayerNumber = 1;
				this->label1->Text = "Player 1, your turn. Put your \"X\" in one of the boxes";
			}
			else if (gameStatus == OVER)
			{
				GameOver = 1;
				this->label1->Text = "Player 2 wins the game !!!";

				scorePlayer2++;
				labelScore2->Text = System::Convert::ToString(scorePlayer2);
			}
			else
			{
				GameOver = 1;
				countSelections = 0;
				this->label1->Text = "TIE GAME !!!";
			}
		}

		
		//print_board();
	}
}

 GAME_STATUS CheckForWinner(void)
{
	//Empty the message box string
	this->label1->Text = "";

	//There are basically 8 moves to check
	System::String ^winningMark = " ";

	//Move 1
	if ((ScoreBoard["Top-Left"] == ScoreBoard["Top-Mid"]) && (ScoreBoard["Top-Mid"] == ScoreBoard["Top-Right"]))
	{
		if (ScoreBoard["Top-Left"] == "X")
			winningMark = L"X";
		else if (ScoreBoard["Top-Left"] == "O")
			winningMark = L"0";


		if ((winningMark == "0") || (winningMark == "X"))
		{
			draw_horizontal(panel1);
			draw_horizontal(panel2);
			draw_horizontal(panel3);
		}

	}
	//Move 2 - Diagonal
	else if ((ScoreBoard["Top-Left"] == ScoreBoard["Mid-Mid"]) && (ScoreBoard["Mid-Mid"] == ScoreBoard["Bottom-Right"]))
		{
			if (ScoreBoard["Top-Left"] == "X")
				winningMark = L"X";
			else if (ScoreBoard["Top-Left"] == "O")
				winningMark = L"0";


			if ((winningMark == "0") || (winningMark == "X"))
			{
				draw_diagonal(panel1);
				draw_diagonal(panel5);
				draw_diagonal(panel9);
			}

		}

	//Move 3 - Vertical
	else if ((ScoreBoard["Top-Left"] == ScoreBoard["Mid-Left"]) && (ScoreBoard["Mid-Left"] == ScoreBoard["Bottom-Left"]))
	{
		if (ScoreBoard["Top-Left"] == "X")
			winningMark = L"X";
		else if (ScoreBoard["Top-Left"] == "O")
			winningMark = L"0";


		if ((winningMark == "0") || (winningMark == "X"))
		{
			draw_vertical(panel1);
			draw_vertical(panel4);
			draw_vertical(panel7);
		}

	}

	//Move 4 - 2nd row horizontal
	else if ((ScoreBoard["Mid-Left"] == ScoreBoard["Mid-Mid"]) && (ScoreBoard["Mid-Mid"] == ScoreBoard["Mid-Right"]))
	{
		if (ScoreBoard["Mid-Left"] == "X")
			winningMark = L"X";
		else if (ScoreBoard["Mid-Left"] == "O")
			winningMark = L"0";


		if ((winningMark == "0") || (winningMark == "X"))
		{
			draw_horizontal(panel4);
			draw_horizontal(panel5);
			draw_horizontal(panel6);
		}

	}

	//Move 5 - 3rd row horizontal
	else if ((ScoreBoard["Bottom-Left"] == ScoreBoard["Bottom-Mid"]) && (ScoreBoard["Bottom-Mid"] == ScoreBoard["Bottom-Right"]))
	{
		if (ScoreBoard["Bottom-Left"] == "X")
			winningMark = L"X";
		else if (ScoreBoard["Bottom-Left"] == "O")
			winningMark = L"0";


		if ((winningMark == "0") || (winningMark == "X"))
		{
			draw_horizontal(panel7);
			draw_horizontal(panel8);
			draw_horizontal(panel9);
		}

	}

	//Move 6 - 2nd column
	else if ((ScoreBoard["Top-Mid"] == ScoreBoard["Mid-Mid"]) && (ScoreBoard["Mid-Mid"] == ScoreBoard["Bottom-Mid"]))
	{
		if (ScoreBoard["Top-Mid"] == "X")
			winningMark = L"X";
		else if (ScoreBoard["Top-Mid"] == "O")
			winningMark = L"0";


		if ((winningMark == "0") || (winningMark == "X"))
		{
			draw_vertical(panel2);
			draw_vertical(panel5);
			draw_vertical(panel8);
		}

	}

	//Move 7 - 3rd column
	else if ((ScoreBoard["Top-Right"] == ScoreBoard["Mid-Right"]) && (ScoreBoard["Mid-Right"] == ScoreBoard["Bottom-Right"]))
	{
		if (ScoreBoard["Top-Right"] == "X")
			winningMark = L"X";
		else if (ScoreBoard["Top-Right"] == "O")
			winningMark = L"0";


		if ((winningMark == "0") || (winningMark == "X"))
		{
			draw_vertical(panel3);
			draw_vertical(panel6);
			draw_vertical(panel9);
		}

	}

	//Move 8 - Opposite diagonal
	else if ((ScoreBoard["Top-Right"] == ScoreBoard["Mid-Mid"]) && (ScoreBoard["Mid-Mid"] == ScoreBoard["Bottom-Left"]))
	{
		if (ScoreBoard["Top-Right"] == "X")
			winningMark = L"X";
		else if (ScoreBoard["Top-Right"] == "O")
			winningMark = L"0";


		if ((winningMark == "0") || (winningMark == "X"))
		{
			draw_diagonal_opposite(panel3);
			draw_diagonal_opposite(panel5);
			draw_diagonal_opposite(panel7);
		}

	}


	//Now that we have checked all possible ways to win, did someone actually win
	
	if (winningMark == "0")
	{
		MessageBox::Show("Game Over. Player 2 wins!!");
		
	}
	else if (winningMark == "X")
	{
		MessageBox::Show("Game Over. Player 1 wins!!");
		
	}

	if ((winningMark == "0") || (winningMark == "X"))
		return OVER;

	if (countSelections == NUMSQUARES)
		return TIE;

	//If the above two wont return OVER OR TIE, return NOT OVER
	return NOTOVER;
}



private: void draw_diagonal(System::Windows::Forms::Panel ^whichPanel)
{
	x1 = 0;
	y1 = 0;
	x2 = whichPanel->Right - whichPanel->Left;
	y2 = whichPanel->Bottom - whichPanel->Top;

	whichPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::paintEvent);
	whichPanel->Invalidate();

}

private: void draw_diagonal_opposite(System::Windows::Forms::Panel ^whichPanel)
{

	x1 = 0;
	y1 = whichPanel->Bottom - whichPanel->Top;


	x2 = whichPanel->Right - whichPanel->Left;
	y2 = 0;

	whichPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::paintEvent);
	whichPanel->Invalidate();

}

private: void draw_vertical(System::Windows::Forms::Panel ^whichPanel)
{
	int width = whichPanel->Right - whichPanel->Left;
	int height = whichPanel->Bottom - whichPanel->Top;


	x1 = 0 + (int)(width / 2);
	y1 = 0;

	x2 = x1;
	y2 = height;

	whichPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::paintEvent);
	whichPanel->Invalidate();

}

private: void draw_horizontal(System::Windows::Forms::Panel ^whichPanel)
{
	int width = whichPanel->Right - whichPanel->Left;
	int height = whichPanel->Bottom - whichPanel->Top;


	x1 = 0;
	y1 = 0 + (int)(height / 2);

	x2 = x1 + width;
	y2 = y1;

	whichPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::paintEvent);
	whichPanel->Invalidate();

}

private: System::Void paintEvent(Object^ /*sender*/, System::Windows::Forms::PaintEventArgs^ e) {

	Graphics^ g = e->Graphics;

	// Create pen.
	Pen^ redPen = gcnew Pen(Color::Red, 10.0f);


	g->DrawLine(redPen, x1, y1, x2, y2);
}

private: System::Void paintEventBackgroundImage(Object^ /*sender*/, System::Windows::Forms::PaintEventArgs^ e) {

	Graphics^ g = e->Graphics;
	g->DrawImage(currentImage, 0, 0);
	//if (++eventCount > 0 )
		//MessageBox::Show("Event fired "+ System::Convert::ToString(eventCount)+ " times");
}

private: void enable_panels(void)
{
	panel1->Enabled = true;
	panel2->Enabled = true;
	panel3->Enabled = true;
	panel4->Enabled = true;
	panel5->Enabled = true;
	panel6->Enabled = true;
	panel7->Enabled = true;
	panel8->Enabled = true;
	panel9->Enabled = true;

}

private: void clear_graphics(void)
{
	panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel1->Invalidate();
	
	panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel2->Invalidate();

	panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel3->Invalidate();

	panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel4->Invalidate();

	panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel5->Invalidate();

	panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel6->Invalidate();

	panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel7->Invalidate();

	panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel8->Invalidate();

	panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::clearLines);
	panel9->Invalidate();

}

private: System::Void clearLines(Object^ /*sender*/, System::Windows::Forms::PaintEventArgs^ e) {

	e->Graphics->Clear(Color::Wheat);
	
}

private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	InitializeGame();
	
}

void print_board(void)
{

	
	MessageBox::Show(ScoreBoard["Top-Left"] + "|" + ScoreBoard["Top-Mid"] + "|" + ScoreBoard["Top-Right"]
	+ "\r\n-----\r\n"
	+ ScoreBoard["Mid-Left"] + "|" + ScoreBoard["Mid-Mid"] + "|" + ScoreBoard["Mid-Right"]
	+ "\r\n-----\r\n"
	+ ScoreBoard["Bottom-Left"] + "|" + ScoreBoard["Bottom-Mid"] + "|" + ScoreBoard["Bottom-Right"]

	
	);

	
	int raj = 1;

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->BackgroundImage = o_image;
	panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

}
private: System::Void resetScoreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	scorePlayer1=0;
	scorePlayer2 = 0;

	labelScore1->Text = System::Convert::ToString(scorePlayer1);
	labelScore2->Text = System::Convert::ToString(scorePlayer2);

}
};
}
