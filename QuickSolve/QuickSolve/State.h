#pragma once

namespace QuickSolve {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Formula
	/// </summary>
	public ref class State : public System::Windows::Forms::Form
	{
	public:
		State(void)
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
		~State()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ formula1;
	protected:
	private: System::Windows::Forms::PictureBox^ formula2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ switchRoom;



	protected:

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(State::typeid));
			this->formula1 = (gcnew System::Windows::Forms::PictureBox());
			this->formula2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->switchRoom = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula2))->BeginInit();
			this->SuspendLayout();
			// 
			// formula1
			// 
			this->formula1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"formula1.Image")));
			this->formula1->Location = System::Drawing::Point(12, 239);
			this->formula1->Name = L"formula1";
			this->formula1->Size = System::Drawing::Size(571, 97);
			this->formula1->TabIndex = 0;
			this->formula1->TabStop = false;
			// 
			// formula2
			// 
			this->formula2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"formula2.Image")));
			this->formula2->Location = System::Drawing::Point(12, 66);
			this->formula2->Name = L"formula2";
			this->formula2->Size = System::Drawing::Size(571, 102);
			this->formula2->TabIndex = 1;
			this->formula2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Formula 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Formula 2";
			// 
			// switchRoom
			// 
			this->switchRoom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->switchRoom->Location = System::Drawing::Point(245, 377);
			this->switchRoom->Name = L"switchRoom";
			this->switchRoom->Size = System::Drawing::Size(102, 51);
			this->switchRoom->TabIndex = 13;
			this->switchRoom->Text = L"Return";
			this->switchRoom->UseVisualStyleBackColor = true;
			this->switchRoom->Click += gcnew System::EventHandler(this, &State::switchRoom_Click);
			// 
			// Formula
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 440);
			this->Controls->Add(this->switchRoom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->formula2);
			this->Controls->Add(this->formula1);
			this->Name = L"Formula";
			this->Text = L"Formula";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->formula2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void switchRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
