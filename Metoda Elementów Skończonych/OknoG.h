#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include "Elementy.h"

using namespace System::Globalization;

namespace Projekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// Podsumowanie informacji o OknoG
	public ref class OknoG : public System::Windows::Forms::Form
	{
	public:
		OknoG(void)
		{
			InitializeComponent();
			//TODO: W tym miejscu dodaj kod konstruktora
		}

	protected:
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		~OknoG()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Tabela;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Po³o¿enie_x;


	private: System::Windows::Forms::Button^ gen_strukt;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ daneToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wczytajToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ gen_siat;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajWierszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przedToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ poToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuñWierszToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rodzaj_Materia³u;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Przewodnoœæ_elektryczna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Przewodnoœæ_cieplna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ D³ugoœæ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Szerokoœæ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Po³o¿enie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Po³o¿enie_y;
	private: int zazn_wiersz;
	private: System::Windows::Forms::DataGridView^ datagrid_na_wezly;


	private: bool struktura = false, siatka = false, skalowanie = false;


	private: System::Windows::Forms::Button^ Rozciagniecie;
	private: System::Windows::Forms::Label^ label2;
	private: int ilosc_dod_wez = 0;
	private: int max_x, max_y, min_x, min_y;
	private: double max_elek, min_elek, max_ciep, min_ciep;
	private: double stary_wsp_max_x, stary_wsp_min_x, stary_wsp_max_y, stary_wsp_min_y;
	private: System::Windows::Forms::Button^ wyczysc;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ Tak_kolor;
	private: System::Windows::Forms::CheckBox^ kolor_elek;
	private: System::Windows::Forms::CheckBox^ kolor_ciep;
	private: System::Windows::Forms::CheckBox^ Nie_kolor;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Y;
	private: System::Windows::Forms::Label^ label4;


	protected:
	private:
		/// Wymagana zmienna projektanta.


#pragma region Windows Form Designer generated code
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Tabela = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rodzaj_Materia³u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Przewodnoœæ_elektryczna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Przewodnoœæ_cieplna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->D³ugoœæ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Szerokoœæ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Po³o¿enie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Po³o¿enie_y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->dodajWierszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuñWierszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gen_strukt = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->daneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wczytajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->gen_siat = (gcnew System::Windows::Forms::Button());
			this->datagrid_na_wezly = (gcnew System::Windows::Forms::DataGridView());
			this->Rozciagniecie = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->wyczysc = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Tak_kolor = (gcnew System::Windows::Forms::CheckBox());
			this->kolor_elek = (gcnew System::Windows::Forms::CheckBox());
			this->kolor_ciep = (gcnew System::Windows::Forms::CheckBox());
			this->Nie_kolor = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabela))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagrid_na_wezly))->BeginInit();
			this->SuspendLayout();
			// 
			// Tabela
			// 
			this->Tabela->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tabela->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ID, this->Rodzaj_Materia³u,
					this->Przewodnoœæ_elektryczna, this->Przewodnoœæ_cieplna, this->D³ugoœæ, this->Szerokoœæ, this->Po³o¿enie, this->Po³o¿enie_y
			});
			this->Tabela->ContextMenuStrip = this->contextMenuStrip1;
			this->Tabela->Location = System::Drawing::Point(138, 71);
			this->Tabela->Name = L"Tabela";
			this->Tabela->Size = System::Drawing::Size(836, 198);
			this->Tabela->TabIndex = 0;
			this->Tabela->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &OknoG::Tabela_MouseDown);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			// 
			// Rodzaj_Materia³u
			// 
			this->Rodzaj_Materia³u->HeaderText = L"Rodzaj_materia³u";
			this->Rodzaj_Materia³u->Name = L"Rodzaj_Materia³u";
			// 
			// Przewodnoœæ_elektryczna
			// 
			this->Przewodnoœæ_elektryczna->HeaderText = L"Przewodnoœæ_elektryczna";
			this->Przewodnoœæ_elektryczna->Name = L"Przewodnoœæ_elektryczna";
			// 
			// Przewodnoœæ_cieplna
			// 
			this->Przewodnoœæ_cieplna->HeaderText = L"Przewodnoœæ_cieplna";
			this->Przewodnoœæ_cieplna->Name = L"Przewodnoœæ_cieplna";
			// 
			// D³ugoœæ
			// 
			this->D³ugoœæ->HeaderText = L"D³ugoœæ";
			this->D³ugoœæ->Name = L"D³ugoœæ";
			// 
			// Szerokoœæ
			// 
			this->Szerokoœæ->HeaderText = L"Szerokoœæ";
			this->Szerokoœæ->Name = L"Szerokoœæ";
			// 
			// Po³o¿enie
			// 
			this->Po³o¿enie->HeaderText = L"X_lewego_dolnego_naro¿nika";
			this->Po³o¿enie->Name = L"Po³o¿enie";
			// 
			// Po³o¿enie_y
			// 
			this->Po³o¿enie_y->HeaderText = L"Y_lewego_dolnego_naro¿nika";
			this->Po³o¿enie_y->Name = L"Po³o¿enie_y";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dodajWierszToolStripMenuItem,
					this->usuñWierszToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(143, 48);
			// 
			// dodajWierszToolStripMenuItem
			// 
			this->dodajWierszToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->przedToolStripMenuItem,
					this->poToolStripMenuItem
			});
			this->dodajWierszToolStripMenuItem->Name = L"dodajWierszToolStripMenuItem";
			this->dodajWierszToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->dodajWierszToolStripMenuItem->Text = L"Dodaj Wiersz";
			// 
			// przedToolStripMenuItem
			// 
			this->przedToolStripMenuItem->Enabled = false;
			this->przedToolStripMenuItem->Name = L"przedToolStripMenuItem";
			this->przedToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->przedToolStripMenuItem->Text = L"Przed";
			this->przedToolStripMenuItem->Click += gcnew System::EventHandler(this, &OknoG::przedToolStripMenuItem_Click);
			// 
			// poToolStripMenuItem
			// 
			this->poToolStripMenuItem->Name = L"poToolStripMenuItem";
			this->poToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->poToolStripMenuItem->Text = L"Po";
			this->poToolStripMenuItem->Click += gcnew System::EventHandler(this, &OknoG::poToolStripMenuItem_Click);
			// 
			// usuñWierszToolStripMenuItem
			// 
			this->usuñWierszToolStripMenuItem->Name = L"usuñWierszToolStripMenuItem";
			this->usuñWierszToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->usuñWierszToolStripMenuItem->Text = L"Usuñ Wiersz";
			this->usuñWierszToolStripMenuItem->Click += gcnew System::EventHandler(this, &OknoG::usuñWierszToolStripMenuItem_Click);
			// 
			// gen_strukt
			// 
			this->gen_strukt->Location = System::Drawing::Point(15, 38);
			this->gen_strukt->Name = L"gen_strukt";
			this->gen_strukt->Size = System::Drawing::Size(117, 23);
			this->gen_strukt->TabIndex = 1;
			this->gen_strukt->Text = L"Poka¿ strukturê";
			this->gen_strukt->UseVisualStyleBackColor = true;
			this->gen_strukt->Click += gcnew System::EventHandler(this, &OknoG::gen_strukt_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(82, 275);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(951, 701);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &OknoG::pictureBox1_MouseClick);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &OknoG::pictureBox1_MouseDown);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->daneToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1084, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// daneToolStripMenuItem
			// 
			this->daneToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zapiszToolStripMenuItem,
					this->wczytajToolStripMenuItem
			});
			this->daneToolStripMenuItem->Name = L"daneToolStripMenuItem";
			this->daneToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->daneToolStripMenuItem->Text = L"Dane";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &OknoG::zapiszToolStripMenuItem_Click);
			// 
			// wczytajToolStripMenuItem
			// 
			this->wczytajToolStripMenuItem->Name = L"wczytajToolStripMenuItem";
			this->wczytajToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->wczytajToolStripMenuItem->Text = L"Wczytaj";
			this->wczytajToolStripMenuItem->Click += gcnew System::EventHandler(this, &OknoG::wczytajToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(931, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Rozmiar: 950X700";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// gen_siat
			// 
			this->gen_siat->Location = System::Drawing::Point(138, 38);
			this->gen_siat->Name = L"gen_siat";
			this->gen_siat->Size = System::Drawing::Size(117, 23);
			this->gen_siat->TabIndex = 5;
			this->gen_siat->Text = L"Wygeneruj siatkê";
			this->gen_siat->UseVisualStyleBackColor = true;
			this->gen_siat->Click += gcnew System::EventHandler(this, &OknoG::gen_siat_Click);
			// 
			// datagrid_na_wezly
			// 
			this->datagrid_na_wezly->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datagrid_na_wezly->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->X,
					this->Y
			});
			this->datagrid_na_wezly->Location = System::Drawing::Point(0, 496);
			this->datagrid_na_wezly->Name = L"datagrid_na_wezly";
			this->datagrid_na_wezly->Size = System::Drawing::Size(0, 0);
			this->datagrid_na_wezly->TabIndex = 6;
			// 
			// Rozciagniecie
			// 
			this->Rozciagniecie->Location = System::Drawing::Point(388, 38);
			this->Rozciagniecie->Name = L"Rozciagniecie";
			this->Rozciagniecie->Size = System::Drawing::Size(117, 23);
			this->Rozciagniecie->TabIndex = 7;
			this->Rozciagniecie->Text = L"Rozci¹gniêcie";
			this->Rozciagniecie->UseVisualStyleBackColor = true;
			this->Rozciagniecie->Click += gcnew System::EventHandler(this, &OknoG::Rozciagniecie_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(511, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Wy³¹czone";
			// 
			// wyczysc
			// 
			this->wyczysc->Location = System::Drawing::Point(262, 37);
			this->wyczysc->Name = L"wyczysc";
			this->wyczysc->Size = System::Drawing::Size(120, 23);
			this->wyczysc->TabIndex = 9;
			this->wyczysc->Text = L"Wyczyœæ";
			this->wyczysc->UseVisualStyleBackColor = true;
			this->wyczysc->Click += gcnew System::EventHandler(this, &OknoG::wyczysc_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 26);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Czy obiekty maj¹ \r\nbyc kolorowane \?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 26);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Wzglêdem której \r\nwielkoœci \?";
			// 
			// Tak_kolor
			// 
			this->Tak_kolor->AutoSize = true;
			this->Tak_kolor->Location = System::Drawing::Point(13, 98);
			this->Tak_kolor->Name = L"Tak_kolor";
			this->Tak_kolor->Size = System::Drawing::Size(45, 17);
			this->Tak_kolor->TabIndex = 16;
			this->Tak_kolor->Text = L"Tak";
			this->Tak_kolor->UseVisualStyleBackColor = true;
			this->Tak_kolor->CheckedChanged += gcnew System::EventHandler(this, &OknoG::Tak_kolor_CheckedChanged);
			// 
			// kolor_elek
			// 
			this->kolor_elek->AutoSize = true;
			this->kolor_elek->Enabled = false;
			this->kolor_elek->Location = System::Drawing::Point(18, 153);
			this->kolor_elek->Name = L"kolor_elek";
			this->kolor_elek->Size = System::Drawing::Size(116, 17);
			this->kolor_elek->TabIndex = 17;
			this->kolor_elek->Text = L"Przew. Elektryczna";
			this->kolor_elek->UseVisualStyleBackColor = true;
			this->kolor_elek->CheckedChanged += gcnew System::EventHandler(this, &OknoG::kolor_elek_CheckedChanged);
			// 
			// kolor_ciep
			// 
			this->kolor_ciep->AutoSize = true;
			this->kolor_ciep->Enabled = false;
			this->kolor_ciep->Location = System::Drawing::Point(18, 176);
			this->kolor_ciep->Name = L"kolor_ciep";
			this->kolor_ciep->Size = System::Drawing::Size(96, 17);
			this->kolor_ciep->TabIndex = 18;
			this->kolor_ciep->Text = L"Przew. Cieplna";
			this->kolor_ciep->UseVisualStyleBackColor = true;
			this->kolor_ciep->CheckedChanged += gcnew System::EventHandler(this, &OknoG::kolor_ciep_CheckedChanged);
			// 
			// Nie_kolor
			// 
			this->Nie_kolor->AutoSize = true;
			this->Nie_kolor->Checked = true;
			this->Nie_kolor->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Nie_kolor->Location = System::Drawing::Point(12, 208);
			this->Nie_kolor->Name = L"Nie_kolor";
			this->Nie_kolor->Size = System::Drawing::Size(42, 17);
			this->Nie_kolor->TabIndex = 19;
			this->Nie_kolor->Text = L"Nie";
			this->Nie_kolor->UseVisualStyleBackColor = true;
			this->Nie_kolor->CheckedChanged += gcnew System::EventHandler(this, &OknoG::Nie_kolor_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label5->Location = System::Drawing::Point(607, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(292, 26);
			this->label5->TabIndex = 20;
			//this->label5->Text = L"Dodatkowe wêz³y mo¿na dodawaæ poprzez klikniêcie LPM \r\nw obszarze rysowania, oraz"
				//L" usuwaæ poprzez klikniêcie PPM.\r\n";
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			// 
			// Y
			// 
			this->Y->HeaderText = L"Y";
			this->Y->Name = L"Y";
			// 
			// OknoG
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 1061);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Nie_kolor);
			this->Controls->Add(this->kolor_ciep);
			this->Controls->Add(this->kolor_elek);
			this->Controls->Add(this->Tak_kolor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->wyczysc);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Rozciagniecie);
			this->Controls->Add(this->datagrid_na_wezly);
			this->Controls->Add(this->gen_siat);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->gen_strukt);
			this->Controls->Add(this->Tabela);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"OknoG";
			this->Text = L"OknoG";
			this->TransparencyKey = System::Drawing::Color::Silver;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabela))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagrid_na_wezly))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//--------------------------------------------------------------------------------------------------------------------------
	//Rysowanie Struktury
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void gen_strukt_Click(System::Object^ sender, System::EventArgs^ e) {
		//Tworzenie wektora do umieszczenia danych z tabelii
		if (!struktura)
		{
			if (Tabela->RowCount != 0)
			{
				std::vector<Elementy> el;
				std::vector<double> tym_elek;	//Wektory pomocnicze do sortowania
				std::vector<double> tym_ciep;
				for (int i = 0; i < Tabela->RowCount - 1; i++)
				{
					Elementy tym(Double::Parse(Tabela->Rows[i]->Cells[4]->Value->ToString(), CultureInfo::InvariantCulture),
						Double::Parse(Tabela->Rows[i]->Cells[5]->Value->ToString(), CultureInfo::InvariantCulture),
						Double::Parse(Tabela->Rows[i]->Cells[6]->Value->ToString(), CultureInfo::InvariantCulture),
						Double::Parse(Tabela->Rows[i]->Cells[7]->Value->ToString(), CultureInfo::InvariantCulture),
						Double::Parse(Tabela->Rows[i]->Cells[2]->Value->ToString(), CultureInfo::InvariantCulture),
						Double::Parse(Tabela->Rows[i]->Cells[3]->Value->ToString(), CultureInfo::InvariantCulture));
					el.push_back(tym);
					tym_elek.push_back(el.back().pobierzelek());
					tym_ciep.push_back(el.back().pobierzciep());
				}
				//Sortowanie i wybieranie maksymlanych i minimalnychj wartosci przew. cieplnego i elektrycznego
				sort(tym_elek.begin(), tym_elek.end());
				sort(tym_ciep.begin(), tym_ciep.end());
				max_ciep = tym_ciep.back();
				min_ciep = tym_ciep.front();
				max_elek = tym_elek.back();
				min_elek = tym_elek.front();
				//Rysowanie struktury
				Graphics^ g1 = pictureBox1->CreateGraphics();
				Pen^ pioro = gcnew Pen(System::Drawing::Color::Black);
				SolidBrush^ pedzel = gcnew SolidBrush(System::Drawing::Color::White);
				pioro->Width = 3;
				g1->Clear(System::Drawing::Color::White);
				for (auto it : el)
				{
					g1->DrawRectangle(pioro, it.pobierzpolozenie_x(), it.pobierzpolozenie_y() - it.pobierzszerokosc(),
						it.pobierzdlugosc(), it.pobierzszerokosc());
					//Wype³nanie kolorem
					if (kolor_elek->Checked)
					{
						pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzelek() - min_elek) / (max_elek - min_elek),
							0, 255 * (max_elek - it.pobierzelek()) / (max_elek - min_elek));
						g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
							it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
					}
					if (kolor_ciep->Checked)
					{
						pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzciep() - min_ciep) / (max_ciep - min_ciep),
							0, 255 * (max_ciep - it.pobierzciep()) / (max_ciep - min_ciep));
						g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
							it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
					}
				}

				struktura = true;
			}
			int ct = datagrid_na_wezly->RowCount - 1;
			for (int i = 0; i < ct; i++)
			{
				datagrid_na_wezly->Rows->RemoveAt(0);
			}
			ilosc_dod_wez = 0;
		}
	}
	//--------------------------------------------------------------------------------------------------------------------------
	//Zapisywanie danych do pliku
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void zapiszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Wybieranie scie¿ki
		SaveFileDialog^ plik = gcnew SaveFileDialog();
		plik->Title = "Wybierz";
		plik->Filter =
			"Wszystkie pliki (*.*)|*.*|" +
			"Pliki tekstowe (*.txt)|*.txt";

		if (plik->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			//Zapisywanie do pliku
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(plik->FileName);

			for (int j = 0; j < Tabela->ColumnCount; j++)
			{
				if (j == Tabela->ColumnCount - 1)
					sw->Write(Tabela->Columns[j]->HeaderText);
				else
					sw->Write(Tabela->Columns[j]->HeaderText + "\t\t");
			}
			sw->WriteLine("");
			for (int i = 0; i < Tabela->RowCount; i++)
			{
				for (int j = 0; j < Tabela->ColumnCount; j++)
				{
					if (j == Tabela->ColumnCount - 1)
						sw->Write(Tabela->Rows[i]->Cells[j]->Value);
					else
						sw->Write(Tabela->Rows[i]->Cells[j]->Value + "\t\t\t");
				}
				sw->WriteLine("");
			}
			sw->Close();
		}
	}
	//--------------------------------------------------------------------------------------------------------------------------
	//Wczytywanie pliku z danymi
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void wczytajToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Wybieranie pliku z danymi
		OpenFileDialog^ plik = gcnew OpenFileDialog();
		plik->Title = "Wybierz";
		plik->Filter =
			"Wszystkie pliki (*.*)|*.*|" +
			"Pliki tekstowe(*.txt)|*.txt";


		if (plik->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			int ct = Tabela->RowCount - 1;
			for (int i = 0; i < ct; i++)
			{
				Tabela->Rows->RemoveAt(0);
			}
			Graphics^ g1 = pictureBox1->CreateGraphics();
			g1->Clear(System::Drawing::Color::White);
			skalowanie = false;
			label2->Text = "Wy³¹czone";
			struktura = false;
			siatka = false;
			ct = datagrid_na_wezly->RowCount - 1;
			for (int i = 0; i < ct; i++)
			{
				datagrid_na_wezly->Rows->RemoveAt(0);
			}
			ilosc_dod_wez = 0;
			//Wczytywanie danych z pliku
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(plik->FileName);
			String^ line;
			array<wchar_t>^ sep = gcnew array<wchar_t>(1);
			sep[0] = '\t';
			line = sr->ReadLine();
			line = line->Replace(" ", "\t");
			line = line->Replace("\t\t\t", "\t");
			line = line->Replace("\t\t", "\t");
			int kol = line->Split(sep)->Length;
			array<System::String^>^ headers = gcnew array<System::String^>(kol);
			headers = line->Split(sep);
			line = sr->ReadToEnd();
			line = line->Replace(" ", "\t");
			line = line->Replace("\n", "\t");
			line = line->Replace("\t\t\t", "\t");
			line = line->Replace("\t\t", "\t");
			int wiersz = line->Split(sep)->Length / kol;
			array<System::String^>^ dane = gcnew array<System::String^>(kol * wiersz);
			dane = line->Split(sep);
			for (int i = 0; i < wiersz; i++)
			{
				Tabela->Rows->Add();
			}
			for (int i = 0; i < wiersz; i++)
			{
				for (int j = 0; j < kol; j++)
				{
					Tabela->Rows[i]->Cells[j]->Value = dane[j + i * kol];
				}
			}
			sr->Close();
		}
	}
	//--------------------------------------------------------------------------------------------------------------------------
	//Generowanie Siatki
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void gen_siat_Click(System::Object^ sender, System::EventArgs^ e) {
		if (struktura && !siatka)
		{
			//Tworzenie wektora z potrzebnymi danymi struktury
			std::vector<Elementy> el;
			for (int i = 0; i < Tabela->RowCount - 1; i++)
			{
				Elementy tym(Double::Parse(Tabela->Rows[i]->Cells[4]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[5]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[6]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[7]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[2]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[3]->Value->ToString(), CultureInfo::InvariantCulture));
				el.push_back(tym);
			}
			//Rysowanie siatki
			Graphics^ g1 = pictureBox1->CreateGraphics();
			Pen^ pioro = gcnew Pen(System::Drawing::Color::Green);
			if(!skalowanie)
			{
				for (auto it : el)
				{
					g1->DrawLine(pioro, it.pobierzpolozenie_x(), 0, it.pobierzpolozenie_x(), pictureBox1->Height);
					g1->DrawLine(pioro, 0, it.pobierzpolozenie_y() - it.pobierzszerokosc(), pictureBox1->Width, it.pobierzpolozenie_y() - it.pobierzszerokosc());
					g1->DrawLine(pioro, it.pobierzpolozenie_x() + it.pobierzdlugosc(), 0, it.pobierzpolozenie_x() + it.pobierzdlugosc(), pictureBox1->Height);
					g1->DrawLine(pioro, 0, it.pobierzpolozenie_y(), pictureBox1->Width, it.pobierzpolozenie_y());
				}
			}
			else
			{
				double wsp_skali_do_max_x = 1.0 * (pictureBox1->Width - 1) / max_x; //Wspó³czynnik proporcjonalnoœci do x_max
				double wsp_skali_do_max_y = 1.0 * (pictureBox1->Height - 1) / max_y; //Wspó³czynnik proporcjonalnoœci do y_max
				double wsp_skali_do_min_x = 1.0 * (pictureBox1->Width - 1) / (pictureBox1->Width - 1 - min_x);
				double wsp_skali_do_min_y = 1.0 * (pictureBox1->Height - 1) / (pictureBox1->Height - 1 - min_y);
				for (auto it : el)
				{
					g1->DrawLine(pioro, (pictureBox1->Width - 1 - (pictureBox1->Width - 1 - it.pobierzpolozenie_x()) * wsp_skali_do_min_x) * wsp_skali_do_max_x, 0,
						(pictureBox1->Width - 1 - (pictureBox1->Width - 1 - it.pobierzpolozenie_x()) * wsp_skali_do_min_x) * wsp_skali_do_max_x, pictureBox1->Height);
					g1->DrawLine(pioro, 0, (pictureBox1->Height - 1 - (pictureBox1->Height - 1 - it.pobierzpolozenie_y()) * wsp_skali_do_min_y) * wsp_skali_do_max_y - it.pobierzszerokosc() * wsp_skali_do_max_y * wsp_skali_do_min_y, pictureBox1->Width,
						(pictureBox1->Height - 1 - (pictureBox1->Height - 1 - it.pobierzpolozenie_y()) * wsp_skali_do_min_y) * wsp_skali_do_max_y - it.pobierzszerokosc() * wsp_skali_do_max_y * wsp_skali_do_min_y);
					g1->DrawLine(pioro, (pictureBox1->Width - 1 - (pictureBox1->Width - 1 - it.pobierzpolozenie_x()) * wsp_skali_do_min_x) * wsp_skali_do_max_x + it.pobierzdlugosc() * wsp_skali_do_max_x * wsp_skali_do_min_x, 0,
						(pictureBox1->Width - 1 - (pictureBox1->Width - 1 - it.pobierzpolozenie_x()) * wsp_skali_do_min_x) * wsp_skali_do_max_x + it.pobierzdlugosc() * wsp_skali_do_max_x * wsp_skali_do_min_x, pictureBox1->Height);
					g1->DrawLine(pioro, 0, (pictureBox1->Height - 1 - (pictureBox1->Height - 1 - it.pobierzpolozenie_y()) * wsp_skali_do_min_y) * wsp_skali_do_max_y,
						pictureBox1->Width, (pictureBox1->Height - 1 - (pictureBox1->Height - 1 - it.pobierzpolozenie_y()) * wsp_skali_do_min_y) * wsp_skali_do_max_y);
				}
			}
			siatka = true;
		}
	}
	//--------------------------------------------------------------------------------------------------------------------------
	//Usuwanie poprzednio zaznaczonego wêz³a
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == Windows::Forms::MouseButtons::Right) //Sprawdzam, czy naciœniêty by³ prawy przycisk myszy
		{
			if (ilosc_dod_wez != 0)
			{
				int x, y;
				Graphics^ g1 = pictureBox1->CreateGraphics();
				Pen^ pioro = gcnew Pen(System::Drawing::Color::Green);
				g1->Clear(System::Drawing::Color::White);	//Czyszczenie ca³ego pola
				ilosc_dod_wez -= 1;
				datagrid_na_wezly->Rows->RemoveAt(ilosc_dod_wez); // Usuwanie ostatnio zaznaczonego wêz³a
				//Rysowanie wszystkich poprzednich wêz³ów
				for (int i = 0; i < ilosc_dod_wez ;i++)
				{
					x = Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[0]->Value->ToString());
					y = Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[1]->Value->ToString());
					g1->DrawLine(pioro, 0, y, pictureBox1->Width, y);
					g1->DrawLine(pioro, x, 0, x, pictureBox1->Height);
				}
				//Ponowne generowanie struktury
				if (struktura)
				{
					std::vector<Elementy> el;
					for (int i = 0; i < Tabela->RowCount - 1; i++)
					{
						Elementy tym(Double::Parse(Tabela->Rows[i]->Cells[4]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[5]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[6]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[7]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[2]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[3]->Value->ToString(), CultureInfo::InvariantCulture));
						el.push_back(tym);
					}
					if (skalowanie)
					{
						for (int i = 0; i < el.size(); i++)
						{
							el.at(i).ustawpolozenie_x((pictureBox1->Width - 1 - (pictureBox1->Width - 1 - el.at(i).pobierzpolozenie_x()) * stary_wsp_min_x) * stary_wsp_max_x);
							el.at(i).ustawpolozenie_y((pictureBox1->Height - 1 - (pictureBox1->Height - 1 - el.at(i).pobierzpolozenie_y()) * stary_wsp_min_y) * stary_wsp_max_y);
							el.at(i).ustawdlugosc(el.at(i).pobierzdlugosc() * stary_wsp_max_x * stary_wsp_min_x);
							el.at(i).ustawszerokosc(el.at(i).pobierzszerokosc() * stary_wsp_max_y * stary_wsp_min_y);
						}
					}
					Pen^ pioro2 = gcnew Pen(System::Drawing::Color::Black);
					SolidBrush^ pedzel = gcnew SolidBrush(System::Drawing::Color::White);
					pioro2->Width = 3;
					for (auto it : el)
					{
						g1->DrawRectangle(pioro2, it.pobierzpolozenie_x(), it.pobierzpolozenie_y() - it.pobierzszerokosc(),
							it.pobierzdlugosc(), it.pobierzszerokosc());
						if (kolor_elek->Checked)
						{
							pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzelek() - min_elek) / (max_elek - min_elek),
								0, 255 * (max_elek - it.pobierzelek()) / (max_elek - min_elek));
							g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
								it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
						}
						if (kolor_ciep->Checked)
						{
							pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzciep() - min_ciep) / (max_ciep - min_ciep),
								0, 255 * (max_ciep - it.pobierzciep()) / (max_ciep - min_ciep));
							g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
								it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
						}
					}
				}
				//Ponowne generowanie siatki
				if (siatka)
				{
					std::vector<Elementy> el;
					for (int i = 0; i < Tabela->RowCount - 1; i++)
					{
						Elementy tym(Double::Parse(Tabela->Rows[i]->Cells[4]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[5]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[6]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[7]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[2]->Value->ToString(), CultureInfo::InvariantCulture),
							Double::Parse(Tabela->Rows[i]->Cells[3]->Value->ToString(), CultureInfo::InvariantCulture));
						el.push_back(tym);
					}
					if (skalowanie)
					{
						for (int i = 0; i < el.size(); i++)
						{
							el.at(i).ustawpolozenie_x((pictureBox1->Width - 1 - (pictureBox1->Width - 1 - el.at(i).pobierzpolozenie_x()) * stary_wsp_min_x) * stary_wsp_max_x);
							el.at(i).ustawpolozenie_y((pictureBox1->Height - 1 - (pictureBox1->Height - 1 - el.at(i).pobierzpolozenie_y()) * stary_wsp_min_y) * stary_wsp_max_y);
							el.at(i).ustawdlugosc(el.at(i).pobierzdlugosc() * stary_wsp_max_x * stary_wsp_min_x);
							el.at(i).ustawszerokosc(el.at(i).pobierzszerokosc() * stary_wsp_max_y * stary_wsp_min_y);
						}
					}
					Graphics^ g1 = pictureBox1->CreateGraphics();
					Pen^ pioro = gcnew Pen(System::Drawing::Color::Green);
					for (auto it : el)
					{
						g1->DrawLine(pioro, it.pobierzpolozenie_x(), 0, it.pobierzpolozenie_x(), pictureBox1->Height);
						g1->DrawLine(pioro, 0, it.pobierzpolozenie_y() - it.pobierzszerokosc(), pictureBox1->Width, it.pobierzpolozenie_y() - it.pobierzszerokosc());
						g1->DrawLine(pioro, it.pobierzpolozenie_x() + it.pobierzdlugosc(), 0, it.pobierzpolozenie_x() + it.pobierzdlugosc(), pictureBox1->Height);
						g1->DrawLine(pioro, 0, it.pobierzpolozenie_y(), pictureBox1->Width, it.pobierzpolozenie_y());
					}
				}

			}
		}
	}
	//--------------------------------------------------------------------------------------------------------------------------
	//Zaznaczanie Wêz³ów
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (struktura) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {	//Sprawdzanie, czy naciœniêty by³ LPM
				int x = e->X;
				int y = e->Y;
				Graphics^ g1 = pictureBox1->CreateGraphics();
				Pen^ pioro = gcnew Pen(System::Drawing::Color::Green);
				g1->DrawLine(pioro, 0, y, pictureBox1->Width, y);
				g1->DrawLine(pioro, x, 0, x, pictureBox1->Height);
				datagrid_na_wezly->Rows->Add(x, y);
				ilosc_dod_wez += 1;
			}
		}
	}
	//--------------------------------------------------------------------------------------------------------------------------
	//Dzia³ania na Tabeli
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void Tabela_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Wykrywanie na któr¹ czêœæ tabeli naciœniêto mysz¹
		System::Windows::Forms::DataGridView::HitTestInfo^ hit_test;
		hit_test = Tabela->HitTest(e->X, e->Y);
		switch (hit_test->Type) {
		case System::Windows::Forms::DataGridViewHitTestType::RowHeader:
			zazn_wiersz = hit_test->RowIndex;
			przedToolStripMenuItem->Enabled = true;
			poToolStripMenuItem->Enabled = true;
			break;
		case System::Windows::Forms::DataGridViewHitTestType::Cell:
			zazn_wiersz = hit_test->RowIndex;
			przedToolStripMenuItem->Enabled = true;
			poToolStripMenuItem->Enabled = true;
			break;
		}
	}

	private: System::Void przedToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Dodawanie wiersza przed wybranym
		Tabela->Rows->Add();
		for (int j = Tabela->Rows->Count - 1; j > zazn_wiersz; j--) {
			for (int i = 0; i < Tabela->Columns->Count; i++)
			{
				Tabela->Rows[j]->Cells[i]->Value = Tabela->Rows[j - 1]->Cells[i]->Value;
			}
		}
		for (int i = 0; i < Tabela->Columns->Count; i++) {
			Tabela->Rows[zazn_wiersz]->Cells[i]->Value = "";
		}
	}

	private: System::Void poToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Dodawanie wiersza po wybranym
		Tabela->Rows->Add();
		for (int j = Tabela->Rows->Count - 1; j > zazn_wiersz; j--) {
			for (int i = 0; i < Tabela->Columns->Count; i++)
			{
				Tabela->Rows[j]->Cells[i]->Value = Tabela->Rows[j - 1]->Cells[i]->Value;
				if (j == zazn_wiersz + 1)
				{
					Tabela->Rows[j]->Cells[i]->Value = "";
				}
			}
		}
	}

	private: System::Void usuñWierszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Usuwanie wybranego wiersza
		Tabela->Rows->RemoveAt(zazn_wiersz);
	}
	//--------------------------------------------------------------------------------------------------------------------------
	// Skalowanie
	//--------------------------------------------------------------------------------------------------------------------------
	private: System::Void Rozciagniecie_Click(System::Object^ sender, System::EventArgs^ e) {
		if (struktura)
		{
			//Tworzenie wektora z elementami Tabeli
			std::vector<Elementy> el;
			std::vector<int> tym_x;	//Wektory pomocnicze do sortowania
			std::vector<int> tym_y;
			for (int i = 0; i < Tabela->RowCount - 1; i++)
			{
				Elementy tym(Double::Parse(Tabela->Rows[i]->Cells[4]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[5]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[6]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[7]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[2]->Value->ToString(), CultureInfo::InvariantCulture),
					Double::Parse(Tabela->Rows[i]->Cells[3]->Value->ToString(), CultureInfo::InvariantCulture));
				el.push_back(tym);
			}
			//Wype³nianie wektorów pomocniczych (skalowanie do maksimum)
			for (auto it : el)
			{
				tym_x.push_back(it.pobierzpolozenie_x() + it.pobierzdlugosc());
				tym_y.push_back(it.pobierzpolozenie_y());
			}
			for (int i = 0; i < datagrid_na_wezly->RowCount - 1; i++)
			{
				tym_x.push_back(Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[0]->Value->ToString()));
				tym_y.push_back(Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[1]->Value->ToString()));
			}
			//Sortowanie wektorów pomocniczych i wybieranie maksymalnych wartosci
			sort(tym_x.begin(), tym_x.end());
			sort(tym_y.begin(), tym_y.end());
			max_x = tym_x.back();
			max_y = tym_y.back();
			tym_x.clear();
			tym_y.clear();
			//Wype³nianie wektorów pomocniczych (skalowanie do minimum)
			for (auto it : el)
			{
				tym_x.push_back(it.pobierzpolozenie_x());
				tym_y.push_back(it.pobierzpolozenie_y() - it.pobierzszerokosc());
			}
			for (int i = 0; i < datagrid_na_wezly->RowCount - 1; i++)
			{
				tym_x.push_back(Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[0]->Value->ToString()));
				tym_y.push_back(Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[1]->Value->ToString()));
			}
			//Sortowanie wektorów pomocniczych i wybieranie minimalnych wartosci
			sort(tym_x.begin(), tym_x.end());
			sort(tym_y.begin(), tym_y.end());
			min_x = tym_x.front();
			min_y = tym_y.front();
			double wsp_skali_do_max_x = 1.0 * (pictureBox1->Width - 1) / max_x; //Wspó³czynnik proporcjonalnoœci do x_max
			double wsp_skali_do_max_y = 1.0 * (pictureBox1->Height - 1) / max_y; //Wspó³czynnik proporcjonalnoœci do y_max
			double wsp_skali_do_min_x = 1.0 * (pictureBox1->Width - 1) / (pictureBox1->Width - 1 - min_x);
			double wsp_skali_do_min_y = 1.0 * (pictureBox1->Height - 1) / (pictureBox1->Height - 1 - min_y);
			//Przywracanie normalnej skalii
			if (skalowanie)
			{
				label2->Text = "Wy³¹czone";
				Graphics^ g1 = pictureBox1->CreateGraphics();
				Pen^ pioro = gcnew Pen(System::Drawing::Color::Black);
				SolidBrush^ pedzel = gcnew SolidBrush(System::Drawing::Color::White);
				pioro->Width = 3;
				g1->Clear(System::Drawing::Color::White);
				//Rysowanie normalnej struktury
				for (auto it : el)
				{
					g1->DrawRectangle(pioro, it.pobierzpolozenie_x(), it.pobierzpolozenie_y() - it.pobierzszerokosc(),
						it.pobierzdlugosc(), it.pobierzszerokosc());
					if (kolor_elek->Checked)
					{
						pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzelek() - min_elek) / (max_elek - min_elek),
							0, 255 * (max_elek - it.pobierzelek()) / (max_elek - min_elek));
						g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
							it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
					}
					if (kolor_ciep->Checked)
					{
						pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzciep() - min_ciep) / (max_ciep - min_ciep),
							0, 255 * (max_ciep - it.pobierzciep()) / (max_ciep - min_ciep));
						g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
							it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
					}
				}
				Pen^ pioro2 = gcnew Pen(System::Drawing::Color::Green);
				//Rysowanie normalnej siatki
				if (siatka)
				{
					for (auto it : el)
					{
						g1->DrawLine(pioro2, it.pobierzpolozenie_x(), 0, it.pobierzpolozenie_x(), pictureBox1->Height);
						g1->DrawLine(pioro2, 0, it.pobierzpolozenie_y() - it.pobierzszerokosc(), pictureBox1->Width, it.pobierzpolozenie_y() - it.pobierzszerokosc());
						g1->DrawLine(pioro2, it.pobierzpolozenie_x() + it.pobierzdlugosc(), 0, it.pobierzpolozenie_x() + it.pobierzdlugosc(), pictureBox1->Height);
						g1->DrawLine(pioro2, 0, it.pobierzpolozenie_y(), pictureBox1->Width, it.pobierzpolozenie_y());
					}
				}
				//Rysowanie normalnych wêz³ów
				int x, y;
				for (int i = 0; i < ilosc_dod_wez; i++)
				{
					label5->Text = "ok";
					x = Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[0]->Value->ToString());
					y = Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[1]->Value->ToString());
					x = 1.0 * (x - (pictureBox1->Width - 1) * stary_wsp_max_x * (1 - stary_wsp_min_x)) / (stary_wsp_max_x * stary_wsp_min_x);
					y = 1.0 * (y - (pictureBox1->Height - 1) * stary_wsp_max_y * (1 - stary_wsp_min_y)) / (stary_wsp_max_y * stary_wsp_min_y);
					datagrid_na_wezly->Rows[i]->Cells[0]->Value = x.ToString();
					datagrid_na_wezly->Rows[i]->Cells[1]->Value = y.ToString();
					g1->DrawLine(pioro2, 0, y, pictureBox1->Width, y);
					g1->DrawLine(pioro2, x, 0, x, pictureBox1->Height);
				}
				skalowanie = false;
			}
			else
			{
				//Skalowanie danych wartoœci zwi¹zanych z elementami
				label2->Text = "W³¹czone";
				for (int i = 0; i < el.size(); i++)
				{
					el.at(i).ustawpolozenie_x((pictureBox1->Width - 1 - (pictureBox1->Width - 1 - el.at(i).pobierzpolozenie_x()) * wsp_skali_do_min_x) * wsp_skali_do_max_x);
					el.at(i).ustawpolozenie_y((pictureBox1->Height - 1 - (pictureBox1->Height - 1 - el.at(i).pobierzpolozenie_y()) * wsp_skali_do_min_y) * wsp_skali_do_max_y);
					el.at(i).ustawdlugosc(el.at(i).pobierzdlugosc() * wsp_skali_do_max_x * wsp_skali_do_min_x);
					el.at(i).ustawszerokosc(el.at(i).pobierzszerokosc() * wsp_skali_do_max_y * wsp_skali_do_min_y);
				}
				Graphics^ g1 = pictureBox1->CreateGraphics();
				Pen^ pioro = gcnew Pen(System::Drawing::Color::Black);
				SolidBrush^ pedzel = gcnew SolidBrush(System::Drawing::Color::White);
				pioro->Width = 3;
				g1->Clear(System::Drawing::Color::White);
				//Rysowanie przeskalowanej struktury
				for (auto it : el)
				{
					g1->DrawRectangle(pioro, it.pobierzpolozenie_x(), it.pobierzpolozenie_y() - it.pobierzszerokosc(),
						it.pobierzdlugosc(), it.pobierzszerokosc());
					if (kolor_elek->Checked)
					{
						pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzelek() - min_elek) / (max_elek - min_elek),
							0, 255 * (max_elek - it.pobierzelek()) / (max_elek - min_elek));
						g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
							it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
					}
					if (kolor_ciep->Checked)
					{
						pedzel->Color = System::Drawing::Color::FromArgb(255 * (it.pobierzciep() - min_ciep) / (max_ciep - min_ciep),
							0, 255 * (max_ciep - it.pobierzciep()) / (max_ciep - min_ciep));
						g1->FillRectangle(pedzel, it.pobierzpolozenie_x() + 1, it.pobierzpolozenie_y() - it.pobierzszerokosc() + 1,
							it.pobierzdlugosc() - 1, it.pobierzszerokosc() - 1);
					}
				}
				Pen^ pioro2 = gcnew Pen(System::Drawing::Color::Green);
				//Rysowanie przeskalowanej siatki
				if (siatka)
				{
					for (auto it : el)
					{
						g1->DrawLine(pioro2, it.pobierzpolozenie_x(), 0, it.pobierzpolozenie_x(), pictureBox1->Height);
						g1->DrawLine(pioro2, 0, it.pobierzpolozenie_y() - it.pobierzszerokosc(), pictureBox1->Width, it.pobierzpolozenie_y() - it.pobierzszerokosc());
						g1->DrawLine(pioro2, it.pobierzpolozenie_x() + it.pobierzdlugosc(), 0, it.pobierzpolozenie_x() + it.pobierzdlugosc(), pictureBox1->Height);
						g1->DrawLine(pioro2, 0, it.pobierzpolozenie_y(), pictureBox1->Width, it.pobierzpolozenie_y());
					}
				}
				//Rysowanie przeskalowanych wêz³ów
				int x, y;
				for (int i = 0; i < ilosc_dod_wez; i++)
				{
					x = Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[0]->Value->ToString());
					y = Int32::Parse(datagrid_na_wezly->Rows[i]->Cells[1]->Value->ToString());
					x = 1.0 * (pictureBox1->Width - 1 - (pictureBox1->Width - 1 - x)* wsp_skali_do_min_x) * wsp_skali_do_max_x;
					y = 1.0 * (pictureBox1->Height - 1 - (pictureBox1->Height - 1 - y) * wsp_skali_do_min_y) * wsp_skali_do_max_y;
					datagrid_na_wezly->Rows[i]->Cells[0]->Value = x.ToString();
					datagrid_na_wezly->Rows[i]->Cells[1]->Value = y.ToString();
					g1->DrawLine(pioro2, 0, y, pictureBox1->Width, y);
					g1->DrawLine(pioro2, x, 0, x, pictureBox1->Height);
				}
				skalowanie = true;
				stary_wsp_max_x = wsp_skali_do_max_x;
				stary_wsp_min_x = wsp_skali_do_min_x;
				stary_wsp_min_y = wsp_skali_do_min_y;
				stary_wsp_max_y = wsp_skali_do_max_y;
			}
		}
	}
	private: System::Void Tak_kolor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Tak_kolor->Checked == true)
		{
			kolor_elek->Checked = false;
			kolor_ciep->Checked = false;
			kolor_elek->Enabled = true;
			kolor_ciep->Enabled = true;
			Nie_kolor->Checked = false;
		}
		else
		{
			if (Nie_kolor->Checked == false)
			{
				Tak_kolor->Checked = true;
			}
		}
	}
	private: System::Void Nie_kolor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Nie_kolor->Checked == true)
		{
			kolor_elek->Checked = false;
			kolor_ciep->Checked = false;
			kolor_elek->Enabled = false;
			kolor_ciep->Enabled = false;
			Tak_kolor->Checked = false;
		}
		else
		{
			if (Tak_kolor->Checked == false)
			{
				Nie_kolor->Checked = true;
			}
		}

	}
	private: System::Void kolor_elek_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (kolor_elek->Checked == true)
			kolor_ciep->Checked = false;
		else
			if (kolor_ciep->Checked == false)
			{
				if (Nie_kolor->Checked == true)
					kolor_elek->Checked = false;
				else
					kolor_elek->Checked = true;
			}
	}
	private: System::Void kolor_ciep_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (kolor_ciep->Checked == true)
			kolor_elek->Checked = false;
		else
			if (kolor_elek->Checked == false)
			{
				if (Nie_kolor->Checked == true)
					kolor_ciep->Checked = false;
				else
					kolor_ciep->Checked = true;
			}
	}
	private: System::Void wyczysc_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g1 = pictureBox1->CreateGraphics();
		g1->Clear(System::Drawing::Color::White);
		skalowanie = false;
		label2->Text = "Wy³¹czone";
		struktura = false;
		siatka = false;
		int ct = datagrid_na_wezly->RowCount - 1;
		for (int i = 0; i < ct; i++)
		{
			datagrid_na_wezly->Rows->RemoveAt(0);
		}
		ilosc_dod_wez = 0;
	}
};
}