#pragma once

namespace areaCircle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbAreaCircle;
	private: System::Windows::Forms::Label^ lbEnterCircleradius;
	private: System::Windows::Forms::Button^ btnCalculate;
	private: System::Windows::Forms::Button^ btnClear;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ tbCircleRadius;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ lbResAreaCircle;
	private: System::Windows::Forms::Label^ lbResult;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbAreaCircle = (gcnew System::Windows::Forms::Label());
			this->lbEnterCircleradius = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->tbCircleRadius = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lbResAreaCircle = (gcnew System::Windows::Forms::Label());
			this->lbResult = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbAreaCircle
			// 
			this->lbAreaCircle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbAreaCircle->AutoSize = true;
			this->lbAreaCircle->BackColor = System::Drawing::Color::SeaGreen;
			this->lbAreaCircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbAreaCircle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbAreaCircle->Location = System::Drawing::Point(45, 25);
			this->lbAreaCircle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbAreaCircle->Name = L"lbAreaCircle";
			this->lbAreaCircle->Size = System::Drawing::Size(177, 29);
			this->lbAreaCircle->TabIndex = 0;
			this->lbAreaCircle->Text = L"Area of a Circle";
			this->lbAreaCircle->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// lbEnterCircleradius
			// 
			this->lbEnterCircleradius->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbEnterCircleradius->AutoSize = true;
			this->lbEnterCircleradius->BackColor = System::Drawing::Color::MediumVioletRed;
			this->lbEnterCircleradius->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lbEnterCircleradius->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbEnterCircleradius->Location = System::Drawing::Point(28, 89);
			this->lbEnterCircleradius->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbEnterCircleradius->Name = L"lbEnterCircleradius";
			this->lbEnterCircleradius->Size = System::Drawing::Size(176, 24);
			this->lbEnterCircleradius->TabIndex = 1;
			this->lbEnterCircleradius->Text = L"Enter Circle Radius:";
			this->lbEnterCircleradius->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// btnCalculate
			// 
			this->btnCalculate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCalculate->BackColor = System::Drawing::Color::MediumVioletRed;
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCalculate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCalculate->Location = System::Drawing::Point(238, 2);
			this->btnCalculate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(233, 39);
			this->btnCalculate->TabIndex = 2;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = false;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MainForm::btnCalculate_Click);
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnClear->BackColor = System::Drawing::Color::SeaGreen;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClear->Location = System::Drawing::Point(2, 2);
			this->btnClear->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(232, 39);
			this->btnClear->TabIndex = 3;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// tbCircleRadius
			// 
			this->tbCircleRadius->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbCircleRadius->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbCircleRadius->Location = System::Drawing::Point(30, 128);
			this->tbCircleRadius->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbCircleRadius->Name = L"tbCircleRadius";
			this->tbCircleRadius->Size = System::Drawing::Size(345, 32);
			this->tbCircleRadius->TabIndex = 4;
			this->tbCircleRadius->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnCalculate, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(28, 275);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(473, 44);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// lbResAreaCircle
			// 
			this->lbResAreaCircle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbResAreaCircle->AutoSize = true;
			this->lbResAreaCircle->BackColor = System::Drawing::Color::SpringGreen;
			this->lbResAreaCircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbResAreaCircle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbResAreaCircle->Location = System::Drawing::Point(28, 176);
			this->lbResAreaCircle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbResAreaCircle->Name = L"lbResAreaCircle";
			this->lbResAreaCircle->Size = System::Drawing::Size(184, 24);
			this->lbResAreaCircle->TabIndex = 6;
			this->lbResAreaCircle->Text = L"Area of the Circle: ";
			this->lbResAreaCircle->Click += gcnew System::EventHandler(this, &MainForm::lbResAreaCircle_Click);
			// 
			// lbResult
			// 
			this->lbResult->AutoSize = true;
			this->lbResult->BackColor = System::Drawing::Color::SpringGreen;
			this->lbResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbResult->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbResult->Location = System::Drawing::Point(28, 223);
			this->lbResult->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbResult->Name = L"lbResult";
			this->lbResult->Size = System::Drawing::Size(68, 24);
			this->lbResult->TabIndex = 7;
			this->lbResult->Text = L"Result";
			this->lbResult->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(523, 448);
			this->Controls->Add(this->lbResult);
			this->Controls->Add(this->lbResAreaCircle);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tbCircleRadius);
			this->Controls->Add(this->lbEnterCircleradius);
			this->Controls->Add(this->lbAreaCircle);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MinimumSize = System::Drawing::Size(539, 487);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbResAreaCircle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::String^ MainForm::CalcAreaCircle(System::String^ input)
	{
		System::Text::StringBuilder^ res = gcnew System::Text::StringBuilder();
#define PI 3.14159265358979323846
		double radius = System::Convert::ToDouble(input);
		double area = PI * radius * radius;

		System::String^ areaCircle = area.ToString();
		res->Append(areaCircle);

#undef PI

		return res->ToString();
	}
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ circleRadius = this->tbCircleRadius->Text;
		String^ res = CalcAreaCircle(circleRadius);
		this->lbResAreaCircle->Text = "Area of the circle: " + res;

	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbCircleRadius->Text = "";
		this->lbResult->Text = "";
		this->lbResAreaCircle->Text = "";
	}
	private: System::Void MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbResult->Text = "";
	}
	};
}
