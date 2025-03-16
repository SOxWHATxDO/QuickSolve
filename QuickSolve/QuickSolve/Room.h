#pragma once
#include "Functions.h"
#include "ReverseDigitsForm.h"
#include "State.h"
#include <chrono>

namespace QuickSolve {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Room
	/// </summary>
	public ref class Room : public System::Windows::Forms::Form
	{
	public:
		Room(void)
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
		~Room()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::GroupBox^ Formula;
	private: System::Windows::Forms::RadioButton^ formula2Radio;


	private: System::Windows::Forms::RadioButton^ formula1Radio;

	private: System::Windows::Forms::GroupBox^ Method;
	private: System::Windows::Forms::RadioButton^ iterativeRadio;


	private: System::Windows::Forms::RadioButton^ recursiveRadio;

	private: System::Windows::Forms::TextBox^ inputN;

	private: System::Windows::Forms::Button^ calculateButton;

	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Label^ timeLabel;
	private: System::Windows::Forms::Label^ callCountLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ switchFormButton;
	private: System::Windows::Forms::Button^ switchFormula;


	protected:

	protected:

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
			this->Formula = (gcnew System::Windows::Forms::GroupBox());
			this->formula2Radio = (gcnew System::Windows::Forms::RadioButton());
			this->formula1Radio = (gcnew System::Windows::Forms::RadioButton());
			this->Method = (gcnew System::Windows::Forms::GroupBox());
			this->iterativeRadio = (gcnew System::Windows::Forms::RadioButton());
			this->recursiveRadio = (gcnew System::Windows::Forms::RadioButton());
			this->inputN = (gcnew System::Windows::Forms::TextBox());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->callCountLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->switchFormButton = (gcnew System::Windows::Forms::Button());
			this->switchFormula = (gcnew System::Windows::Forms::Button());
			this->Formula->SuspendLayout();
			this->Method->SuspendLayout();
			this->SuspendLayout();
			// 
			// Formula
			// 
			this->Formula->Controls->Add(this->formula2Radio);
			this->Formula->Controls->Add(this->formula1Radio);
			this->Formula->Location = System::Drawing::Point(124, 54);
			this->Formula->Name = L"Formula";
			this->Formula->Size = System::Drawing::Size(140, 74);
			this->Formula->TabIndex = 1;
			this->Formula->TabStop = false;
			this->Formula->Text = L"Formula";
			// 
			// formula2Radio
			// 
			this->formula2Radio->AutoSize = true;
			this->formula2Radio->Location = System::Drawing::Point(6, 42);
			this->formula2Radio->Name = L"formula2Radio";
			this->formula2Radio->Size = System::Drawing::Size(71, 17);
			this->formula2Radio->TabIndex = 1;
			this->formula2Radio->TabStop = true;
			this->formula2Radio->Text = L"formula_2";
			this->formula2Radio->UseVisualStyleBackColor = true;
			// 
			// formula1Radio
			// 
			this->formula1Radio->AutoSize = true;
			this->formula1Radio->Location = System::Drawing::Point(6, 19);
			this->formula1Radio->Name = L"formula1Radio";
			this->formula1Radio->Size = System::Drawing::Size(71, 17);
			this->formula1Radio->TabIndex = 0;
			this->formula1Radio->TabStop = true;
			this->formula1Radio->Text = L"formula_1";
			this->formula1Radio->UseVisualStyleBackColor = true;
			// 
			// Method
			// 
			this->Method->Controls->Add(this->iterativeRadio);
			this->Method->Controls->Add(this->recursiveRadio);
			this->Method->Location = System::Drawing::Point(125, 134);
			this->Method->Name = L"Method";
			this->Method->Size = System::Drawing::Size(140, 81);
			this->Method->TabIndex = 2;
			this->Method->TabStop = false;
			this->Method->Text = L"Method";
			// 
			// iterativeRadio
			// 
			this->iterativeRadio->AutoSize = true;
			this->iterativeRadio->Location = System::Drawing::Point(6, 43);
			this->iterativeRadio->Name = L"iterativeRadio";
			this->iterativeRadio->Size = System::Drawing::Size(62, 17);
			this->iterativeRadio->TabIndex = 1;
			this->iterativeRadio->TabStop = true;
			this->iterativeRadio->Text = L"iterative";
			this->iterativeRadio->UseVisualStyleBackColor = true;
			// 
			// recursiveRadio
			// 
			this->recursiveRadio->AutoSize = true;
			this->recursiveRadio->Location = System::Drawing::Point(6, 19);
			this->recursiveRadio->Name = L"recursiveRadio";
			this->recursiveRadio->Size = System::Drawing::Size(68, 17);
			this->recursiveRadio->TabIndex = 0;
			this->recursiveRadio->TabStop = true;
			this->recursiveRadio->Text = L"recursive";
			this->recursiveRadio->UseVisualStyleBackColor = true;
			// 
			// inputN
			// 
			this->inputN->Location = System::Drawing::Point(130, 221);
			this->inputN->Name = L"inputN";
			this->inputN->Size = System::Drawing::Size(134, 20);
			this->inputN->TabIndex = 3;
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(145, 247);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(92, 23);
			this->calculateButton->TabIndex = 4;
			this->calculateButton->Text = L"calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &Room::calculateButton_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->resultLabel->Location = System::Drawing::Point(349, 88);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(100, 23);
			this->resultLabel->TabIndex = 5;
			// 
			// timeLabel
			// 
			this->timeLabel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->timeLabel->Location = System::Drawing::Point(351, 147);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(100, 23);
			this->timeLabel->TabIndex = 6;
			// 
			// callCountLabel
			// 
			this->callCountLabel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->callCountLabel->Location = System::Drawing::Point(349, 202);
			this->callCountLabel->Name = L"callCountLabel";
			this->callCountLabel->Size = System::Drawing::Size(100, 23);
			this->callCountLabel->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(349, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Итог программы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(351, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Скорость метода";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(340, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Колличество вызовов";
			// 
			// switchFormButton
			// 
			this->switchFormButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->switchFormButton->Location = System::Drawing::Point(512, 344);
			this->switchFormButton->Name = L"switchFormButton";
			this->switchFormButton->Size = System::Drawing::Size(102, 51);
			this->switchFormButton->TabIndex = 11;
			this->switchFormButton->Text = L"CASE_2";
			this->switchFormButton->UseVisualStyleBackColor = true;
			this->switchFormButton->Click += gcnew System::EventHandler(this, &Room::switchFormButton_Click);
			// 
			// switchFormula
			// 
			this->switchFormula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->switchFormula->Location = System::Drawing::Point(12, 344);
			this->switchFormula->Name = L"switchFormula";
			this->switchFormula->Size = System::Drawing::Size(102, 51);
			this->switchFormula->TabIndex = 12;
			this->switchFormula->Text = L"FORMULA";
			this->switchFormula->UseVisualStyleBackColor = true;
			this->switchFormula->Click += gcnew System::EventHandler(this, &Room::switchFormula_Click);
			// 
			// Room
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 407);
			this->Controls->Add(this->switchFormula);
			this->Controls->Add(this->switchFormButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->callCountLabel);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->inputN);
			this->Controls->Add(this->Method);
			this->Controls->Add(this->Formula);
			this->Name = L"Room";
			this->Text = L"Room";
			this->Formula->ResumeLayout(false);
			this->Formula->PerformLayout();
			this->Method->ResumeLayout(false);
			this->Method->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int n;
		try {
			n = Int32::Parse(inputN->Text);
		}
		catch (Exception^) {
			MessageBox::Show("Некорректный ввод! Введите целое число.", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (n < 1) {
			MessageBox::Show("Число должно быть натуральным (n >= 1).", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (formula1Radio->Checked) {
			MyFunctions::Cache::cacheF1->Clear();
		}
		else {
			MyFunctions::Cache::cacheF2->Clear();
		}

		int result = 0;
		double timeTaken = 0;
		int callCount = 0;

		bool useFormula1 = formula1Radio->Checked;
		bool useRecursive = recursiveRadio->Checked;

		auto start = std::chrono::high_resolution_clock::now();

		if (useFormula1) {
			result = useRecursive ? MyFunctions::recursiveF1(n, callCount) : MyFunctions::iterativeF1(n);
		}
		else {
			result = useRecursive ? MyFunctions::recursiveF2(n, callCount) : MyFunctions::iterativeF2(n);
		}

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;
		timeTaken = duration.count();

		resultLabel->Text = result.ToString();
		timeLabel->Text = timeTaken.ToString("F6") + " sec";
		callCountLabel->Text = useRecursive ? callCount.ToString() : "N/A";
	}
private: System::Void switchFormButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ReverseDigitsForm^ newForm1 = gcnew ReverseDigitsForm();
	newForm1->Show();
}
private: System::Void switchFormula_Click(System::Object^ sender, System::EventArgs^ e) {
	State^ newForm2 = gcnew State();
	newForm2->Show();
}
};
}
