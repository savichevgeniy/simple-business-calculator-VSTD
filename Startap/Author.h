#pragma once

namespace Startap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Author
	/// </summary>
	public ref class Author : public System::Windows::Forms::Form
	{
	public:
		Author(void)
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
		~Author()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnAFU;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Author::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnAFU = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(259, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���������� � ���������";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->Location = System::Drawing::Point(83, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(694, 151);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������ ��������� ���� ��������� � ������������ �����, � ������������� ��� �������"
				L"����� ����������. ��������� �������� ��������� ������, � ����� ��������� �������"
				L" �����. ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkOrange;
			this->label3->Location = System::Drawing::Point(556, 483);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"��������� ����������� :)";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnAFU
			// 
			this->btnAFU->BackColor = System::Drawing::Color::Transparent;
			this->btnAFU->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAFU->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->btnAFU->FlatAppearance->BorderSize = 0;
			this->btnAFU->FlatAppearance->CheckedBackColor = System::Drawing::Color::Maroon;
			this->btnAFU->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Maroon;
			this->btnAFU->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->btnAFU->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAFU->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAFU->ForeColor = System::Drawing::Color::Maroon;
			this->btnAFU->Location = System::Drawing::Point(802, 0);
			this->btnAFU->Name = L"btnAFU";
			this->btnAFU->Size = System::Drawing::Size(39, 32);
			this->btnAFU->TabIndex = 7;
			this->btnAFU->Text = L"�";
			this->btnAFU->UseVisualStyleBackColor = false;
			this->btnAFU->Click += gcnew System::EventHandler(this, &Author::btnAFU_Click);
			// 
			// Author
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(843, 528);
			this->Controls->Add(this->btnAFU);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Author";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Author";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAFU_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
