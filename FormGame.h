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
			NewGame();

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
		unsigned short int PlayerNumber, imageType;
		Char *Marker;

		System::Drawing::Image ^currentImage, ^o_image, ^x_image, ^o_image_rescaled, ^x_image_rescaled;
		Dictionary<String^, String^>^ ScoreBoard;
		unsigned short int numberOfMoves;
		int x1, x2, y1, y2;
		bool GameOver;
		unsigned short int scorePlayer1, scorePlayer2;
		

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  labelScore2;
	private: System::Windows::Forms::Label^  labelScore1;
	private: System::Windows::Forms::ToolStripMenuItem^  resetScoreToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel_xo;

	private: System::Windows::Forms::Button^  button_o;
	private: System::Windows::Forms::Button^  button_x;
	private: System::Windows::Forms::Label^  label_select_xo;
	private: System::Windows::Forms::Label^  label_select;
	private: System::Windows::Forms::Button^  button_player2;
	private: System::Windows::Forms::Button^  button_player1;
	private: System::Windows::Forms::Button^  button_start_game;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label_weapon_1;
	private: System::Windows::Forms::Label^  label_weapon_2;


	private: System::Windows::Forms::Label^  label1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_weapon_1 = (gcnew System::Windows::Forms::Label());
			this->label_weapon_2 = (gcnew System::Windows::Forms::Label());
			this->labelScore1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelScore2 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_start_game = (gcnew System::Windows::Forms::Button());
			this->panel_xo = (gcnew System::Windows::Forms::Panel());
			this->button_o = (gcnew System::Windows::Forms::Button());
			this->button_x = (gcnew System::Windows::Forms::Button());
			this->label_select_xo = (gcnew System::Windows::Forms::Label());
			this->label_select = (gcnew System::Windows::Forms::Label());
			this->button_player2 = (gcnew System::Windows::Forms::Button());
			this->button_player1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetScoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->panel10->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel_xo->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 24);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::Black;
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
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::Orange;
			this->splitContainer1->Panel2->Controls->Add(this->button_start_game);
			this->splitContainer1->Panel2->Controls->Add(this->panel_xo);
			this->splitContainer1->Panel2->Controls->Add(this->label_select);
			this->splitContainer1->Panel2->Controls->Add(this->button_player2);
			this->splitContainer1->Panel2->Controls->Add(this->button_player1);
			this->splitContainer1->Size = System::Drawing::Size(606, 525);
			this->splitContainer1->SplitterDistance = 287;
			this->splitContainer1->TabIndex = 0;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Controls->Add(this->label1);
			this->panel10->Location = System::Drawing::Point(309, 153);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(294, 101);
			this->panel10->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 101);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Aquamarine;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				48.48485F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				51.51515F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				115)));
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label_weapon_1, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label_weapon_2, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelScore1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelScore2, 2, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(309, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 44)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(297, 144);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(91, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Player 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Score";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Weapon";
			// 
			// label_weapon_1
			// 
			this->label_weapon_1->AutoSize = true;
			this->label_weapon_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_weapon_1->Location = System::Drawing::Point(91, 99);
			this->label_weapon_1->Name = L"label_weapon_1";
			this->label_weapon_1->Size = System::Drawing::Size(60, 24);
			this->label_weapon_1->TabIndex = 6;
			this->label_weapon_1->Text = L"label6";
			// 
			// label_weapon_2
			// 
			this->label_weapon_2->AutoSize = true;
			this->label_weapon_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_weapon_2->Location = System::Drawing::Point(183, 99);
			this->label_weapon_2->Name = L"label_weapon_2";
			this->label_weapon_2->Size = System::Drawing::Size(60, 24);
			this->label_weapon_2->TabIndex = 7;
			this->label_weapon_2->Text = L"label7";
			// 
			// labelScore1
			// 
			this->labelScore1->AutoSize = true;
			this->labelScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore1->Location = System::Drawing::Point(91, 50);
			this->labelScore1->Name = L"labelScore1";
			this->labelScore1->Size = System::Drawing::Size(20, 24);
			this->labelScore1->TabIndex = 3;
			this->labelScore1->Text = L"0";
			this->labelScore1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(183, 1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Player 2";
			// 
			// labelScore2
			// 
			this->labelScore2->AutoSize = true;
			this->labelScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore2->Location = System::Drawing::Point(183, 50);
			this->labelScore2->Name = L"labelScore2";
			this->labelScore2->Size = System::Drawing::Size(20, 24);
			this->labelScore2->TabIndex = 2;
			this->labelScore2->Text = L"0";
			this->labelScore2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// button_start_game
			// 
			this->button_start_game->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_start_game->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button_start_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_start_game->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_start_game->Location = System::Drawing::Point(406, 197);
			this->button_start_game->Name = L"button_start_game";
			this->button_start_game->Size = System::Drawing::Size(168, 30);
			this->button_start_game->TabIndex = 4;
			this->button_start_game->Text = L"Start Game";
			this->button_start_game->UseVisualStyleBackColor = false;
			this->button_start_game->Visible = false;
			this->button_start_game->Click += gcnew System::EventHandler(this, &FormGame::button_start_game_Click);
			// 
			// panel_xo
			// 
			this->panel_xo->Controls->Add(this->button_o);
			this->panel_xo->Controls->Add(this->button_x);
			this->panel_xo->Controls->Add(this->label_select_xo);
			this->panel_xo->Location = System::Drawing::Point(13, 116);
			this->panel_xo->Name = L"panel_xo";
			this->panel_xo->Size = System::Drawing::Size(488, 88);
			this->panel_xo->TabIndex = 3;
			this->panel_xo->Visible = false;
			// 
			// button_o
			// 
			this->button_o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_o->Location = System::Drawing::Point(254, 37);
			this->button_o->Name = L"button_o";
			this->button_o->Size = System::Drawing::Size(65, 44);
			this->button_o->TabIndex = 2;
			this->button_o->TabStop = false;
			this->button_o->Text = L"O";
			this->button_o->UseVisualStyleBackColor = true;
			this->button_o->Click += gcnew System::EventHandler(this, &FormGame::button_o_Click);
			// 
			// button_x
			// 
			this->button_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_x->Location = System::Drawing::Point(108, 37);
			this->button_x->Name = L"button_x";
			this->button_x->Size = System::Drawing::Size(60, 44);
			this->button_x->TabIndex = 1;
			this->button_x->TabStop = false;
			this->button_x->Text = L"X";
			this->button_x->UseVisualStyleBackColor = true;
			this->button_x->Click += gcnew System::EventHandler(this, &FormGame::button_x_Click);
			// 
			// label_select_xo
			// 
			this->label_select_xo->AutoSize = true;
			this->label_select_xo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_select_xo->Location = System::Drawing::Point(42, 10);
			this->label_select_xo->Name = L"label_select_xo";
			this->label_select_xo->Size = System::Drawing::Size(352, 24);
			this->label_select_xo->TabIndex = 0;
			this->label_select_xo->Text = L"Player X, which one do you want to use\?";
			// 
			// label_select
			// 
			this->label_select->AutoSize = true;
			this->label_select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_select->Location = System::Drawing::Point(135, 2);
			this->label_select->Name = L"label_select";
			this->label_select->Size = System::Drawing::Size(207, 24);
			this->label_select->TabIndex = 2;
			this->label_select->Text = L"Who would like to start\?";
			// 
			// button_player2
			// 
			this->button_player2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_player2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_player2->Location = System::Drawing::Point(248, 55);
			this->button_player2->Name = L"button_player2";
			this->button_player2->Size = System::Drawing::Size(94, 41);
			this->button_player2->TabIndex = 1;
			this->button_player2->TabStop = false;
			this->button_player2->Text = L"Player 2";
			this->button_player2->UseVisualStyleBackColor = true;
			this->button_player2->Click += gcnew System::EventHandler(this, &FormGame::button_player2_Click);
			// 
			// button_player1
			// 
			this->button_player1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_player1->Location = System::Drawing::Point(109, 55);
			this->button_player1->Name = L"button_player1";
			this->button_player1->Size = System::Drawing::Size(105, 41);
			this->button_player1->TabIndex = 0;
			this->button_player1->TabStop = false;
			this->button_player1->Text = L"Player 1";
			this->button_player1->UseVisualStyleBackColor = true;
			this->button_player1->Click += gcnew System::EventHandler(this, &FormGame::button_player1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->resetScoreToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(606, 24);
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
			this->ClientSize = System::Drawing::Size(606, 549);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"FormGame";
			this->Text = L"Tic Tac Toe";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel_xo->ResumeLayout(false);
			this->panel_xo->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void InitializeGame(void)
		{
			scorePlayer1 = 0;
			scorePlayer2 = 0;

			//Initialize Marker
			if(Marker == nullptr)
				Marker = new Char[1];

			//Images for x and o
			o_image_rescaled = gcnew System::Drawing::Bitmap("drawn_o.png");
			x_image_rescaled = gcnew System::Drawing::Bitmap("drawn_x.png");
						
			//Assign text to panels so that we can figure out which panel was clicked by accessing the Text member
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
			
			//Dictionary that contains the location=>Marker values
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

		}



		void NewGame()
		{
			this->ClientSize = System::Drawing::Size(622, 275);
			Refresh();

			//Show the player selection panel, and hide the game panel
			splitContainer1->Panel1Collapsed = true;
			splitContainer1->Panel2Collapsed = false;
			panel_xo->Visible = false;
			button_start_game->Visible = false;

			//Make buttons standard with no border
			this->button_x->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			this->button_o->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			this->button_player1->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			this->button_player2->FlatStyle = System::Windows::Forms::FlatStyle::Standard;

			
			//Reset variables to 0
			numberOfMoves = 0;
			GameOver = false;
						
			//imageType = 0, means neither X nor O selected
			imageType = 0;

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

			//Reset scoreboard
			ScoreBoard["Top-Left"]= " ";
			ScoreBoard["Top-Mid"] = " ";
			ScoreBoard["Top-Right"] = " ";
			ScoreBoard["Mid-Left"] = " ";
			ScoreBoard["Mid-Mid"] = " ";
			ScoreBoard["Mid-Right"] = " ";
			ScoreBoard["Bottom-Left"] = " ";
			ScoreBoard["Bottom-Mid"] = " ";
			ScoreBoard["Bottom-Right"] = " ";

			//Reset drawings - anything that was drawn before is removed
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
		//Increment number of moves
		++numberOfMoves;

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

		//Choose image for current player
		if (imageType == 1)
			currentImage = x_image_rescaled;
		else if (imageType == 2)
			currentImage = o_image_rescaled;
		else
		{
			MessageBox::Show("Oops something went wrong. Please start a new game");
		}

		//Call the paint handler to draw either X or 0
		panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormGame::paintEventBackgroundImage);
		panel->Invalidate();

		//Set the imageType for next player
		imageType = ((imageType == 1) ? 2 : 1);
		
		//Check for winner
		gameStatus = CheckForWinner();

		
		if (gameStatus == NOTOVER)
		{
			PlayerNumber = ( (PlayerNumber==1) ? 2 : 1 );
			Marker = ((wcscmp(Marker,L"X") == 0) ? L"O" : L"X");
			System::String ^ m = gcnew String(Marker);

			this->label1->Text = "Player " + System::Convert::ToString(PlayerNumber) + ", your turn. Put your \"" + m + "\" in one of the boxes";
		}
		else if (gameStatus == OVER)
		{
			GameOver = 1;
			this->label1->Text = "Player "  + System::Convert::ToString(PlayerNumber) + " wins the game !!!";
			if(PlayerNumber==1)
			{
				scorePlayer1++;
				labelScore1->Text = System::Convert::ToString(scorePlayer1);

			}
			else
			{
				scorePlayer2++;
				labelScore2->Text = System::Convert::ToString(scorePlayer2);

			}
		}
		else
		{
			GameOver = 1;
			numberOfMoves = 0;
			this->label1->Text = "TIE GAME !!!";
		}


		
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

	if (numberOfMoves == NUMSQUARES)
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
	NewGame();
	
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


private: System::Void button_player1_Click(System::Object^  sender, System::EventArgs^  e) {
	PlayerNumber = 1;
	panel_xo->Visible = true;
	label_select_xo->Text = "Player 1, which one would you like X or O?";

	//Highlight player 1
	this->button_player1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
	this->button_player1->FlatAppearance->BorderSize = 4;
	this->button_player1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

	//Unhighlight player 2
	this->button_player2->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
	

}

private: System::Void button_player2_Click(System::Object^  sender, System::EventArgs^  e) {
	PlayerNumber = 2;
	panel_xo->Visible = true;
	label_select_xo->Text = "Player 2, which one would you like X or O?";

	//Highlight player 1
	this->button_player2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
	this->button_player2->FlatAppearance->BorderSize = 4;
	this->button_player2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

	//Unhighlight player 1
	this->button_player1->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
	
}
private: System::Void button_x_Click(System::Object^  sender, System::EventArgs^  e) {
	Marker = L"X";
	button_start_game->Visible = true;
	//currentImage = x_image_rescaled;
	imageType = 1;

	if (PlayerNumber == 1)
	{
		label_weapon_1->Text = "X";
		label_weapon_2->Text = "O";
	}
	else
	{
		label_weapon_1->Text = "O";
		label_weapon_2->Text = "X";
	}

	//Highlight button x
	this->button_x->FlatAppearance->BorderColor = System::Drawing::Color::Red;
	this->button_x->FlatAppearance->BorderSize = 4;
	this->button_x->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

	//Unhighlight button o
	this->button_o->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
}

private: System::Void button_o_Click(System::Object^  sender, System::EventArgs^  e) {
	Marker = L"O";
	button_start_game->Visible = true;
	//currentImage = o_image_rescaled;
	imageType = 2;


	if (PlayerNumber == 1)
	{
		label_weapon_1->Text = "O";
		label_weapon_2->Text = "X";
	}
	else
	{
		label_weapon_1->Text = "X";
		label_weapon_2->Text = "O";
	}

	//Highlight button o
	this->button_o->FlatAppearance->BorderColor = System::Drawing::Color::Red;
	this->button_o->FlatAppearance->BorderSize = 4;
	this->button_o->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

	//Unhighlight button x
	this->button_x->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
}

private: System::Void button_start_game_Click(System::Object^  sender, System::EventArgs^  e) {
	splitContainer1->Panel2Collapsed = true;
	splitContainer1->Panel1Collapsed = false;
	
	System::String ^ m = gcnew String(Marker);

	this->label1->Text = "Player " + System::Convert::ToString(PlayerNumber)+ ", your turn. Put your \"" + m +  "\" in one of the boxes";
	
}
};
}
