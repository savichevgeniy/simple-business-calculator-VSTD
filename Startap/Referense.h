#pragma once

namespace Startap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Referense
	/// </summary>
	public ref class Referense : public System::Windows::Forms::Form
	{
	public:
		Referense(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Referense()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnAP;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Referense::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAP = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(164, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(462, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������� �� ����������� ����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label2->ImageKey = L"(�����������)";
			this->label2->ImageList = this->imageList1;
			this->label2->Location = System::Drawing::Point(89, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(622, 360);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Header.PNG");
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(25, 410);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(755, 70);
			this->label3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(280, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 139);
			this->label4->TabIndex = 3;
			// 
			// btnAP
			// 
			this->btnAP->BackColor = System::Drawing::Color::Transparent;
			this->btnAP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAP->FlatAppearance->BorderSize = 0;
			this->btnAP->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnAP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnAP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnAP->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAP->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAP->ForeColor = System::Drawing::Color::Maroon;
			this->btnAP->Location = System::Drawing::Point(785, 1);
			this->btnAP->Name = L"btnAP";
			this->btnAP->Size = System::Drawing::Size(42, 30);
			this->btnAP->TabIndex = 8;
			this->btnAP->Text = L"X";
			this->btnAP->UseVisualStyleBackColor = false;
			this->btnAP->Click += gcnew System::EventHandler(this, &Referense::btnAP_Click);
			// 
			// Referense
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Chartreuse;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(827, 489);
			this->Controls->Add(this->btnAP);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Referense";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Referense";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void btnAP_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
