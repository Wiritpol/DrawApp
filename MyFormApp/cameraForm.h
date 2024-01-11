#pragma once
#include "CameraForm.h"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
namespace MyFormApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class CameraForm : public System::Windows::Forms::Form
	{
	public:
		CameraForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CameraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	protected:

	private: System::Windows::Forms::Label^ captureWHLabel;
	private: System::Windows::Forms::Label^ captureFPSLabel;


	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button ^ importButton;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;



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
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->importButton = (gcnew System::Windows::Forms::Button());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->captureFPSLabel = (gcnew System::Windows::Forms::Label());
			this->captureWHLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->importButton);
			this->splitContainer1->Panel2->Controls->Add(this->startButton);
			this->splitContainer1->Panel2->Controls->Add(this->captureFPSLabel);
			this->splitContainer1->Panel2->Controls->Add(this->captureWHLabel);
			this->splitContainer1->Size = System::Drawing::Size(907, 574);
			this->splitContainer1->SplitterDistance = 573;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(573, 574);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// importButton
			// 
			this->importButton->Location = System::Drawing::Point(104, 510);
			this->importButton->Name = L"importButton";
			this->importButton->Size = System::Drawing::Size(88, 28);
			this->importButton->TabIndex = 3;
			this->importButton->UseVisualStyleBackColor = true;
			this->importButton->Visible = false;
			this->importButton->Click += gcnew System::EventHandler(this, &CameraForm::importButton_Click);
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(104, 459);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(80, 27);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &CameraForm::startButton_Click);
			// 
			// captureFPSLabel
			// 
			this->captureFPSLabel->AutoSize = true;
			this->captureFPSLabel->Location = System::Drawing::Point(17, 49);
			this->captureFPSLabel->Name = L"captureFPSLabel";
			this->captureFPSLabel->Size = System::Drawing::Size(102, 20);
			this->captureFPSLabel->TabIndex = 1;
			this->captureFPSLabel->Text = L"FPS:    label2";
			// 
			// captureWHLabel
			// 
			this->captureWHLabel->AutoSize = true;
			this->captureWHLabel->Location = System::Drawing::Point(17, 18);
			this->captureWHLabel->Name = L"captureWHLabel";
			this->captureWHLabel->Size = System::Drawing::Size(143, 20);
			this->captureWHLabel->TabIndex = 0;
			this->captureWHLabel->Text = L"Image Size:    WxH";
			// 
			// CameraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(907, 574);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"CameraForm";
			this->Text = L"CameraForm";
			this->Load += gcnew System::EventHandler(this, &CameraForm::CameraForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"png";
			this->saveFileDialog1->Filter = L"Image files|*.jpg;*.png";

		}
#pragma endregion
	private: System::Void CameraForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private:
		Bitmap^ bmp;
		bool isStart = false;
		bool isImport = false;
		
	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isStart) {
			isStart = false;
			startButton->Text = "Start";
			importButton->Text = "Import";
			importButton->Visible = true;
			isImport = true;
			return;
		}
		VideoCapture capture(0);// 0, cv::CAP_MSMF);
		while (!capture.isOpened());
		int capWidth = (int)capture.get(CAP_PROP_FRAME_WIDTH);
		int capHeight = (int)capture.get(CAP_PROP_FRAME_HEIGHT);
		int capFPS = (int)capture.get(CAP_PROP_FPS);
		captureWHLabel->Text = System::String::Format("{0:D}x{1:D}", capWidth, capHeight);
		captureFPSLabel->Text = System::String::Format("{0:D}", capFPS);
		isStart = true;
		bmp = gcnew Bitmap(capWidth, capHeight, Imaging::PixelFormat::Format24bppRgb);
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		startButton->Text = "Stop";
		importButton->Visible = false;
		
		while (isStart) {
			System::Drawing::Imaging::BitmapData^ bmpData = 
				bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			capture.read(image);
			// Unlock Bitmap Bits
			bmp->UnlockBits(bmpData);
			pictureBox1->Image = bmp;
			Application::DoEvents();
		}
	}
private: System::Void importButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((bmp != nullptr) && (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)) {
		bmp->Save(saveFileDialog1->FileName);
	}
	Close();
}
};
}
