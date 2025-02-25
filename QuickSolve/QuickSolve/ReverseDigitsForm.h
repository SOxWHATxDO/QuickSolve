#pragma once
#include <msclr/gcroot.h>
#include <Windows.h>

namespace QuickSolve {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ReverseDigitsForm
	/// </summary>
	public ref class ReverseDigitsForm : public System::Windows::Forms::Form
	{
	public:
		ReverseDigitsForm(void)
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
		~ReverseDigitsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ reverseButton;
	protected:
	private: System::Windows::Forms::Label^ outputLabel;
	private: System::Windows::Forms::TextBox^ inputN;
	private: System::Windows::Forms::Button^ backButton;

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
		void InitializeComponent() {
			this->inputN = (gcnew System::Windows::Forms::TextBox());
			this->reverseButton = (gcnew System::Windows::Forms::Button());
			this->outputLabel = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// inputN
			// 
			this->inputN->Location = System::Drawing::Point(190, 104);
			this->inputN->Name = L"inputN";
			this->inputN->Size = System::Drawing::Size(200, 20);
			this->inputN->TabIndex = 0;
			// 
			// reverseButton
			// 
			this->reverseButton->Location = System::Drawing::Point(190, 144);
			this->reverseButton->Name = L"reverseButton";
			this->reverseButton->Size = System::Drawing::Size(200, 30);
			this->reverseButton->TabIndex = 1;
			this->reverseButton->Text = L"Вывести цифры";
			this->reverseButton->Click += gcnew System::EventHandler(this, &ReverseDigitsForm::reverseButton_Click);
			// 
			// outputLabel
			// 
			this->outputLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->outputLabel->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->outputLabel->Location = System::Drawing::Point(190, 184);
			this->outputLabel->Name = L"outputLabel";
			this->outputLabel->Size = System::Drawing::Size(200, 100);
			this->outputLabel->TabIndex = 2;
			// 
			// backButton
			// 
			this->backButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->backButton->Location = System::Drawing::Point(13, 349);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(89, 41);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"Return";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &ReverseDigitsForm::backButton_Click);
			// 
			// ReverseDigitsForm
			// 
			this->ClientSize = System::Drawing::Size(578, 402);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->inputN);
			this->Controls->Add(this->reverseButton);
			this->Controls->Add(this->outputLabel);
			this->Name = L"ReverseDigitsForm";
			this->Text = L"Обратный порядок цифр";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void ReverseDigits(int n, StringBuilder^% result) {
			if (n == 0) return;
			result->Append((n % 10).ToString() + " ");
			ReverseDigits(n / 10, result);
		}
#pragma endregion
	private: System::Void reverseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int n = Int32::Parse(inputN->Text);
			if (n <= 0) throw gcnew ArgumentException();

			StringBuilder^ result = gcnew StringBuilder();
			ReverseDigits(n, result);
			outputLabel->Text = result->ToString();
		}
		catch (FormatException^) {
			MessageBox::Show("Ошибка: введите целое число!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (ArgumentException^) {
			MessageBox::Show("Число должно быть натуральным (n > 0)!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Неизвестная ошибка: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
