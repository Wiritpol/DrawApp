#pragma once

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include "CameraForm.h"
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/opencv.hpp>

using namespace cv;
namespace MyFormApp {
	using namespace System::Runtime::InteropServices;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ imageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ convertHSVToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Drawing::Point^ startPoint;
	private: System::Drawing::Point^ endPoint;
	private: Bitmap^ tmpImage;
	private:
		enum class DrawState {
			NotDrawing,
			DrawLine, DrawingLine,
			DrawEllipse, DrawingEllipse,
			DrawTriangle, DrawingTriangle,
			DrawSquare, DrawingSquare,
			DrawCircleO,DrawingCircleO,
			FreeDraw, FreeDrawing
		} drawState;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ statusLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^ pixelPointLabel;
	private: System::Windows::Forms::ToolStripStatusLabel^ pixelColorLabel;


	private: System::Windows::Forms::ToolStripStatusLabel^ imageSizeLabel;
	private: System::Windows::Forms::ToolStripMenuItem^ convertToRGBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ convertToGrayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ GaussianBlurStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton9;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton10;






	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertHSVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToGrayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToRGBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GaussianBlurStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->statusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pixelPointLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pixelColorLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->imageSizeLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton10 = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->toolStripContainer1->BottomToolStripPanel->SuspendLayout();
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->imageToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(521, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 26);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(228, 30);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(228, 30);
			this->saveToolStripMenuItem->Text = L"&Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveAsToolStripMenuItem.Image")));
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(228, 30);
			this->saveAsToolStripMenuItem->Text = L"Save &As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(228, 30);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// imageToolStripMenuItem
			// 
			this->imageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->convertHSVToolStripMenuItem,
					this->convertToGrayToolStripMenuItem, this->convertToRGBToolStripMenuItem, this->GaussianBlurStripMenuItem, this->toolStripMenuItem1
			});
			this->imageToolStripMenuItem->Name = L"imageToolStripMenuItem";
			this->imageToolStripMenuItem->Size = System::Drawing::Size(65, 26);
			this->imageToolStripMenuItem->Text = L"&Image";
			// 
			// convertHSVToolStripMenuItem
			// 
			this->convertHSVToolStripMenuItem->Name = L"convertHSVToolStripMenuItem";
			this->convertHSVToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->convertHSVToolStripMenuItem->Text = L"RGB Convert to HSV";
			this->convertHSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::convertHSVToolStripMenuItem_Click);
			// 
			// convertToGrayToolStripMenuItem
			// 
			this->convertToGrayToolStripMenuItem->Name = L"convertToGrayToolStripMenuItem";
			this->convertToGrayToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->convertToGrayToolStripMenuItem->Text = L"RGB Convert to Gray";
			this->convertToGrayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::convertToGrayToolStripMenuItem_Click);
			// 
			// convertToRGBToolStripMenuItem
			// 
			this->convertToRGBToolStripMenuItem->Name = L"convertToRGBToolStripMenuItem";
			this->convertToRGBToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->convertToRGBToolStripMenuItem->Text = L"HSV Convert to RGB";
			this->convertToRGBToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::convertToRGBToolStripMenuItem_Click);
			// 
			// GaussianBlurStripMenuItem
			// 
			this->GaussianBlurStripMenuItem->Name = L"GaussianBlurStripMenuItem";
			this->GaussianBlurStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->GaussianBlurStripMenuItem->Text = L"Gaussian Blur";
			this->GaussianBlurStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::GaussianBlurStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(227, 26);
			this->toolStripMenuItem1->Text = L"Sharpening Filter";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.BottomToolStripPanel
			// 
			this->toolStripContainer1->BottomToolStripPanel->Controls->Add(this->statusStrip1);
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->pictureBox1);
			this->toolStripContainer1->ContentPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(521, 356);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(521, 443);
			this->toolStripContainer1->TabIndex = 1;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip1);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->statusLabel, this->pixelPointLabel,
					this->pixelColorLabel, this->imageSizeLabel
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 0);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(521, 26);
			this->statusStrip1->TabIndex = 0;
			// 
			// statusLabel
			// 
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(506, 20);
			this->statusLabel->Spring = true;
			this->statusLabel->Text = L"ToolStripStatusLabel1";
			// 
			// pixelPointLabel
			// 
			this->pixelPointLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pixelPointLabel.Image")));
			this->pixelPointLabel->Name = L"pixelPointLabel";
			this->pixelPointLabel->Size = System::Drawing::Size(53, 24);
			this->pixelPointLabel->Text = L"X,Y";
			this->pixelPointLabel->Visible = false;
			// 
			// pixelColorLabel
			// 
			this->pixelColorLabel->Name = L"pixelColorLabel";
			this->pixelColorLabel->Size = System::Drawing::Size(103, 24);
			this->pixelColorLabel->Text = L"RGB=[R, G, B] ";
			this->pixelColorLabel->Visible = false;
			// 
			// imageSizeLabel
			// 
			this->imageSizeLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageSizeLabel.Image")));
			this->imageSizeLabel->Name = L"imageSizeLabel";
			this->imageSizeLabel->Size = System::Drawing::Size(65, 24);
			this->imageSizeLabel->Text = L"WxH";
			this->imageSizeLabel->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(521, 356);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7,
					this->toolStripButton8, this->toolStripButton9, this->toolStripButton10
			});
			this->toolStrip1->Location = System::Drawing::Point(4, 30);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(303, 31);
			this->toolStrip1->TabIndex = 1;
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 28);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 28);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 28);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(29, 28);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 28);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 28);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(29, 28);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(29, 28);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton9.Image")));
			this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Size = System::Drawing::Size(29, 28);
			this->toolStripButton9->Text = L"toolStripButton9";
			this->toolStripButton9->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton9_Click);
			// 
			// toolStripButton10
			// 
			this->toolStripButton10->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton10.Image")));
			this->toolStripButton10->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton10->Name = L"toolStripButton10";
			this->toolStripButton10->Size = System::Drawing::Size(29, 28);
			this->toolStripButton10->Text = L"toolStripButton10";
			this->toolStripButton10->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton10_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Image files|*.jpg;*.png";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"png";
			this->saveFileDialog1->Filter = L"Image files|*.jpg;*.png";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 443);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStripContainer1->BottomToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->BottomToolStripPanel->PerformLayout();
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



	private:
		array<System::Drawing::Point>^ drawPoints;  // Use an array to store points
		int pointsCount;  // Keep track of the number of points
	private:
		Bitmap^ bmp; // Declare application bitmap image

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			Bitmap^ image = gcnew Bitmap(openFileDialog1->FileName);
			// Convert image to 24 bits RGB
			bmp = gcnew Bitmap(image->Size.Width, image->Size.Height, Imaging::PixelFormat::Format24bppRgb);
			bmp->SetResolution(image->HorizontalResolution, image->VerticalResolution);
			Graphics^ g = Graphics::FromImage(bmp);
			g->DrawImage(image, 0, 0);
			delete image;
			pictureBox1->Image = bmp;
			imageSizeLabel->Text = System::String::Format("{0}x{1}", bmp->Width, bmp->Height);
			imageSizeLabel->Visible = true;

		}
	}
	private: System::Void convertHSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function
		cvtColor(image, image, COLOR_BGR2HSV);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			bmp->Save(openFileDialog1->FileName);
		}

	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((bmp != nullptr) && (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)) {
			bmp->Save(saveFileDialog1->FileName);
		}

	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ image = gcnew Bitmap(openFileDialog1->FileName);
			// Convert image to 24 bits RGB
			bmp = gcnew Bitmap(image->Size.Width, image->Size.Height, Imaging::PixelFormat::Format24bppRgb);
			bmp->SetResolution(image->HorizontalResolution, image->VerticalResolution);
			Graphics^ g = Graphics::FromImage(bmp);
			g->DrawImage(image, 0, 0);
			delete image;
			pictureBox1->Image = bmp;
		}
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			bmp->Save(openFileDialog1->FileName);
		}
	}
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((bmp != nullptr) && (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)) {
			bmp->Save(saveFileDialog1->FileName);
		}
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, MouseEventArgs^ e) {
		if (bmp != nullptr) {
			switch (drawState) {
			case DrawState::DrawLine:
			case DrawState::DrawEllipse:
			case DrawState::DrawTriangle:
			case DrawState::DrawSquare:
			case DrawState::DrawCircleO:
			case DrawState::FreeDraw:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);

				break;
			}
		}
	}

	private: System::Void pictureBox1_MouseMove(System::Object^ sender, MouseEventArgs^ e) {
		if ((drawState == DrawState::FreeDraw) && (bmp != nullptr)) {
			if (startPoint != nullptr) {
				endPoint = gcnew System::Drawing::Point(e->X, e->Y);

				// Create a Graphics object from the bmp bitmap
				Graphics^ g = Graphics::FromImage(bmp);

				int radiusStart = 5;
				g->FillEllipse(gcnew SolidBrush(Color::Green), startPoint->X - radiusStart, startPoint->Y - radiusStart, 2 * radiusStart, 2 * radiusStart);
				float penWidth = 10.0f;  
				Pen^ pen = gcnew Pen(Color::Green, penWidth);
				g->DrawLine(pen, startPoint->X, startPoint->Y, endPoint->X, endPoint->Y);

				// Update the PictureBox to reflect the changes
				pictureBox1->Image = bmp;

				// Dispose of the Graphics object
				delete g;

				// Update startPoint for the next segment
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
			}
		}
	}


	private: System::Void pictureBox1_MouseUp(System::Object^ sender, MouseEventArgs^ e) {
	
		if ((drawState == DrawState::DrawLine) || (drawState == DrawState::DrawEllipse) || (drawState == DrawState::DrawTriangle) || (drawState == DrawState::DrawSquare) || (drawState == DrawState::DrawCircleO)) {
			// Your existing logic for predefined shapes
			endDrawShape(e);
		}

		// Clear the temporary image and update the display
		delete tmpImage;
		tmpImage = nullptr;

		// Reset startPoint and endPoint to nullptr
		startPoint = nullptr;
		endPoint = nullptr;

		// Reset drawState
		drawState = DrawState::NotDrawing;

		// Set cursor to default
		Cursor = Cursors::Default;
	}

		   // Helper function to end drawing a predefined shape
	private: void endDrawShape(MouseEventArgs^ e) {
		endPoint = gcnew System::Drawing::Point(e->X, e->Y);

		if (drawState == DrawState::DrawLine)
			drawState = DrawState::DrawingLine;
		else if (drawState == DrawState::DrawEllipse)
			drawState = DrawState::DrawingEllipse;
		else if (drawState == DrawState::DrawTriangle)
			drawState = DrawState::DrawingTriangle;
		else if (drawState == DrawState::DrawSquare)
			drawState = DrawState::DrawingSquare;
		else if (drawState == DrawState::DrawCircleO)
			drawState = DrawState::DrawingCircleO;

		if ((drawState == DrawState::DrawingLine) || (drawState == DrawState::DrawingEllipse) || (drawState == DrawState::DrawingTriangle) || (drawState == DrawState::DrawingSquare) || (drawState == DrawState::DrawingCircleO)) {
			if (tmpImage != nullptr) delete tmpImage;
			tmpImage = (Bitmap^)bmp->Clone();

			// Lock Bitmap Bits …
			Rectangle rect = Rectangle(0, 0, tmpImage->Width, tmpImage->Height);
			System::Drawing::Imaging::BitmapData^ bmpData =
				tmpImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, tmpImage->PixelFormat);

			// Do OpenCV function
			Mat image(tmpImage->Height, tmpImage->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			int dx, dy; // Move these variables here
			switch (drawState) {
			case DrawState::DrawingLine:
				line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(endPoint->X, endPoint->Y), CV_RGB(0, 255, 0));
				break;
			case DrawState::DrawingEllipse:
				dx = Math::Abs(startPoint->X - e->X); // Initialize dx here
				dy = Math::Abs(startPoint->Y - e->Y); // Initialize dy here
				ellipse(image, cv::Point(startPoint->X, startPoint->Y),
					cv::Size(dx, dy),
					Math::Atan2(dy, dx), 0, 360,
					CV_RGB(0, 255, 0));
				break;
			case DrawState::DrawingSquare: {
				int sideLength = Math::Max(Math::Abs(endPoint->X - startPoint->X), Math::Abs(endPoint->Y - startPoint->Y));
				int x = Math::Min(startPoint->X, endPoint->X);
				int y = Math::Min(startPoint->Y, endPoint->Y);
				rectangle(image, cv::Point(x, y), cv::Point(x + sideLength, y + sideLength), CV_RGB(0, 255, 0));
				break;
			}
			case DrawState::DrawingTriangle: {
				int x1 = startPoint->X;
				int y1 = startPoint->Y;
				int x2 = endPoint->X;
				int y2 = endPoint->Y;

				// Calculate the third vertex to form an equilateral triangle
				int x3 = x1 + (x2 - x1) / 2;
				int y3 = y1 - static_cast<int>((sqrt(3.0) / 2) * (x2 - x1));

				// Draw the three lines forming the triangle
				line(image, cv::Point(x1, y1), cv::Point(x2, y2), CV_RGB(0, 255, 0));
				line(image, cv::Point(x2, y2), cv::Point(x3, y3), CV_RGB(0, 255, 0));
				line(image, cv::Point(x3, y3), cv::Point(x1, y1), CV_RGB(0, 255, 0));
				break;
			}
			case DrawState::DrawingCircleO: {
				int radius = static_cast<int>(sqrt(pow(endPoint->X - startPoint->X, 2) + pow(endPoint->Y - startPoint->Y, 2)));
				circle(image, cv::Point(startPoint->X, startPoint->Y), radius, CV_RGB(0, 255, 0));
				break;
			}
			}
			// Unlock Bitmap Bits
			tmpImage->UnlockBits(bmpData);
			pictureBox1->Image = tmpImage;
			Graphics^ g = pictureBox1->CreateGraphics();
			g->DrawImage(tmpImage, 0, 0);
			delete g;

		}

		// Do not delete startPoint and endPoint here
		delete bmp; // Remove the previous image
		bmp = tmpImage;
		tmpImage = nullptr;
	}


	private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawLine;
			Cursor = Cursors::Cross;
		}
	}

	private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawEllipse;
			Cursor = Cursors::Cross;
		}
	}
	private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
		CameraForm^ cameraform = gcnew CameraForm();
		cameraform->ShowDialog();
	}
	private: System::Void convertToRGBToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);

		// Do OpenCV function
		cvtColor(image, image, COLOR_HSV2BGR);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result
	}
	private: System::Void convertToGrayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);

		// Convert image to grayscale manually
		for (int y = 0; y < image.rows; y++) {
			for (int x = 0; x < image.cols; x++) {
				Vec3b pixel = image.at<Vec3b>(y, x);
				uchar grayValue = static_cast<uchar>((pixel[0] + pixel[1] + pixel[2]) / 3); // Average of BGR values
				image.at<Vec3b>(y, x) = Vec3b(grayValue, grayValue, grayValue);
			}
		}
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result

	}
	private: System::Void GaussianBlurStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function

		GaussianBlur(image, image, cv::Size(3, 3), 0);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result

	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function

		Mat kernel3 = (Mat_<double>(3, 3) << 0, -1, 0,
			-1, 5, -1,
			0, -1, 0);

		filter2D(image, image, -1, kernel3, cv::Point(-1, -1), 0, BORDER_DEFAULT);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result
	}
	private: System::Void gToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawTriangle;
			Cursor = Cursors::Cross;
		}
	}
	private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawSquare;
			Cursor = Cursors::Cross;
		}
	}
	private: System::Void toolStripButton9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			drawState = DrawState::DrawCircleO;
			Cursor = Cursors::Cross;
		}
	}
private: System::Void toolStripButton10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		drawState = DrawState::FreeDraw;
		Cursor = Cursors::Cross;
	}
}
};
}
