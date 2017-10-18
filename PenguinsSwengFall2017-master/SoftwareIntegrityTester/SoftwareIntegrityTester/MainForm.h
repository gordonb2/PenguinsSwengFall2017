#pragma once


namespace SoftwareIntegrityTester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		//store version numbers in a constant string
		String^ VERSION = "0.1.0";
		//the text that is displayed within the version pop-up window 
		String^ VERSIONTEXT = "\nPut Version Text Here";

		//the text that is displayed within the help pop-up window 
		String^ HELPTEXT = "\nPut Help Text Here";


	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			versionLabel->Text = "Version " + VERSION;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^  filterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Button^  openButton;

	private: System::Windows::Forms::Button^  runButton;

	private: System::Windows::Forms::Label^  versionLabel;
	private: System::Windows::Forms::ListBox^  fileList;





	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->filterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openButton = (gcnew System::Windows::Forms::Button());
			this->runButton = (gcnew System::Windows::Forms::Button());
			this->versionLabel = (gcnew System::Windows::Forms::Label());
			this->fileList = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->filterToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 4, 0, 4);
			this->menuStrip1->Size = System::Drawing::Size(716, 44);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// filterToolStripMenuItem
			// 
			this->filterToolStripMenuItem->Name = L"filterToolStripMenuItem";
			this->filterToolStripMenuItem->Size = System::Drawing::Size(80, 36);
			this->filterToolStripMenuItem->Text = L"Filter";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(77, 36);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::helpToolStripMenuItem_Click);
			// 
			// openButton
			// 
			this->openButton->Location = System::Drawing::Point(18, 552);
			this->openButton->Margin = System::Windows::Forms::Padding(4);
			this->openButton->Name = L"openButton";
			this->openButton->Size = System::Drawing::Size(180, 94);
			this->openButton->TabIndex = 1;
			this->openButton->Text = L"Open";
			this->openButton->UseVisualStyleBackColor = true;
			this->openButton->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// runButton
			// 
			this->runButton->Location = System::Drawing::Point(206, 552);
			this->runButton->Margin = System::Windows::Forms::Padding(4);
			this->runButton->Name = L"runButton";
			this->runButton->Size = System::Drawing::Size(180, 94);
			this->runButton->TabIndex = 2;
			this->runButton->Text = L"Run";
			this->runButton->UseVisualStyleBackColor = true;
			// 
			// versionLabel
			// 
			this->versionLabel->AutoSize = true;
			this->versionLabel->Location = System::Drawing::Point(594, 662);
			this->versionLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->versionLabel->Name = L"versionLabel";
			this->versionLabel->Size = System::Drawing::Size(85, 25);
			this->versionLabel->TabIndex = 4;
			this->versionLabel->Text = L"Version";
			// 
			// fileList
			// 
			this->fileList->FormattingEnabled = true;
			this->fileList->ItemHeight = 25;
			this->fileList->Location = System::Drawing::Point(18, 65);
			this->fileList->Margin = System::Windows::Forms::Padding(4);
			this->fileList->MultiColumn = true;
			this->fileList->Name = L"fileList";
			this->fileList->Size = System::Drawing::Size(685, 479);
			this->fileList->TabIndex = 5;
			this->fileList->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::fileList_SelectedIndexChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 654);
			this->Controls->Add(this->fileList);
			this->Controls->Add(this->versionLabel);
			this->Controls->Add(this->runButton);
			this->Controls->Add(this->openButton);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(742, 725);
			this->MinimumSize = System::Drawing::Size(742, 725);
			this->Name = L"MainForm";
			this->Text = L"Software Integrity Tester";
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		
		fileList->Items->Add(openFileDialog1->SafeFileName);
		
		
	}
	
	
	
}

private: System::Void MainForm_Shown(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(VERSION + VERSIONTEXT);
}
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(HELPTEXT);
}

private: System::Void fileList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
