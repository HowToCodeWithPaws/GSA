#pragma once
#include <string>
#include <vector>
#include <random>
#include <float.h>
#include <fstream>
#include "GSA.cpp"

using namespace Algorithm;

namespace GSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			Load();
		}

		void Load(void)
		{
			listTextBoxesMin = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1Min, textBox2Min, textBox3Min, textBox4Min, textBox5Min, textBox6Min, textBox7Min, textBox8Min, textBox9Min, textBox10Min });
			listTextBoxesMax = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1Max, textBox2Max, textBox3Max, textBox4Max, textBox5Max, textBox6Max, textBox7Max, textBox8Max, textBox9Max, textBox10Max });
			listTextBoxesChosen = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1Chosen, textBox2Chosen, textBox3Chosen, textBox4Chosen, textBox5Chosen, textBox6Chosen, textBox7Chosen, textBox8Chosen, textBox9Chosen, textBox10Chosen });
			listTrack = gcnew List<TrackBar^>(gcnew array<TrackBar^>{ trackBar1, trackBar2, trackBar3, trackBar4, trackBar5, trackBar6, trackBar7, trackBar8, trackBar9, trackBar10 });
			listLabelDimensions = gcnew List<Label^>(gcnew array<Label^>{ labelDim1, labelDim2, labelDim3, labelDim4, labelDim5, labelDim6, labelDim7, labelDim8, labelDim9, labelDim10 });
			listCheckBoxes = gcnew List<CheckBox^>(gcnew array<CheckBox^>{ checkBoxDim1, checkBoxDim2, checkBoxDim3, checkBoxDim4, checkBoxDim5, checkBoxDim6, checkBoxDim7, checkBoxDim8, checkBoxDim9, checkBoxDim10 });

			listTextBoxesCoeffsA = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1A, textBox2A, textBox3A, textBox4A, textBox5A, textBox6A, textBox7A, textBox8A, textBox9A, textBox10A });
			listTextBoxesCoeffsB = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1B, textBox2B, textBox3B, textBox4B, textBox5B, textBox6B, textBox7B, textBox8B, textBox9B, textBox10B });
			listTextBoxesCoeffsC = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1C, textBox2C, textBox3C, textBox4C, textBox5C, textBox6C, textBox7C, textBox8C, textBox9C, textBox10C });
			listTextBoxesCoeffsD = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1D, textBox2D, textBox3D, textBox4D, textBox5D, textBox6D, textBox7D, textBox8D, textBox9D, textBox10D });
			listTextBoxesCoeffsE = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1E, textBox2E, textBox3E, textBox4E, textBox5E, textBox6E, textBox7E, textBox8E, textBox9E, textBox10E });
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

	private: System::Windows::Forms::ComboBox^ comboFunctions;
	private: System::Windows::Forms::ComboBox^ comboDimensionsNumber;
	private: System::Windows::Forms::ComboBox^ comboSpecialDimensionsNumber;
	private: System::Windows::Forms::ComboBox^ comboExtremum;
	private: System::Windows::Forms::ComboBox^ comboAgentsNumber;
	private: System::Windows::Forms::ComboBox^ comboConversionType;
	private: System::Windows::Forms::ComboBox^ comboConversion;

	private: System::Windows::Forms::Label^ labelFunction;
	private: System::Windows::Forms::Label^ labelDimensionsNumber;
	private: System::Windows::Forms::Label^ labelSpecialDimensionsNumber;
	private: System::Windows::Forms::Label^ labelExtremum;
	private: System::Windows::Forms::Label^ labelAgentsNumber;
	private: System::Windows::Forms::Label^ labelConversionType;
	private: System::Windows::Forms::Label^ labelConversion;

	private: System::Windows::Forms::Label^ labelCoeffs;
	private: System::Windows::Forms::Label^ labelDimensions;
	private: System::Windows::Forms::Label^ labelMin;
	private: System::Windows::Forms::Label^ labelMax;
	private: System::Windows::Forms::Label^ labelChosen;
	private: System::Windows::Forms::Label^ labelA;
	private: System::Windows::Forms::Label^ labelE;
	private: System::Windows::Forms::Label^ labelD;
	private: System::Windows::Forms::Label^ labelC;
	private: System::Windows::Forms::Label^ labelB;

		   List<TrackBar^>^ listTrack;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar10;
	private: System::Windows::Forms::TrackBar^ trackBar9;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::TrackBar^ trackBar7;
	private: System::Windows::Forms::TrackBar^ trackBar5;
	private: System::Windows::Forms::TrackBar^ trackBar4;
	private: System::Windows::Forms::TrackBar^ trackBar6;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::TrackBar^ trackBar8;

		   List<TextBox^>^ listTextBoxesMin;
	private: System::Windows::Forms::TextBox^ textBox1Min;
	private: System::Windows::Forms::TextBox^ textBox3Min;
	private: System::Windows::Forms::TextBox^ textBox4Min;
	private: System::Windows::Forms::TextBox^ textBox5Min;
	private: System::Windows::Forms::TextBox^ textBox2Min;
	private: System::Windows::Forms::TextBox^ textBox9Min;
	private: System::Windows::Forms::TextBox^ textBox7Min;
	private: System::Windows::Forms::TextBox^ textBox8Min;
	private: System::Windows::Forms::TextBox^ textBox10Min;
	private: System::Windows::Forms::TextBox^ textBox6Min;

		   List<TextBox^>^ listTextBoxesMax;
	private: System::Windows::Forms::TextBox^ textBox1Max;
	private: System::Windows::Forms::TextBox^ textBox8Max;
	private: System::Windows::Forms::TextBox^ textBox5Max;
	private: System::Windows::Forms::TextBox^ textBox6Max;
	private: System::Windows::Forms::TextBox^ textBox4Max;
	private: System::Windows::Forms::TextBox^ textBox3Max;
	private: System::Windows::Forms::TextBox^ textBox9Max;
	private: System::Windows::Forms::TextBox^ textBox10Max;
	private: System::Windows::Forms::TextBox^ textBox7Max;
	private: System::Windows::Forms::TextBox^ textBox2Max;

		   List<TextBox^>^ listTextBoxesChosen;
	private: System::Windows::Forms::TextBox^ textBox1Chosen;
	private: System::Windows::Forms::TextBox^ textBox8Chosen;
	private: System::Windows::Forms::TextBox^ textBox3Chosen;
	private: System::Windows::Forms::TextBox^ textBox4Chosen;
	private: System::Windows::Forms::TextBox^ textBox6Chosen;
	private: System::Windows::Forms::TextBox^ textBox7Chosen;
	private: System::Windows::Forms::TextBox^ textBox10Chosen;
	private: System::Windows::Forms::TextBox^ textBox5Chosen;
	private: System::Windows::Forms::TextBox^ textBox9Chosen;
	private: System::Windows::Forms::TextBox^ textBox2Chosen;

		   List<TextBox^>^ listTextBoxesCoeffsA;
		   List<TextBox^>^ listTextBoxesCoeffsB;
		   List<TextBox^>^ listTextBoxesCoeffsC;
		   List<TextBox^>^ listTextBoxesCoeffsD;
		   List<TextBox^>^ listTextBoxesCoeffsE;

	private: System::Windows::Forms::TextBox^ textBox1A;
	private: System::Windows::Forms::TextBox^ textBox1B;
	private: System::Windows::Forms::TextBox^ textBox1C;
	private: System::Windows::Forms::TextBox^ textBox1D;
	private: System::Windows::Forms::TextBox^ textBox1E;

	private: System::Windows::Forms::TextBox^ textBox2A;
	private: System::Windows::Forms::TextBox^ textBox2C;
	private: System::Windows::Forms::TextBox^ textBox2B;
	private: System::Windows::Forms::TextBox^ textBox2D;
	private: System::Windows::Forms::TextBox^ textBox2E;

	private: System::Windows::Forms::TextBox^ textBox3A;
	private: System::Windows::Forms::TextBox^ textBox3C;
	private: System::Windows::Forms::TextBox^ textBox3B;
	private: System::Windows::Forms::TextBox^ textBox3E;
	private: System::Windows::Forms::TextBox^ textBox3D;

	private: System::Windows::Forms::TextBox^ textBox4A;
	private: System::Windows::Forms::TextBox^ textBox4C;
	private: System::Windows::Forms::TextBox^ textBox4B;
	private: System::Windows::Forms::TextBox^ textBox4E;
	private: System::Windows::Forms::TextBox^ textBox4D;

	private: System::Windows::Forms::TextBox^ textBox5A;
	private: System::Windows::Forms::TextBox^ textBox5C;
	private: System::Windows::Forms::TextBox^ textBox5B;
	private: System::Windows::Forms::TextBox^ textBox5E;
	private: System::Windows::Forms::TextBox^ textBox5D;

	private: System::Windows::Forms::TextBox^ textBox10A;
	private: System::Windows::Forms::TextBox^ textBox10C;
	private: System::Windows::Forms::TextBox^ textBox10B;
	private: System::Windows::Forms::TextBox^ textBox10E;
	private: System::Windows::Forms::TextBox^ textBox10D;

	private: System::Windows::Forms::TextBox^ textBox9A;
	private: System::Windows::Forms::TextBox^ textBox9C;
	private: System::Windows::Forms::TextBox^ textBox9B;
	private: System::Windows::Forms::TextBox^ textBox9E;
	private: System::Windows::Forms::TextBox^ textBox9D;

	private: System::Windows::Forms::TextBox^ textBox8A;
	private: System::Windows::Forms::TextBox^ textBox8C;
	private: System::Windows::Forms::TextBox^ textBox8B;
	private: System::Windows::Forms::TextBox^ textBox8E;
	private: System::Windows::Forms::TextBox^ textBox8D;

	private: System::Windows::Forms::TextBox^ textBox7A;
	private: System::Windows::Forms::TextBox^ textBox7C;
	private: System::Windows::Forms::TextBox^ textBox7B;
	private: System::Windows::Forms::TextBox^ textBox7E;
	private: System::Windows::Forms::TextBox^ textBox7D;

	private: System::Windows::Forms::TextBox^ textBox6A;
	private: System::Windows::Forms::TextBox^ textBox6C;
	private: System::Windows::Forms::TextBox^ textBox6B;
	private: System::Windows::Forms::TextBox^ textBox6E;
	private: System::Windows::Forms::TextBox^ textBox6D;

		   List<Label^>^ listLabelDimensions;
	private: System::Windows::Forms::Label^ labelDim1;
	private: System::Windows::Forms::Label^ labelDim10;
	private: System::Windows::Forms::Label^ labelDim6;
	private: System::Windows::Forms::Label^ labelDim3;
	private: System::Windows::Forms::Label^ labelDim4;
	private: System::Windows::Forms::Label^ labelDim2;
	private: System::Windows::Forms::Label^ labelDim5;
	private: System::Windows::Forms::Label^ labelDim7;
	private: System::Windows::Forms::Label^ labelDim9;
	private: System::Windows::Forms::Label^ labelDim8;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::Label^ labelStatus;
	private: System::Windows::Forms::DataVisualization::Charting::Series^ series1;

		   System::Windows::Forms::Button^ buttonStart;
		   System::Windows::Forms::Button^ buttonStep;
		   System::Windows::Forms::Button^ buttonStop;
		   System::Windows::Forms::Button^ buttonApply;
		   System::Windows::Forms::Button^ buttonClear;

		   List<CheckBox^>^ listCheckBoxes;
	private: System::Windows::Forms::CheckBox^ checkBoxDim1;
	private: System::Windows::Forms::CheckBox^ checkBoxDim2;
	private: System::Windows::Forms::CheckBox^ checkBoxDim3;
	private: System::Windows::Forms::CheckBox^ checkBoxDim4;
	private: System::Windows::Forms::CheckBox^ checkBoxDim5;
	private: System::Windows::Forms::CheckBox^ checkBoxDim6;
	private: System::Windows::Forms::CheckBox^ checkBoxDim7;
	private: System::Windows::Forms::CheckBox^ checkBoxDim8;
	private: System::Windows::Forms::CheckBox^ checkBoxDim9;
	private: System::Windows::Forms::CheckBox^ checkBoxDim10;

		   List<bool>^ listMinSet;
		   List<bool>^ listMaxSet;
		   List<bool>^ listChosenSet;
		   List<bool>^ listASet;
		   List<bool>^ listBSet;
		   List<bool>^ listCSet;
		   List<bool>^ listDSet;
		   List<bool>^ listESet;
		   List<bool>^ listCheckedSet;

		   int function = -1;
		   int optimum_type = -1;
		   int conversion_type = -1;
		   int conversion = -1;
		   int number_agents = -1;
		   int number_checked = 0;
		   int number_dimensions = 0;
		   int number_special_dimensions = -1;

		   bool check1Enabled = false;
		   bool check2Enabled = false;
		   bool check3Enabled = false;
		   bool check4Enabled = false;
		   bool check5Enabled = false;
		   bool check6Enabled = false;
		   bool check7Enabled = false;
		   bool check8Enabled = false;
		   bool check9Enabled = false;
		   bool check10Enabled = false;

		   bool A1Set = false;
		   bool A2Set = false;
		   bool A3Set = false;
		   bool A4Set = false;
		   bool A5Set = false;
		   bool A6Set = false;
		   bool A7Set = false;
		   bool A8Set = false;
		   bool A9Set = false;
		   bool A10Set = false;

		   bool B1Set = false;
		   bool B2Set = false;
		   bool B3Set = false;
		   bool B4Set = false;
		   bool B5Set = false;
		   bool B6Set = false;
		   bool B7Set = false;
		   bool B8Set = false;
		   bool B9Set = false;
		   bool B10Set = false;

		   bool C1Set = false;
		   bool C2Set = false;
		   bool C3Set = false;
		   bool C4Set = false;
		   bool C5Set = false;
		   bool C6Set = false;
		   bool C7Set = false;
		   bool C8Set = false;
		   bool C9Set = false;
		   bool C10Set = false;

		   bool D1Set = false;
		   bool D2Set = false;
		   bool D3Set = false;
		   bool D4Set = false;
		   bool D5Set = false;
		   bool D6Set = false;
		   bool D7Set = false;
		   bool D8Set = false;
		   bool D9Set = false;
		   bool D10Set = false;

		   bool E1Set = false;
		   bool E2Set = false;
		   bool E3Set = false;
		   bool E4Set = false;
		   bool E5Set = false;
		   bool E6Set = false;
		   bool E7Set = false;
		   bool E8Set = false;
		   bool E9Set = false;
		   bool E10Set = false;

		   bool chosen1Set = false;
		   bool chosen2Set = false;
		   bool chosen3Set = false;
		   bool chosen4Set = false;
		   bool chosen5Set = false;
		   bool chosen6Set = false;
		   bool chosen7Set = false;
		   bool chosen8Set = false;
		   bool chosen9Set = false;
		   bool chosen10Set = false;
		   bool min1Set = false;
		   bool min2Set = false;
		   bool min3Set = false;
		   bool min4Set = false;
		   bool min5Set = false;
		   bool min6Set = false;
		   bool min7Set = false;
		   bool min8Set = false;
		   bool min9Set = false;
		   bool min10Set = false;
		   bool max1Set = false;
		   bool max2Set = false;
		   bool max3Set = false;
		   bool max4Set = false;
		   bool max5Set = false;
		   bool max6Set = false;
		   bool max7Set = false;
		   bool max8Set = false;
		   bool max9Set = false;
		   bool max10Set = false;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			this->series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1,
				L"5,10"));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				L"0,0"));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				L"3,3"));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint4 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				L"0,2"));
			this->comboFunctions = (gcnew System::Windows::Forms::ComboBox());
			this->comboExtremum = (gcnew System::Windows::Forms::ComboBox());
			this->labelFunction = (gcnew System::Windows::Forms::Label());
			this->labelExtremum = (gcnew System::Windows::Forms::Label());
			this->labelDimensionsNumber = (gcnew System::Windows::Forms::Label());
			this->comboDimensionsNumber = (gcnew System::Windows::Forms::ComboBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox1Max = (gcnew System::Windows::Forms::TextBox());
			this->textBox1Min = (gcnew System::Windows::Forms::TextBox());
			this->comboAgentsNumber = (gcnew System::Windows::Forms::ComboBox());
			this->labelAgentsNumber = (gcnew System::Windows::Forms::Label());
			this->labelConversionType = (gcnew System::Windows::Forms::Label());
			this->comboConversionType = (gcnew System::Windows::Forms::ComboBox());
			this->comboConversion = (gcnew System::Windows::Forms::ComboBox());
			this->labelConversion = (gcnew System::Windows::Forms::Label());
			this->comboSpecialDimensionsNumber = (gcnew System::Windows::Forms::ComboBox());
			this->labelSpecialDimensionsNumber = (gcnew System::Windows::Forms::Label());
			this->textBox1D = (gcnew System::Windows::Forms::TextBox());
			this->labelCoeffs = (gcnew System::Windows::Forms::Label());
			this->labelDimensions = (gcnew System::Windows::Forms::Label());
			this->textBox1Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox1E = (gcnew System::Windows::Forms::TextBox());
			this->textBox1C = (gcnew System::Windows::Forms::TextBox());
			this->textBox1B = (gcnew System::Windows::Forms::TextBox());
			this->textBox1A = (gcnew System::Windows::Forms::TextBox());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->labelMin = (gcnew System::Windows::Forms::Label());
			this->labelE = (gcnew System::Windows::Forms::Label());
			this->labelD = (gcnew System::Windows::Forms::Label());
			this->labelC = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->labelMax = (gcnew System::Windows::Forms::Label());
			this->labelChosen = (gcnew System::Windows::Forms::Label());
			this->textBox2A = (gcnew System::Windows::Forms::TextBox());
			this->textBox2C = (gcnew System::Windows::Forms::TextBox());
			this->textBox2B = (gcnew System::Windows::Forms::TextBox());
			this->textBox2E = (gcnew System::Windows::Forms::TextBox());
			this->textBox2Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox2D = (gcnew System::Windows::Forms::TextBox());
			this->textBox2Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox2Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox3A = (gcnew System::Windows::Forms::TextBox());
			this->textBox3C = (gcnew System::Windows::Forms::TextBox());
			this->textBox3B = (gcnew System::Windows::Forms::TextBox());
			this->textBox3E = (gcnew System::Windows::Forms::TextBox());
			this->textBox3Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox3D = (gcnew System::Windows::Forms::TextBox());
			this->textBox3Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox3Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox4A = (gcnew System::Windows::Forms::TextBox());
			this->textBox4C = (gcnew System::Windows::Forms::TextBox());
			this->textBox4B = (gcnew System::Windows::Forms::TextBox());
			this->textBox4E = (gcnew System::Windows::Forms::TextBox());
			this->textBox4Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox4D = (gcnew System::Windows::Forms::TextBox());
			this->textBox4Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox4Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox5A = (gcnew System::Windows::Forms::TextBox());
			this->textBox5C = (gcnew System::Windows::Forms::TextBox());
			this->textBox5B = (gcnew System::Windows::Forms::TextBox());
			this->textBox5E = (gcnew System::Windows::Forms::TextBox());
			this->textBox5Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox5D = (gcnew System::Windows::Forms::TextBox());
			this->textBox5Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox5Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox10A = (gcnew System::Windows::Forms::TextBox());
			this->textBox10C = (gcnew System::Windows::Forms::TextBox());
			this->textBox10B = (gcnew System::Windows::Forms::TextBox());
			this->textBox10E = (gcnew System::Windows::Forms::TextBox());
			this->textBox10Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox10D = (gcnew System::Windows::Forms::TextBox());
			this->textBox10Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox10Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar10 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox9A = (gcnew System::Windows::Forms::TextBox());
			this->textBox9C = (gcnew System::Windows::Forms::TextBox());
			this->textBox9B = (gcnew System::Windows::Forms::TextBox());
			this->textBox9E = (gcnew System::Windows::Forms::TextBox());
			this->textBox9Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox9D = (gcnew System::Windows::Forms::TextBox());
			this->textBox9Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox9Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar9 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox8A = (gcnew System::Windows::Forms::TextBox());
			this->textBox8C = (gcnew System::Windows::Forms::TextBox());
			this->textBox8B = (gcnew System::Windows::Forms::TextBox());
			this->textBox8E = (gcnew System::Windows::Forms::TextBox());
			this->textBox8Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox8D = (gcnew System::Windows::Forms::TextBox());
			this->textBox8Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox8Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar8 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox7A = (gcnew System::Windows::Forms::TextBox());
			this->textBox7C = (gcnew System::Windows::Forms::TextBox());
			this->textBox7B = (gcnew System::Windows::Forms::TextBox());
			this->textBox7E = (gcnew System::Windows::Forms::TextBox());
			this->textBox7Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox7D = (gcnew System::Windows::Forms::TextBox());
			this->textBox7Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox7Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox6A = (gcnew System::Windows::Forms::TextBox());
			this->textBox6C = (gcnew System::Windows::Forms::TextBox());
			this->textBox6B = (gcnew System::Windows::Forms::TextBox());
			this->textBox6E = (gcnew System::Windows::Forms::TextBox());
			this->textBox6Chosen = (gcnew System::Windows::Forms::TextBox());
			this->textBox6D = (gcnew System::Windows::Forms::TextBox());
			this->textBox6Min = (gcnew System::Windows::Forms::TextBox());
			this->textBox6Max = (gcnew System::Windows::Forms::TextBox());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->labelDim1 = (gcnew System::Windows::Forms::Label());
			this->labelDim10 = (gcnew System::Windows::Forms::Label());
			this->labelDim6 = (gcnew System::Windows::Forms::Label());
			this->labelDim3 = (gcnew System::Windows::Forms::Label());
			this->labelDim4 = (gcnew System::Windows::Forms::Label());
			this->labelDim2 = (gcnew System::Windows::Forms::Label());
			this->labelDim5 = (gcnew System::Windows::Forms::Label());
			this->labelDim7 = (gcnew System::Windows::Forms::Label());
			this->labelDim9 = (gcnew System::Windows::Forms::Label());
			this->labelDim8 = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->buttonStep = (gcnew System::Windows::Forms::Button());
			this->buttonStop = (gcnew System::Windows::Forms::Button());
			this->buttonApply = (gcnew System::Windows::Forms::Button());
			this->checkBoxDim1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDim10 = (gcnew System::Windows::Forms::CheckBox());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->labelStatus = (gcnew System::Windows::Forms::Label());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// comboFunctions
			// 
			this->comboFunctions->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboFunctions->Enabled = false;
			this->comboFunctions->FormattingEnabled = true;
			this->comboFunctions->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"y = x", L"y = x**2", L"opf" });
			this->comboFunctions->Location = System::Drawing::Point(519, 35);
			this->comboFunctions->Name = L"comboFunctions";
			this->comboFunctions->Size = System::Drawing::Size(90, 28);
			this->comboFunctions->TabIndex = 1;
			this->comboFunctions->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboFunctions_SelectedIndexChanged);
			// 
			// comboExtremum
			// 
			this->comboExtremum->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboExtremum->FormattingEnabled = true;
			this->comboExtremum->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"minimum", L"maximum" });
			this->comboExtremum->Location = System::Drawing::Point(615, 35);
			this->comboExtremum->Name = L"comboExtremum";
			this->comboExtremum->Size = System::Drawing::Size(111, 28);
			this->comboExtremum->TabIndex = 2;
			this->comboExtremum->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboExtremum_SelectedIndexChanged);
			// 
			// labelFunction
			// 
			this->labelFunction->AutoSize = true;
			this->labelFunction->Location = System::Drawing::Point(511, 13);
			this->labelFunction->MaximumSize = System::Drawing::Size(150, 40);
			this->labelFunction->Name = L"labelFunction";
			this->labelFunction->Size = System::Drawing::Size(66, 20);
			this->labelFunction->TabIndex = 3;
			this->labelFunction->Text = L"function";
			// 
			// labelExtremum
			// 
			this->labelExtremum->AutoSize = true;
			this->labelExtremum->Location = System::Drawing::Point(607, 12);
			this->labelExtremum->MaximumSize = System::Drawing::Size(150, 40);
			this->labelExtremum->Name = L"labelExtremum";
			this->labelExtremum->Size = System::Drawing::Size(104, 20);
			this->labelExtremum->TabIndex = 4;
			this->labelExtremum->Text = L"optimum type";
			// 
			// labelDimensionsNumber
			// 
			this->labelDimensionsNumber->AutoSize = true;
			this->labelDimensionsNumber->Location = System::Drawing::Point(373, 13);
			this->labelDimensionsNumber->MaximumSize = System::Drawing::Size(170, 40);
			this->labelDimensionsNumber->Name = L"labelDimensionsNumber";
			this->labelDimensionsNumber->Size = System::Drawing::Size(57, 20);
			this->labelDimensionsNumber->TabIndex = 5;
			this->labelDimensionsNumber->Text = L"N dims";
			// 
			// comboDimensionsNumber
			// 
			this->comboDimensionsNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboDimensionsNumber->FormattingEnabled = true;
			this->comboDimensionsNumber->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->comboDimensionsNumber->Location = System::Drawing::Point(378, 35);
			this->comboDimensionsNumber->Name = L"comboDimensionsNumber";
			this->comboDimensionsNumber->Size = System::Drawing::Size(56, 28);
			this->comboDimensionsNumber->TabIndex = 6;
			this->comboDimensionsNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboDimensionsNumber_SelectedIndexChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Enabled = false;
			this->trackBar1->Location = System::Drawing::Point(714, 114);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(196, 69);
			this->trackBar1->TabIndex = 7;
			this->trackBar1->Visible = false;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar1_Scroll);
			// 
			// textBox1Max
			// 
			this->textBox1Max->Location = System::Drawing::Point(904, 115);
			this->textBox1Max->Name = L"textBox1Max";
			this->textBox1Max->Size = System::Drawing::Size(40, 26);
			this->textBox1Max->TabIndex = 8;
			this->textBox1Max->Visible = false;
			this->textBox1Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1Max_TextChanged);
			// 
			// textBox1Min
			// 
			this->textBox1Min->Location = System::Drawing::Point(676, 114);
			this->textBox1Min->Name = L"textBox1Min";
			this->textBox1Min->Size = System::Drawing::Size(40, 26);
			this->textBox1Min->TabIndex = 9;
			this->textBox1Min->Visible = false;
			this->textBox1Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1Min_TextChanged);
			// 
			// comboAgentsNumber
			// 
			this->comboAgentsNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboAgentsNumber->FormattingEnabled = true;
			this->comboAgentsNumber->Items->AddRange(gcnew cli::array< System::Object^  >(100) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62",
					L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80",
					L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98",
					L"99", L"100"
			});
			this->comboAgentsNumber->Location = System::Drawing::Point(440, 35);
			this->comboAgentsNumber->Name = L"comboAgentsNumber";
			this->comboAgentsNumber->Size = System::Drawing::Size(73, 28);
			this->comboAgentsNumber->TabIndex = 11;
			this->comboAgentsNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboAgentsNumber_SelectedIndexChanged);
			// 
			// labelAgentsNumber
			// 
			this->labelAgentsNumber->AutoSize = true;
			this->labelAgentsNumber->Location = System::Drawing::Point(436, 13);
			this->labelAgentsNumber->MaximumSize = System::Drawing::Size(150, 40);
			this->labelAgentsNumber->Name = L"labelAgentsNumber";
			this->labelAgentsNumber->Size = System::Drawing::Size(73, 20);
			this->labelAgentsNumber->TabIndex = 10;
			this->labelAgentsNumber->Text = L"N agents";
			// 
			// labelConversionType
			// 
			this->labelConversionType->AutoSize = true;
			this->labelConversionType->Location = System::Drawing::Point(728, 12);
			this->labelConversionType->MaximumSize = System::Drawing::Size(150, 40);
			this->labelConversionType->Name = L"labelConversionType";
			this->labelConversionType->Size = System::Drawing::Size(119, 20);
			this->labelConversionType->TabIndex = 13;
			this->labelConversionType->Text = L"conversion type";
			// 
			// comboConversionType
			// 
			this->comboConversionType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboConversionType->FormattingEnabled = true;
			this->comboConversionType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"number of iterations", L"difference between iterations" });
			this->comboConversionType->Location = System::Drawing::Point(732, 35);
			this->comboConversionType->Name = L"comboConversionType";
			this->comboConversionType->Size = System::Drawing::Size(246, 28);
			this->comboConversionType->TabIndex = 12;
			this->comboConversionType->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboConversionType_SelectedIndexChanged);
			// 
			// comboConversion
			// 
			this->comboConversion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboConversion->FormattingEnabled = true;
			this->comboConversion->Location = System::Drawing::Point(984, 36);
			this->comboConversion->Name = L"comboConversion";
			this->comboConversion->Size = System::Drawing::Size(94, 28);
			this->comboConversion->TabIndex = 15;
			this->comboConversion->Visible = false;
			this->comboConversion->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboConversion_SelectedIndexChanged);
			// 
			// labelConversion
			// 
			this->labelConversion->AutoSize = true;
			this->labelConversion->Location = System::Drawing::Point(980, 13);
			this->labelConversion->MaximumSize = System::Drawing::Size(200, 40);
			this->labelConversion->Name = L"labelConversion";
			this->labelConversion->Size = System::Drawing::Size(85, 20);
			this->labelConversion->TabIndex = 14;
			this->labelConversion->Text = L"conversion";
			this->labelConversion->Visible = false;
			// 
			// comboSpecialDimensionsNumber
			// 
			this->comboSpecialDimensionsNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboSpecialDimensionsNumber->FormattingEnabled = true;
			this->comboSpecialDimensionsNumber->Location = System::Drawing::Point(1174, 36);
			this->comboSpecialDimensionsNumber->Name = L"comboSpecialDimensionsNumber";
			this->comboSpecialDimensionsNumber->Size = System::Drawing::Size(56, 28);
			this->comboSpecialDimensionsNumber->TabIndex = 17;
			this->comboSpecialDimensionsNumber->Visible = false;
			this->comboSpecialDimensionsNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboSpecialDimensionsNumber_SelectedIndexChanged);
			// 
			// labelSpecialDimensionsNumber
			// 
			this->labelSpecialDimensionsNumber->AutoSize = true;
			this->labelSpecialDimensionsNumber->Location = System::Drawing::Point(1170, 13);
			this->labelSpecialDimensionsNumber->MaximumSize = System::Drawing::Size(200, 40);
			this->labelSpecialDimensionsNumber->Name = L"labelSpecialDimensionsNumber";
			this->labelSpecialDimensionsNumber->Size = System::Drawing::Size(87, 20);
			this->labelSpecialDimensionsNumber->TabIndex = 16;
			this->labelSpecialDimensionsNumber->Text = L"N vp buses";
			this->labelSpecialDimensionsNumber->Visible = false;
			// 
			// textBox1D
			// 
			this->textBox1D->Location = System::Drawing::Point(1144, 114);
			this->textBox1D->Name = L"textBox1D";
			this->textBox1D->Size = System::Drawing::Size(40, 26);
			this->textBox1D->TabIndex = 18;
			this->textBox1D->Visible = false;
			this->textBox1D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1D_TextChanged);
			// 
			// labelCoeffs
			// 
			this->labelCoeffs->AutoSize = true;
			this->labelCoeffs->Location = System::Drawing::Point(994, 71);
			this->labelCoeffs->Name = L"labelCoeffs";
			this->labelCoeffs->Size = System::Drawing::Size(90, 20);
			this->labelCoeffs->TabIndex = 19;
			this->labelCoeffs->Text = L"coefficients";
			this->labelCoeffs->Visible = false;
			// 
			// labelDimensions
			// 
			this->labelDimensions->AutoSize = true;
			this->labelDimensions->Location = System::Drawing::Point(628, 71);
			this->labelDimensions->Name = L"labelDimensions";
			this->labelDimensions->Size = System::Drawing::Size(89, 20);
			this->labelDimensions->TabIndex = 20;
			this->labelDimensions->Text = L"dimensions";
			this->labelDimensions->Visible = false;
			// 
			// textBox1Chosen
			// 
			this->textBox1Chosen->Location = System::Drawing::Point(950, 114);
			this->textBox1Chosen->Name = L"textBox1Chosen";
			this->textBox1Chosen->ReadOnly = true;
			this->textBox1Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox1Chosen->TabIndex = 21;
			this->textBox1Chosen->Visible = false;
			this->textBox1Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1Chosen_TextChanged);
			// 
			// textBox1E
			// 
			this->textBox1E->Location = System::Drawing::Point(1190, 114);
			this->textBox1E->Name = L"textBox1E";
			this->textBox1E->Size = System::Drawing::Size(40, 26);
			this->textBox1E->TabIndex = 22;
			this->textBox1E->Visible = false;
			this->textBox1E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1E_TextChanged);
			// 
			// textBox1C
			// 
			this->textBox1C->Location = System::Drawing::Point(1098, 114);
			this->textBox1C->Name = L"textBox1C";
			this->textBox1C->Size = System::Drawing::Size(40, 26);
			this->textBox1C->TabIndex = 24;
			this->textBox1C->Visible = false;
			this->textBox1C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1C_TextChanged);
			// 
			// textBox1B
			// 
			this->textBox1B->Location = System::Drawing::Point(1053, 114);
			this->textBox1B->Name = L"textBox1B";
			this->textBox1B->Size = System::Drawing::Size(40, 26);
			this->textBox1B->TabIndex = 23;
			this->textBox1B->Visible = false;
			this->textBox1B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1B_TextChanged);
			// 
			// textBox1A
			// 
			this->textBox1A->Location = System::Drawing::Point(1010, 114);
			this->textBox1A->Name = L"textBox1A";
			this->textBox1A->Size = System::Drawing::Size(40, 26);
			this->textBox1A->TabIndex = 25;
			this->textBox1A->Visible = false;
			this->textBox1A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1A_TextChanged);
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Location = System::Drawing::Point(1022, 89);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(18, 20);
			this->labelA->TabIndex = 26;
			this->labelA->Text = L"a";
			this->labelA->Visible = false;
			// 
			// labelMin
			// 
			this->labelMin->AutoSize = true;
			this->labelMin->Location = System::Drawing::Point(672, 89);
			this->labelMin->Name = L"labelMin";
			this->labelMin->Size = System::Drawing::Size(34, 20);
			this->labelMin->TabIndex = 27;
			this->labelMin->Text = L"min";
			this->labelMin->Visible = false;
			// 
			// labelE
			// 
			this->labelE->AutoSize = true;
			this->labelE->Location = System::Drawing::Point(1202, 91);
			this->labelE->Name = L"labelE";
			this->labelE->Size = System::Drawing::Size(18, 20);
			this->labelE->TabIndex = 28;
			this->labelE->Text = L"e";
			this->labelE->Visible = false;
			// 
			// labelD
			// 
			this->labelD->AutoSize = true;
			this->labelD->Location = System::Drawing::Point(1152, 91);
			this->labelD->Name = L"labelD";
			this->labelD->Size = System::Drawing::Size(18, 20);
			this->labelD->TabIndex = 29;
			this->labelD->Text = L"d";
			this->labelD->Visible = false;
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Location = System::Drawing::Point(1106, 89);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(17, 20);
			this->labelC->TabIndex = 30;
			this->labelC->Text = L"c";
			this->labelC->Visible = false;
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Location = System::Drawing::Point(1060, 89);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(18, 20);
			this->labelB->TabIndex = 31;
			this->labelB->Text = L"b";
			this->labelB->Visible = false;
			// 
			// labelMax
			// 
			this->labelMax->AutoSize = true;
			this->labelMax->Location = System::Drawing::Point(904, 89);
			this->labelMax->Name = L"labelMax";
			this->labelMax->Size = System::Drawing::Size(38, 20);
			this->labelMax->TabIndex = 32;
			this->labelMax->Text = L"max";
			this->labelMax->Visible = false;
			// 
			// labelChosen
			// 
			this->labelChosen->AutoSize = true;
			this->labelChosen->Location = System::Drawing::Point(950, 89);
			this->labelChosen->Name = L"labelChosen";
			this->labelChosen->Size = System::Drawing::Size(61, 20);
			this->labelChosen->TabIndex = 33;
			this->labelChosen->Text = L"chosen";
			this->labelChosen->Visible = false;
			// 
			// textBox2A
			// 
			this->textBox2A->Location = System::Drawing::Point(1010, 174);
			this->textBox2A->Name = L"textBox2A";
			this->textBox2A->Size = System::Drawing::Size(40, 26);
			this->textBox2A->TabIndex = 42;
			this->textBox2A->Visible = false;
			this->textBox2A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2A_TextChanged);
			// 
			// textBox2C
			// 
			this->textBox2C->Location = System::Drawing::Point(1098, 174);
			this->textBox2C->Name = L"textBox2C";
			this->textBox2C->Size = System::Drawing::Size(40, 26);
			this->textBox2C->TabIndex = 41;
			this->textBox2C->Visible = false;
			this->textBox2C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2C_TextChanged);
			// 
			// textBox2B
			// 
			this->textBox2B->Location = System::Drawing::Point(1053, 174);
			this->textBox2B->Name = L"textBox2B";
			this->textBox2B->Size = System::Drawing::Size(40, 26);
			this->textBox2B->TabIndex = 40;
			this->textBox2B->Visible = false;
			this->textBox2B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2B_TextChanged);
			// 
			// textBox2E
			// 
			this->textBox2E->Location = System::Drawing::Point(1190, 174);
			this->textBox2E->Name = L"textBox2E";
			this->textBox2E->Size = System::Drawing::Size(40, 26);
			this->textBox2E->TabIndex = 39;
			this->textBox2E->Visible = false;
			this->textBox2E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2E_TextChanged);
			// 
			// textBox2Chosen
			// 
			this->textBox2Chosen->Location = System::Drawing::Point(950, 175);
			this->textBox2Chosen->Name = L"textBox2Chosen";
			this->textBox2Chosen->ReadOnly = true;
			this->textBox2Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox2Chosen->TabIndex = 38;
			this->textBox2Chosen->Visible = false;
			this->textBox2Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2Chosen_TextChanged);
			// 
			// textBox2D
			// 
			this->textBox2D->Location = System::Drawing::Point(1144, 174);
			this->textBox2D->Name = L"textBox2D";
			this->textBox2D->Size = System::Drawing::Size(40, 26);
			this->textBox2D->TabIndex = 37;
			this->textBox2D->Visible = false;
			this->textBox2D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2D_TextChanged);
			// 
			// textBox2Min
			// 
			this->textBox2Min->Location = System::Drawing::Point(676, 174);
			this->textBox2Min->Name = L"textBox2Min";
			this->textBox2Min->Size = System::Drawing::Size(40, 26);
			this->textBox2Min->TabIndex = 36;
			this->textBox2Min->Visible = false;
			this->textBox2Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2Min_TextChanged);
			// 
			// textBox2Max
			// 
			this->textBox2Max->Location = System::Drawing::Point(904, 175);
			this->textBox2Max->Name = L"textBox2Max";
			this->textBox2Max->Size = System::Drawing::Size(40, 26);
			this->textBox2Max->TabIndex = 35;
			this->textBox2Max->Visible = false;
			this->textBox2Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2Max_TextChanged);
			// 
			// trackBar2
			// 
			this->trackBar2->Enabled = false;
			this->trackBar2->Location = System::Drawing::Point(714, 174);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(196, 69);
			this->trackBar2->TabIndex = 34;
			this->trackBar2->Visible = false;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar2_Scroll);
			// 
			// textBox3A
			// 
			this->textBox3A->Location = System::Drawing::Point(1010, 229);
			this->textBox3A->Name = L"textBox3A";
			this->textBox3A->Size = System::Drawing::Size(40, 26);
			this->textBox3A->TabIndex = 51;
			this->textBox3A->Visible = false;
			this->textBox3A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3A_TextChanged);
			// 
			// textBox3C
			// 
			this->textBox3C->Location = System::Drawing::Point(1098, 229);
			this->textBox3C->Name = L"textBox3C";
			this->textBox3C->Size = System::Drawing::Size(40, 26);
			this->textBox3C->TabIndex = 50;
			this->textBox3C->Visible = false;
			this->textBox3C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3C_TextChanged);
			// 
			// textBox3B
			// 
			this->textBox3B->Location = System::Drawing::Point(1053, 229);
			this->textBox3B->Name = L"textBox3B";
			this->textBox3B->Size = System::Drawing::Size(40, 26);
			this->textBox3B->TabIndex = 49;
			this->textBox3B->Visible = false;
			this->textBox3B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3B_TextChanged);
			// 
			// textBox3E
			// 
			this->textBox3E->Location = System::Drawing::Point(1190, 229);
			this->textBox3E->Name = L"textBox3E";
			this->textBox3E->Size = System::Drawing::Size(40, 26);
			this->textBox3E->TabIndex = 48;
			this->textBox3E->Visible = false;
			this->textBox3E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3E_TextChanged);
			// 
			// textBox3Chosen
			// 
			this->textBox3Chosen->Location = System::Drawing::Point(950, 231);
			this->textBox3Chosen->Name = L"textBox3Chosen";
			this->textBox3Chosen->ReadOnly = true;
			this->textBox3Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox3Chosen->TabIndex = 47;
			this->textBox3Chosen->Visible = false;
			this->textBox3Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3Chosen_TextChanged);
			// 
			// textBox3D
			// 
			this->textBox3D->Location = System::Drawing::Point(1144, 229);
			this->textBox3D->Name = L"textBox3D";
			this->textBox3D->Size = System::Drawing::Size(40, 26);
			this->textBox3D->TabIndex = 46;
			this->textBox3D->Visible = false;
			this->textBox3D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3D_TextChanged);
			// 
			// textBox3Min
			// 
			this->textBox3Min->Location = System::Drawing::Point(676, 231);
			this->textBox3Min->Name = L"textBox3Min";
			this->textBox3Min->Size = System::Drawing::Size(40, 26);
			this->textBox3Min->TabIndex = 45;
			this->textBox3Min->Visible = false;
			this->textBox3Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3Min_TextChanged);
			// 
			// textBox3Max
			// 
			this->textBox3Max->Location = System::Drawing::Point(904, 231);
			this->textBox3Max->Name = L"textBox3Max";
			this->textBox3Max->Size = System::Drawing::Size(40, 26);
			this->textBox3Max->TabIndex = 44;
			this->textBox3Max->Visible = false;
			this->textBox3Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3Max_TextChanged);
			// 
			// trackBar3
			// 
			this->trackBar3->Enabled = false;
			this->trackBar3->Location = System::Drawing::Point(714, 231);
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(196, 69);
			this->trackBar3->TabIndex = 43;
			this->trackBar3->Visible = false;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar3_Scroll);
			// 
			// textBox4A
			// 
			this->textBox4A->Location = System::Drawing::Point(1010, 288);
			this->textBox4A->Name = L"textBox4A";
			this->textBox4A->Size = System::Drawing::Size(40, 26);
			this->textBox4A->TabIndex = 60;
			this->textBox4A->Visible = false;
			this->textBox4A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4A_TextChanged);
			// 
			// textBox4C
			// 
			this->textBox4C->Location = System::Drawing::Point(1098, 288);
			this->textBox4C->Name = L"textBox4C";
			this->textBox4C->Size = System::Drawing::Size(40, 26);
			this->textBox4C->TabIndex = 59;
			this->textBox4C->Visible = false;
			this->textBox4C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4C_TextChanged);
			// 
			// textBox4B
			// 
			this->textBox4B->Location = System::Drawing::Point(1053, 288);
			this->textBox4B->Name = L"textBox4B";
			this->textBox4B->Size = System::Drawing::Size(40, 26);
			this->textBox4B->TabIndex = 58;
			this->textBox4B->Visible = false;
			this->textBox4B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4B_TextChanged);
			// 
			// textBox4E
			// 
			this->textBox4E->Location = System::Drawing::Point(1190, 288);
			this->textBox4E->Name = L"textBox4E";
			this->textBox4E->Size = System::Drawing::Size(40, 26);
			this->textBox4E->TabIndex = 57;
			this->textBox4E->Visible = false;
			this->textBox4E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4E_TextChanged);
			// 
			// textBox4Chosen
			// 
			this->textBox4Chosen->Location = System::Drawing::Point(950, 288);
			this->textBox4Chosen->Name = L"textBox4Chosen";
			this->textBox4Chosen->ReadOnly = true;
			this->textBox4Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox4Chosen->TabIndex = 56;
			this->textBox4Chosen->Visible = false;
			this->textBox4Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4Chosen_TextChanged);
			// 
			// textBox4D
			// 
			this->textBox4D->Location = System::Drawing::Point(1144, 288);
			this->textBox4D->Name = L"textBox4D";
			this->textBox4D->Size = System::Drawing::Size(40, 26);
			this->textBox4D->TabIndex = 55;
			this->textBox4D->Visible = false;
			this->textBox4D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4D_TextChanged);
			// 
			// textBox4Min
			// 
			this->textBox4Min->Location = System::Drawing::Point(676, 288);
			this->textBox4Min->Name = L"textBox4Min";
			this->textBox4Min->Size = System::Drawing::Size(40, 26);
			this->textBox4Min->TabIndex = 54;
			this->textBox4Min->Visible = false;
			this->textBox4Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4Min_TextChanged);
			// 
			// textBox4Max
			// 
			this->textBox4Max->Location = System::Drawing::Point(904, 288);
			this->textBox4Max->Name = L"textBox4Max";
			this->textBox4Max->Size = System::Drawing::Size(40, 26);
			this->textBox4Max->TabIndex = 53;
			this->textBox4Max->Visible = false;
			this->textBox4Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4Max_TextChanged);
			// 
			// trackBar4
			// 
			this->trackBar4->Enabled = false;
			this->trackBar4->Location = System::Drawing::Point(714, 288);
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(196, 69);
			this->trackBar4->TabIndex = 52;
			this->trackBar4->Visible = false;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar4_Scroll);
			// 
			// textBox5A
			// 
			this->textBox5A->Location = System::Drawing::Point(1010, 345);
			this->textBox5A->Name = L"textBox5A";
			this->textBox5A->Size = System::Drawing::Size(40, 26);
			this->textBox5A->TabIndex = 69;
			this->textBox5A->Visible = false;
			this->textBox5A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5A_TextChanged);
			// 
			// textBox5C
			// 
			this->textBox5C->Location = System::Drawing::Point(1098, 345);
			this->textBox5C->Name = L"textBox5C";
			this->textBox5C->Size = System::Drawing::Size(40, 26);
			this->textBox5C->TabIndex = 68;
			this->textBox5C->Visible = false;
			this->textBox5C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5C_TextChanged);
			// 
			// textBox5B
			// 
			this->textBox5B->Location = System::Drawing::Point(1053, 345);
			this->textBox5B->Name = L"textBox5B";
			this->textBox5B->Size = System::Drawing::Size(40, 26);
			this->textBox5B->TabIndex = 67;
			this->textBox5B->Visible = false;
			this->textBox5B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5B_TextChanged);
			// 
			// textBox5E
			// 
			this->textBox5E->Location = System::Drawing::Point(1190, 345);
			this->textBox5E->Name = L"textBox5E";
			this->textBox5E->Size = System::Drawing::Size(40, 26);
			this->textBox5E->TabIndex = 66;
			this->textBox5E->Visible = false;
			this->textBox5E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5E_TextChanged);
			// 
			// textBox5Chosen
			// 
			this->textBox5Chosen->Location = System::Drawing::Point(950, 345);
			this->textBox5Chosen->Name = L"textBox5Chosen";
			this->textBox5Chosen->ReadOnly = true;
			this->textBox5Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox5Chosen->TabIndex = 65;
			this->textBox5Chosen->Visible = false;
			this->textBox5Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5Chosen_TextChanged);
			// 
			// textBox5D
			// 
			this->textBox5D->Location = System::Drawing::Point(1144, 345);
			this->textBox5D->Name = L"textBox5D";
			this->textBox5D->Size = System::Drawing::Size(40, 26);
			this->textBox5D->TabIndex = 64;
			this->textBox5D->Visible = false;
			this->textBox5D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5D_TextChanged);
			// 
			// textBox5Min
			// 
			this->textBox5Min->Location = System::Drawing::Point(676, 345);
			this->textBox5Min->Name = L"textBox5Min";
			this->textBox5Min->Size = System::Drawing::Size(40, 26);
			this->textBox5Min->TabIndex = 63;
			this->textBox5Min->Visible = false;
			this->textBox5Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5Min_TextChanged);
			// 
			// textBox5Max
			// 
			this->textBox5Max->Location = System::Drawing::Point(904, 345);
			this->textBox5Max->Name = L"textBox5Max";
			this->textBox5Max->Size = System::Drawing::Size(40, 26);
			this->textBox5Max->TabIndex = 62;
			this->textBox5Max->Visible = false;
			this->textBox5Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5Max_TextChanged);
			// 
			// trackBar5
			// 
			this->trackBar5->Enabled = false;
			this->trackBar5->Location = System::Drawing::Point(714, 345);
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(196, 69);
			this->trackBar5->TabIndex = 61;
			this->trackBar5->Visible = false;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar5_Scroll);
			// 
			// textBox10A
			// 
			this->textBox10A->Location = System::Drawing::Point(1010, 631);
			this->textBox10A->Name = L"textBox10A";
			this->textBox10A->Size = System::Drawing::Size(40, 26);
			this->textBox10A->TabIndex = 114;
			this->textBox10A->Visible = false;
			this->textBox10A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10A_TextChanged);
			// 
			// textBox10C
			// 
			this->textBox10C->Location = System::Drawing::Point(1098, 631);
			this->textBox10C->Name = L"textBox10C";
			this->textBox10C->Size = System::Drawing::Size(40, 26);
			this->textBox10C->TabIndex = 113;
			this->textBox10C->Visible = false;
			this->textBox10C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10C_TextChanged);
			// 
			// textBox10B
			// 
			this->textBox10B->Location = System::Drawing::Point(1053, 631);
			this->textBox10B->Name = L"textBox10B";
			this->textBox10B->Size = System::Drawing::Size(40, 26);
			this->textBox10B->TabIndex = 112;
			this->textBox10B->Visible = false;
			this->textBox10B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10B_TextChanged);
			// 
			// textBox10E
			// 
			this->textBox10E->Location = System::Drawing::Point(1190, 631);
			this->textBox10E->Name = L"textBox10E";
			this->textBox10E->Size = System::Drawing::Size(40, 26);
			this->textBox10E->TabIndex = 111;
			this->textBox10E->Visible = false;
			this->textBox10E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10E_TextChanged);
			// 
			// textBox10Chosen
			// 
			this->textBox10Chosen->Location = System::Drawing::Point(950, 631);
			this->textBox10Chosen->Name = L"textBox10Chosen";
			this->textBox10Chosen->ReadOnly = true;
			this->textBox10Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox10Chosen->TabIndex = 110;
			this->textBox10Chosen->Visible = false;
			this->textBox10Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10Chosen_TextChanged);
			// 
			// textBox10D
			// 
			this->textBox10D->Location = System::Drawing::Point(1144, 631);
			this->textBox10D->Name = L"textBox10D";
			this->textBox10D->Size = System::Drawing::Size(40, 26);
			this->textBox10D->TabIndex = 109;
			this->textBox10D->Visible = false;
			this->textBox10D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10D_TextChanged);
			// 
			// textBox10Min
			// 
			this->textBox10Min->Location = System::Drawing::Point(676, 631);
			this->textBox10Min->Name = L"textBox10Min";
			this->textBox10Min->Size = System::Drawing::Size(40, 26);
			this->textBox10Min->TabIndex = 108;
			this->textBox10Min->Visible = false;
			this->textBox10Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10Min_TextChanged);
			// 
			// textBox10Max
			// 
			this->textBox10Max->Location = System::Drawing::Point(904, 631);
			this->textBox10Max->Name = L"textBox10Max";
			this->textBox10Max->Size = System::Drawing::Size(40, 26);
			this->textBox10Max->TabIndex = 107;
			this->textBox10Max->Visible = false;
			this->textBox10Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10Max_TextChanged);
			// 
			// trackBar10
			// 
			this->trackBar10->Enabled = false;
			this->trackBar10->Location = System::Drawing::Point(714, 631);
			this->trackBar10->Name = L"trackBar10";
			this->trackBar10->Size = System::Drawing::Size(196, 69);
			this->trackBar10->TabIndex = 106;
			this->trackBar10->Visible = false;
			this->trackBar10->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar10_Scroll);
			// 
			// textBox9A
			// 
			this->textBox9A->Location = System::Drawing::Point(1010, 572);
			this->textBox9A->Name = L"textBox9A";
			this->textBox9A->Size = System::Drawing::Size(40, 26);
			this->textBox9A->TabIndex = 105;
			this->textBox9A->Visible = false;
			this->textBox9A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9A_TextChanged);
			// 
			// textBox9C
			// 
			this->textBox9C->Location = System::Drawing::Point(1098, 572);
			this->textBox9C->Name = L"textBox9C";
			this->textBox9C->Size = System::Drawing::Size(40, 26);
			this->textBox9C->TabIndex = 104;
			this->textBox9C->Visible = false;
			this->textBox9C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9C_TextChanged);
			// 
			// textBox9B
			// 
			this->textBox9B->Location = System::Drawing::Point(1053, 572);
			this->textBox9B->Name = L"textBox9B";
			this->textBox9B->Size = System::Drawing::Size(40, 26);
			this->textBox9B->TabIndex = 103;
			this->textBox9B->Visible = false;
			this->textBox9B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9B_TextChanged);
			// 
			// textBox9E
			// 
			this->textBox9E->Location = System::Drawing::Point(1190, 572);
			this->textBox9E->Name = L"textBox9E";
			this->textBox9E->Size = System::Drawing::Size(40, 26);
			this->textBox9E->TabIndex = 102;
			this->textBox9E->Visible = false;
			this->textBox9E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9E_TextChanged);
			// 
			// textBox9Chosen
			// 
			this->textBox9Chosen->Location = System::Drawing::Point(950, 574);
			this->textBox9Chosen->Name = L"textBox9Chosen";
			this->textBox9Chosen->ReadOnly = true;
			this->textBox9Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox9Chosen->TabIndex = 101;
			this->textBox9Chosen->Visible = false;
			this->textBox9Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9Chosen_TextChanged);
			// 
			// textBox9D
			// 
			this->textBox9D->Location = System::Drawing::Point(1144, 572);
			this->textBox9D->Name = L"textBox9D";
			this->textBox9D->Size = System::Drawing::Size(40, 26);
			this->textBox9D->TabIndex = 100;
			this->textBox9D->Visible = false;
			this->textBox9D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9D_TextChanged);
			// 
			// textBox9Min
			// 
			this->textBox9Min->Location = System::Drawing::Point(676, 572);
			this->textBox9Min->Name = L"textBox9Min";
			this->textBox9Min->Size = System::Drawing::Size(40, 26);
			this->textBox9Min->TabIndex = 99;
			this->textBox9Min->Visible = false;
			this->textBox9Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9Min_TextChanged);
			// 
			// textBox9Max
			// 
			this->textBox9Max->Location = System::Drawing::Point(904, 574);
			this->textBox9Max->Name = L"textBox9Max";
			this->textBox9Max->Size = System::Drawing::Size(40, 26);
			this->textBox9Max->TabIndex = 98;
			this->textBox9Max->Visible = false;
			this->textBox9Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9Max_TextChanged);
			// 
			// trackBar9
			// 
			this->trackBar9->Enabled = false;
			this->trackBar9->Location = System::Drawing::Point(714, 572);
			this->trackBar9->Name = L"trackBar9";
			this->trackBar9->Size = System::Drawing::Size(196, 69);
			this->trackBar9->TabIndex = 97;
			this->trackBar9->Visible = false;
			this->trackBar9->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar9_Scroll);
			// 
			// textBox8A
			// 
			this->textBox8A->Location = System::Drawing::Point(1010, 515);
			this->textBox8A->Name = L"textBox8A";
			this->textBox8A->Size = System::Drawing::Size(40, 26);
			this->textBox8A->TabIndex = 96;
			this->textBox8A->Visible = false;
			this->textBox8A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8A_TextChanged);
			// 
			// textBox8C
			// 
			this->textBox8C->Location = System::Drawing::Point(1098, 515);
			this->textBox8C->Name = L"textBox8C";
			this->textBox8C->Size = System::Drawing::Size(40, 26);
			this->textBox8C->TabIndex = 95;
			this->textBox8C->Visible = false;
			this->textBox8C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8C_TextChanged);
			// 
			// textBox8B
			// 
			this->textBox8B->Location = System::Drawing::Point(1053, 515);
			this->textBox8B->Name = L"textBox8B";
			this->textBox8B->Size = System::Drawing::Size(40, 26);
			this->textBox8B->TabIndex = 94;
			this->textBox8B->Visible = false;
			this->textBox8B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8B_TextChanged);
			// 
			// textBox8E
			// 
			this->textBox8E->Location = System::Drawing::Point(1190, 515);
			this->textBox8E->Name = L"textBox8E";
			this->textBox8E->Size = System::Drawing::Size(40, 26);
			this->textBox8E->TabIndex = 93;
			this->textBox8E->Visible = false;
			this->textBox8E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8E_TextChanged);
			// 
			// textBox8Chosen
			// 
			this->textBox8Chosen->Location = System::Drawing::Point(950, 517);
			this->textBox8Chosen->Name = L"textBox8Chosen";
			this->textBox8Chosen->ReadOnly = true;
			this->textBox8Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox8Chosen->TabIndex = 92;
			this->textBox8Chosen->Visible = false;
			this->textBox8Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8Chosen_TextChanged);
			// 
			// textBox8D
			// 
			this->textBox8D->Location = System::Drawing::Point(1144, 515);
			this->textBox8D->Name = L"textBox8D";
			this->textBox8D->Size = System::Drawing::Size(40, 26);
			this->textBox8D->TabIndex = 91;
			this->textBox8D->Visible = false;
			this->textBox8D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8D_TextChanged);
			// 
			// textBox8Min
			// 
			this->textBox8Min->Location = System::Drawing::Point(676, 515);
			this->textBox8Min->Name = L"textBox8Min";
			this->textBox8Min->Size = System::Drawing::Size(40, 26);
			this->textBox8Min->TabIndex = 90;
			this->textBox8Min->Visible = false;
			this->textBox8Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8Min_TextChanged);
			// 
			// textBox8Max
			// 
			this->textBox8Max->Location = System::Drawing::Point(904, 517);
			this->textBox8Max->Name = L"textBox8Max";
			this->textBox8Max->Size = System::Drawing::Size(40, 26);
			this->textBox8Max->TabIndex = 89;
			this->textBox8Max->Visible = false;
			this->textBox8Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8Max_TextChanged);
			// 
			// trackBar8
			// 
			this->trackBar8->Enabled = false;
			this->trackBar8->Location = System::Drawing::Point(714, 515);
			this->trackBar8->Name = L"trackBar8";
			this->trackBar8->Size = System::Drawing::Size(196, 69);
			this->trackBar8->TabIndex = 88;
			this->trackBar8->Visible = false;
			this->trackBar8->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar8_Scroll);
			// 
			// textBox7A
			// 
			this->textBox7A->Location = System::Drawing::Point(1010, 460);
			this->textBox7A->Name = L"textBox7A";
			this->textBox7A->Size = System::Drawing::Size(40, 26);
			this->textBox7A->TabIndex = 87;
			this->textBox7A->Visible = false;
			this->textBox7A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7A_TextChanged);
			// 
			// textBox7C
			// 
			this->textBox7C->Location = System::Drawing::Point(1098, 460);
			this->textBox7C->Name = L"textBox7C";
			this->textBox7C->Size = System::Drawing::Size(40, 26);
			this->textBox7C->TabIndex = 86;
			this->textBox7C->Visible = false;
			this->textBox7C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7C_TextChanged);
			// 
			// textBox7B
			// 
			this->textBox7B->Location = System::Drawing::Point(1053, 460);
			this->textBox7B->Name = L"textBox7B";
			this->textBox7B->Size = System::Drawing::Size(40, 26);
			this->textBox7B->TabIndex = 85;
			this->textBox7B->Visible = false;
			this->textBox7B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7B_TextChanged);
			// 
			// textBox7E
			// 
			this->textBox7E->Location = System::Drawing::Point(1190, 460);
			this->textBox7E->Name = L"textBox7E";
			this->textBox7E->Size = System::Drawing::Size(40, 26);
			this->textBox7E->TabIndex = 84;
			this->textBox7E->Visible = false;
			this->textBox7E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7E_TextChanged);
			// 
			// textBox7Chosen
			// 
			this->textBox7Chosen->Location = System::Drawing::Point(950, 462);
			this->textBox7Chosen->Name = L"textBox7Chosen";
			this->textBox7Chosen->ReadOnly = true;
			this->textBox7Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox7Chosen->TabIndex = 83;
			this->textBox7Chosen->Visible = false;
			this->textBox7Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7Chosen_TextChanged);
			// 
			// textBox7D
			// 
			this->textBox7D->Location = System::Drawing::Point(1144, 460);
			this->textBox7D->Name = L"textBox7D";
			this->textBox7D->Size = System::Drawing::Size(40, 26);
			this->textBox7D->TabIndex = 82;
			this->textBox7D->Visible = false;
			this->textBox7D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7D_TextChanged);
			// 
			// textBox7Min
			// 
			this->textBox7Min->Location = System::Drawing::Point(676, 460);
			this->textBox7Min->Name = L"textBox7Min";
			this->textBox7Min->Size = System::Drawing::Size(40, 26);
			this->textBox7Min->TabIndex = 81;
			this->textBox7Min->Visible = false;
			this->textBox7Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7Min_TextChanged);
			// 
			// textBox7Max
			// 
			this->textBox7Max->Location = System::Drawing::Point(904, 462);
			this->textBox7Max->Name = L"textBox7Max";
			this->textBox7Max->Size = System::Drawing::Size(40, 26);
			this->textBox7Max->TabIndex = 80;
			this->textBox7Max->Visible = false;
			this->textBox7Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7Max_TextChanged);
			// 
			// trackBar7
			// 
			this->trackBar7->Enabled = false;
			this->trackBar7->Location = System::Drawing::Point(714, 460);
			this->trackBar7->Name = L"trackBar7";
			this->trackBar7->Size = System::Drawing::Size(196, 69);
			this->trackBar7->TabIndex = 79;
			this->trackBar7->Visible = false;
			this->trackBar7->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar7_Scroll);
			// 
			// textBox6A
			// 
			this->textBox6A->Location = System::Drawing::Point(1010, 400);
			this->textBox6A->Name = L"textBox6A";
			this->textBox6A->Size = System::Drawing::Size(40, 26);
			this->textBox6A->TabIndex = 78;
			this->textBox6A->Visible = false;
			this->textBox6A->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6A_TextChanged);
			// 
			// textBox6C
			// 
			this->textBox6C->Location = System::Drawing::Point(1098, 400);
			this->textBox6C->Name = L"textBox6C";
			this->textBox6C->Size = System::Drawing::Size(40, 26);
			this->textBox6C->TabIndex = 77;
			this->textBox6C->Visible = false;
			this->textBox6C->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6C_TextChanged);
			// 
			// textBox6B
			// 
			this->textBox6B->Location = System::Drawing::Point(1053, 400);
			this->textBox6B->Name = L"textBox6B";
			this->textBox6B->Size = System::Drawing::Size(40, 26);
			this->textBox6B->TabIndex = 76;
			this->textBox6B->Visible = false;
			this->textBox6B->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6B_TextChanged);
			// 
			// textBox6E
			// 
			this->textBox6E->Location = System::Drawing::Point(1190, 400);
			this->textBox6E->Name = L"textBox6E";
			this->textBox6E->Size = System::Drawing::Size(40, 26);
			this->textBox6E->TabIndex = 75;
			this->textBox6E->Visible = false;
			this->textBox6E->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6E_TextChanged);
			// 
			// textBox6Chosen
			// 
			this->textBox6Chosen->Location = System::Drawing::Point(950, 402);
			this->textBox6Chosen->Name = L"textBox6Chosen";
			this->textBox6Chosen->ReadOnly = true;
			this->textBox6Chosen->Size = System::Drawing::Size(40, 26);
			this->textBox6Chosen->TabIndex = 74;
			this->textBox6Chosen->Visible = false;
			this->textBox6Chosen->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6Chosen_TextChanged);
			// 
			// textBox6D
			// 
			this->textBox6D->Location = System::Drawing::Point(1144, 400);
			this->textBox6D->Name = L"textBox6D";
			this->textBox6D->Size = System::Drawing::Size(40, 26);
			this->textBox6D->TabIndex = 73;
			this->textBox6D->Visible = false;
			this->textBox6D->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6D_TextChanged);
			// 
			// textBox6Min
			// 
			this->textBox6Min->Location = System::Drawing::Point(676, 400);
			this->textBox6Min->Name = L"textBox6Min";
			this->textBox6Min->Size = System::Drawing::Size(40, 26);
			this->textBox6Min->TabIndex = 72;
			this->textBox6Min->Visible = false;
			this->textBox6Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6Min_TextChanged);
			// 
			// textBox6Max
			// 
			this->textBox6Max->Location = System::Drawing::Point(904, 402);
			this->textBox6Max->Name = L"textBox6Max";
			this->textBox6Max->Size = System::Drawing::Size(40, 26);
			this->textBox6Max->TabIndex = 71;
			this->textBox6Max->Visible = false;
			this->textBox6Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6Max_TextChanged);
			// 
			// trackBar6
			// 
			this->trackBar6->Enabled = false;
			this->trackBar6->Location = System::Drawing::Point(714, 400);
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(196, 69);
			this->trackBar6->TabIndex = 70;
			this->trackBar6->Visible = false;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar6_Scroll);
			// 
			// labelDim1
			// 
			this->labelDim1->AutoSize = true;
			this->labelDim1->Location = System::Drawing::Point(628, 120);
			this->labelDim1->Name = L"labelDim1";
			this->labelDim1->Size = System::Drawing::Size(18, 20);
			this->labelDim1->TabIndex = 115;
			this->labelDim1->Text = L"1";
			this->labelDim1->Visible = false;
			// 
			// labelDim10
			// 
			this->labelDim10->AutoSize = true;
			this->labelDim10->Location = System::Drawing::Point(620, 635);
			this->labelDim10->Name = L"labelDim10";
			this->labelDim10->Size = System::Drawing::Size(27, 20);
			this->labelDim10->TabIndex = 116;
			this->labelDim10->Text = L"10";
			this->labelDim10->Visible = false;
			// 
			// labelDim6
			// 
			this->labelDim6->AutoSize = true;
			this->labelDim6->Location = System::Drawing::Point(628, 406);
			this->labelDim6->Name = L"labelDim6";
			this->labelDim6->Size = System::Drawing::Size(18, 20);
			this->labelDim6->TabIndex = 117;
			this->labelDim6->Text = L"6";
			this->labelDim6->Visible = false;
			// 
			// labelDim3
			// 
			this->labelDim3->AutoSize = true;
			this->labelDim3->Location = System::Drawing::Point(628, 235);
			this->labelDim3->Name = L"labelDim3";
			this->labelDim3->Size = System::Drawing::Size(18, 20);
			this->labelDim3->TabIndex = 118;
			this->labelDim3->Text = L"3";
			this->labelDim3->Visible = false;
			// 
			// labelDim4
			// 
			this->labelDim4->AutoSize = true;
			this->labelDim4->Location = System::Drawing::Point(628, 292);
			this->labelDim4->Name = L"labelDim4";
			this->labelDim4->Size = System::Drawing::Size(18, 20);
			this->labelDim4->TabIndex = 119;
			this->labelDim4->Text = L"4";
			this->labelDim4->Visible = false;
			// 
			// labelDim2
			// 
			this->labelDim2->AutoSize = true;
			this->labelDim2->Location = System::Drawing::Point(628, 180);
			this->labelDim2->Name = L"labelDim2";
			this->labelDim2->Size = System::Drawing::Size(18, 20);
			this->labelDim2->TabIndex = 120;
			this->labelDim2->Text = L"2";
			this->labelDim2->Visible = false;
			// 
			// labelDim5
			// 
			this->labelDim5->AutoSize = true;
			this->labelDim5->Location = System::Drawing::Point(628, 349);
			this->labelDim5->Name = L"labelDim5";
			this->labelDim5->Size = System::Drawing::Size(18, 20);
			this->labelDim5->TabIndex = 121;
			this->labelDim5->Text = L"5";
			this->labelDim5->Visible = false;
			// 
			// labelDim7
			// 
			this->labelDim7->AutoSize = true;
			this->labelDim7->Location = System::Drawing::Point(628, 466);
			this->labelDim7->Name = L"labelDim7";
			this->labelDim7->Size = System::Drawing::Size(18, 20);
			this->labelDim7->TabIndex = 122;
			this->labelDim7->Text = L"7";
			this->labelDim7->Visible = false;
			// 
			// labelDim9
			// 
			this->labelDim9->AutoSize = true;
			this->labelDim9->Location = System::Drawing::Point(628, 578);
			this->labelDim9->Name = L"labelDim9";
			this->labelDim9->Size = System::Drawing::Size(18, 20);
			this->labelDim9->TabIndex = 123;
			this->labelDim9->Text = L"9";
			this->labelDim9->Visible = false;
			// 
			// labelDim8
			// 
			this->labelDim8->AutoSize = true;
			this->labelDim8->Location = System::Drawing::Point(628, 522);
			this->labelDim8->Name = L"labelDim8";
			this->labelDim8->Size = System::Drawing::Size(18, 20);
			this->labelDim8->TabIndex = 124;
			this->labelDim8->Text = L"8";
			this->labelDim8->Visible = false;
			// 
			// buttonStart
			// 
			this->buttonStart->Enabled = false;
			this->buttonStart->Location = System::Drawing::Point(88, 36);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(56, 32);
			this->buttonStart->TabIndex = 126;
			this->buttonStart->Text = L"start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MainForm::buttonStart_Click);
			// 
			// buttonStep
			// 
			this->buttonStep->Enabled = false;
			this->buttonStep->Location = System::Drawing::Point(150, 36);
			this->buttonStep->Name = L"buttonStep";
			this->buttonStep->Size = System::Drawing::Size(56, 32);
			this->buttonStep->TabIndex = 127;
			this->buttonStep->Text = L"step";
			this->buttonStep->UseVisualStyleBackColor = true;
			this->buttonStep->Click += gcnew System::EventHandler(this, &MainForm::buttonStep_Click);
			// 
			// buttonStop
			// 
			this->buttonStop->Enabled = false;
			this->buttonStop->Location = System::Drawing::Point(212, 36);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(56, 32);
			this->buttonStop->TabIndex = 128;
			this->buttonStop->Text = L"stop";
			this->buttonStop->UseVisualStyleBackColor = true;
			this->buttonStop->Click += gcnew System::EventHandler(this, &MainForm::buttonStop_Click);
			// 
			// buttonApply
			// 
			this->buttonApply->Location = System::Drawing::Point(16, 36);
			this->buttonApply->Name = L"buttonApply";
			this->buttonApply->Size = System::Drawing::Size(60, 32);
			this->buttonApply->TabIndex = 129;
			this->buttonApply->Text = L"apply";
			this->buttonApply->UseVisualStyleBackColor = true;
			this->buttonApply->Click += gcnew System::EventHandler(this, &MainForm::buttonApply_Click);
			// 
			// checkBoxDim1
			// 
			this->checkBoxDim1->AutoSize = true;
			this->checkBoxDim1->Enabled = false;
			this->checkBoxDim1->Location = System::Drawing::Point(650, 120);
			this->checkBoxDim1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim1->Name = L"checkBoxDim1";
			this->checkBoxDim1->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim1->TabIndex = 130;
			this->checkBoxDim1->UseVisualStyleBackColor = true;
			this->checkBoxDim1->Visible = false;
			this->checkBoxDim1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim1_CheckedChanged);
			// 
			// checkBoxDim2
			// 
			this->checkBoxDim2->AutoSize = true;
			this->checkBoxDim2->Enabled = false;
			this->checkBoxDim2->Location = System::Drawing::Point(650, 180);
			this->checkBoxDim2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim2->Name = L"checkBoxDim2";
			this->checkBoxDim2->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim2->TabIndex = 131;
			this->checkBoxDim2->UseVisualStyleBackColor = true;
			this->checkBoxDim2->Visible = false;
			this->checkBoxDim2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim2_CheckedChanged);
			// 
			// checkBoxDim3
			// 
			this->checkBoxDim3->AutoSize = true;
			this->checkBoxDim3->Enabled = false;
			this->checkBoxDim3->Location = System::Drawing::Point(650, 235);
			this->checkBoxDim3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim3->Name = L"checkBoxDim3";
			this->checkBoxDim3->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim3->TabIndex = 132;
			this->checkBoxDim3->UseVisualStyleBackColor = true;
			this->checkBoxDim3->Visible = false;
			this->checkBoxDim3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim3_CheckedChanged);
			// 
			// checkBoxDim4
			// 
			this->checkBoxDim4->AutoSize = true;
			this->checkBoxDim4->Enabled = false;
			this->checkBoxDim4->Location = System::Drawing::Point(650, 292);
			this->checkBoxDim4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim4->Name = L"checkBoxDim4";
			this->checkBoxDim4->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim4->TabIndex = 133;
			this->checkBoxDim4->UseVisualStyleBackColor = true;
			this->checkBoxDim4->Visible = false;
			this->checkBoxDim4->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim4_CheckedChanged);
			// 
			// checkBoxDim5
			// 
			this->checkBoxDim5->AutoSize = true;
			this->checkBoxDim5->Enabled = false;
			this->checkBoxDim5->Location = System::Drawing::Point(650, 349);
			this->checkBoxDim5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim5->Name = L"checkBoxDim5";
			this->checkBoxDim5->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim5->TabIndex = 134;
			this->checkBoxDim5->UseVisualStyleBackColor = true;
			this->checkBoxDim5->Visible = false;
			this->checkBoxDim5->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim5_CheckedChanged);
			// 
			// checkBoxDim6
			// 
			this->checkBoxDim6->AutoSize = true;
			this->checkBoxDim6->Enabled = false;
			this->checkBoxDim6->Location = System::Drawing::Point(650, 406);
			this->checkBoxDim6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim6->Name = L"checkBoxDim6";
			this->checkBoxDim6->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim6->TabIndex = 135;
			this->checkBoxDim6->UseVisualStyleBackColor = true;
			this->checkBoxDim6->Visible = false;
			this->checkBoxDim6->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim6_CheckedChanged);
			// 
			// checkBoxDim7
			// 
			this->checkBoxDim7->AutoSize = true;
			this->checkBoxDim7->Enabled = false;
			this->checkBoxDim7->Location = System::Drawing::Point(650, 466);
			this->checkBoxDim7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim7->Name = L"checkBoxDim7";
			this->checkBoxDim7->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim7->TabIndex = 136;
			this->checkBoxDim7->UseVisualStyleBackColor = true;
			this->checkBoxDim7->Visible = false;
			this->checkBoxDim7->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim7_CheckedChanged);
			// 
			// checkBoxDim8
			// 
			this->checkBoxDim8->AutoSize = true;
			this->checkBoxDim8->Enabled = false;
			this->checkBoxDim8->Location = System::Drawing::Point(650, 522);
			this->checkBoxDim8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim8->Name = L"checkBoxDim8";
			this->checkBoxDim8->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim8->TabIndex = 137;
			this->checkBoxDim8->UseVisualStyleBackColor = true;
			this->checkBoxDim8->Visible = false;
			this->checkBoxDim8->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim8_CheckedChanged);
			// 
			// checkBoxDim9
			// 
			this->checkBoxDim9->AutoSize = true;
			this->checkBoxDim9->Enabled = false;
			this->checkBoxDim9->Location = System::Drawing::Point(650, 578);
			this->checkBoxDim9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim9->Name = L"checkBoxDim9";
			this->checkBoxDim9->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim9->TabIndex = 138;
			this->checkBoxDim9->UseVisualStyleBackColor = true;
			this->checkBoxDim9->Visible = false;
			this->checkBoxDim9->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim9_CheckedChanged);
			// 
			// checkBoxDim10
			// 
			this->checkBoxDim10->AutoSize = true;
			this->checkBoxDim10->Enabled = false;
			this->checkBoxDim10->Location = System::Drawing::Point(650, 634);
			this->checkBoxDim10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxDim10->Name = L"checkBoxDim10";
			this->checkBoxDim10->Size = System::Drawing::Size(22, 21);
			this->checkBoxDim10->TabIndex = 139;
			this->checkBoxDim10->UseVisualStyleBackColor = true;
			this->checkBoxDim10->Visible = false;
			this->checkBoxDim10->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim10_CheckedChanged);
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Location = System::Drawing::Point(-1, 76);
			this->chart->Name = L"chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bubble;
			series1->Name = L"Series1";
			dataPoint1->IsValueShownAsLabel = false;
			dataPoint1->Label = L"a1";
			dataPoint2->MarkerSize = 10;
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			series1->Points->Add(dataPoint3);
			series1->Points->Add(dataPoint4);
			series1->YValuesPerPoint = 2;
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(609, 600);
			this->chart->TabIndex = 140;
			this->chart->Text = L"chart1";
			// 
			// labelStatus
			// 
			this->labelStatus->AutoSize = true;
			this->labelStatus->Location = System::Drawing::Point(12, 6);
			this->labelStatus->Name = L"labelStatus";
			this->labelStatus->Size = System::Drawing::Size(194, 20);
			this->labelStatus->TabIndex = 141;
			this->labelStatus->Text = L"status: control preparation";
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(274, 35);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(70, 32);
			this->buttonClear->TabIndex = 142;
			this->buttonClear->Text = L"clear all";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MainForm::buttonClear_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 678);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->labelStatus);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->checkBoxDim10);
			this->Controls->Add(this->checkBoxDim9);
			this->Controls->Add(this->checkBoxDim8);
			this->Controls->Add(this->checkBoxDim7);
			this->Controls->Add(this->checkBoxDim6);
			this->Controls->Add(this->checkBoxDim5);
			this->Controls->Add(this->checkBoxDim4);
			this->Controls->Add(this->checkBoxDim3);
			this->Controls->Add(this->checkBoxDim2);
			this->Controls->Add(this->checkBoxDim1);
			this->Controls->Add(this->buttonApply);
			this->Controls->Add(this->buttonStop);
			this->Controls->Add(this->buttonStep);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->labelDim8);
			this->Controls->Add(this->labelDim9);
			this->Controls->Add(this->labelDim7);
			this->Controls->Add(this->labelDim5);
			this->Controls->Add(this->labelDim2);
			this->Controls->Add(this->labelDim4);
			this->Controls->Add(this->labelDim3);
			this->Controls->Add(this->labelDim6);
			this->Controls->Add(this->labelDim10);
			this->Controls->Add(this->labelDim1);
			this->Controls->Add(this->textBox10A);
			this->Controls->Add(this->textBox10C);
			this->Controls->Add(this->textBox10B);
			this->Controls->Add(this->textBox10E);
			this->Controls->Add(this->textBox10Chosen);
			this->Controls->Add(this->textBox10D);
			this->Controls->Add(this->textBox10Min);
			this->Controls->Add(this->textBox10Max);
			this->Controls->Add(this->trackBar10);
			this->Controls->Add(this->textBox9A);
			this->Controls->Add(this->textBox9C);
			this->Controls->Add(this->textBox9B);
			this->Controls->Add(this->textBox9E);
			this->Controls->Add(this->textBox9Chosen);
			this->Controls->Add(this->textBox9D);
			this->Controls->Add(this->textBox9Min);
			this->Controls->Add(this->textBox9Max);
			this->Controls->Add(this->trackBar9);
			this->Controls->Add(this->textBox8A);
			this->Controls->Add(this->textBox8C);
			this->Controls->Add(this->textBox8B);
			this->Controls->Add(this->textBox8E);
			this->Controls->Add(this->textBox8Chosen);
			this->Controls->Add(this->textBox8D);
			this->Controls->Add(this->textBox8Min);
			this->Controls->Add(this->textBox8Max);
			this->Controls->Add(this->trackBar8);
			this->Controls->Add(this->textBox7A);
			this->Controls->Add(this->textBox7C);
			this->Controls->Add(this->textBox7B);
			this->Controls->Add(this->textBox7E);
			this->Controls->Add(this->textBox7Chosen);
			this->Controls->Add(this->textBox7D);
			this->Controls->Add(this->textBox7Min);
			this->Controls->Add(this->textBox7Max);
			this->Controls->Add(this->trackBar7);
			this->Controls->Add(this->textBox6A);
			this->Controls->Add(this->textBox6C);
			this->Controls->Add(this->textBox6B);
			this->Controls->Add(this->textBox6E);
			this->Controls->Add(this->textBox6Chosen);
			this->Controls->Add(this->textBox6D);
			this->Controls->Add(this->textBox6Min);
			this->Controls->Add(this->textBox6Max);
			this->Controls->Add(this->trackBar6);
			this->Controls->Add(this->textBox5A);
			this->Controls->Add(this->textBox5C);
			this->Controls->Add(this->textBox5B);
			this->Controls->Add(this->textBox5E);
			this->Controls->Add(this->textBox5Chosen);
			this->Controls->Add(this->textBox5D);
			this->Controls->Add(this->textBox5Min);
			this->Controls->Add(this->textBox5Max);
			this->Controls->Add(this->trackBar5);
			this->Controls->Add(this->textBox4A);
			this->Controls->Add(this->textBox4C);
			this->Controls->Add(this->textBox4B);
			this->Controls->Add(this->textBox4E);
			this->Controls->Add(this->textBox4Chosen);
			this->Controls->Add(this->textBox4D);
			this->Controls->Add(this->textBox4Min);
			this->Controls->Add(this->textBox4Max);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->textBox3A);
			this->Controls->Add(this->textBox3C);
			this->Controls->Add(this->textBox3B);
			this->Controls->Add(this->textBox3E);
			this->Controls->Add(this->textBox3Chosen);
			this->Controls->Add(this->textBox3D);
			this->Controls->Add(this->textBox3Min);
			this->Controls->Add(this->textBox3Max);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->textBox2A);
			this->Controls->Add(this->textBox2C);
			this->Controls->Add(this->textBox2B);
			this->Controls->Add(this->textBox2E);
			this->Controls->Add(this->textBox2Chosen);
			this->Controls->Add(this->textBox2D);
			this->Controls->Add(this->textBox2Min);
			this->Controls->Add(this->textBox2Max);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->labelChosen);
			this->Controls->Add(this->labelMax);
			this->Controls->Add(this->labelB);
			this->Controls->Add(this->labelC);
			this->Controls->Add(this->labelD);
			this->Controls->Add(this->labelE);
			this->Controls->Add(this->labelMin);
			this->Controls->Add(this->labelA);
			this->Controls->Add(this->textBox1A);
			this->Controls->Add(this->textBox1C);
			this->Controls->Add(this->textBox1B);
			this->Controls->Add(this->textBox1E);
			this->Controls->Add(this->textBox1Chosen);
			this->Controls->Add(this->labelDimensions);
			this->Controls->Add(this->labelCoeffs);
			this->Controls->Add(this->textBox1D);
			this->Controls->Add(this->comboSpecialDimensionsNumber);
			this->Controls->Add(this->labelSpecialDimensionsNumber);
			this->Controls->Add(this->comboConversion);
			this->Controls->Add(this->labelConversion);
			this->Controls->Add(this->labelConversionType);
			this->Controls->Add(this->comboConversionType);
			this->Controls->Add(this->comboAgentsNumber);
			this->Controls->Add(this->labelAgentsNumber);
			this->Controls->Add(this->textBox1Min);
			this->Controls->Add(this->textBox1Max);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->comboDimensionsNumber);
			this->Controls->Add(this->labelDimensionsNumber);
			this->Controls->Add(this->labelExtremum);
			this->Controls->Add(this->labelFunction);
			this->Controls->Add(this->comboExtremum);
			this->Controls->Add(this->comboFunctions);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimumSize = System::Drawing::Size(1272, 699);
			this->Name = L"MainForm";
			this->Text = L"GSA Simulation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void buttonApply_Click(System::Object^ sender, System::EventArgs^ e) {

		if (number_dimensions == 0) {
			labelStatus->Text = "status: choose number of dimensions";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (number_agents == -1) {
			labelStatus->Text = "status: choose number of agents";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (function == -1) {
			labelStatus->Text = "status: choose function";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (optimum_type == -1) {
			labelStatus->Text = "status: choose optimum type";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (conversion_type == -1) {
			labelStatus->Text = "status: choose conversion type";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (conversion == -1) {
			labelStatus->Text = "status: choose conversion";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (function == 2 && number_special_dimensions == -1) {
			labelStatus->Text = "status: choose number of special dimensions";
			labelStatus->BackColor = Color::Red;
			return;
		}

		listMinSet = gcnew List<bool>(gcnew array<bool>{min1Set, min2Set, min3Set, min4Set, min5Set, min6Set, min7Set, min8Set, min9Set, min10Set});
		listMaxSet = gcnew List<bool>(gcnew array<bool>{max1Set, max2Set, max3Set, max4Set, max5Set, max6Set, max7Set, max8Set, max9Set, max10Set});
		listChosenSet = gcnew List<bool>(gcnew array<bool>{chosen1Set, chosen2Set, chosen3Set, chosen4Set, chosen5Set, chosen6Set, chosen7Set, chosen8Set, chosen9Set, chosen10Set});
		listASet = gcnew List<bool>(gcnew array<bool>{A1Set, A2Set, A3Set, A4Set, A5Set, A6Set, A7Set, A8Set, A9Set, A10Set});
		listBSet = gcnew List<bool>(gcnew array<bool>{B1Set, B2Set, B3Set, B4Set, B5Set, B6Set, B7Set, B8Set, B9Set, B10Set});
		listCSet = gcnew List<bool>(gcnew array<bool>{C1Set, C2Set, C3Set, C4Set, C5Set, C6Set, C7Set, C8Set, C9Set, C10Set});
		listDSet = gcnew List<bool>(gcnew array<bool>{D1Set, D2Set, D3Set, D4Set, D5Set, D6Set, D7Set, D8Set, D9Set, D10Set});
		listESet = gcnew List<bool>(gcnew array<bool>{E1Set, E2Set, E3Set, E4Set, E5Set, E6Set, E7Set, E8Set, E9Set, E10Set});

		bool minmaxSet = true;
		bool chosenSet = true;
		bool coeffsSet = true;
		bool specialCoeffsSet = true;

		for (int i = 0; i < number_dimensions; i++)
		{
			minmaxSet &= listMinSet[i] && listMaxSet[i];
			coeffsSet &= listASet[i] && listBSet[i] && listCSet[i];
			chosenSet &= listChosenSet[i] || listCheckBoxes[i]->Checked;
		}

		if (!minmaxSet)
		{
			labelStatus->Text = "status: fill min and max for each dimension";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (number_checked != 2) {
			labelStatus->Text = "status: choose two dynamic dimensions";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (!chosenSet) {
			labelStatus->Text = "status: choose value for each dimension not checked";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (function == 2 && !coeffsSet)
		{
			labelStatus->Text = "status: fill coeffs A, B and C for each dimension";
			labelStatus->BackColor = Color::Red;
			return;
		}

		if (function == 2 && number_special_dimensions > 0)
		{
			for (int i = 0; i < number_special_dimensions; i++)
			{

				specialCoeffsSet &= listDSet[i] && listESet[i];

			}
			if (!specialCoeffsSet)
			{
				labelStatus->Text = "status: fill coeffs D and E for each special dimension";
				labelStatus->BackColor = Color::Red;
				return;
			}
		}

		labelStatus->BackColor = Color::White;
		labelStatus->Text = "status: ready to start";
		buttonStart->Enabled = true;
		// TODO freeze all controls

		Algorithm::Hi hi = Algorithm::Hi();
		std::vector<std::vector<double>> vecs = hi.sayHi(3);

		for (int i = 0; i < vecs.size(); i++)
		{
			std::vector<double> point = vecs[i];
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(point[0], gcnew array<System::Double>{point[1], point[2]}));

			dataPoint->Label = L"hi";
			this->series1->Points->Add(dataPoint);

		}
	}
	private: System::Void checkBoxDim1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim1->Checked)
		{
			number_checked++;
			textBox1Min->Enabled = false;
			textBox1Max->Enabled = false;
			textBox1Chosen->Text = "";
			trackBar1->Enabled = false;

			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox1Min->Enabled = true;
			textBox1Max->Enabled = true;
			textBox1Chosen->Text = trackBar1->Value.ToString();
			trackBar1->Enabled = true;
		}

	}
	private: System::Void checkBoxDim2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim2->Checked)
		{
			number_checked++;
			textBox2Min->Enabled = false;
			textBox2Max->Enabled = false;
			textBox2Chosen->Text = "";
			trackBar2->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox2Min->Enabled = true;
			textBox2Max->Enabled = true;
			textBox2Chosen->Text = trackBar2->Value.ToString();
			trackBar2->Enabled = true;
		}
	}
	private: System::Void checkBoxDim3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim3->Checked)
		{
			number_checked++;
			textBox3Min->Enabled = false;
			textBox3Max->Enabled = false;
			textBox3Chosen->Text = "";
			trackBar3->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox3Min->Enabled = true;
			textBox3Max->Enabled = true;
			textBox3Chosen->Text = trackBar3->Value.ToString();
			trackBar3->Enabled = true;
		}
	}
	private: System::Void checkBoxDim4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim4->Checked)
		{
			number_checked++;
			textBox4Min->Enabled = false;
			textBox4Max->Enabled = false;
			textBox4Chosen->Text = "";
			trackBar4->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox4Min->Enabled = true;
			textBox4Max->Enabled = true;
			textBox4Chosen->Text = trackBar4->Value.ToString();
			trackBar4->Enabled = true;
		}
	}
	private: System::Void checkBoxDim5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim5->Checked)
		{
			number_checked++;
			textBox5Min->Enabled = false;
			textBox5Max->Enabled = false;
			textBox5Chosen->Text = "";
			trackBar5->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox5Min->Enabled = true;
			textBox5Max->Enabled = true;
			textBox5Chosen->Text = trackBar5->Value.ToString();
			trackBar5->Enabled = true;
		}
	}
	private: System::Void checkBoxDim6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim6->Checked)
		{
			number_checked++;
			textBox6Min->Enabled = false;
			textBox6Max->Enabled = false;
			textBox6Chosen->Text = "";
			trackBar6->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox6Min->Enabled = true;
			textBox6Max->Enabled = true;
			textBox6Chosen->Text = trackBar6->Value.ToString();
			trackBar6->Enabled = true;
		}
	}
	private: System::Void checkBoxDim7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim7->Checked)
		{
			number_checked++;
			textBox7Min->Enabled = false;
			textBox7Max->Enabled = false;
			textBox7Chosen->Text = "";
			trackBar7->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox7Min->Enabled = true;
			textBox7Max->Enabled = true;
			textBox7Chosen->Text = trackBar7->Value.ToString();
			trackBar7->Enabled = true;
		}
	}
	private: System::Void checkBoxDim8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim8->Checked)
		{
			number_checked++;
			textBox8Min->Enabled = false;
			textBox8Max->Enabled = false;
			textBox8Chosen->Text = "";
			trackBar8->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox8Min->Enabled = true;
			textBox8Max->Enabled = true;
			textBox8Chosen->Text = trackBar8->Value.ToString();
			trackBar8->Enabled = true;
		}
	}
	private: System::Void checkBoxDim9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim9->Checked)
		{
			number_checked++;
			textBox9Min->Enabled = false;
			textBox9Max->Enabled = false;
			textBox9Chosen->Text = "";
			trackBar9->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox9Min->Enabled = true;
			textBox9Max->Enabled = true;
			textBox9Chosen->Text = trackBar9->Value.ToString();
			trackBar9->Enabled = true;
		}
	}
	private: System::Void checkBoxDim10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBoxDim10->Checked)
		{
			number_checked++;
			textBox10Min->Enabled = false;
			textBox10Max->Enabled = false;
			textBox10Chosen->Text = "";
			trackBar10->Enabled = false;
			if (number_checked == 2)
			{
				for (int i = 0; i < 10; i++)
				{
					listCheckBoxes[i]->Enabled = listCheckBoxes[i]->Checked;
				}
			}
		}
		else {
			number_checked--;
			if (number_checked == 1)
			{
				checkBoxDim1->Enabled = check1Enabled;
				checkBoxDim2->Enabled = check2Enabled;
				checkBoxDim3->Enabled = check3Enabled;
				checkBoxDim4->Enabled = check4Enabled;
				checkBoxDim5->Enabled = check5Enabled;
				checkBoxDim6->Enabled = check6Enabled;
				checkBoxDim7->Enabled = check7Enabled;
				checkBoxDim8->Enabled = check8Enabled;
				checkBoxDim9->Enabled = check9Enabled;
				checkBoxDim10->Enabled = check10Enabled;
			}
			textBox10Min->Enabled = true;
			textBox10Max->Enabled = true;
			textBox10Chosen->Text = trackBar10->Value.ToString();
			trackBar10->Enabled = true;
		}
	}
	private: System::Void comboConversion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		conversion = this->comboConversion->SelectedIndex;
	}
	private: System::Void comboExtremum_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboExtremum->SelectedIndex == 0) {/// min
			optimum_type = 0;
		}
		else if (this->comboExtremum->SelectedIndex == 1) {
			optimum_type = 1;
		}
	}
	private: System::Void comboDimensionsNumber_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		number_dimensions = this->comboDimensionsNumber->SelectedIndex + 2;
		labelDimensions->Visible = true;
		labelMax->Visible = true;
		labelMin->Visible = true;
		labelChosen->Visible = true;
		comboFunctions->Enabled = true;

		for (int i = 0; i < number_dimensions; i++)
		{
			listTrack[i]->Visible = true;
			listTrack[i]->SendToBack();
			listLabelDimensions[i]->Visible = true;
			listCheckBoxes[i]->Visible = true;
			listTextBoxesMin[i]->Visible = true;
			listTextBoxesMax[i]->Visible = true;
			listTextBoxesChosen[i]->Visible = true;
		}
		for (int i = number_dimensions; i < 10; i++)
		{
			listTrack[i]->Visible = false;
			listLabelDimensions[i]->Visible = false;
			listCheckBoxes[i]->Visible = false;
			listTextBoxesMin[i]->Visible = false;
			listTextBoxesMax[i]->Visible = false;
			listTextBoxesChosen[i]->Visible = false;
		}
	}
	private: System::Void comboSpecialDimensionsNumber_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		number_special_dimensions = this->comboSpecialDimensionsNumber->SelectedIndex;

		if (number_special_dimensions > 0)
		{
			labelD->Visible = true;
			labelE->Visible = true;
		}
		else {
			labelD->Visible = false;
			labelE->Visible = false;
		}

		for (int i = 0; i < number_special_dimensions; i++)
		{
			listTextBoxesCoeffsD[i]->Visible = true;
			listTextBoxesCoeffsE[i]->Visible = true;
		}
		for (int i = number_special_dimensions; i < 10; i++)
		{
			listTextBoxesCoeffsD[i]->Visible = false;
			listTextBoxesCoeffsE[i]->Visible = false;
		}
	}
	private: System::Void comboFunctions_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboFunctions->SelectedIndex == 0) {/// y = x
			function = 0;
			for (int i = 0; i < number_dimensions; i++)
			{
				listTextBoxesCoeffsA[i]->Visible = false;
				listTextBoxesCoeffsB[i]->Visible = false;
				listTextBoxesCoeffsC[i]->Visible = false;
			}
			labelCoeffs->Visible = false;
			labelA->Visible = false;
			labelB->Visible = false;
			labelC->Visible = false;
			labelD->Visible = false;
			labelE->Visible = false;
			labelSpecialDimensionsNumber->Visible = false;
			this->comboSpecialDimensionsNumber->Visible = false;
			this->comboSpecialDimensionsNumber->Items->Clear();
		}
		else  if (this->comboFunctions->SelectedIndex == 1) {/// y = x**2
			function = 1;
			for (int i = 0; i < number_dimensions; i++)
			{
				listTextBoxesCoeffsA[i]->Visible = false;
				listTextBoxesCoeffsB[i]->Visible = false;
				listTextBoxesCoeffsC[i]->Visible = false;
			}
			labelCoeffs->Visible = false;
			labelA->Visible = false;
			labelB->Visible = false;
			labelC->Visible = false;
			labelD->Visible = false;
			labelE->Visible = false;
			labelSpecialDimensionsNumber->Visible = false;
			this->comboSpecialDimensionsNumber->Visible = false;
			this->comboSpecialDimensionsNumber->Items->Clear();
		}
		else if (this->comboFunctions->SelectedIndex == 2) {/// opf
			this->comboSpecialDimensionsNumber->Items->Clear();
			function = 2;
			labelCoeffs->Visible = true;
			labelA->Visible = true;
			labelB->Visible = true;
			labelC->Visible = true;
			for (int i = 0; i < number_dimensions; i++)
			{
				listTextBoxesCoeffsA[i]->Visible = true;
				listTextBoxesCoeffsB[i]->Visible = true;
				listTextBoxesCoeffsC[i]->Visible = true;
				this->comboSpecialDimensionsNumber->Items->Add(i);
			}
			this->comboSpecialDimensionsNumber->Items->Add(number_dimensions);
			labelSpecialDimensionsNumber->Visible = true;
			comboSpecialDimensionsNumber->Visible = true;
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox1Chosen->Text = trackBar1->Value.ToString();
	}
	private: System::Void textBox1Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox1Min->Text);
			if (!max1Set) {
				min1Set = true;
				trackBar1->Enabled = false;
				textBox1Chosen->ReadOnly = true;
				checkBoxDim1->Enabled = false;
				check1Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox1Max->Text);
				min1Set = (numbermin < numbermax);
				trackBar1->Minimum = numbermin;
				trackBar1->Maximum = numbermax;
				trackBar1->Enabled = min1Set;
				textBox1Chosen->Text = trackBar1->Value.ToString();
				textBox1Chosen->ReadOnly = !min1Set;
				checkBoxDim1->Enabled = number_checked < 2 && min1Set;
				check1Enabled = min1Set;
			}
		}
		catch (Exception^ e)
		{
			min1Set = false;
			trackBar1->Enabled = false;
			textBox1Chosen->ReadOnly = true;
			checkBoxDim1->Enabled = false;
			check1Enabled = false;
		}
	}
	private: System::Void textBox1Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox1Max->Text);
			if (!min1Set) {
				max1Set = true;
				trackBar1->Enabled = false;
				textBox1Chosen->ReadOnly = true;
				checkBoxDim1->Enabled = false;
				check1Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox1Min->Text);
				max1Set = (numbermin < numbermax);
				trackBar1->Minimum = numbermin;
				trackBar1->Maximum = numbermax;
				trackBar1->Enabled = max1Set;
				textBox1Chosen->ReadOnly = !max1Set;
				textBox1Chosen->Text = trackBar1->Value.ToString();
				checkBoxDim1->Enabled = number_checked < 2 && max1Set;
				check1Enabled = max1Set;
			}
		}
		catch (Exception^ e)
		{
			max1Set = false;
			trackBar1->Enabled = false;
			textBox1Chosen->ReadOnly = true;
			checkBoxDim1->Enabled = false;
			check1Enabled = false;
		}
	}
	private: System::Void textBox2Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox2Min->Text);
			if (!max2Set) {
				min2Set = true;
				trackBar2->Enabled = false;
				textBox2Chosen->ReadOnly = true;
				checkBoxDim2->Enabled = false;
				check2Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox2Max->Text);
				min2Set = (numbermin < numbermax);
				trackBar2->Minimum = numbermin;
				trackBar2->Maximum = numbermax;
				trackBar2->Enabled = min2Set;
				textBox2Chosen->ReadOnly = !min2Set;
				textBox2Chosen->Text = trackBar2->Value.ToString();
				checkBoxDim2->Enabled = number_checked < 2 && min2Set;
				check2Enabled = min2Set;
			}
		}
		catch (Exception^ e)
		{
			min2Set = false;
			trackBar2->Enabled = false;
			checkBoxDim2->Enabled = false;
			textBox2Chosen->ReadOnly = true;
			check2Enabled = false;
		}
	}
	private: System::Void textBox2Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox2Max->Text);
			if (!min2Set) {
				max2Set = true;
				trackBar2->Enabled = false;
				textBox2Chosen->ReadOnly = true;
				checkBoxDim2->Enabled = false;
				check2Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox2Min->Text);
				max2Set = (numbermin < numbermax);
				trackBar2->Minimum = numbermin;
				trackBar2->Maximum = numbermax;
				trackBar2->Enabled = max2Set;
				textBox2Chosen->ReadOnly = !max2Set;
				textBox2Chosen->Text = trackBar2->Value.ToString();
				checkBoxDim2->Enabled = number_checked < 2 && max2Set;
				check2Enabled = max2Set;
			}
		}
		catch (Exception^ e)
		{
			max2Set = false;
			trackBar2->Enabled = false;
			textBox2Chosen->ReadOnly = true;
			checkBoxDim2->Enabled = false;
			check2Enabled = false;
		}
	}
	private: System::Void textBox3Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox3Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox3Min->Text);
			if (!max3Set) {
				min3Set = true;
				trackBar3->Enabled = false;
				textBox3Chosen->ReadOnly = true;
				checkBoxDim3->Enabled = false;
				check3Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox3Max->Text);
				min3Set = (numbermin < numbermax);
				trackBar3->Minimum = numbermin;
				trackBar3->Maximum = numbermax;
				trackBar3->Enabled = min3Set;
				textBox3Chosen->ReadOnly = !min3Set;
				textBox3Chosen->Text = trackBar3->Value.ToString();
				checkBoxDim3->Enabled = number_checked < 2 && min3Set;
				check3Enabled = min3Set;
			}
		}
		catch (Exception^ e)
		{
			min3Set = false;
			trackBar3->Enabled = false;
			textBox3Chosen->ReadOnly = true;
			checkBoxDim3->Enabled = false;
			check3Enabled = false;
		}
	}
	private: System::Void textBox3Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox3Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox3Max->Text);
			if (!min3Set) {
				max3Set = true;
				trackBar3->Enabled = false;
				textBox3Chosen->ReadOnly = true;
				checkBoxDim3->Enabled = false;
				check3Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox3Min->Text);
				max3Set = (numbermin < numbermax);
				trackBar3->Minimum = numbermin;
				trackBar3->Maximum = numbermax;
				trackBar3->Enabled = max3Set;
				textBox3Chosen->ReadOnly = !max3Set;
				textBox3Chosen->Text = trackBar3->Value.ToString();
				checkBoxDim3->Enabled = number_checked < 2 && max3Set;
				check3Enabled = max3Set;
			}
		}
		catch (Exception^ e)
		{
			max3Set = false;
			trackBar3->Enabled = false;
			textBox3Chosen->ReadOnly = true;
			checkBoxDim3->Enabled = false;
			check3Enabled = false;
		}
	}
	private: System::Void textBox4Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox4Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox4Min->Text);
			if (!max4Set) {
				min4Set = true;
				trackBar4->Enabled = false;
				textBox4Chosen->ReadOnly = true;
				checkBoxDim4->Enabled = false;
				check4Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox4Max->Text);
				min4Set = (numbermin < numbermax);
				trackBar4->Minimum = numbermin;
				trackBar4->Maximum = numbermax;
				trackBar4->Enabled = min4Set;
				textBox4Chosen->ReadOnly = !min4Set;
				textBox4Chosen->Text = trackBar4->Value.ToString();
				checkBoxDim4->Enabled = number_checked < 2 && min4Set;
				check4Enabled = min4Set;
			}
		}
		catch (Exception^ e)
		{
			min4Set = false;
			trackBar4->Enabled = false;
			textBox4Chosen->ReadOnly = true;
			checkBoxDim4->Enabled = false;
			check4Enabled = false;
		}
	}
	private: System::Void textBox4Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox4Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox4Max->Text);
			if (!min4Set) {
				max4Set = true;
				trackBar4->Enabled = false;
				textBox4Chosen->ReadOnly = true;
				checkBoxDim4->Enabled = false;
				check4Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox4Min->Text);
				max4Set = (numbermin < numbermax);
				trackBar4->Minimum = numbermin;
				trackBar4->Maximum = numbermax;
				trackBar4->Enabled = max4Set;
				textBox4Chosen->ReadOnly = !min4Set;
				textBox4Chosen->Text = trackBar4->Value.ToString();
				checkBoxDim4->Enabled = number_checked < 2 && max4Set;
				check4Enabled = max4Set;
			}
		}
		catch (Exception^ e)
		{
			max4Set = false;
			trackBar4->Enabled = false;
			textBox4Chosen->ReadOnly = true;
			checkBoxDim4->Enabled = false;
			check4Enabled = false;
		}
	}
	private: System::Void textBox5Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox5Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox5Min->Text);
			if (!max5Set) {
				min5Set = true;
				trackBar5->Enabled = false;
				textBox5Chosen->ReadOnly = true;
				checkBoxDim5->Enabled = false;
				check5Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox5Max->Text);
				min5Set = (numbermin < numbermax);
				trackBar5->Minimum = numbermin;
				trackBar5->Maximum = numbermax;
				trackBar5->Enabled = min5Set;
				textBox5Chosen->ReadOnly = !min5Set;
				textBox5Chosen->Text = trackBar5->Value.ToString();
				checkBoxDim5->Enabled = number_checked < 2 && min5Set;
				check5Enabled = min5Set;
			}
		}
		catch (Exception^ e)
		{
			min5Set = false;
			trackBar5->Enabled = false;
			textBox5Chosen->ReadOnly = true;
			checkBoxDim5->Enabled = false;
			check5Enabled = false;
		}
	}
	private: System::Void textBox5Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox5Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox5Max->Text);
			if (!min5Set) {
				max5Set = true;
				trackBar5->Enabled = false;
				textBox5Chosen->ReadOnly = true;
				checkBoxDim5->Enabled = false;
				check5Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox5Min->Text);
				max5Set = (numbermin < numbermax);
				trackBar5->Minimum = numbermin;
				trackBar5->Maximum = numbermax;
				trackBar5->Enabled = max5Set;
				textBox5Chosen->ReadOnly = !max5Set;
				textBox5Chosen->Text = trackBar5->Value.ToString();
				checkBoxDim5->Enabled = number_checked < 2 && max5Set;
				check5Enabled = max5Set;
			}
		}
		catch (Exception^ e)
		{
			max5Set = false;
			trackBar5->Enabled = false;
			textBox5Chosen->ReadOnly = true;
			checkBoxDim5->Enabled = false;
			check5Enabled = false;
		}
	}
	private: System::Void textBox6Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox6Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox6Min->Text);
			if (!max6Set) {
				min6Set = true;
				trackBar6->Enabled = false;
				textBox6Chosen->ReadOnly = true;
				checkBoxDim6->Enabled = false;
				check6Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox6Max->Text);
				min6Set = (numbermin < numbermax);
				trackBar6->Minimum = numbermin;
				trackBar6->Maximum = numbermax;
				trackBar6->Enabled = min6Set;
				textBox6Chosen->ReadOnly = !min6Set;
				textBox6Chosen->Text = trackBar6->Value.ToString();
				checkBoxDim6->Enabled = number_checked < 2 && min6Set;
				check6Enabled = min6Set;
			}
		}
		catch (Exception^ e)
		{
			min6Set = false;
			trackBar6->Enabled = false;
			textBox6Chosen->ReadOnly = true;
			checkBoxDim6->Enabled = false;
			check6Enabled = false;
		}
	}
	private: System::Void textBox6Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox6Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox6Max->Text);
			if (!min6Set) {
				max6Set = true;
				trackBar6->Enabled = false;
				textBox6Chosen->ReadOnly = true;
				checkBoxDim6->Enabled = false;
				check6Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox6Min->Text);
				max6Set = (numbermin < numbermax);
				trackBar6->Minimum = numbermin;
				trackBar6->Maximum = numbermax;
				trackBar6->Enabled = max6Set;
				textBox6Chosen->ReadOnly = !max6Set;
				textBox6Chosen->Text = trackBar6->Value.ToString();
				checkBoxDim6->Enabled = number_checked < 2 && max6Set;
				check6Enabled = max6Set;
			}
		}
		catch (Exception^ e)
		{
			max6Set = false;
			trackBar6->Enabled = false;
			textBox6Chosen->ReadOnly = true;
			checkBoxDim6->Enabled = false;
			check6Enabled = false;
		}
	}
	private: System::Void textBox7Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox7Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox7Min->Text);
			if (!max7Set) {
				min7Set = true;
				trackBar7->Enabled = false;
				textBox7Chosen->ReadOnly = true;
				checkBoxDim7->Enabled = false;
				check7Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox7Max->Text);
				min7Set = (numbermin < numbermax);
				trackBar7->Minimum = numbermin;
				trackBar7->Maximum = numbermax;
				trackBar7->Enabled = min7Set;
				textBox7Chosen->ReadOnly = !min7Set;
				textBox7Chosen->Text = trackBar7->Value.ToString();
				checkBoxDim7->Enabled = number_checked < 2 && min7Set;
				check7Enabled = min7Set;
			}
		}
		catch (Exception^ e)
		{
			min7Set = false;
			trackBar7->Enabled = false;
			textBox7Chosen->ReadOnly = true;
			checkBoxDim7->Enabled = false;
			check7Enabled = false;
		}
	}
	private: System::Void textBox7Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox7Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox7Max->Text);
			if (!min7Set) {
				max7Set = true;
				trackBar7->Enabled = false;
				textBox7Chosen->ReadOnly = true;
				checkBoxDim7->Enabled = false;
				check7Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox7Min->Text);
				max7Set = (numbermin < numbermax);
				trackBar7->Minimum = numbermin;
				trackBar7->Maximum = numbermax;
				trackBar7->Enabled = max7Set;
				textBox7Chosen->ReadOnly = !max7Set;
				textBox7Chosen->Text = trackBar7->Value.ToString();
				checkBoxDim7->Enabled = number_checked < 2 && max7Set;
				check7Enabled = max7Set;
			}
		}
		catch (Exception^ e)
		{
			max7Set = false;
			trackBar7->Enabled = false;
			textBox7Chosen->ReadOnly = true;
			checkBoxDim7->Enabled = false;
			check7Enabled = false;
		}
	}
	private: System::Void textBox8Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox8Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox8Min->Text);
			if (!max8Set) {
				min8Set = true;
				trackBar8->Enabled = false;
				textBox8Chosen->ReadOnly = true;
				checkBoxDim8->Enabled = false;
				check8Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox8Max->Text);
				min8Set = (numbermin < numbermax);
				trackBar8->Minimum = numbermin;
				trackBar8->Maximum = numbermax;
				trackBar8->Enabled = min8Set;
				textBox8Chosen->ReadOnly = !min8Set;
				textBox8Chosen->Text = trackBar8->Value.ToString();
				checkBoxDim8->Enabled = number_checked < 2 && min8Set;
				check8Enabled = min8Set;
			}
		}
		catch (Exception^ e)
		{
			min8Set = false;
			trackBar8->Enabled = false;
			textBox8Chosen->ReadOnly = true;
			checkBoxDim8->Enabled = false;
			check8Enabled = false;
		}
	}
	private: System::Void textBox8Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox8Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox8Max->Text);
			if (!min8Set) {
				max8Set = true;
				trackBar8->Enabled = false;
				textBox8Chosen->ReadOnly = true;
				checkBoxDim8->Enabled = false;
				check8Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox8Min->Text);
				max8Set = (numbermin < numbermax);
				trackBar8->Minimum = numbermin;
				trackBar8->Maximum = numbermax;
				trackBar8->Enabled = max8Set;
				textBox8Chosen->ReadOnly = !max8Set;
				textBox8Chosen->Text = trackBar8->Value.ToString();
				checkBoxDim8->Enabled = number_checked < 2 && max8Set;
				check8Enabled = max8Set;
			}
		}
		catch (Exception^ e)
		{
			max8Set = false;
			trackBar8->Enabled = false;
			textBox8Chosen->ReadOnly = true;
			checkBoxDim8->Enabled = false;
			check8Enabled = false;
		}
	}
	private: System::Void textBox9Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox9Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox9Min->Text);
			if (!max9Set) {
				min9Set = true;
				trackBar9->Enabled = false;
				textBox9Chosen->ReadOnly = true;
				checkBoxDim9->Enabled = false;
				check9Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox9Max->Text);
				min9Set = (numbermin < numbermax);
				trackBar9->Minimum = numbermin;
				trackBar9->Maximum = numbermax;
				trackBar9->Enabled = min9Set;
				textBox9Chosen->ReadOnly = !min9Set;
				textBox9Chosen->Text = trackBar9->Value.ToString();
				checkBoxDim9->Enabled = number_checked < 2 && min9Set;
				check9Enabled = min9Set;
			}
		}
		catch (Exception^ e)
		{
			min9Set = false;
			trackBar9->Enabled = false;
			textBox9Chosen->ReadOnly = true;
			checkBoxDim9->Enabled = false;
			check9Enabled = false;
		}
	}
	private: System::Void textBox9Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox9Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox9Max->Text);
			if (!min9Set) {
				max9Set = true;
				trackBar9->Enabled = false;
				textBox9Chosen->ReadOnly = true;
				checkBoxDim9->Enabled = false;
				check9Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox9Min->Text);
				max9Set = (numbermin < numbermax);
				trackBar9->Minimum = numbermin;
				trackBar9->Maximum = numbermax;
				trackBar9->Enabled = max9Set;
				textBox9Chosen->ReadOnly = !max9Set;
				textBox9Chosen->Text = trackBar9->Value.ToString();
				checkBoxDim9->Enabled = number_checked < 2 && max9Set;
				check9Enabled = max9Set;
			}
		}
		catch (Exception^ e)
		{
			max9Set = false;
			trackBar9->Enabled = false;
			textBox9Chosen->ReadOnly = true;
			checkBoxDim9->Enabled = false;
			check9Enabled = false;
		}
	}
	private: System::Void textBox10Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox10Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermin = Convert::ToDouble(textBox10Min->Text);
			if (!max10Set) {
				min10Set = true;
				trackBar10->Enabled = false;
				textBox10Chosen->ReadOnly = true;
				checkBoxDim10->Enabled = false;
				check10Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToDouble(textBox10Max->Text);
				min10Set = (numbermin < numbermax);
				trackBar10->Minimum = numbermin;
				trackBar10->Maximum = numbermax;
				trackBar10->Enabled = min10Set;
				textBox10Chosen->ReadOnly = !min10Set;
				textBox10Chosen->Text = trackBar10->Value.ToString();
				checkBoxDim10->Enabled = number_checked < 2 && min10Set;
				check10Enabled = min10Set;
			}
		}
		catch (Exception^ e)
		{
			min10Set = false;
			trackBar10->Enabled = false;
			textBox10Chosen->ReadOnly = true;
			checkBoxDim10->Enabled = false;
			check10Enabled = false;
		}
	}
	private: System::Void textBox10Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox10Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToDouble(textBox10Max->Text);
			if (!min10Set) {
				max10Set = true;
				trackBar10->Enabled = false;
				textBox10Chosen->ReadOnly = true;
				checkBoxDim10->Enabled = false;
				check10Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToDouble(textBox10Min->Text);
				max10Set = (numbermin < numbermax);
				trackBar10->Minimum = numbermin;
				trackBar10->Maximum = numbermax;
				trackBar10->Enabled = max10Set;
				textBox10Chosen->ReadOnly = !max10Set;
				textBox10Chosen->Text = trackBar10->Value.ToString();
				checkBoxDim10->Enabled = number_checked < 2 && max10Set;
				check10Enabled = max10Set;
			}
		}
		catch (Exception^ e)
		{
			max10Set = false;
			trackBar10->Enabled = false;
			textBox10Chosen->ReadOnly = true;
			checkBoxDim10->Enabled = false;
			check10Enabled = false;
		}

	}

	private: System::Void comboAgentsNumber_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		number_agents = comboAgentsNumber->SelectedIndex + 1;
	}

	private: System::Void comboConversionType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		conversion = -1;
		if (this->comboConversionType->SelectedIndex == 0) {/// number_of_iters
			conversion_type = 0;
			this->comboConversion->Items->Clear();
			this->comboConversion->Items->AddRange(gcnew cli::array< System::Object^  >(100) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62",
					L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80",
					L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98",
					L"99", L"100"
			});

			labelConversion->Visible = true;
			comboConversion->Visible = true;
			labelConversion->Text = "number of iterations";
		}
		else if (this->comboConversionType->SelectedIndex == 1) {
			conversion_type = 1;
			this->comboConversion->Items->Clear();
			this->comboConversion->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"0.00001", L"0.0001", L"0.001", L"0.01", L"0.1", L"1", L"10"
			});
			labelConversion->Visible = true;
			comboConversion->Visible = true;
			labelConversion->Text = "diff between iterations";
		}
	}

	private: System::Void textBox1Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1Chosen->Text == "")
		{
			textBox1Chosen->BackColor = Color::Red;
			chosen1Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox1Max->Text);
			numbermin = Convert::ToDouble(textBox1Min->Text);
			numberchosen = Convert::ToDouble(textBox1Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox1Chosen->BackColor = Color::White;
				chosen1Set = true;
				trackBar1->Value = numberchosen;
				trackBar1->Refresh();
			}
			else {
				textBox1Chosen->BackColor = Color::Red;
				chosen1Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox1Chosen->BackColor = Color::Red;
			chosen1Set = false;
		}
	}
	private: System::Void textBox2Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2Chosen->Text == "")
		{
			textBox2Chosen->BackColor = Color::Red;
			chosen2Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox2Max->Text);
			numbermin = Convert::ToDouble(textBox2Min->Text);
			numberchosen = Convert::ToDouble(textBox2Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox2Chosen->BackColor = Color::White;
				chosen2Set = true;
				trackBar2->Value = numberchosen;
				trackBar2->Refresh();
			}
			else {
				textBox2Chosen->BackColor = Color::Red;
				chosen2Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox2Chosen->BackColor = Color::Red;
			chosen2Set = false;
		}
	}
	private: System::Void textBox3Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3Chosen->Text == "")
		{
			textBox3Chosen->BackColor = Color::Red;
			chosen3Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox3Max->Text);
			numbermin = Convert::ToDouble(textBox3Min->Text);
			numberchosen = Convert::ToDouble(textBox3Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox3Chosen->BackColor = Color::White;
				chosen3Set = true;
				trackBar3->Value = numberchosen;
				trackBar3->Refresh();
			}
			else {
				textBox3Chosen->BackColor = Color::Red;
				chosen3Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox3Chosen->BackColor = Color::Red;
			chosen3Set = false;
		}
	}
	private: System::Void textBox4Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4Chosen->Text == "")
		{
			textBox4Chosen->BackColor = Color::Red;
			chosen4Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox4Max->Text);
			numbermin = Convert::ToDouble(textBox4Min->Text);
			numberchosen = Convert::ToDouble(textBox4Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox4Chosen->BackColor = Color::White;
				chosen4Set = true;
				trackBar4->Value = numberchosen;
				trackBar4->Refresh();
			}
			else {
				textBox4Chosen->BackColor = Color::Red;
				chosen4Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox4Chosen->BackColor = Color::Red;
			chosen4Set = false;
		}
	}
	private: System::Void textBox5Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox5Chosen->Text == "")
		{
			textBox5Chosen->BackColor = Color::Red;
			chosen5Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox5Max->Text);
			numbermin = Convert::ToDouble(textBox5Min->Text);
			numberchosen = Convert::ToDouble(textBox5Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox5Chosen->BackColor = Color::White;
				chosen5Set = true;
				trackBar5->Value = numberchosen;
				trackBar5->Refresh();
			}
			else {
				textBox5Chosen->BackColor = Color::Red;
				chosen5Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox5Chosen->BackColor = Color::Red;
			chosen5Set = false;
		}
	}
	private: System::Void textBox6Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6Chosen->Text == "")
		{
			textBox6Chosen->BackColor = Color::Red;
			chosen6Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox6Max->Text);
			numbermin = Convert::ToDouble(textBox6Min->Text);
			numberchosen = Convert::ToDouble(textBox6Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox6Chosen->BackColor = Color::White;
				chosen6Set = true;
				trackBar6->Value = numberchosen;
				trackBar6->Refresh();
			}
			else {
				textBox6Chosen->BackColor = Color::Red;
				chosen6Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox6Chosen->BackColor = Color::Red;
			chosen6Set = false;
		}
	}

	private: System::Void textBox7Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox7Chosen->Text == "")
		{
			textBox7Chosen->BackColor = Color::Red;
			chosen7Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox7Max->Text);
			numbermin = Convert::ToDouble(textBox7Min->Text);
			numberchosen = Convert::ToDouble(textBox7Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox7Chosen->BackColor = Color::White;
				chosen7Set = true;
				trackBar7->Value = numberchosen;
				trackBar7->Refresh();
			}
			else {
				textBox7Chosen->BackColor = Color::Red;
				chosen7Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox7Chosen->BackColor = Color::Red;
			chosen7Set = false;
		}
	}
	private: System::Void textBox8Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox8Chosen->Text == "")
		{
			textBox8Chosen->BackColor = Color::Red;
			chosen8Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox8Max->Text);
			numbermin = Convert::ToDouble(textBox8Min->Text);
			numberchosen = Convert::ToDouble(textBox8Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox8Chosen->BackColor = Color::White;
				chosen8Set = true;
				trackBar8->Value = numberchosen;
				trackBar8->Refresh();
			}
			else {
				textBox8Chosen->BackColor = Color::Red;
				chosen8Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox8Chosen->BackColor = Color::Red;
			chosen8Set = false;
		}
	}
	private: System::Void textBox9Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox9Chosen->Text == "")
		{
			textBox9Chosen->BackColor = Color::Red;
			chosen9Set = false;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox9Max->Text);
			numbermin = Convert::ToDouble(textBox9Min->Text);
			numberchosen = Convert::ToDouble(textBox9Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox9Chosen->BackColor = Color::White;
				chosen9Set = true;
				trackBar9->Value = numberchosen;
				trackBar9->Refresh();
			}
			else {
				textBox9Chosen->BackColor = Color::Red;
				chosen9Set = false;
			}
		}
		catch (Exception^ e)
		{
			textBox9Chosen->BackColor = Color::Red;
			chosen9Set = false;
		}
	}
	private: System::Void textBox10Chosen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox10Chosen->Text == "")
		{
			chosen10Set = false;
			textBox10Chosen->BackColor = Color::Red;
			return;
		}
		try
		{
			int numbermin;
			int numbermax;
			int numberchosen;

			numbermax = Convert::ToDouble(textBox10Max->Text);
			numbermin = Convert::ToDouble(textBox10Min->Text);
			numberchosen = Convert::ToDouble(textBox10Chosen->Text);
			if (numbermin <= numberchosen && numberchosen <= numbermax) {
				textBox10Chosen->BackColor = Color::White;
				chosen10Set = true;
				trackBar10->Value = numberchosen;
				trackBar10->Refresh();
			}
			else {
				chosen10Set = false;
				textBox10Chosen->BackColor = Color::Red;
			}
		}
		catch (Exception^ e)
		{
			textBox10Chosen->BackColor = Color::Red;
			chosen10Set = false;
		}
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox2Chosen->Text = trackBar2->Value.ToString();
	}
	private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox3Chosen->Text = trackBar3->Value.ToString();
	}
	private: System::Void trackBar4_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox4Chosen->Text = trackBar4->Value.ToString();
	}
	private: System::Void trackBar5_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox5Chosen->Text = trackBar5->Value.ToString();
	}
	private: System::Void trackBar6_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox6Chosen->Text = trackBar6->Value.ToString();
	}
	private: System::Void trackBar7_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox7Chosen->Text = trackBar7->Value.ToString();
	}
	private: System::Void trackBar8_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox8Chosen->Text = trackBar8->Value.ToString();
	}
	private: System::Void trackBar9_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox9Chosen->Text = trackBar9->Value.ToString();
	}
	private: System::Void trackBar10_Scroll(System::Object^ sender, System::EventArgs^ e) {
		textBox10Chosen->Text = trackBar10->Value.ToString();
	}

	private: System::Void textBox1A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox1A->Text);
			textBox1A->BackColor = Color::White;
			A1Set = true;
		}
		catch (Exception^ e)
		{
			textBox1A->BackColor = Color::Red;
			A1Set = false;
		}
	}
	private: System::Void textBox2A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox2A->Text);
			textBox2A->BackColor = Color::White;
			A2Set = true;
		}
		catch (Exception^ e)
		{
			textBox2A->BackColor = Color::Red;
			A2Set = false;
		}
	}
	private: System::Void textBox3A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox3A->Text);
			textBox3A->BackColor = Color::White;
			A3Set = true;
		}
		catch (Exception^ e)
		{
			textBox3A->BackColor = Color::Red;
			A3Set = false;
		}
	}
	private: System::Void textBox4A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox4A->Text);
			textBox4A->BackColor = Color::White;
			A4Set = true;
		}
		catch (Exception^ e)
		{
			textBox4A->BackColor = Color::Red;
			A4Set = false;
		}
	}
	private: System::Void textBox5A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox5A->Text);
			textBox5A->BackColor = Color::White;
			A5Set = true;
		}
		catch (Exception^ e)
		{
			textBox5A->BackColor = Color::Red;
			A5Set = false;
		}
	}
	private: System::Void textBox6A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox6A->Text);
			textBox6A->BackColor = Color::White;
			A6Set = true;
		}
		catch (Exception^ e)
		{
			textBox6A->BackColor = Color::Red;
			A6Set = false;
		}
	}
	private: System::Void textBox7A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox7A->Text);
			textBox7A->BackColor = Color::White;
			A7Set = true;
		}
		catch (Exception^ e)
		{
			textBox7A->BackColor = Color::Red;
			A7Set = false;
		}
	}
	private: System::Void textBox8A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox8A->Text);
			textBox8A->BackColor = Color::White;
			A8Set = true;
		}
		catch (Exception^ e)
		{
			textBox8A->BackColor = Color::Red;
			A8Set = false;
		}
	}
	private: System::Void textBox9A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox9A->Text);
			textBox9A->BackColor = Color::White;
			A9Set = true;
		}
		catch (Exception^ e)
		{
			textBox9A->BackColor = Color::Red;
			A9Set = false;
		}
	}
	private: System::Void textBox10A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberA;
			numberA = Convert::ToDouble(textBox10A->Text);
			textBox10A->BackColor = Color::White;
			A10Set = true;
		}
		catch (Exception^ e)
		{
			textBox10A->BackColor = Color::Red;
			A10Set = false;
		}
	}
	private: System::Void textBox1B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox1B->Text);
			textBox1B->BackColor = Color::White;
			B1Set = true;
		}
		catch (Exception^ e)
		{
			textBox1B->BackColor = Color::Red;
			B1Set = false;
		}
	}
	private: System::Void textBox2B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox2B->Text);
			textBox2B->BackColor = Color::White;
			B2Set = true;
		}
		catch (Exception^ e)
		{
			textBox2B->BackColor = Color::Red;
			B2Set = false;
		}
	}
	private: System::Void textBox3B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox3B->Text);
			textBox3B->BackColor = Color::White;
			B3Set = true;
		}
		catch (Exception^ e)
		{
			textBox3B->BackColor = Color::Red;
			B3Set = false;
		}
	}
	private: System::Void textBox4B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox4B->Text);
			textBox4B->BackColor = Color::White;
			B4Set = true;
		}
		catch (Exception^ e)
		{
			textBox4B->BackColor = Color::Red;
			B4Set = false;
		}
	}
	private: System::Void textBox5B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox5B->Text);
			textBox5B->BackColor = Color::White;
			B5Set = true;
		}
		catch (Exception^ e)
		{
			textBox5B->BackColor = Color::Red;
			B5Set = false;
		}
	}
	private: System::Void textBox6B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox6B->Text);
			textBox6B->BackColor = Color::White;
			B6Set = true;
		}
		catch (Exception^ e)
		{
			textBox6B->BackColor = Color::Red;
			B6Set = false;
		}
	}
	private: System::Void textBox7B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox7B->Text);
			textBox7B->BackColor = Color::White;
			B7Set = true;
		}
		catch (Exception^ e)
		{
			textBox7B->BackColor = Color::Red;
			B7Set = false;
		}
	}
	private: System::Void textBox8B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox8B->Text);
			textBox8B->BackColor = Color::White;
			B8Set = true;
		}
		catch (Exception^ e)
		{
			textBox8B->BackColor = Color::Red;
			B8Set = false;
		}
	}
	private: System::Void textBox9B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox9B->Text);
			textBox9B->BackColor = Color::White;
			B9Set = true;
		}
		catch (Exception^ e)
		{
			textBox9B->BackColor = Color::Red;
			B9Set = false;
		}
	}
	private: System::Void textBox10B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberB;
			numberB = Convert::ToDouble(textBox10B->Text);
			textBox10B->BackColor = Color::White;
			B10Set = true;
		}
		catch (Exception^ e)
		{
			textBox10B->BackColor = Color::Red;
			B10Set = false;
		}
	}
	private: System::Void textBox1C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox1C->Text);
			textBox1C->BackColor = Color::White;
			C1Set = true;
		}
		catch (Exception^ e)
		{
			textBox1C->BackColor = Color::Red;
			C1Set = false;
		}
	}
	private: System::Void textBox2C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox2C->Text);
			textBox2C->BackColor = Color::White;
			C2Set = true;
		}
		catch (Exception^ e)
		{
			textBox2C->BackColor = Color::Red;
			C2Set = false;
		}
	}
	private: System::Void textBox3C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox3C->Text);
			textBox3C->BackColor = Color::White;
			C3Set = true;
		}
		catch (Exception^ e)
		{
			textBox3C->BackColor = Color::Red;
			C3Set = false;
		}
	}
	private: System::Void textBox4C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox4C->Text);
			textBox4C->BackColor = Color::White;
			C4Set = true;
		}
		catch (Exception^ e)
		{
			textBox4C->BackColor = Color::Red;
			C4Set = false;
		}
	}
	private: System::Void textBox5C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox5C->Text);
			textBox5C->BackColor = Color::White;
			C5Set = true;
		}
		catch (Exception^ e)
		{
			textBox5C->BackColor = Color::Red;
			C5Set = false;
		}
	}
	private: System::Void textBox6C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox6C->Text);
			textBox6C->BackColor = Color::White;
			C6Set = true;
		}
		catch (Exception^ e)
		{
			textBox6C->BackColor = Color::Red;
			C6Set = false;
		}
	}
	private: System::Void textBox7C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox7C->Text);
			textBox7C->BackColor = Color::White;
			C7Set = true;
		}
		catch (Exception^ e)
		{
			textBox7C->BackColor = Color::Red;
			C7Set = false;
		}
	}
	private: System::Void textBox8C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox8C->Text);
			textBox8C->BackColor = Color::White;
			C8Set = true;
		}
		catch (Exception^ e)
		{
			textBox8C->BackColor = Color::Red;
			C8Set = false;
		}
	}
	private: System::Void textBox9C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox9C->Text);
			textBox9C->BackColor = Color::White;
			C9Set = true;
		}
		catch (Exception^ e)
		{
			textBox9C->BackColor = Color::Red;
			C9Set = false;
		}
	}
	private: System::Void textBox10C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberC;
			numberC = Convert::ToDouble(textBox10C->Text);
			textBox10C->BackColor = Color::White;
			C10Set = true;
		}
		catch (Exception^ e)
		{
			textBox10C->BackColor = Color::Red;
			C10Set = false;
		}
	}
	private: System::Void textBox1D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox1D->Text);
			textBox1D->BackColor = Color::White;
			D1Set = true;
		}
		catch (Exception^ e)
		{
			textBox1D->BackColor = Color::Red;
			D1Set = false;
		}
	}
	private: System::Void textBox2D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox2D->Text);
			textBox2D->BackColor = Color::White;
			D2Set = true;
		}
		catch (Exception^ e)
		{
			textBox2D->BackColor = Color::Red;
			D2Set = false;
		}
	}
	private: System::Void textBox3D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox3D->Text);
			textBox3D->BackColor = Color::White;
			D3Set = true;
		}
		catch (Exception^ e)
		{
			textBox3D->BackColor = Color::Red;
			D3Set = false;
		}
	}
	private: System::Void textBox4D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox4D->Text);
			textBox4D->BackColor = Color::White;
			D4Set = true;
		}
		catch (Exception^ e)
		{
			textBox4D->BackColor = Color::Red;
			D4Set = false;
		}
	}
	private: System::Void textBox5D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox5D->Text);
			textBox5D->BackColor = Color::White;
			D5Set = true;
		}
		catch (Exception^ e)
		{
			textBox5D->BackColor = Color::Red;
			D5Set = false;
		}
	}
	private: System::Void textBox6D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox6D->Text);
			textBox6D->BackColor = Color::White;
			D6Set = true;
		}
		catch (Exception^ e)
		{
			textBox6D->BackColor = Color::Red;
			D6Set = false;
		}
	}
	private: System::Void textBox7D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox7D->Text);
			textBox7D->BackColor = Color::White;
			D7Set = true;
		}
		catch (Exception^ e)
		{
			textBox7D->BackColor = Color::Red;
			D7Set = false;
		}
	}
	private: System::Void textBox8D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox8D->Text);
			textBox8D->BackColor = Color::White;
			D8Set = true;
		}
		catch (Exception^ e)
		{
			textBox8D->BackColor = Color::Red;
			D8Set = false;
		}
	}
	private: System::Void textBox9D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox9D->Text);
			textBox9D->BackColor = Color::White;
			D9Set = true;
		}
		catch (Exception^ e)
		{
			textBox9D->BackColor = Color::Red;
			D9Set = false;
		}
	}
	private: System::Void textBox10D_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberD;
			numberD = Convert::ToDouble(textBox10D->Text);
			textBox10D->BackColor = Color::White;
			D10Set = true;
		}
		catch (Exception^ e)
		{
			textBox10D->BackColor = Color::Red;
			D10Set = false;
		}
	}
	private: System::Void textBox1E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox1E->Text);
			textBox1E->BackColor = Color::White;
			E1Set = true;
		}
		catch (Exception^ e)
		{
			textBox1E->BackColor = Color::Red;
			E1Set = false;
		}
	}
	private: System::Void textBox2E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox2E->Text);
			textBox2E->BackColor = Color::White;
			E2Set = true;
		}
		catch (Exception^ e)
		{
			textBox2E->BackColor = Color::Red;
			E2Set = false;
		}
	}
	private: System::Void textBox3E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox3E->Text);
			textBox3E->BackColor = Color::White;
			E3Set = true;
		}
		catch (Exception^ e)
		{
			textBox3E->BackColor = Color::Red;
			E3Set = false;
		}
	}
	private: System::Void textBox4E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox4E->Text);
			textBox4E->BackColor = Color::White;
			E4Set = true;
		}
		catch (Exception^ e)
		{
			textBox4E->BackColor = Color::Red;
			E4Set = false;
		}
	}
	private: System::Void textBox5E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox5E->Text);
			textBox5E->BackColor = Color::White;
			E5Set = true;
		}
		catch (Exception^ e)
		{
			textBox5E->BackColor = Color::Red;
			E5Set = false;
		}
	}
	private: System::Void textBox6E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox6E->Text);
			textBox6E->BackColor = Color::White;
			E6Set = true;
		}
		catch (Exception^ e)
		{
			textBox6E->BackColor = Color::Red;
			E6Set = false;
		}
	}
	private: System::Void textBox7E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox7E->Text);
			textBox7E->BackColor = Color::White;
			E7Set = true;
		}
		catch (Exception^ e)
		{
			textBox7E->BackColor = Color::Red;
			E7Set = false;
		}
	}
	private: System::Void textBox8E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox8E->Text);
			textBox8E->BackColor = Color::White;
			E8Set = true;
		}
		catch (Exception^ e)
		{
			textBox8E->BackColor = Color::Red;
			E8Set = false;
		}
	}
	private: System::Void textBox9E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox9E->Text);
			textBox9E->BackColor = Color::White;
			E9Set = true;
		}
		catch (Exception^ e)
		{
			textBox9E->BackColor = Color::Red;
			E9Set = false;
		}
	}
	private: System::Void textBox10E_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int numberE;
			numberE = Convert::ToDouble(textBox10E->Text);
			textBox10E->BackColor = Color::White;
			E10Set = true;
		}
		catch (Exception^ e)
		{
			textBox10E->BackColor = Color::Red;
			E10Set = false;
		}
	}
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) { // TODO
	}
	private: System::Void buttonStop_Click(System::Object^ sender, System::EventArgs^ e) {// TODO
	}
	private: System::Void buttonStep_Click(System::Object^ sender, System::EventArgs^ e) {// TODO
	}
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {// TODO
	}
	};
}