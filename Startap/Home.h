#pragma once
#include "CalculateStoreProfit.h"
#include "CalculateTurnover.h"
#include "CalculateProfitability.h"
#include "CalculateLiquidation.h"
#include "SalesAnalysis.h"
#include "AnalysisFinance.h"
#include "Author.h"
#include "Referense.h"
#include <iomanip>

namespace Startap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  Logo;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  Header;

	private: System::Windows::Forms::Panel^  Menu;


	private: System::Windows::Forms::Button^  btnQiut;
	private: System::Windows::Forms::Button^  btnAFU;


	private: System::Windows::Forms::Button^  btnAP;

	private: System::Windows::Forms::Button^  btnRL;

	private: System::Windows::Forms::Button^  btnARB;


	private: System::Windows::Forms::Button^  btnRAO;

	private: System::Windows::Forms::Button^  btnRPM;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  btn1;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  GrossProfitability;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  btnResult1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Rental;

	private: System::Windows::Forms::TextBox^  GrossProfit;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Cost;

	private: System::Windows::Forms::TextBox^  Square;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  CostPrice;

	private: System::Windows::Forms::TextBox^  Revenue;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  btn2;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  AverageCost;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  btnResult2;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  TurnoverDuration;


	private: System::Windows::Forms::TextBox^  TurnoverRatio;

	private: System::Windows::Forms::Label^  label13;





	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  NumberOfDays;

	private: System::Windows::Forms::TextBox^  CostOfSale;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  CostGoods;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  btn3;

	private: System::Windows::Forms::GroupBox^  groupBox8;


	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  CostProseeds;

	private: System::Windows::Forms::TextBox^  SalesProceeds;



	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  ProfitGrosss;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  btnResult3;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  ProfitabilityRatio;
	private: System::Windows::Forms::TextBox^  ProfitabilityProseeds;




	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  AverageCostGoods;

	private: System::Windows::Forms::TextBox^  ProfitGross;


	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  ProfitabilityGoods;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::GroupBox^  btn4;





	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  CurrentResponsibility;


	private: System::Windows::Forms::TextBox^  CurrentAssets;


	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::TextBox^  CurrentRate;
	private: System::Windows::Forms::Button^  btnResult4;









	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::GroupBox^  btn5;

	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  PreviousSeason;
	private: System::Windows::Forms::TextBox^  CurrentSeason;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  Plan;
	private: System::Windows::Forms::TextBox^  Fact;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::GroupBox^  groupBox13;
	private: System::Windows::Forms::TextBox^  RevenuePercent;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  RevenueChange;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  PlanPercent;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  FulfilmentPlan;
	private: System::Windows::Forms::Button^  btnResult5;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::GroupBox^  btn6;





	private: System::Windows::Forms::GroupBox^  groupBox16;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::TextBox^  GoodsSaves;

	private: System::Windows::Forms::TextBox^  Receivables;

	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::GroupBox^  groupBox17;
	private: System::Windows::Forms::TextBox^  CleanWorkingCapital;





	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  WorkingCapital;

	private: System::Windows::Forms::Button^  btnResult6;

	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::TextBox^  AccountSpayable;



	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Button^  btnFile;

	private: System::Windows::Forms::RichTextBox^  rtbFile;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  gbFile;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::SaveFileDialog^  Save;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->Logo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Header = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnFile = (gcnew System::Windows::Forms::Button());
			this->btnQiut = (gcnew System::Windows::Forms::Button());
			this->Menu = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAFU = (gcnew System::Windows::Forms::Button());
			this->btnAP = (gcnew System::Windows::Forms::Button());
			this->btnRL = (gcnew System::Windows::Forms::Button());
			this->btnARB = (gcnew System::Windows::Forms::Button());
			this->btnRAO = (gcnew System::Windows::Forms::Button());
			this->btnRPM = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->GrossProfitability = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnResult1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Rental = (gcnew System::Windows::Forms::TextBox());
			this->GrossProfit = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Cost = (gcnew System::Windows::Forms::TextBox());
			this->Square = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CostPrice = (gcnew System::Windows::Forms::TextBox());
			this->Revenue = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->AverageCost = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnResult2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TurnoverDuration = (gcnew System::Windows::Forms::TextBox());
			this->TurnoverRatio = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->CostGoods = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->NumberOfDays = (gcnew System::Windows::Forms::TextBox());
			this->CostOfSale = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btn3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->AverageCostGoods = (gcnew System::Windows::Forms::TextBox());
			this->ProfitGross = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->CostProseeds = (gcnew System::Windows::Forms::TextBox());
			this->SalesProceeds = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->ProfitabilityGoods = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->ProfitGrosss = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnResult3 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->ProfitabilityRatio = (gcnew System::Windows::Forms::TextBox());
			this->ProfitabilityProseeds = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->btn4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->CurrentResponsibility = (gcnew System::Windows::Forms::TextBox());
			this->CurrentAssets = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->CurrentRate = (gcnew System::Windows::Forms::TextBox());
			this->btnResult4 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->btn5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->PreviousSeason = (gcnew System::Windows::Forms::TextBox());
			this->CurrentSeason = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Plan = (gcnew System::Windows::Forms::TextBox());
			this->Fact = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->RevenuePercent = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->RevenueChange = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->PlanPercent = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->FulfilmentPlan = (gcnew System::Windows::Forms::TextBox());
			this->btnResult5 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->btn6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->AccountSpayable = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->GoodsSaves = (gcnew System::Windows::Forms::TextBox());
			this->Receivables = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->CleanWorkingCapital = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->WorkingCapital = (gcnew System::Windows::Forms::TextBox());
			this->btnResult6 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->rtbFile = (gcnew System::Windows::Forms::RichTextBox());
			this->gbFile = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->Save = (gcnew System::Windows::Forms::SaveFileDialog());
			this->Logo->SuspendLayout();
			this->Header->SuspendLayout();
			this->Menu->SuspendLayout();
			this->btn1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->btn2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->btn3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->btn4->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->btn5->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->btn6->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->gbFile->SuspendLayout();
			this->SuspendLayout();
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::Color::DarkCyan;
			this->Logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.BackgroundImage")));
			this->Logo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Logo->Controls->Add(this->label1);
			this->Logo->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(234, 64);
			this->Logo->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(22, -8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 70);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Бизнес\r\n калькулятор";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Header
			// 
			this->Header->BackColor = System::Drawing::Color::Transparent;
			this->Header->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Header->Controls->Add(this->button2);
			this->Header->Controls->Add(this->button1);
			this->Header->Controls->Add(this->btnFile);
			this->Header->Controls->Add(this->btnQiut);
			this->Header->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Header->ForeColor = System::Drawing::Color::Maroon;
			this->Header->Location = System::Drawing::Point(230, 0);
			this->Header->Name = L"Header";
			this->Header->Size = System::Drawing::Size(782, 64);
			this->Header->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::DarkOrange;
			this->button2->Location = System::Drawing::Point(512, -2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 64);
			this->button2->TabIndex = 3;
			this->button2->Text = L"О программе";
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::DarkOrange;
			this->button1->Location = System::Drawing::Point(394, -2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 64);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Справка\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click_1);
			// 
			// btnFile
			// 
			this->btnFile->BackColor = System::Drawing::Color::Transparent;
			this->btnFile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFile->FlatAppearance->BorderSize = 0;
			this->btnFile->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->btnFile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnFile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btnFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFile->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFile->ForeColor = System::Drawing::Color::DarkOrange;
			this->btnFile->Location = System::Drawing::Point(127, -2);
			this->btnFile->Name = L"btnFile";
			this->btnFile->Size = System::Drawing::Size(259, 64);
			this->btnFile->TabIndex = 1;
			this->btnFile->Text = L"Записать данные в файл";
			this->btnFile->UseVisualStyleBackColor = false;
			this->btnFile->Click += gcnew System::EventHandler(this, &Home::btnFile_Click);
			// 
			// btnQiut
			// 
			this->btnQiut->BackColor = System::Drawing::Color::Transparent;
			this->btnQiut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQiut->FlatAppearance->BorderSize = 0;
			this->btnQiut->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->btnQiut->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnQiut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btnQiut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQiut->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnQiut->ForeColor = System::Drawing::Color::DarkOrange;
			this->btnQiut->Location = System::Drawing::Point(667, -2);
			this->btnQiut->Name = L"btnQiut";
			this->btnQiut->Size = System::Drawing::Size(112, 64);
			this->btnQiut->TabIndex = 0;
			this->btnQiut->Text = L"Выход";
			this->btnQiut->UseVisualStyleBackColor = false;
			this->btnQiut->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::Transparent;
			this->Menu->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Menu->Controls->Add(this->label2);
			this->Menu->Controls->Add(this->btnAFU);
			this->Menu->Controls->Add(this->btnAP);
			this->Menu->Controls->Add(this->btnRL);
			this->Menu->Controls->Add(this->btnARB);
			this->Menu->Controls->Add(this->btnRAO);
			this->Menu->Controls->Add(this->btnRPM);
			this->Menu->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Menu->ForeColor = System::Drawing::Color::Maroon;
			this->Menu->Location = System::Drawing::Point(0, 43);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(234, 539);
			this->Menu->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(2, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Выберите операцию:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAFU
			// 
			this->btnAFU->BackColor = System::Drawing::Color::Transparent;
			this->btnAFU->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAFU->FlatAppearance->BorderSize = 0;
			this->btnAFU->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnAFU->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnAFU->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnAFU->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAFU->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAFU->ForeColor = System::Drawing::Color::Maroon;
			this->btnAFU->Location = System::Drawing::Point(6, 394);
			this->btnAFU->Name = L"btnAFU";
			this->btnAFU->Size = System::Drawing::Size(228, 54);
			this->btnAFU->TabIndex = 6;
			this->btnAFU->Text = L"Анализ финансовой устойчивости";
			this->btnAFU->UseVisualStyleBackColor = false;
			this->btnAFU->Click += gcnew System::EventHandler(this, &Home::btnAFU_Click);
			// 
			// btnAP
			// 
			this->btnAP->BackColor = System::Drawing::Color::Transparent;
			this->btnAP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAP->FlatAppearance->BorderSize = 0;
			this->btnAP->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnAP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnAP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnAP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAP->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAP->ForeColor = System::Drawing::Color::Maroon;
			this->btnAP->Location = System::Drawing::Point(0, 334);
			this->btnAP->Name = L"btnAP";
			this->btnAP->Size = System::Drawing::Size(228, 54);
			this->btnAP->TabIndex = 7;
			this->btnAP->Text = L"Анализ продаж";
			this->btnAP->UseVisualStyleBackColor = false;
			this->btnAP->Click += gcnew System::EventHandler(this, &Home::btnAP_Click);
			// 
			// btnRL
			// 
			this->btnRL->BackColor = System::Drawing::Color::Transparent;
			this->btnRL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRL->FlatAppearance->BorderSize = 0;
			this->btnRL->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnRL->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnRL->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnRL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRL->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRL->ForeColor = System::Drawing::Color::Maroon;
			this->btnRL->Location = System::Drawing::Point(0, 272);
			this->btnRL->Name = L"btnRL";
			this->btnRL->Size = System::Drawing::Size(228, 56);
			this->btnRL->TabIndex = 6;
			this->btnRL->Text = L"Расчет ликвиднсти";
			this->btnRL->UseVisualStyleBackColor = false;
			this->btnRL->Click += gcnew System::EventHandler(this, &Home::btnRL_Click);
			// 
			// btnARB
			// 
			this->btnARB->BackColor = System::Drawing::Color::Transparent;
			this->btnARB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnARB->FlatAppearance->BorderSize = 0;
			this->btnARB->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnARB->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnARB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnARB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnARB->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnARB->ForeColor = System::Drawing::Color::Maroon;
			this->btnARB->Location = System::Drawing::Point(4, 212);
			this->btnARB->Name = L"btnARB";
			this->btnARB->Size = System::Drawing::Size(228, 54);
			this->btnARB->TabIndex = 5;
			this->btnARB->Text = L"Анализ рентабельности бизнеса";
			this->btnARB->UseVisualStyleBackColor = false;
			this->btnARB->Click += gcnew System::EventHandler(this, &Home::btnARB_Click);
			// 
			// btnRAO
			// 
			this->btnRAO->BackColor = System::Drawing::Color::Transparent;
			this->btnRAO->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRAO->FlatAppearance->BorderSize = 0;
			this->btnRAO->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnRAO->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnRAO->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnRAO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRAO->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRAO->ForeColor = System::Drawing::Color::Maroon;
			this->btnRAO->Location = System::Drawing::Point(0, 152);
			this->btnRAO->Name = L"btnRAO";
			this->btnRAO->Size = System::Drawing::Size(228, 54);
			this->btnRAO->TabIndex = 4;
			this->btnRAO->Text = L"Расчет и анализ оборачиваемости";
			this->btnRAO->UseVisualStyleBackColor = false;
			this->btnRAO->Click += gcnew System::EventHandler(this, &Home::btnRAO_Click);
			// 
			// btnRPM
			// 
			this->btnRPM->BackColor = System::Drawing::Color::Transparent;
			this->btnRPM->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRPM->FlatAppearance->BorderSize = 0;
			this->btnRPM->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnRPM->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnRPM->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnRPM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRPM->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRPM->ForeColor = System::Drawing::Color::Maroon;
			this->btnRPM->Location = System::Drawing::Point(0, 90);
			this->btnRPM->Name = L"btnRPM";
			this->btnRPM->Size = System::Drawing::Size(228, 56);
			this->btnRPM->TabIndex = 3;
			this->btnRPM->Text = L"Расчет прибыли\r\n магазина";
			this->btnRPM->UseVisualStyleBackColor = false;
			this->btnRPM->Click += gcnew System::EventHandler(this, &Home::btnRPM_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->Controls->Add(this->groupBox4);
			this->btn1->Controls->Add(this->groupBox3);
			this->btn1->Controls->Add(this->groupBox2);
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::Maroon;
			this->btn1->Location = System::Drawing::Point(296, 109);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(640, 442);
			this->btn1->TabIndex = 3;
			this->btn1->TabStop = false;
			this->btn1->Text = L"Расчет прибыли магазина";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->GrossProfitability);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->btnResult1);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->Rental);
			this->groupBox4->Controls->Add(this->GrossProfit);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox4->Location = System::Drawing::Point(23, 232);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(599, 178);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Отчет по прибыли и убыткам";
			// 
			// GrossProfitability
			// 
			this->GrossProfitability->BackColor = System::Drawing::Color::Maroon;
			this->GrossProfitability->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->GrossProfitability->Location = System::Drawing::Point(420, 61);
			this->GrossProfitability->Name = L"GrossProfitability";
			this->GrossProfitability->ReadOnly = true;
			this->GrossProfitability->Size = System::Drawing::Size(173, 28);
			this->GrossProfitability->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(51, 93);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 26);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Аренда магазина:";
			// 
			// btnResult1
			// 
			this->btnResult1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult1->Location = System::Drawing::Point(420, 125);
			this->btnResult1->Name = L"btnResult1";
			this->btnResult1->Size = System::Drawing::Size(173, 44);
			this->btnResult1->TabIndex = 5;
			this->btnResult1->Text = L"Результат";
			this->btnResult1->UseVisualStyleBackColor = true;
			this->btnResult1->Click += gcnew System::EventHandler(this, &Home::btnResult1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(51, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Валовая прибыль:";
			// 
			// Rental
			// 
			this->Rental->BackColor = System::Drawing::Color::Maroon;
			this->Rental->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Rental->Location = System::Drawing::Point(420, 93);
			this->Rental->Name = L"Rental";
			this->Rental->ReadOnly = true;
			this->Rental->Size = System::Drawing::Size(173, 28);
			this->Rental->TabIndex = 4;
			// 
			// GrossProfit
			// 
			this->GrossProfit->BackColor = System::Drawing::Color::Maroon;
			this->GrossProfit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->GrossProfit->Location = System::Drawing::Point(420, 29);
			this->GrossProfit->Name = L"GrossProfit";
			this->GrossProfit->ReadOnly = true;
			this->GrossProfit->Size = System::Drawing::Size(173, 28);
			this->GrossProfit->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(248, 26);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Валовая рентабельность:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->Cost);
			this->groupBox3->Controls->Add(this->Square);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox3->Location = System::Drawing::Point(334, 36);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(286, 178);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Аренда магазина";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(255, 26);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Площадь обьекта (кв. м.):";
			// 
			// Cost
			// 
			this->Cost->BackColor = System::Drawing::Color::Maroon;
			this->Cost->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Cost->Location = System::Drawing::Point(56, 116);
			this->Cost->Name = L"Cost";
			this->Cost->Size = System::Drawing::Size(173, 28);
			this->Cost->TabIndex = 4;
			// 
			// Square
			// 
			this->Square->BackColor = System::Drawing::Color::Maroon;
			this->Square->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Square->Location = System::Drawing::Point(56, 58);
			this->Square->Name = L"Square";
			this->Square->Size = System::Drawing::Size(173, 28);
			this->Square->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(289, 26);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Стоимость аренды (в месяц):";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->CostPrice);
			this->groupBox2->Controls->Add(this->Revenue);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox2->Location = System::Drawing::Point(23, 36);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(286, 178);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выручка и валовая прибыль";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 26);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Выручка (в месяц):";
			// 
			// CostPrice
			// 
			this->CostPrice->BackColor = System::Drawing::Color::Maroon;
			this->CostPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CostPrice->Location = System::Drawing::Point(56, 116);
			this->CostPrice->Name = L"CostPrice";
			this->CostPrice->Size = System::Drawing::Size(173, 28);
			this->CostPrice->TabIndex = 4;
			// 
			// Revenue
			// 
			this->Revenue->BackColor = System::Drawing::Color::Maroon;
			this->Revenue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Revenue->Location = System::Drawing::Point(56, 58);
			this->Revenue->Name = L"Revenue";
			this->Revenue->Size = System::Drawing::Size(173, 28);
			this->Revenue->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 26);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Себестоимость:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkOrange;
			this->label9->Location = System::Drawing::Point(511, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 26);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Заполните форму:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Transparent;
			this->btn2->Controls->Add(this->groupBox5);
			this->btn2->Controls->Add(this->groupBox7);
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::Maroon;
			this->btn2->Location = System::Drawing::Point(296, 109);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(640, 442);
			this->btn2->TabIndex = 8;
			this->btn2->TabStop = false;
			this->btn2->Text = L"Расчет и анализ оборачиваемости";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->AverageCost);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->btnResult2);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->TurnoverDuration);
			this->groupBox5->Controls->Add(this->TurnoverRatio);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox5->Location = System::Drawing::Point(324, 36);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(310, 387);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Отчет по оборачиваемости:";
			// 
			// AverageCost
			// 
			this->AverageCost->BackColor = System::Drawing::Color::Maroon;
			this->AverageCost->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AverageCost->Location = System::Drawing::Point(10, 82);
			this->AverageCost->Name = L"AverageCost";
			this->AverageCost->ReadOnly = true;
			this->AverageCost->Size = System::Drawing::Size(288, 28);
			this->AverageCost->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 115);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(302, 52);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Коэфициэнт оборачиваемости\r\nтоварных запасов (за период):";
			// 
			// btnResult2
			// 
			this->btnResult2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult2->Location = System::Drawing::Point(57, 330);
			this->btnResult2->Name = L"btnResult2";
			this->btnResult2->Size = System::Drawing::Size(173, 44);
			this->btnResult2->TabIndex = 5;
			this->btnResult2->Text = L"Результат";
			this->btnResult2->UseVisualStyleBackColor = true;
			this->btnResult2->Click += gcnew System::EventHandler(this, &Home::btnResult2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(242, 52);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Средняя себестоимость \r\nпродаж в день:";
			// 
			// TurnoverDuration
			// 
			this->TurnoverDuration->BackColor = System::Drawing::Color::Maroon;
			this->TurnoverDuration->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TurnoverDuration->Location = System::Drawing::Point(10, 260);
			this->TurnoverDuration->Name = L"TurnoverDuration";
			this->TurnoverDuration->ReadOnly = true;
			this->TurnoverDuration->Size = System::Drawing::Size(288, 28);
			this->TurnoverDuration->TabIndex = 4;
			// 
			// TurnoverRatio
			// 
			this->TurnoverRatio->BackColor = System::Drawing::Color::Maroon;
			this->TurnoverRatio->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TurnoverRatio->Location = System::Drawing::Point(10, 170);
			this->TurnoverRatio->Name = L"TurnoverRatio";
			this->TurnoverRatio->ReadOnly = true;
			this->TurnoverRatio->Size = System::Drawing::Size(288, 28);
			this->TurnoverRatio->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(5, 202);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(258, 52);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Длительность оборота \r\nтоварных запасов, в днях:";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->CostGoods);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->NumberOfDays);
			this->groupBox7->Controls->Add(this->CostOfSale);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox7->Location = System::Drawing::Point(23, 36);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(286, 387);
			this->groupBox7->TabIndex = 5;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Товарный запас";
			// 
			// CostGoods
			// 
			this->CostGoods->BackColor = System::Drawing::Color::Maroon;
			this->CostGoods->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CostGoods->Location = System::Drawing::Point(31, 207);
			this->CostGoods->Name = L"CostGoods";
			this->CostGoods->Size = System::Drawing::Size(173, 28);
			this->CostGoods->TabIndex = 6;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(27, 152);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(199, 52);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Средняя стоимость \r\nтоварных запасов:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(27, 29);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(237, 26);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Себестоимость продаж:";
			// 
			// NumberOfDays
			// 
			this->NumberOfDays->BackColor = System::Drawing::Color::Maroon;
			this->NumberOfDays->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->NumberOfDays->Location = System::Drawing::Point(32, 116);
			this->NumberOfDays->Name = L"NumberOfDays";
			this->NumberOfDays->Size = System::Drawing::Size(173, 28);
			this->NumberOfDays->TabIndex = 4;
			// 
			// CostOfSale
			// 
			this->CostOfSale->BackColor = System::Drawing::Color::Maroon;
			this->CostOfSale->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CostOfSale->Location = System::Drawing::Point(32, 58);
			this->CostOfSale->Name = L"CostOfSale";
			this->CostOfSale->Size = System::Drawing::Size(173, 28);
			this->CostOfSale->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(27, 87);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(177, 26);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Количество дней:";
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Transparent;
			this->btn3->Controls->Add(this->groupBox1);
			this->btn3->Controls->Add(this->groupBox8);
			this->btn3->Controls->Add(this->groupBox6);
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::Maroon;
			this->btn3->Location = System::Drawing::Point(296, 109);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(640, 442);
			this->btn3->TabIndex = 9;
			this->btn3->TabStop = false;
			this->btn3->Text = L"Анилиз рентабельности бизнеса";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->AverageCostGoods);
			this->groupBox1->Controls->Add(this->ProfitGross);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox1->Location = System::Drawing::Point(23, 206);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(286, 217);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Рентабельность товарного запаса:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(26, 55);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(177, 26);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Валовая прибыль:";
			// 
			// AverageCostGoods
			// 
			this->AverageCostGoods->BackColor = System::Drawing::Color::Maroon;
			this->AverageCostGoods->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AverageCostGoods->Location = System::Drawing::Point(30, 176);
			this->AverageCostGoods->Name = L"AverageCostGoods";
			this->AverageCostGoods->Size = System::Drawing::Size(173, 28);
			this->AverageCostGoods->TabIndex = 4;
			// 
			// ProfitGross
			// 
			this->ProfitGross->BackColor = System::Drawing::Color::Maroon;
			this->ProfitGross->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfitGross->Location = System::Drawing::Point(32, 84);
			this->ProfitGross->Name = L"ProfitGross";
			this->ProfitGross->ReadOnly = true;
			this->ProfitGross->Size = System::Drawing::Size(173, 28);
			this->ProfitGross->TabIndex = 2;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(26, 122);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(199, 52);
			this->label23->TabIndex = 3;
			this->label23->Text = L"Средняя стоимость \r\nтоварного запаса:";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label21);
			this->groupBox8->Controls->Add(this->CostProseeds);
			this->groupBox8->Controls->Add(this->SalesProceeds);
			this->groupBox8->Controls->Add(this->label22);
			this->groupBox8->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox8->Location = System::Drawing::Point(23, 36);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(286, 166);
			this->groupBox8->TabIndex = 5;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Рентабельность продаж:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(27, 29);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(206, 26);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Выручка от продажи:";
			// 
			// CostProseeds
			// 
			this->CostProseeds->BackColor = System::Drawing::Color::Maroon;
			this->CostProseeds->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CostProseeds->Location = System::Drawing::Point(32, 116);
			this->CostProseeds->Name = L"CostProseeds";
			this->CostProseeds->Size = System::Drawing::Size(173, 28);
			this->CostProseeds->TabIndex = 4;
			// 
			// SalesProceeds
			// 
			this->SalesProceeds->BackColor = System::Drawing::Color::Maroon;
			this->SalesProceeds->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SalesProceeds->Location = System::Drawing::Point(32, 58);
			this->SalesProceeds->Name = L"SalesProceeds";
			this->SalesProceeds->Size = System::Drawing::Size(173, 28);
			this->SalesProceeds->TabIndex = 2;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(27, 87);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(237, 26);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Себестоимость продаж:";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->ProfitabilityGoods);
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->ProfitGrosss);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->btnResult3);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->ProfitabilityRatio);
			this->groupBox6->Controls->Add(this->ProfitabilityProseeds);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox6->Location = System::Drawing::Point(324, 36);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(310, 387);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Отчет по рентабельности:";
			// 
			// ProfitabilityGoods
			// 
			this->ProfitabilityGoods->BackColor = System::Drawing::Color::Maroon;
			this->ProfitabilityGoods->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfitabilityGoods->Location = System::Drawing::Point(10, 287);
			this->ProfitabilityGoods->Name = L"ProfitabilityGoods";
			this->ProfitabilityGoods->ReadOnly = true;
			this->ProfitabilityGoods->Size = System::Drawing::Size(288, 28);
			this->ProfitabilityGoods->TabIndex = 9;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(10, 238);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(269, 52);
			this->label24->TabIndex = 8;
			this->label24->Text = L"Рентабельность товарного \r\nзапаса:";
			// 
			// ProfitGrosss
			// 
			this->ProfitGrosss->BackColor = System::Drawing::Color::Maroon;
			this->ProfitGrosss->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfitGrosss->Location = System::Drawing::Point(10, 58);
			this->ProfitGrosss->Name = L"ProfitGrosss";
			this->ProfitGrosss->ReadOnly = true;
			this->ProfitGrosss->Size = System::Drawing::Size(288, 28);
			this->ProfitGrosss->TabIndex = 7;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 89);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(244, 26);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Рентабельность продаж:";
			// 
			// btnResult3
			// 
			this->btnResult3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult3->Location = System::Drawing::Point(57, 330);
			this->btnResult3->Name = L"btnResult3";
			this->btnResult3->Size = System::Drawing::Size(173, 44);
			this->btnResult3->TabIndex = 5;
			this->btnResult3->Text = L"Результат";
			this->btnResult3->UseVisualStyleBackColor = true;
			this->btnResult3->Click += gcnew System::EventHandler(this, &Home::btnResult3_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(177, 26);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Валовая прибыль:";
			// 
			// ProfitabilityRatio
			// 
			this->ProfitabilityRatio->BackColor = System::Drawing::Color::Maroon;
			this->ProfitabilityRatio->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfitabilityRatio->Location = System::Drawing::Point(10, 207);
			this->ProfitabilityRatio->Name = L"ProfitabilityRatio";
			this->ProfitabilityRatio->ReadOnly = true;
			this->ProfitabilityRatio->Size = System::Drawing::Size(288, 28);
			this->ProfitabilityRatio->TabIndex = 4;
			// 
			// ProfitabilityProseeds
			// 
			this->ProfitabilityProseeds->BackColor = System::Drawing::Color::Maroon;
			this->ProfitabilityProseeds->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ProfitabilityProseeds->Location = System::Drawing::Point(10, 116);
			this->ProfitabilityProseeds->Name = L"ProfitabilityProseeds";
			this->ProfitabilityProseeds->ReadOnly = true;
			this->ProfitabilityProseeds->Size = System::Drawing::Size(288, 28);
			this->ProfitabilityProseeds->TabIndex = 2;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 152);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(284, 52);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Коэфициэнт рентабельности \r\nтоварного запаса:";
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Transparent;
			this->btn4->Controls->Add(this->groupBox11);
			this->btn4->Controls->Add(this->groupBox12);
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::Maroon;
			this->btn4->Location = System::Drawing::Point(296, 109);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(640, 442);
			this->btn4->TabIndex = 10;
			this->btn4->TabStop = false;
			this->btn4->Text = L"Расчет ликвидности";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label27);
			this->groupBox11->Controls->Add(this->CurrentResponsibility);
			this->groupBox11->Controls->Add(this->CurrentAssets);
			this->groupBox11->Controls->Add(this->label28);
			this->groupBox11->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox11->Location = System::Drawing::Point(23, 36);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(286, 387);
			this->groupBox11->TabIndex = 5;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Коэфициэнт текущей ликвидности:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(19, 80);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(193, 26);
			this->label27->TabIndex = 1;
			this->label27->Text = L"Оборотные активы:";
			// 
			// CurrentResponsibility
			// 
			this->CurrentResponsibility->BackColor = System::Drawing::Color::Maroon;
			this->CurrentResponsibility->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CurrentResponsibility->Location = System::Drawing::Point(24, 246);
			this->CurrentResponsibility->Name = L"CurrentResponsibility";
			this->CurrentResponsibility->Size = System::Drawing::Size(240, 28);
			this->CurrentResponsibility->TabIndex = 4;
			// 
			// CurrentAssets
			// 
			this->CurrentAssets->BackColor = System::Drawing::Color::Maroon;
			this->CurrentAssets->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CurrentAssets->Location = System::Drawing::Point(24, 124);
			this->CurrentAssets->Name = L"CurrentAssets";
			this->CurrentAssets->Size = System::Drawing::Size(240, 28);
			this->CurrentAssets->TabIndex = 2;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(19, 178);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(249, 52);
			this->label28->TabIndex = 3;
			this->label28->Text = L"Текущие (краткосрочные)\r\n обязательства:";
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->CurrentRate);
			this->groupBox12->Controls->Add(this->btnResult4);
			this->groupBox12->Controls->Add(this->label32);
			this->groupBox12->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox12->Location = System::Drawing::Point(324, 36);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(310, 387);
			this->groupBox12->TabIndex = 7;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Отчет по ликвидносит:";
			// 
			// CurrentRate
			// 
			this->CurrentRate->BackColor = System::Drawing::Color::Maroon;
			this->CurrentRate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CurrentRate->Location = System::Drawing::Point(10, 191);
			this->CurrentRate->Name = L"CurrentRate";
			this->CurrentRate->ReadOnly = true;
			this->CurrentRate->Size = System::Drawing::Size(288, 28);
			this->CurrentRate->TabIndex = 9;
			// 
			// btnResult4
			// 
			this->btnResult4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult4->Location = System::Drawing::Point(57, 330);
			this->btnResult4->Name = L"btnResult4";
			this->btnResult4->Size = System::Drawing::Size(173, 44);
			this->btnResult4->TabIndex = 5;
			this->btnResult4->Text = L"Результат";
			this->btnResult4->UseVisualStyleBackColor = true;
			this->btnResult4->Click += gcnew System::EventHandler(this, &Home::btnResult4_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(30, 126);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(209, 52);
			this->label32->TabIndex = 3;
			this->label32->Text = L"Коэфициэнт текущей \r\nликвидации:";
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Transparent;
			this->btn5->Controls->Add(this->groupBox14);
			this->btn5->Controls->Add(this->groupBox10);
			this->btn5->Controls->Add(this->groupBox13);
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::Maroon;
			this->btn5->Location = System::Drawing::Point(296, 109);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(640, 442);
			this->btn5->TabIndex = 11;
			this->btn5->TabStop = false;
			this->btn5->Text = L"Анализ продаж";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->label30);
			this->groupBox14->Controls->Add(this->PreviousSeason);
			this->groupBox14->Controls->Add(this->CurrentSeason);
			this->groupBox14->Controls->Add(this->label31);
			this->groupBox14->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox14->Location = System::Drawing::Point(23, 206);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(286, 217);
			this->groupBox14->TabIndex = 8;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Анализ > краткий";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(12, 29);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(267, 26);
			this->label30->TabIndex = 1;
			this->label30->Text = L"Выручка > текущий период:";
			// 
			// PreviousSeason
			// 
			this->PreviousSeason->BackColor = System::Drawing::Color::Maroon;
			this->PreviousSeason->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PreviousSeason->Location = System::Drawing::Point(17, 146);
			this->PreviousSeason->Name = L"PreviousSeason";
			this->PreviousSeason->Size = System::Drawing::Size(240, 28);
			this->PreviousSeason->TabIndex = 4;
			// 
			// CurrentSeason
			// 
			this->CurrentSeason->BackColor = System::Drawing::Color::Maroon;
			this->CurrentSeason->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CurrentSeason->Location = System::Drawing::Point(17, 58);
			this->CurrentSeason->Name = L"CurrentSeason";
			this->CurrentSeason->Size = System::Drawing::Size(240, 28);
			this->CurrentSeason->TabIndex = 2;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(12, 89);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(227, 52);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Выручка > предыдущий\r\n период:";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label25);
			this->groupBox10->Controls->Add(this->Plan);
			this->groupBox10->Controls->Add(this->Fact);
			this->groupBox10->Controls->Add(this->label26);
			this->groupBox10->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox10->Location = System::Drawing::Point(23, 36);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(286, 166);
			this->groupBox10->TabIndex = 5;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Анализ > план - факт";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(12, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(163, 26);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Выручка > факт:";
			// 
			// Plan
			// 
			this->Plan->BackColor = System::Drawing::Color::Maroon;
			this->Plan->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Plan->Location = System::Drawing::Point(17, 126);
			this->Plan->Name = L"Plan";
			this->Plan->Size = System::Drawing::Size(240, 28);
			this->Plan->TabIndex = 4;
			// 
			// Fact
			// 
			this->Fact->BackColor = System::Drawing::Color::Maroon;
			this->Fact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Fact->Location = System::Drawing::Point(17, 58);
			this->Fact->Name = L"Fact";
			this->Fact->Size = System::Drawing::Size(240, 28);
			this->Fact->TabIndex = 2;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(13, 95);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(162, 26);
			this->label26->TabIndex = 3;
			this->label26->Text = L"Выручка > план:";
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->RevenuePercent);
			this->groupBox13->Controls->Add(this->label35);
			this->groupBox13->Controls->Add(this->RevenueChange);
			this->groupBox13->Controls->Add(this->label34);
			this->groupBox13->Controls->Add(this->PlanPercent);
			this->groupBox13->Controls->Add(this->label33);
			this->groupBox13->Controls->Add(this->FulfilmentPlan);
			this->groupBox13->Controls->Add(this->btnResult5);
			this->groupBox13->Controls->Add(this->label29);
			this->groupBox13->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox13->Location = System::Drawing::Point(324, 36);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(310, 387);
			this->groupBox13->TabIndex = 7;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Отчет по ликвидносит:";
			// 
			// RevenuePercent
			// 
			this->RevenuePercent->BackColor = System::Drawing::Color::Maroon;
			this->RevenuePercent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RevenuePercent->Location = System::Drawing::Point(15, 275);
			this->RevenuePercent->Name = L"RevenuePercent";
			this->RevenuePercent->ReadOnly = true;
			this->RevenuePercent->Size = System::Drawing::Size(288, 28);
			this->RevenuePercent->TabIndex = 15;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(14, 246);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(247, 26);
			this->label35->TabIndex = 14;
			this->label35->Text = L"Изменение выручки (%):";
			// 
			// RevenueChange
			// 
			this->RevenueChange->BackColor = System::Drawing::Color::Maroon;
			this->RevenueChange->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RevenueChange->Location = System::Drawing::Point(15, 207);
			this->RevenueChange->Name = L"RevenueChange";
			this->RevenueChange->ReadOnly = true;
			this->RevenueChange->Size = System::Drawing::Size(288, 28);
			this->RevenueChange->TabIndex = 13;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(14, 170);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(201, 26);
			this->label34->TabIndex = 12;
			this->label34->Text = L"Изменение выручки:";
			// 
			// PlanPercent
			// 
			this->PlanPercent->BackColor = System::Drawing::Color::Maroon;
			this->PlanPercent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PlanPercent->Location = System::Drawing::Point(15, 126);
			this->PlanPercent->Name = L"PlanPercent";
			this->PlanPercent->ReadOnly = true;
			this->PlanPercent->Size = System::Drawing::Size(288, 28);
			this->PlanPercent->TabIndex = 11;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(10, 95);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(235, 26);
			this->label33->TabIndex = 10;
			this->label33->Text = L"Выполнение плана (%):";
			// 
			// FulfilmentPlan
			// 
			this->FulfilmentPlan->BackColor = System::Drawing::Color::Maroon;
			this->FulfilmentPlan->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FulfilmentPlan->Location = System::Drawing::Point(15, 58);
			this->FulfilmentPlan->Name = L"FulfilmentPlan";
			this->FulfilmentPlan->ReadOnly = true;
			this->FulfilmentPlan->Size = System::Drawing::Size(288, 28);
			this->FulfilmentPlan->TabIndex = 9;
			// 
			// btnResult5
			// 
			this->btnResult5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult5->Location = System::Drawing::Point(57, 330);
			this->btnResult5->Name = L"btnResult5";
			this->btnResult5->Size = System::Drawing::Size(173, 44);
			this->btnResult5->TabIndex = 5;
			this->btnResult5->Text = L"Результат";
			this->btnResult5->UseVisualStyleBackColor = true;
			this->btnResult5->Click += gcnew System::EventHandler(this, &Home::btnResult5_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(10, 29);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(189, 26);
			this->label29->TabIndex = 3;
			this->label29->Text = L"Выполнение плана:";
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Transparent;
			this->btn6->Controls->Add(this->groupBox16);
			this->btn6->Controls->Add(this->groupBox17);
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::Maroon;
			this->btn6->Location = System::Drawing::Point(296, 109);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(640, 442);
			this->btn6->TabIndex = 12;
			this->btn6->TabStop = false;
			this->btn6->Text = L"Анализ финансовой устойчивости";
			// 
			// groupBox16
			// 
			this->groupBox16->Controls->Add(this->AccountSpayable);
			this->groupBox16->Controls->Add(this->label36);
			this->groupBox16->Controls->Add(this->label38);
			this->groupBox16->Controls->Add(this->GoodsSaves);
			this->groupBox16->Controls->Add(this->Receivables);
			this->groupBox16->Controls->Add(this->label39);
			this->groupBox16->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox16->Location = System::Drawing::Point(23, 36);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(286, 387);
			this->groupBox16->TabIndex = 5;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"Чистый оборотный капитал";
			// 
			// AccountSpayable
			// 
			this->AccountSpayable->BackColor = System::Drawing::Color::Maroon;
			this->AccountSpayable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AccountSpayable->Location = System::Drawing::Point(6, 306);
			this->AccountSpayable->Name = L"AccountSpayable";
			this->AccountSpayable->Size = System::Drawing::Size(273, 28);
			this->AccountSpayable->TabIndex = 6;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(-5, 277);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(295, 26);
			this->label36->TabIndex = 5;
			this->label36->Text = L"Кредиторская задолженность:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(1, 49);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(285, 26);
			this->label38->TabIndex = 1;
			this->label38->Text = L"Дебиторская задолженность:";
			// 
			// GoodsSaves
			// 
			this->GoodsSaves->BackColor = System::Drawing::Color::Maroon;
			this->GoodsSaves->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->GoodsSaves->Location = System::Drawing::Point(6, 194);
			this->GoodsSaves->Name = L"GoodsSaves";
			this->GoodsSaves->Size = System::Drawing::Size(273, 28);
			this->GoodsSaves->TabIndex = 4;
			// 
			// Receivables
			// 
			this->Receivables->BackColor = System::Drawing::Color::Maroon;
			this->Receivables->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Receivables->Location = System::Drawing::Point(7, 78);
			this->Receivables->Name = L"Receivables";
			this->Receivables->Size = System::Drawing::Size(273, 28);
			this->Receivables->TabIndex = 2;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(1, 165);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(179, 26);
			this->label39->TabIndex = 3;
			this->label39->Text = L"Товарные запасы:";
			// 
			// groupBox17
			// 
			this->groupBox17->Controls->Add(this->CleanWorkingCapital);
			this->groupBox17->Controls->Add(this->label42);
			this->groupBox17->Controls->Add(this->WorkingCapital);
			this->groupBox17->Controls->Add(this->btnResult6);
			this->groupBox17->Controls->Add(this->label43);
			this->groupBox17->ForeColor = System::Drawing::Color::Maroon;
			this->groupBox17->Location = System::Drawing::Point(324, 36);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(310, 387);
			this->groupBox17->TabIndex = 7;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"Отчет по ликвидносит:";
			// 
			// CleanWorkingCapital
			// 
			this->CleanWorkingCapital->BackColor = System::Drawing::Color::Maroon;
			this->CleanWorkingCapital->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CleanWorkingCapital->Location = System::Drawing::Point(6, 204);
			this->CleanWorkingCapital->Name = L"CleanWorkingCapital";
			this->CleanWorkingCapital->ReadOnly = true;
			this->CleanWorkingCapital->Size = System::Drawing::Size(288, 28);
			this->CleanWorkingCapital->TabIndex = 11;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(11, 175);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(268, 26);
			this->label42->TabIndex = 10;
			this->label42->Text = L"Чистый оборотный капитал:";
			// 
			// WorkingCapital
			// 
			this->WorkingCapital->BackColor = System::Drawing::Color::Maroon;
			this->WorkingCapital->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->WorkingCapital->Location = System::Drawing::Point(6, 115);
			this->WorkingCapital->Name = L"WorkingCapital";
			this->WorkingCapital->ReadOnly = true;
			this->WorkingCapital->Size = System::Drawing::Size(288, 28);
			this->WorkingCapital->TabIndex = 9;
			// 
			// btnResult6
			// 
			this->btnResult6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult6->Location = System::Drawing::Point(57, 330);
			this->btnResult6->Name = L"btnResult6";
			this->btnResult6->Size = System::Drawing::Size(173, 44);
			this->btnResult6->TabIndex = 5;
			this->btnResult6->Text = L"Результат";
			this->btnResult6->UseVisualStyleBackColor = true;
			this->btnResult6->Click += gcnew System::EventHandler(this, &Home::btnResult6_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(10, 82);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(200, 26);
			this->label43->TabIndex = 3;
			this->label43->Text = L"Оборотный капитал:";
			// 
			// rtbFile
			// 
			this->rtbFile->BackColor = System::Drawing::Color::Maroon;
			this->rtbFile->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rtbFile->ForeColor = System::Drawing::Color::DarkOrange;
			this->rtbFile->Location = System::Drawing::Point(17, 61);
			this->rtbFile->Name = L"rtbFile";
			this->rtbFile->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->rtbFile->Size = System::Drawing::Size(599, 309);
			this->rtbFile->TabIndex = 13;
			this->rtbFile->Text = L"";
			// 
			// gbFile
			// 
			this->gbFile->BackColor = System::Drawing::Color::Transparent;
			this->gbFile->Controls->Add(this->button4);
			this->gbFile->Controls->Add(this->button3);
			this->gbFile->Controls->Add(this->label37);
			this->gbFile->Controls->Add(this->rtbFile);
			this->gbFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gbFile->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbFile->ForeColor = System::Drawing::Color::Maroon;
			this->gbFile->Location = System::Drawing::Point(296, 109);
			this->gbFile->Name = L"gbFile";
			this->gbFile->Size = System::Drawing::Size(640, 442);
			this->gbFile->TabIndex = 13;
			this->gbFile->TabStop = false;
			this->gbFile->Text = L"Запись данных в файл";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::DarkOrange;
			this->button4->Location = System::Drawing::Point(17, 386);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 46);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Очистить";
			this->button4->UseMnemonic = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Home::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::DarkOrange;
			this->button3->Location = System::Drawing::Point(479, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 46);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Записать";
			this->button3->UseMnemonic = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click_1);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Rockwell", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::DarkOrange;
			this->label37->Location = System::Drawing::Point(93, 31);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(461, 26);
			this->label37->TabIndex = 14;
			this->label37->Text = L"Проверьте корректность данных перед записью";
			this->label37->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1012, 583);
			this->Controls->Add(this->gbFile);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->Header);
			this->Controls->Add(this->btn1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Gold;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->Logo->ResumeLayout(false);
			this->Logo->PerformLayout();
			this->Header->ResumeLayout(false);
			this->Menu->ResumeLayout(false);
			this->Menu->PerformLayout();
			this->btn1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->btn2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->btn3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->btn4->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->btn5->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->btn6->ResumeLayout(false);
			this->groupBox16->ResumeLayout(false);
			this->groupBox16->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->gbFile->ResumeLayout(false);
			this->gbFile->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void Home_Load(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = false;
		btn1->Visible = false;
		btn2->Visible = false;
		btn3->Visible = false;
		btn4->Visible = false;
		btn5->Visible = false;
		btn6->Visible = false;
		gbFile->Visible = false;
	}
	private: System::Void btnRPM_Click(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = true;
		btn1->Visible = true;
		btn2->Visible = false;
		btn3->Visible = false;
		btn4->Visible = false;
		btn5->Visible = false;
		btn6->Visible = false;
		gbFile->Visible = false;
		Save->Filter = "RTF|*.rtf";

	}
	private: System::Void btnResult1_Click(System::Object^  sender, System::EventArgs^  e) {
		CalculateStoreProfit result;
		if (Revenue->Text == "" || CostPrice->Text == "" || Square->Text == "" || Cost->Text == "")
		{
			MessageBox::Show("Недостаточно данных для расчета!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else
		{
			double revenue = Convert::ToInt32(Revenue->Text);
			double costPrice = Convert::ToInt32(CostPrice->Text);
			double grossProfit = result.CalculateGrossProfit(revenue, costPrice);

			GrossProfit->Text = grossProfit.ToString() + "руб";
			double grossProfitability = result.CalculateGrossProfitability(grossProfit, costPrice);
			GrossProfitability->Text = grossProfitability.ToString() + "%";

			double square = Convert::ToInt32(Square->Text);
			double cost = Convert::ToInt32(Cost->Text);
			double rental = result.CalculateShopRental(square, cost);
			Rental->Text = rental.ToString() + "руб";

			rtbFile->Text += "\nПрибыль магазина:\n" + "Выручка = " + Revenue->Text + "\n";
			rtbFile->Text += "Себестоимость = " + CostPrice->Text + "\n";
			rtbFile->Text += "Площадь обьекта = " + Square->Text + "\n";
			rtbFile->Text += "Стоимость аренды = " + Cost->Text + "\n";
			rtbFile->Text += "Результаты расчетов\n";
			rtbFile->Text += "Валовая прибыль = " + GrossProfit->Text + "\n";
			rtbFile->Text += "Валовая рентабельность = " + GrossProfitability->Text + "\n";
			rtbFile->Text += "Аренда магазина = " + Rental->Text + "\n";
		}
	}
	private: System::Void btnRAO_Click(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = true;
		btn1->Visible = false;
		btn2->Visible = true;
		btn3->Visible = false;
		btn4->Visible = false;
		btn5->Visible = false;
		btn6->Visible = false;
		gbFile->Visible = false;
	}
	private: System::Void btnResult2_Click(System::Object^  sender, System::EventArgs^  e) {
		CalculateTurnover calculateResult;
		if (CostOfSale->Text == "" || NumberOfDays->Text == "" || CostGoods->Text == "") {
			MessageBox::Show("Недостаточно данных для расчтета!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			double costOfSale = Convert::ToInt32(CostOfSale->Text);
			double costGoods = Convert::ToInt32(CostGoods->Text);
			double numberOfDays = Convert::ToInt32(NumberOfDays->Text);

			double averageCost = calculateResult.CalculateAverageCost(costOfSale, numberOfDays);
			AverageCost->Text = averageCost.ToString() + "руб";

			double turnoverRatio = calculateResult.CalculateTurnOverRatio(costOfSale, costGoods);
			TurnoverRatio->Text = turnoverRatio.ToString();

			double turnoverDuration = calculateResult.CalculateTurnoverDuration(numberOfDays, costOfSale, costGoods);
			TurnoverDuration->Text = turnoverDuration.ToString() + "дней";

			rtbFile->Text += "\nРасчет и анализ оборачиваемости:\n" + "Себестоимость продаж = " + CostOfSale->Text + "\n";
			rtbFile->Text += "Средняя стоимость товаров = " + CostGoods->Text + "\n";
			rtbFile->Text += "Количество дней = " + NumberOfDays->Text + "\n";
			rtbFile->Text += "Результаты расчетов\n";
			rtbFile->Text += "Средняя себестоимость продаж в день = " + AverageCost->Text + "\n";
			rtbFile->Text += "Коэфициэнт оборачиваемости товарных запасов = " + TurnoverRatio->Text + "\n";
			rtbFile->Text += "Длительность оборота товарных запасов = " + TurnoverDuration->Text + "\n";
		}
	}
	private: System::Void btnARB_Click(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = true;
		btn1->Visible = false;
		btn2->Visible = false;
		btn3->Visible = true;
		btn4->Visible = false;
		btn5->Visible = false;
		btn6->Visible = false;
		gbFile->Visible = false;
	}
	private: System::Void btnResult3_Click(System::Object^  sender, System::EventArgs^  e) {
		CalculateProfitability calculateProfitability;
		if (SalesProceeds->Text == "" || CostProseeds->Text == "" || AverageCostGoods->Text == "") {
			MessageBox::Show("Недостаточно данных для расчета!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			double salesProseeds = Convert::ToInt32(SalesProceeds->Text);
			double costProseeds = Convert::ToInt32(CostProseeds->Text);
			double averageCostGoods = Convert::ToInt32(AverageCostGoods->Text);

			double profitGross = calculateProfitability.CalculateProfitGross(salesProseeds, costProseeds);
			ProfitGross->Text = profitGross.ToString() + "руб";
			ProfitGrosss->Text = profitGross.ToString() + "руб";

			double profitabilityProsseds = calculateProfitability.CalculateProfitabilityProseeds(profitGross, salesProseeds);
			ProfitabilityProseeds->Text = profitabilityProsseds.ToString() + "%";

			double profitabilityRatio = calculateProfitability.CalculateProfitabilityRate(profitGross, averageCostGoods);
			ProfitabilityRatio->Text = profitabilityRatio.ToString();

			double profitabilityGoods = calculateProfitability.CalculateProfitabilityGoods(profitGross, averageCostGoods);
			ProfitabilityGoods->Text = profitabilityGoods.ToString() + "%";

			rtbFile->Text += "\nАнализ рентабельности бизнеса:\n" + "Выручка от продажи = " + SalesProceeds->Text + "\n";
			rtbFile->Text += "Себестоимость продаж = " + CostProseeds->Text + "\n";
			rtbFile->Text += "Средняя стоимость товарного запаса = " + AverageCostGoods->Text + "\n";
			rtbFile->Text += "Результаты расчетов\n";
			rtbFile->Text += "Валовая прибыль = " + ProfitGross->Text + "\n";
			rtbFile->Text += "Рентабельность продаж = " + ProfitabilityProseeds->Text + "\n";
			rtbFile->Text += "Коэфициэнт рентабельности товарного запаса = " + ProfitabilityRatio->Text + "\n";
			rtbFile->Text += "Рентабельность товарного запаса = " + ProfitabilityGoods->Text + "\n";
		}
	}

	private: System::Void btnRL_Click(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = true;
		btn1->Visible = false;
		btn2->Visible = false;
		btn3->Visible = false;
		btn4->Visible = true;
		btn5->Visible = false;
		btn6->Visible = false;
		gbFile->Visible = false;
	}
	private: System::Void btnResult4_Click(System::Object^  sender, System::EventArgs^  e) {
		CalculateLiquidation calculateLiquidstion;
		if (CurrentAssets->Text == "" || CurrentResponsibility->Text == "") {
			MessageBox::Show("Недостаточно данных для расчета", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			double currentAssets = Convert::ToInt32(CurrentAssets->Text);
			double currentResponsibility = Convert::ToInt32(CurrentResponsibility->Text);

			double currentRate = calculateLiquidstion.CalcelateCurrentRate(currentAssets, currentResponsibility);

			CurrentRate->Text = currentRate.ToString();

			rtbFile->Text += "\nРасчет ликвидности:\n" + "Оборотные активы = " + CurrentAssets->Text + "\n";
			rtbFile->Text += "Текущие (краткосрочные) обязательства = " + CurrentResponsibility->Text + "\n";
			rtbFile->Text += "Результаты расчетов\n";
			rtbFile->Text += "Коэфициэнт текущей ликвидности = " + CurrentRate->Text + "\n";
		}
	}
	private: System::Void btnResult5_Click(System::Object^  sender, System::EventArgs^  e) {
		SalesAnalysis salesAnalysis;
		if (Fact->Text == "" || Plan->Text == "" || CurrentSeason->Text == "" || PreviousSeason->Text == "") {
			MessageBox::Show("Недостаточно данных для анализа", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			double fact = Convert::ToInt32(Fact->Text);
			double plan = Convert::ToInt32(Plan->Text);

			double currentSeason = Convert::ToInt32(CurrentSeason->Text);
			double previusSeason = Convert::ToInt32(PreviousSeason->Text);

			double fulfilmentPlan = salesAnalysis.FulfilmentPlan(fact, plan);
			double planPercent = salesAnalysis.PlanPercent(fact, plan);

			double revenueChange = salesAnalysis.RevenueChange(currentSeason, previusSeason);
			double revenuePercent = salesAnalysis.RevenuePercent(revenueChange, previusSeason);

			FulfilmentPlan->Text = fulfilmentPlan.ToString() + "руб";
			PlanPercent->Text = planPercent.ToString() + "%";

			RevenueChange->Text = revenueChange.ToString() + "руб";
			RevenuePercent->Text = revenuePercent.ToString() + "%";

			rtbFile->Text += "\nАнализ продаж:\n" + "Выручка - факт = " + Fact->Text + "\n";
			rtbFile->Text += "Выручка - план = " + Plan->Text + "\n";
			rtbFile->Text += "Выручка - текущий период = " + CurrentSeason->Text + "\n";
			rtbFile->Text += "Выручка - предыдущий период = " + PreviousSeason->Text + "\n";
			rtbFile->Text += "Результаты анализа\n";
			rtbFile->Text += "Выполнение плана = " + FulfilmentPlan->Text + "\n";
			rtbFile->Text += "Выполнение плана (%) = " + PlanPercent->Text + "\n";
			rtbFile->Text += "Изменение выручки = " + RevenueChange->Text + "\n";
			rtbFile->Text += "Изменение выручки (%) = " + RevenuePercent->Text + "\n";
		}
	}
	private: System::Void btnAP_Click(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = true;
		btn1->Visible = false;
		btn2->Visible = false;
		btn3->Visible = false;
		btn4->Visible = false;
		btn5->Visible = true;
		btn6->Visible = false;
		gbFile->Visible = false;
	}
	private: System::Void btnAFU_Click(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = true;
		btn1->Visible = false;
		btn2->Visible = false;
		btn3->Visible = false;
		btn4->Visible = false;
		btn5->Visible = false;
		btn6->Visible = true;
		gbFile->Visible = false;
	}
	private: System::Void btnResult6_Click(System::Object^  sender, System::EventArgs^  e) {
		AnalysisFinace analysisFinance;
		if (AccountSpayable->Text == "" || GoodsSaves->Text == "" || Receivables->Text == "") {
			MessageBox::Show("Недостаточно данных для анализа", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			double goodsSaves = Convert::ToInt32(GoodsSaves->Text);
			double accountSpayble = Convert::ToInt32(AccountSpayable->Text);
			double receivables = Convert::ToInt32(Receivables->Text);

			double workingCapital = analysisFinance.CalclateWorkingCapital(receivables, goodsSaves);
			double cleanWorkingCapital = analysisFinance.CalculateCleanWorkingCapital(workingCapital, accountSpayble);

			WorkingCapital->Text = workingCapital.ToString() + "руб";
			CleanWorkingCapital->Text = cleanWorkingCapital.ToString() + "руб";

			rtbFile->Text += "\nАнализ финансовой устойчивости:\n" + "Товарные запасы = " + GoodsSaves->Text + "\n";
			rtbFile->Text += "Кредиторская задолженность = " + AccountSpayable->Text + "\n";
			rtbFile->Text += "Дебиторская задолженность = " + Receivables->Text + "\n";
			rtbFile->Text += "Результаты анализа\n";
			rtbFile->Text += "Оборотный капитал = " + WorkingCapital->Text + "\n";
			rtbFile->Text += "Чистый оборотный капитал = " + CleanWorkingCapital->Text + "\n";
		}
	}
	private: System::Void btnFile_Click(System::Object^  sender, System::EventArgs^  e) {
		label9->Visible = true;
		label9->Visible = true;
		label9->Visible = true;
		label9->Visible = true;
		label9->Visible = true;
		label9->Visible = true;
		btn1->Visible = false;
		btn2->Visible = false;
		btn3->Visible = false;
		btn4->Visible = false;
		btn5->Visible = false;
		btn6->Visible = false;
		gbFile->Visible = true;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Author^ author = gcnew Author;
		author->Show();
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Referense^ reference = gcnew Referense;
		reference->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		rtbFile->Clear();
	}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Save->ShowDialog();
		if ((Save->FileName) != nullptr) {
			rtbFile->SaveFile(Save->FileName);
		}
		else {
			MessageBox::Show("Вы не выбрали файл!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	};
}
