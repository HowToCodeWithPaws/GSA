#pragma once
#include <string>
#include <vector>
#include <random>
#include <float.h>
#include <fstream>
//#include "GSA.cpp"

namespace GSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace GSAlgorithm;


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
			//		listCoeffs = new List<List<TextBox^>^>(10);
				//			listCoeffs = gcnew List<List <TextBox^>^>(10);
				//listCoeffs[0] = listTextBoxesCoeffs1;
				//listCoeffs[1] = listTextBoxesCoeffs2;
				//listCoeffs[2] = listTextBoxesCoeffs3;
				//listCoeffs[3] = listTextBoxesCoeffs4;
				//listCoeffs[4] = listTextBoxesCoeffs5;
				//listCoeffs[5] = listTextBoxesCoeffs6;
				//listCoeffs[6] = listTextBoxesCoeffs7;
				//listCoeffs[7] = listTextBoxesCoeffs8;
				//listCoeffs[8] = listTextBoxesCoeffs9;
				//listCoeffs[9] = listTextBoxesCoeffs10;
					//
					//TODO: Add the constructor code here
					//
		}

		void Load(void)
		{
			//		listMinSet = gcnew List<Boolean^>(gcnew array<Boolean^>{min1Set, min2Set, min3Set, min4Set, min5Set, min6Set, min7Set, min8Set, min9Set, min10Set});
			listMaxSet = gcnew List<bool>(gcnew array<bool>{max1Set, max2Set, max3Set, max4Set, max5Set, max6Set, max7Set, max8Set, max9Set, max10Set});
			listTextBoxesMin = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1Min, textBox2Min, textBox3Min, textBox4Min, textBox5Min, textBox6Min, textBox7Min, textBox8Min, textBox9Min, textBox10Min });
			listTextBoxesMax = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1Max, textBox2Max, textBox3Max, textBox4Max, textBox5Max, textBox6Max, textBox7Max, textBox8Max, textBox9Max, textBox10Max });
			listTextBoxesChosen = gcnew List<TextBox^>(gcnew array<TextBox^>{ textBox1Chosen, textBox2Chosen, textBox3Chosen, textBox4Chosen, textBox5Chosen, textBox6Chosen, textBox7Chosen, textBox8Chosen, textBox9Chosen, textBox10Chosen });
			listTrack = gcnew List<TrackBar^>(gcnew array<TrackBar^>{ trackBar1, trackBar2, trackBar3, trackBar4, trackBar5, trackBar6, trackBar7, trackBar8, trackBar9, trackBar10 });
			listLabelDimensions = gcnew List<Label^>(gcnew array<Label^>{ labelDim1, labelDim2, labelDim3, labelDim4, labelDim5, labelDim6, labelDim7, labelDim8, labelDim9, labelDim10 });
			listCheckBoxes = gcnew List<CheckBox^>(gcnew array<CheckBox^>{ checkBoxDim1, checkBoxDim2, checkBoxDim3, checkBoxDim4, checkBoxDim5, checkBoxDim6, checkBoxDim7, checkBoxDim8, checkBoxDim9, checkBoxDim10 });
			listTextBoxesCoeffs10 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox10A, textBox10B, textBox10C, textBox10D, textBox10E });
			listTextBoxesCoeffs1 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox1A, textBox1B, textBox1C, textBox1D, textBox1E });
			listTextBoxesCoeffs2 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox2A, textBox2B, textBox2C, textBox2D, textBox2E });
			listTextBoxesCoeffs3 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox3A, textBox3B, textBox3C, textBox3D, textBox3E });
			listTextBoxesCoeffs4 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox4A, textBox4B, textBox4C, textBox4D, textBox4E });
			listTextBoxesCoeffs5 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox5A, textBox5B, textBox5C, textBox5D, textBox5E });
			listTextBoxesCoeffs6 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox6A, textBox6B, textBox6C, textBox6D, textBox6E });
			listTextBoxesCoeffs7 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox7A, textBox7B, textBox7C, textBox7D, textBox7E });
			listTextBoxesCoeffs8 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox8A, textBox8B, textBox8C, textBox8D, textBox8E });
			listTextBoxesCoeffs9 = gcnew  List<TextBox^>(gcnew array<TextBox^>{ textBox9A, textBox9B, textBox9C, textBox9D, textBox9E });

			/*					listCoeffs = gcnew List<List <TextBox^>^>(10);
								listCoeffs[0] = listTextBoxesCoeffs1;
								listCoeffs[1] = listTextBoxesCoeffs2;
								listCoeffs[2] = listTextBoxesCoeffs3;
								listCoeffs[3] = listTextBoxesCoeffs4;
								listCoeffs[4] = listTextBoxesCoeffs5;
								listCoeffs[5] = listTextBoxesCoeffs6;
								listCoeffs[6] = listTextBoxesCoeffs7;
								listCoeffs[7] = listTextBoxesCoeffs8;
								listCoeffs[8] = listTextBoxesCoeffs9;
								listCoeffs[9] = listTextBoxesCoeffs10;*/
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

		   List<	   List<TextBox^>^>^ listCoeffs;

		   List<TextBox^>^ listTextBoxesCoeffs1;
	private: System::Windows::Forms::TextBox^ textBox1A;
	private: System::Windows::Forms::TextBox^ textBox1B;
	private: System::Windows::Forms::TextBox^ textBox1C;
	private: System::Windows::Forms::TextBox^ textBox1D;
	private: System::Windows::Forms::TextBox^ textBox1E;

		   List<TextBox^>^ listTextBoxesCoeffs2;
	private: System::Windows::Forms::TextBox^ textBox2A;
	private: System::Windows::Forms::TextBox^ textBox2C;
	private: System::Windows::Forms::TextBox^ textBox2B;
	private: System::Windows::Forms::TextBox^ textBox2D;
	private: System::Windows::Forms::TextBox^ textBox2E;

		   List<TextBox^>^ listTextBoxesCoeffs3;
	private: System::Windows::Forms::TextBox^ textBox3A;
	private: System::Windows::Forms::TextBox^ textBox3C;
	private: System::Windows::Forms::TextBox^ textBox3B;
	private: System::Windows::Forms::TextBox^ textBox3E;
	private: System::Windows::Forms::TextBox^ textBox3D;

		   List<TextBox^>^ listTextBoxesCoeffs4;
	private: System::Windows::Forms::TextBox^ textBox4A;
	private: System::Windows::Forms::TextBox^ textBox4C;
	private: System::Windows::Forms::TextBox^ textBox4B;
	private: System::Windows::Forms::TextBox^ textBox4E;
	private: System::Windows::Forms::TextBox^ textBox4D;


		   List<TextBox^>^ listTextBoxesCoeffs5;
	private: System::Windows::Forms::TextBox^ textBox5A;
	private: System::Windows::Forms::TextBox^ textBox5C;
	private: System::Windows::Forms::TextBox^ textBox5B;
	private: System::Windows::Forms::TextBox^ textBox5E;
	private: System::Windows::Forms::TextBox^ textBox5D;

		   List<TextBox^>^ listTextBoxesCoeffs10;
	private: System::Windows::Forms::TextBox^ textBox10A;
	private: System::Windows::Forms::TextBox^ textBox10C;
	private: System::Windows::Forms::TextBox^ textBox10B;
	private: System::Windows::Forms::TextBox^ textBox10E;
	private: System::Windows::Forms::TextBox^ textBox10D;

		   List<TextBox^>^ listTextBoxesCoeffs9;
	private: System::Windows::Forms::TextBox^ textBox9A;
	private: System::Windows::Forms::TextBox^ textBox9C;
	private: System::Windows::Forms::TextBox^ textBox9B;
	private: System::Windows::Forms::TextBox^ textBox9E;
	private: System::Windows::Forms::TextBox^ textBox9D;

		   List<TextBox^>^ listTextBoxesCoeffs8;
	private: System::Windows::Forms::TextBox^ textBox8A;
	private: System::Windows::Forms::TextBox^ textBox8C;
	private: System::Windows::Forms::TextBox^ textBox8B;
	private: System::Windows::Forms::TextBox^ textBox8E;
	private: System::Windows::Forms::TextBox^ textBox8D;

		   List<TextBox^>^ listTextBoxesCoeffs7;
	private: System::Windows::Forms::TextBox^ textBox7A;
	private: System::Windows::Forms::TextBox^ textBox7C;
	private: System::Windows::Forms::TextBox^ textBox7B;
	private: System::Windows::Forms::TextBox^ textBox7E;
	private: System::Windows::Forms::TextBox^ textBox7D;

		   List<TextBox^>^ listTextBoxesCoeffs6;
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

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Button^ buttonStep;
	private: System::Windows::Forms::Button^ buttonStop;
	private: System::Windows::Forms::Button^ buttonApply;

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
	private: int number_checked = 0;
	private: int number_dimensions = 0;
	private: int number_special_dimensions = 0;
	private:
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(1,
				5));
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// comboFunctions
			// 
			this->comboFunctions->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboFunctions->Enabled = false;
			this->comboFunctions->FormattingEnabled = true;
			this->comboFunctions->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"linear y = x", L"square y = x**2", L"optimal power flow" });
			this->comboFunctions->Location = System::Drawing::Point(313, 24);
			this->comboFunctions->Margin = System::Windows::Forms::Padding(2);
			this->comboFunctions->Name = L"comboFunctions";
			this->comboFunctions->Size = System::Drawing::Size(113, 21);
			this->comboFunctions->TabIndex = 1;
			this->comboFunctions->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboFunctions_SelectedIndexChanged);
			// 
			// comboExtremum
			// 
			this->comboExtremum->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboExtremum->FormattingEnabled = true;
			this->comboExtremum->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"minimum", L"maximum" });
			this->comboExtremum->Location = System::Drawing::Point(430, 24);
			this->comboExtremum->Margin = System::Windows::Forms::Padding(2);
			this->comboExtremum->Name = L"comboExtremum";
			this->comboExtremum->Size = System::Drawing::Size(65, 21);
			this->comboExtremum->TabIndex = 2;
			// 
			// labelFunction
			// 
			this->labelFunction->AutoSize = true;
			this->labelFunction->Location = System::Drawing::Point(310, 9);
			this->labelFunction->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelFunction->MaximumSize = System::Drawing::Size(100, 26);
			this->labelFunction->Name = L"labelFunction";
			this->labelFunction->Size = System::Drawing::Size(98, 13);
			this->labelFunction->TabIndex = 3;
			this->labelFunction->Text = L"function to optimize";
			// 
			// labelExtremum
			// 
			this->labelExtremum->AutoSize = true;
			this->labelExtremum->Location = System::Drawing::Point(427, 9);
			this->labelExtremum->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelExtremum->MaximumSize = System::Drawing::Size(100, 26);
			this->labelExtremum->Name = L"labelExtremum";
			this->labelExtremum->Size = System::Drawing::Size(87, 13);
			this->labelExtremum->TabIndex = 4;
			this->labelExtremum->Text = L"type of extremum";
			// 
			// labelDimensionsNumber
			// 
			this->labelDimensionsNumber->AutoSize = true;
			this->labelDimensionsNumber->Location = System::Drawing::Point(182, 9);
			this->labelDimensionsNumber->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDimensionsNumber->MaximumSize = System::Drawing::Size(113, 26);
			this->labelDimensionsNumber->Name = L"labelDimensionsNumber";
			this->labelDimensionsNumber->Size = System::Drawing::Size(70, 13);
			this->labelDimensionsNumber->TabIndex = 5;
			this->labelDimensionsNumber->Text = L"N dimensions";
			// 
			// comboDimensionsNumber
			// 
			this->comboDimensionsNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboDimensionsNumber->FormattingEnabled = true;
			this->comboDimensionsNumber->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10"
			});
			this->comboDimensionsNumber->Location = System::Drawing::Point(184, 24);
			this->comboDimensionsNumber->Margin = System::Windows::Forms::Padding(2);
			this->comboDimensionsNumber->Name = L"comboDimensionsNumber";
			this->comboDimensionsNumber->Size = System::Drawing::Size(39, 21);
			this->comboDimensionsNumber->TabIndex = 6;
			this->comboDimensionsNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboDimensionsNumber_SelectedIndexChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Enabled = false;
			this->trackBar1->Location = System::Drawing::Point(476, 74);
			this->trackBar1->Margin = System::Windows::Forms::Padding(2);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(131, 45);
			this->trackBar1->TabIndex = 7;
			this->trackBar1->Visible = false;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar1_Scroll);
			// 
			// textBox1Max
			// 
			this->textBox1Max->Location = System::Drawing::Point(603, 75);
			this->textBox1Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox1Max->Name = L"textBox1Max";
			this->textBox1Max->Size = System::Drawing::Size(28, 20);
			this->textBox1Max->TabIndex = 8;
			this->textBox1Max->Visible = false;
			this->textBox1Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1Max_TextChanged);
			// 
			// textBox1Min
			// 
			this->textBox1Min->Location = System::Drawing::Point(451, 74);
			this->textBox1Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox1Min->Name = L"textBox1Min";
			this->textBox1Min->Size = System::Drawing::Size(28, 20);
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
			this->comboAgentsNumber->Location = System::Drawing::Point(259, 24);
			this->comboAgentsNumber->Margin = System::Windows::Forms::Padding(2);
			this->comboAgentsNumber->Name = L"comboAgentsNumber";
			this->comboAgentsNumber->Size = System::Drawing::Size(50, 21);
			this->comboAgentsNumber->TabIndex = 11;
			// 
			// labelAgentsNumber
			// 
			this->labelAgentsNumber->AutoSize = true;
			this->labelAgentsNumber->Location = System::Drawing::Point(256, 9);
			this->labelAgentsNumber->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelAgentsNumber->MaximumSize = System::Drawing::Size(100, 26);
			this->labelAgentsNumber->Name = L"labelAgentsNumber";
			this->labelAgentsNumber->Size = System::Drawing::Size(50, 13);
			this->labelAgentsNumber->TabIndex = 10;
			this->labelAgentsNumber->Text = L"N agents";
			// 
			// labelConversionType
			// 
			this->labelConversionType->AutoSize = true;
			this->labelConversionType->Location = System::Drawing::Point(516, 9);
			this->labelConversionType->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelConversionType->MaximumSize = System::Drawing::Size(100, 26);
			this->labelConversionType->Name = L"labelConversionType";
			this->labelConversionType->Size = System::Drawing::Size(82, 13);
			this->labelConversionType->TabIndex = 13;
			this->labelConversionType->Text = L"conversion type";
			// 
			// comboConversionType
			// 
			this->comboConversionType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboConversionType->FormattingEnabled = true;
			this->comboConversionType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"number of iterations", L"difference between iterations" });
			this->comboConversionType->Location = System::Drawing::Point(519, 24);
			this->comboConversionType->Margin = System::Windows::Forms::Padding(2);
			this->comboConversionType->Name = L"comboConversionType";
			this->comboConversionType->Size = System::Drawing::Size(165, 21);
			this->comboConversionType->TabIndex = 12;
			this->comboConversionType->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboConversionType_SelectedIndexChanged);
			// 
			// comboConversion
			// 
			this->comboConversion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboConversion->FormattingEnabled = true;
			this->comboConversion->Items->AddRange(gcnew cli::array< System::Object^  >(1000) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62",
					L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80",
					L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98",
					L"99", L"100", L"101", L"102", L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114",
					L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122", L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130",
					L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146",
					L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162",
					L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178",
					L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194",
					L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210",
					L"211", L"212", L"213", L"214", L"215", L"216", L"217", L"218", L"219", L"220", L"221", L"222", L"223", L"224", L"225", L"226",
					L"227", L"228", L"229", L"230", L"231", L"232", L"233", L"234", L"235", L"236", L"237", L"238", L"239", L"240", L"241", L"242",
					L"243", L"244", L"245", L"246", L"247", L"248", L"249", L"250", L"251", L"252", L"253", L"254", L"255", L"256", L"257", L"258",
					L"259", L"260", L"261", L"262", L"263", L"264", L"265", L"266", L"267", L"268", L"269", L"270", L"271", L"272", L"273", L"274",
					L"275", L"276", L"277", L"278", L"279", L"280", L"281", L"282", L"283", L"284", L"285", L"286", L"287", L"288", L"289", L"290",
					L"291", L"292", L"293", L"294", L"295", L"296", L"297", L"298", L"299", L"300", L"301", L"302", L"303", L"304", L"305", L"306",
					L"307", L"308", L"309", L"310", L"311", L"312", L"313", L"314", L"315", L"316", L"317", L"318", L"319", L"320", L"321", L"322",
					L"323", L"324", L"325", L"326", L"327", L"328", L"329", L"330", L"331", L"332", L"333", L"334", L"335", L"336", L"337", L"338",
					L"339", L"340", L"341", L"342", L"343", L"344", L"345", L"346", L"347", L"348", L"349", L"350", L"351", L"352", L"353", L"354",
					L"355", L"356", L"357", L"358", L"359", L"360", L"361", L"362", L"363", L"364", L"365", L"366", L"367", L"368", L"369", L"370",
					L"371", L"372", L"373", L"374", L"375", L"376", L"377", L"378", L"379", L"380", L"381", L"382", L"383", L"384", L"385", L"386",
					L"387", L"388", L"389", L"390", L"391", L"392", L"393", L"394", L"395", L"396", L"397", L"398", L"399", L"400", L"401", L"402",
					L"403", L"404", L"405", L"406", L"407", L"408", L"409", L"410", L"411", L"412", L"413", L"414", L"415", L"416", L"417", L"418",
					L"419", L"420", L"421", L"422", L"423", L"424", L"425", L"426", L"427", L"428", L"429", L"430", L"431", L"432", L"433", L"434",
					L"435", L"436", L"437", L"438", L"439", L"440", L"441", L"442", L"443", L"444", L"445", L"446", L"447", L"448", L"449", L"450",
					L"451", L"452", L"453", L"454", L"455", L"456", L"457", L"458", L"459", L"460", L"461", L"462", L"463", L"464", L"465", L"466",
					L"467", L"468", L"469", L"470", L"471", L"472", L"473", L"474", L"475", L"476", L"477", L"478", L"479", L"480", L"481", L"482",
					L"483", L"484", L"485", L"486", L"487", L"488", L"489", L"490", L"491", L"492", L"493", L"494", L"495", L"496", L"497", L"498",
					L"499", L"500", L"501", L"502", L"503", L"504", L"505", L"506", L"507", L"508", L"509", L"510", L"511", L"512", L"513", L"514",
					L"515", L"516", L"517", L"518", L"519", L"520", L"521", L"522", L"523", L"524", L"525", L"526", L"527", L"528", L"529", L"530",
					L"531", L"532", L"533", L"534", L"535", L"536", L"537", L"538", L"539", L"540", L"541", L"542", L"543", L"544", L"545", L"546",
					L"547", L"548", L"549", L"550", L"551", L"552", L"553", L"554", L"555", L"556", L"557", L"558", L"559", L"560", L"561", L"562",
					L"563", L"564", L"565", L"566", L"567", L"568", L"569", L"570", L"571", L"572", L"573", L"574", L"575", L"576", L"577", L"578",
					L"579", L"580", L"581", L"582", L"583", L"584", L"585", L"586", L"587", L"588", L"589", L"590", L"591", L"592", L"593", L"594",
					L"595", L"596", L"597", L"598", L"599", L"600", L"601", L"602", L"603", L"604", L"605", L"606", L"607", L"608", L"609", L"610",
					L"611", L"612", L"613", L"614", L"615", L"616", L"617", L"618", L"619", L"620", L"621", L"622", L"623", L"624", L"625", L"626",
					L"627", L"628", L"629", L"630", L"631", L"632", L"633", L"634", L"635", L"636", L"637", L"638", L"639", L"640", L"641", L"642",
					L"643", L"644", L"645", L"646", L"647", L"648", L"649", L"650", L"651", L"652", L"653", L"654", L"655", L"656", L"657", L"658",
					L"659", L"660", L"661", L"662", L"663", L"664", L"665", L"666", L"667", L"668", L"669", L"670", L"671", L"672", L"673", L"674",
					L"675", L"676", L"677", L"678", L"679", L"680", L"681", L"682", L"683", L"684", L"685", L"686", L"687", L"688", L"689", L"690",
					L"691", L"692", L"693", L"694", L"695", L"696", L"697", L"698", L"699", L"700", L"701", L"702", L"703", L"704", L"705", L"706",
					L"707", L"708", L"709", L"710", L"711", L"712", L"713", L"714", L"715", L"716", L"717", L"718", L"719", L"720", L"721", L"722",
					L"723", L"724", L"725", L"726", L"727", L"728", L"729", L"730", L"731", L"732", L"733", L"734", L"735", L"736", L"737", L"738",
					L"739", L"740", L"741", L"742", L"743", L"744", L"745", L"746", L"747", L"748", L"749", L"750", L"751", L"752", L"753", L"754",
					L"755", L"756", L"757", L"758", L"759", L"760", L"761", L"762", L"763", L"764", L"765", L"766", L"767", L"768", L"769", L"770",
					L"771", L"772", L"773", L"774", L"775", L"776", L"777", L"778", L"779", L"780", L"781", L"782", L"783", L"784", L"785", L"786",
					L"787", L"788", L"789", L"790", L"791", L"792", L"793", L"794", L"795", L"796", L"797", L"798", L"799", L"800", L"801", L"802",
					L"803", L"804", L"805", L"806", L"807", L"808", L"809", L"810", L"811", L"812", L"813", L"814", L"815", L"816", L"817", L"818",
					L"819", L"820", L"821", L"822", L"823", L"824", L"825", L"826", L"827", L"828", L"829", L"830", L"831", L"832", L"833", L"834",
					L"835", L"836", L"837", L"838", L"839", L"840", L"841", L"842", L"843", L"844", L"845", L"846", L"847", L"848", L"849", L"850",
					L"851", L"852", L"853", L"854", L"855", L"856", L"857", L"858", L"859", L"860", L"861", L"862", L"863", L"864", L"865", L"866",
					L"867", L"868", L"869", L"870", L"871", L"872", L"873", L"874", L"875", L"876", L"877", L"878", L"879", L"880", L"881", L"882",
					L"883", L"884", L"885", L"886", L"887", L"888", L"889", L"890", L"891", L"892", L"893", L"894", L"895", L"896", L"897", L"898",
					L"899", L"900", L"901", L"902", L"903", L"904", L"905", L"906", L"907", L"908", L"909", L"910", L"911", L"912", L"913", L"914",
					L"915", L"916", L"917", L"918", L"919", L"920", L"921", L"922", L"923", L"924", L"925", L"926", L"927", L"928", L"929", L"930",
					L"931", L"932", L"933", L"934", L"935", L"936", L"937", L"938", L"939", L"940", L"941", L"942", L"943", L"944", L"945", L"946",
					L"947", L"948", L"949", L"950", L"951", L"952", L"953", L"954", L"955", L"956", L"957", L"958", L"959", L"960", L"961", L"962",
					L"963", L"964", L"965", L"966", L"967", L"968", L"969", L"970", L"971", L"972", L"973", L"974", L"975", L"976", L"977", L"978",
					L"979", L"980", L"981", L"982", L"983", L"984", L"985", L"986", L"987", L"988", L"989", L"990", L"991", L"992", L"993", L"994",
					L"995", L"996", L"997", L"998", L"999", L"1000"
			});
			this->comboConversion->Location = System::Drawing::Point(688, 24);
			this->comboConversion->Margin = System::Windows::Forms::Padding(2);
			this->comboConversion->Name = L"comboConversion";
			this->comboConversion->Size = System::Drawing::Size(39, 21);
			this->comboConversion->TabIndex = 15;
			this->comboConversion->Visible = false;
			// 
			// labelConversion
			// 
			this->labelConversion->AutoSize = true;
			this->labelConversion->Location = System::Drawing::Point(685, 2);
			this->labelConversion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelConversion->MaximumSize = System::Drawing::Size(100, 26);
			this->labelConversion->Name = L"labelConversion";
			this->labelConversion->Size = System::Drawing::Size(59, 13);
			this->labelConversion->TabIndex = 14;
			this->labelConversion->Text = L"conversion";
			this->labelConversion->Visible = false;
			// 
			// comboSpecialDimensionsNumber
			// 
			this->comboSpecialDimensionsNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboSpecialDimensionsNumber->FormattingEnabled = true;
			this->comboSpecialDimensionsNumber->Location = System::Drawing::Point(748, 24);
			this->comboSpecialDimensionsNumber->Margin = System::Windows::Forms::Padding(2);
			this->comboSpecialDimensionsNumber->Name = L"comboSpecialDimensionsNumber";
			this->comboSpecialDimensionsNumber->Size = System::Drawing::Size(39, 21);
			this->comboSpecialDimensionsNumber->TabIndex = 17;
			this->comboSpecialDimensionsNumber->Visible = false;
			// 
			// labelSpecialDimensionsNumber
			// 
			this->labelSpecialDimensionsNumber->AutoSize = true;
			this->labelSpecialDimensionsNumber->Location = System::Drawing::Point(746, 9);
			this->labelSpecialDimensionsNumber->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSpecialDimensionsNumber->MaximumSize = System::Drawing::Size(133, 26);
			this->labelSpecialDimensionsNumber->Name = L"labelSpecialDimensionsNumber";
			this->labelSpecialDimensionsNumber->Size = System::Drawing::Size(91, 13);
			this->labelSpecialDimensionsNumber->TabIndex = 16;
			this->labelSpecialDimensionsNumber->Text = L"N vp-effect buses";
			this->labelSpecialDimensionsNumber->Visible = false;
			// 
			// textBox1D
			// 
			this->textBox1D->Location = System::Drawing::Point(763, 74);
			this->textBox1D->Margin = System::Windows::Forms::Padding(2);
			this->textBox1D->Name = L"textBox1D";
			this->textBox1D->Size = System::Drawing::Size(28, 20);
			this->textBox1D->TabIndex = 18;
			this->textBox1D->Visible = false;
			// 
			// labelCoeffs
			// 
			this->labelCoeffs->AutoSize = true;
			this->labelCoeffs->Location = System::Drawing::Point(663, 46);
			this->labelCoeffs->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCoeffs->Name = L"labelCoeffs";
			this->labelCoeffs->Size = System::Drawing::Size(61, 13);
			this->labelCoeffs->TabIndex = 19;
			this->labelCoeffs->Text = L"coefficients";
			this->labelCoeffs->Visible = false;
			// 
			// labelDimensions
			// 
			this->labelDimensions->AutoSize = true;
			this->labelDimensions->Location = System::Drawing::Point(419, 46);
			this->labelDimensions->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDimensions->Name = L"labelDimensions";
			this->labelDimensions->Size = System::Drawing::Size(59, 13);
			this->labelDimensions->TabIndex = 20;
			this->labelDimensions->Text = L"dimensions";
			this->labelDimensions->Visible = false;
			// 
			// textBox1Chosen
			// 
			this->textBox1Chosen->Location = System::Drawing::Point(633, 74);
			this->textBox1Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox1Chosen->Name = L"textBox1Chosen";
			this->textBox1Chosen->ReadOnly = true;
			this->textBox1Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox1Chosen->TabIndex = 21;
			this->textBox1Chosen->Visible = false;
			// 
			// textBox1E
			// 
			this->textBox1E->Location = System::Drawing::Point(793, 74);
			this->textBox1E->Margin = System::Windows::Forms::Padding(2);
			this->textBox1E->Name = L"textBox1E";
			this->textBox1E->Size = System::Drawing::Size(28, 20);
			this->textBox1E->TabIndex = 22;
			this->textBox1E->Visible = false;
			// 
			// textBox1C
			// 
			this->textBox1C->Location = System::Drawing::Point(732, 74);
			this->textBox1C->Margin = System::Windows::Forms::Padding(2);
			this->textBox1C->Name = L"textBox1C";
			this->textBox1C->Size = System::Drawing::Size(28, 20);
			this->textBox1C->TabIndex = 24;
			this->textBox1C->Visible = false;
			// 
			// textBox1B
			// 
			this->textBox1B->Location = System::Drawing::Point(702, 74);
			this->textBox1B->Margin = System::Windows::Forms::Padding(2);
			this->textBox1B->Name = L"textBox1B";
			this->textBox1B->Size = System::Drawing::Size(28, 20);
			this->textBox1B->TabIndex = 23;
			this->textBox1B->Visible = false;
			// 
			// textBox1A
			// 
			this->textBox1A->Location = System::Drawing::Point(673, 74);
			this->textBox1A->Margin = System::Windows::Forms::Padding(2);
			this->textBox1A->Name = L"textBox1A";
			this->textBox1A->Size = System::Drawing::Size(28, 20);
			this->textBox1A->TabIndex = 25;
			this->textBox1A->Visible = false;
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Location = System::Drawing::Point(681, 58);
			this->labelA->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(13, 13);
			this->labelA->TabIndex = 26;
			this->labelA->Text = L"a";
			this->labelA->Visible = false;
			// 
			// labelMin
			// 
			this->labelMin->AutoSize = true;
			this->labelMin->Location = System::Drawing::Point(448, 58);
			this->labelMin->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMin->Name = L"labelMin";
			this->labelMin->Size = System::Drawing::Size(23, 13);
			this->labelMin->TabIndex = 27;
			this->labelMin->Text = L"min";
			this->labelMin->Visible = false;
			// 
			// labelE
			// 
			this->labelE->AutoSize = true;
			this->labelE->Location = System::Drawing::Point(801, 59);
			this->labelE->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelE->Name = L"labelE";
			this->labelE->Size = System::Drawing::Size(13, 13);
			this->labelE->TabIndex = 28;
			this->labelE->Text = L"e";
			this->labelE->Visible = false;
			// 
			// labelD
			// 
			this->labelD->AutoSize = true;
			this->labelD->Location = System::Drawing::Point(768, 59);
			this->labelD->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelD->Name = L"labelD";
			this->labelD->Size = System::Drawing::Size(13, 13);
			this->labelD->TabIndex = 29;
			this->labelD->Text = L"d";
			this->labelD->Visible = false;
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Location = System::Drawing::Point(737, 58);
			this->labelC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(13, 13);
			this->labelC->TabIndex = 30;
			this->labelC->Text = L"c";
			this->labelC->Visible = false;
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Location = System::Drawing::Point(707, 58);
			this->labelB->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(13, 13);
			this->labelB->TabIndex = 31;
			this->labelB->Text = L"b";
			this->labelB->Visible = false;
			// 
			// labelMax
			// 
			this->labelMax->AutoSize = true;
			this->labelMax->Location = System::Drawing::Point(603, 58);
			this->labelMax->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMax->Name = L"labelMax";
			this->labelMax->Size = System::Drawing::Size(26, 13);
			this->labelMax->TabIndex = 32;
			this->labelMax->Text = L"max";
			this->labelMax->Visible = false;
			// 
			// labelChosen
			// 
			this->labelChosen->AutoSize = true;
			this->labelChosen->Location = System::Drawing::Point(633, 58);
			this->labelChosen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelChosen->Name = L"labelChosen";
			this->labelChosen->Size = System::Drawing::Size(42, 13);
			this->labelChosen->TabIndex = 33;
			this->labelChosen->Text = L"chosen";
			this->labelChosen->Visible = false;
			// 
			// textBox2A
			// 
			this->textBox2A->Location = System::Drawing::Point(673, 113);
			this->textBox2A->Margin = System::Windows::Forms::Padding(2);
			this->textBox2A->Name = L"textBox2A";
			this->textBox2A->Size = System::Drawing::Size(28, 20);
			this->textBox2A->TabIndex = 42;
			this->textBox2A->Visible = false;
			// 
			// textBox2C
			// 
			this->textBox2C->Location = System::Drawing::Point(732, 113);
			this->textBox2C->Margin = System::Windows::Forms::Padding(2);
			this->textBox2C->Name = L"textBox2C";
			this->textBox2C->Size = System::Drawing::Size(28, 20);
			this->textBox2C->TabIndex = 41;
			this->textBox2C->Visible = false;
			// 
			// textBox2B
			// 
			this->textBox2B->Location = System::Drawing::Point(702, 113);
			this->textBox2B->Margin = System::Windows::Forms::Padding(2);
			this->textBox2B->Name = L"textBox2B";
			this->textBox2B->Size = System::Drawing::Size(28, 20);
			this->textBox2B->TabIndex = 40;
			this->textBox2B->Visible = false;
			// 
			// textBox2E
			// 
			this->textBox2E->Location = System::Drawing::Point(793, 113);
			this->textBox2E->Margin = System::Windows::Forms::Padding(2);
			this->textBox2E->Name = L"textBox2E";
			this->textBox2E->Size = System::Drawing::Size(28, 20);
			this->textBox2E->TabIndex = 39;
			this->textBox2E->Visible = false;
			// 
			// textBox2Chosen
			// 
			this->textBox2Chosen->Location = System::Drawing::Point(633, 114);
			this->textBox2Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox2Chosen->Name = L"textBox2Chosen";
			this->textBox2Chosen->ReadOnly = true;
			this->textBox2Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox2Chosen->TabIndex = 38;
			this->textBox2Chosen->Visible = false;
			// 
			// textBox2D
			// 
			this->textBox2D->Location = System::Drawing::Point(763, 113);
			this->textBox2D->Margin = System::Windows::Forms::Padding(2);
			this->textBox2D->Name = L"textBox2D";
			this->textBox2D->Size = System::Drawing::Size(28, 20);
			this->textBox2D->TabIndex = 37;
			this->textBox2D->Visible = false;
			// 
			// textBox2Min
			// 
			this->textBox2Min->Location = System::Drawing::Point(451, 113);
			this->textBox2Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox2Min->Name = L"textBox2Min";
			this->textBox2Min->Size = System::Drawing::Size(28, 20);
			this->textBox2Min->TabIndex = 36;
			this->textBox2Min->Visible = false;
			this->textBox2Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2Min_TextChanged);
			// 
			// textBox2Max
			// 
			this->textBox2Max->Location = System::Drawing::Point(603, 114);
			this->textBox2Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox2Max->Name = L"textBox2Max";
			this->textBox2Max->Size = System::Drawing::Size(28, 20);
			this->textBox2Max->TabIndex = 35;
			this->textBox2Max->Visible = false;
			this->textBox2Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2Max_TextChanged);
			// 
			// trackBar2
			// 
			this->trackBar2->Enabled = false;
			this->trackBar2->Location = System::Drawing::Point(476, 113);
			this->trackBar2->Margin = System::Windows::Forms::Padding(2);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(131, 45);
			this->trackBar2->TabIndex = 34;
			this->trackBar2->Visible = false;
			// 
			// textBox3A
			// 
			this->textBox3A->Location = System::Drawing::Point(673, 149);
			this->textBox3A->Margin = System::Windows::Forms::Padding(2);
			this->textBox3A->Name = L"textBox3A";
			this->textBox3A->Size = System::Drawing::Size(28, 20);
			this->textBox3A->TabIndex = 51;
			this->textBox3A->Visible = false;
			// 
			// textBox3C
			// 
			this->textBox3C->Location = System::Drawing::Point(732, 149);
			this->textBox3C->Margin = System::Windows::Forms::Padding(2);
			this->textBox3C->Name = L"textBox3C";
			this->textBox3C->Size = System::Drawing::Size(28, 20);
			this->textBox3C->TabIndex = 50;
			this->textBox3C->Visible = false;
			// 
			// textBox3B
			// 
			this->textBox3B->Location = System::Drawing::Point(702, 149);
			this->textBox3B->Margin = System::Windows::Forms::Padding(2);
			this->textBox3B->Name = L"textBox3B";
			this->textBox3B->Size = System::Drawing::Size(28, 20);
			this->textBox3B->TabIndex = 49;
			this->textBox3B->Visible = false;
			// 
			// textBox3E
			// 
			this->textBox3E->Location = System::Drawing::Point(793, 149);
			this->textBox3E->Margin = System::Windows::Forms::Padding(2);
			this->textBox3E->Name = L"textBox3E";
			this->textBox3E->Size = System::Drawing::Size(28, 20);
			this->textBox3E->TabIndex = 48;
			this->textBox3E->Visible = false;
			// 
			// textBox3Chosen
			// 
			this->textBox3Chosen->Location = System::Drawing::Point(633, 150);
			this->textBox3Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox3Chosen->Name = L"textBox3Chosen";
			this->textBox3Chosen->ReadOnly = true;
			this->textBox3Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox3Chosen->TabIndex = 47;
			this->textBox3Chosen->Visible = false;
			// 
			// textBox3D
			// 
			this->textBox3D->Location = System::Drawing::Point(763, 149);
			this->textBox3D->Margin = System::Windows::Forms::Padding(2);
			this->textBox3D->Name = L"textBox3D";
			this->textBox3D->Size = System::Drawing::Size(28, 20);
			this->textBox3D->TabIndex = 46;
			this->textBox3D->Visible = false;
			// 
			// textBox3Min
			// 
			this->textBox3Min->Location = System::Drawing::Point(451, 150);
			this->textBox3Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox3Min->Name = L"textBox3Min";
			this->textBox3Min->Size = System::Drawing::Size(28, 20);
			this->textBox3Min->TabIndex = 45;
			this->textBox3Min->Visible = false;
			this->textBox3Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3Min_TextChanged);
			// 
			// textBox3Max
			// 
			this->textBox3Max->Location = System::Drawing::Point(603, 150);
			this->textBox3Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox3Max->Name = L"textBox3Max";
			this->textBox3Max->Size = System::Drawing::Size(28, 20);
			this->textBox3Max->TabIndex = 44;
			this->textBox3Max->Visible = false;
			this->textBox3Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3Max_TextChanged);
			// 
			// trackBar3
			// 
			this->trackBar3->Enabled = false;
			this->trackBar3->Location = System::Drawing::Point(476, 150);
			this->trackBar3->Margin = System::Windows::Forms::Padding(2);
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(131, 45);
			this->trackBar3->TabIndex = 43;
			this->trackBar3->Visible = false;
			// 
			// textBox4A
			// 
			this->textBox4A->Location = System::Drawing::Point(673, 187);
			this->textBox4A->Margin = System::Windows::Forms::Padding(2);
			this->textBox4A->Name = L"textBox4A";
			this->textBox4A->Size = System::Drawing::Size(28, 20);
			this->textBox4A->TabIndex = 60;
			this->textBox4A->Visible = false;
			// 
			// textBox4C
			// 
			this->textBox4C->Location = System::Drawing::Point(732, 187);
			this->textBox4C->Margin = System::Windows::Forms::Padding(2);
			this->textBox4C->Name = L"textBox4C";
			this->textBox4C->Size = System::Drawing::Size(28, 20);
			this->textBox4C->TabIndex = 59;
			this->textBox4C->Visible = false;
			// 
			// textBox4B
			// 
			this->textBox4B->Location = System::Drawing::Point(702, 187);
			this->textBox4B->Margin = System::Windows::Forms::Padding(2);
			this->textBox4B->Name = L"textBox4B";
			this->textBox4B->Size = System::Drawing::Size(28, 20);
			this->textBox4B->TabIndex = 58;
			this->textBox4B->Visible = false;
			// 
			// textBox4E
			// 
			this->textBox4E->Location = System::Drawing::Point(793, 187);
			this->textBox4E->Margin = System::Windows::Forms::Padding(2);
			this->textBox4E->Name = L"textBox4E";
			this->textBox4E->Size = System::Drawing::Size(28, 20);
			this->textBox4E->TabIndex = 57;
			this->textBox4E->Visible = false;
			// 
			// textBox4Chosen
			// 
			this->textBox4Chosen->Location = System::Drawing::Point(633, 187);
			this->textBox4Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox4Chosen->Name = L"textBox4Chosen";
			this->textBox4Chosen->ReadOnly = true;
			this->textBox4Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox4Chosen->TabIndex = 56;
			this->textBox4Chosen->Visible = false;
			// 
			// textBox4D
			// 
			this->textBox4D->Location = System::Drawing::Point(763, 187);
			this->textBox4D->Margin = System::Windows::Forms::Padding(2);
			this->textBox4D->Name = L"textBox4D";
			this->textBox4D->Size = System::Drawing::Size(28, 20);
			this->textBox4D->TabIndex = 55;
			this->textBox4D->Visible = false;
			// 
			// textBox4Min
			// 
			this->textBox4Min->Location = System::Drawing::Point(451, 187);
			this->textBox4Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox4Min->Name = L"textBox4Min";
			this->textBox4Min->Size = System::Drawing::Size(28, 20);
			this->textBox4Min->TabIndex = 54;
			this->textBox4Min->Visible = false;
			this->textBox4Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4Min_TextChanged);
			// 
			// textBox4Max
			// 
			this->textBox4Max->Location = System::Drawing::Point(603, 187);
			this->textBox4Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox4Max->Name = L"textBox4Max";
			this->textBox4Max->Size = System::Drawing::Size(28, 20);
			this->textBox4Max->TabIndex = 53;
			this->textBox4Max->Visible = false;
			this->textBox4Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4Max_TextChanged);
			// 
			// trackBar4
			// 
			this->trackBar4->Enabled = false;
			this->trackBar4->Location = System::Drawing::Point(476, 187);
			this->trackBar4->Margin = System::Windows::Forms::Padding(2);
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(131, 45);
			this->trackBar4->TabIndex = 52;
			this->trackBar4->Visible = false;
			// 
			// textBox5A
			// 
			this->textBox5A->Location = System::Drawing::Point(673, 224);
			this->textBox5A->Margin = System::Windows::Forms::Padding(2);
			this->textBox5A->Name = L"textBox5A";
			this->textBox5A->Size = System::Drawing::Size(28, 20);
			this->textBox5A->TabIndex = 69;
			this->textBox5A->Visible = false;
			// 
			// textBox5C
			// 
			this->textBox5C->Location = System::Drawing::Point(732, 224);
			this->textBox5C->Margin = System::Windows::Forms::Padding(2);
			this->textBox5C->Name = L"textBox5C";
			this->textBox5C->Size = System::Drawing::Size(28, 20);
			this->textBox5C->TabIndex = 68;
			this->textBox5C->Visible = false;
			// 
			// textBox5B
			// 
			this->textBox5B->Location = System::Drawing::Point(702, 224);
			this->textBox5B->Margin = System::Windows::Forms::Padding(2);
			this->textBox5B->Name = L"textBox5B";
			this->textBox5B->Size = System::Drawing::Size(28, 20);
			this->textBox5B->TabIndex = 67;
			this->textBox5B->Visible = false;
			// 
			// textBox5E
			// 
			this->textBox5E->Location = System::Drawing::Point(793, 224);
			this->textBox5E->Margin = System::Windows::Forms::Padding(2);
			this->textBox5E->Name = L"textBox5E";
			this->textBox5E->Size = System::Drawing::Size(28, 20);
			this->textBox5E->TabIndex = 66;
			this->textBox5E->Visible = false;
			// 
			// textBox5Chosen
			// 
			this->textBox5Chosen->Location = System::Drawing::Point(633, 224);
			this->textBox5Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox5Chosen->Name = L"textBox5Chosen";
			this->textBox5Chosen->ReadOnly = true;
			this->textBox5Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox5Chosen->TabIndex = 65;
			this->textBox5Chosen->Visible = false;
			// 
			// textBox5D
			// 
			this->textBox5D->Location = System::Drawing::Point(763, 224);
			this->textBox5D->Margin = System::Windows::Forms::Padding(2);
			this->textBox5D->Name = L"textBox5D";
			this->textBox5D->Size = System::Drawing::Size(28, 20);
			this->textBox5D->TabIndex = 64;
			this->textBox5D->Visible = false;
			// 
			// textBox5Min
			// 
			this->textBox5Min->Location = System::Drawing::Point(451, 224);
			this->textBox5Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox5Min->Name = L"textBox5Min";
			this->textBox5Min->Size = System::Drawing::Size(28, 20);
			this->textBox5Min->TabIndex = 63;
			this->textBox5Min->Visible = false;
			this->textBox5Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5Min_TextChanged);
			// 
			// textBox5Max
			// 
			this->textBox5Max->Location = System::Drawing::Point(603, 224);
			this->textBox5Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox5Max->Name = L"textBox5Max";
			this->textBox5Max->Size = System::Drawing::Size(28, 20);
			this->textBox5Max->TabIndex = 62;
			this->textBox5Max->Visible = false;
			this->textBox5Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5Max_TextChanged);
			// 
			// trackBar5
			// 
			this->trackBar5->Enabled = false;
			this->trackBar5->Location = System::Drawing::Point(476, 224);
			this->trackBar5->Margin = System::Windows::Forms::Padding(2);
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(131, 45);
			this->trackBar5->TabIndex = 61;
			this->trackBar5->Visible = false;
			// 
			// textBox10A
			// 
			this->textBox10A->Location = System::Drawing::Point(673, 410);
			this->textBox10A->Margin = System::Windows::Forms::Padding(2);
			this->textBox10A->Name = L"textBox10A";
			this->textBox10A->Size = System::Drawing::Size(28, 20);
			this->textBox10A->TabIndex = 114;
			this->textBox10A->Visible = false;
			// 
			// textBox10C
			// 
			this->textBox10C->Location = System::Drawing::Point(732, 410);
			this->textBox10C->Margin = System::Windows::Forms::Padding(2);
			this->textBox10C->Name = L"textBox10C";
			this->textBox10C->Size = System::Drawing::Size(28, 20);
			this->textBox10C->TabIndex = 113;
			this->textBox10C->Visible = false;
			// 
			// textBox10B
			// 
			this->textBox10B->Location = System::Drawing::Point(702, 410);
			this->textBox10B->Margin = System::Windows::Forms::Padding(2);
			this->textBox10B->Name = L"textBox10B";
			this->textBox10B->Size = System::Drawing::Size(28, 20);
			this->textBox10B->TabIndex = 112;
			this->textBox10B->Visible = false;
			// 
			// textBox10E
			// 
			this->textBox10E->Location = System::Drawing::Point(793, 410);
			this->textBox10E->Margin = System::Windows::Forms::Padding(2);
			this->textBox10E->Name = L"textBox10E";
			this->textBox10E->Size = System::Drawing::Size(28, 20);
			this->textBox10E->TabIndex = 111;
			this->textBox10E->Visible = false;
			// 
			// textBox10Chosen
			// 
			this->textBox10Chosen->Location = System::Drawing::Point(633, 410);
			this->textBox10Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox10Chosen->Name = L"textBox10Chosen";
			this->textBox10Chosen->ReadOnly = true;
			this->textBox10Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox10Chosen->TabIndex = 110;
			this->textBox10Chosen->Visible = false;
			// 
			// textBox10D
			// 
			this->textBox10D->Location = System::Drawing::Point(763, 410);
			this->textBox10D->Margin = System::Windows::Forms::Padding(2);
			this->textBox10D->Name = L"textBox10D";
			this->textBox10D->Size = System::Drawing::Size(28, 20);
			this->textBox10D->TabIndex = 109;
			this->textBox10D->Visible = false;
			// 
			// textBox10Min
			// 
			this->textBox10Min->Location = System::Drawing::Point(451, 410);
			this->textBox10Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox10Min->Name = L"textBox10Min";
			this->textBox10Min->Size = System::Drawing::Size(28, 20);
			this->textBox10Min->TabIndex = 108;
			this->textBox10Min->Visible = false;
			this->textBox10Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10Min_TextChanged);
			// 
			// textBox10Max
			// 
			this->textBox10Max->Location = System::Drawing::Point(603, 410);
			this->textBox10Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox10Max->Name = L"textBox10Max";
			this->textBox10Max->Size = System::Drawing::Size(28, 20);
			this->textBox10Max->TabIndex = 107;
			this->textBox10Max->Visible = false;
			this->textBox10Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10Max_TextChanged);
			// 
			// trackBar10
			// 
			this->trackBar10->Enabled = false;
			this->trackBar10->Location = System::Drawing::Point(476, 410);
			this->trackBar10->Margin = System::Windows::Forms::Padding(2);
			this->trackBar10->Name = L"trackBar10";
			this->trackBar10->Size = System::Drawing::Size(131, 45);
			this->trackBar10->TabIndex = 106;
			this->trackBar10->Visible = false;
			// 
			// textBox9A
			// 
			this->textBox9A->Location = System::Drawing::Point(673, 372);
			this->textBox9A->Margin = System::Windows::Forms::Padding(2);
			this->textBox9A->Name = L"textBox9A";
			this->textBox9A->Size = System::Drawing::Size(28, 20);
			this->textBox9A->TabIndex = 105;
			this->textBox9A->Visible = false;
			// 
			// textBox9C
			// 
			this->textBox9C->Location = System::Drawing::Point(732, 372);
			this->textBox9C->Margin = System::Windows::Forms::Padding(2);
			this->textBox9C->Name = L"textBox9C";
			this->textBox9C->Size = System::Drawing::Size(28, 20);
			this->textBox9C->TabIndex = 104;
			this->textBox9C->Visible = false;
			// 
			// textBox9B
			// 
			this->textBox9B->Location = System::Drawing::Point(702, 372);
			this->textBox9B->Margin = System::Windows::Forms::Padding(2);
			this->textBox9B->Name = L"textBox9B";
			this->textBox9B->Size = System::Drawing::Size(28, 20);
			this->textBox9B->TabIndex = 103;
			this->textBox9B->Visible = false;
			// 
			// textBox9E
			// 
			this->textBox9E->Location = System::Drawing::Point(793, 372);
			this->textBox9E->Margin = System::Windows::Forms::Padding(2);
			this->textBox9E->Name = L"textBox9E";
			this->textBox9E->Size = System::Drawing::Size(28, 20);
			this->textBox9E->TabIndex = 102;
			this->textBox9E->Visible = false;
			// 
			// textBox9Chosen
			// 
			this->textBox9Chosen->Location = System::Drawing::Point(633, 373);
			this->textBox9Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox9Chosen->Name = L"textBox9Chosen";
			this->textBox9Chosen->ReadOnly = true;
			this->textBox9Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox9Chosen->TabIndex = 101;
			this->textBox9Chosen->Visible = false;
			// 
			// textBox9D
			// 
			this->textBox9D->Location = System::Drawing::Point(763, 372);
			this->textBox9D->Margin = System::Windows::Forms::Padding(2);
			this->textBox9D->Name = L"textBox9D";
			this->textBox9D->Size = System::Drawing::Size(28, 20);
			this->textBox9D->TabIndex = 100;
			this->textBox9D->Visible = false;
			// 
			// textBox9Min
			// 
			this->textBox9Min->Location = System::Drawing::Point(451, 372);
			this->textBox9Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox9Min->Name = L"textBox9Min";
			this->textBox9Min->Size = System::Drawing::Size(28, 20);
			this->textBox9Min->TabIndex = 99;
			this->textBox9Min->Visible = false;
			this->textBox9Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9Min_TextChanged);
			// 
			// textBox9Max
			// 
			this->textBox9Max->Location = System::Drawing::Point(603, 373);
			this->textBox9Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox9Max->Name = L"textBox9Max";
			this->textBox9Max->Size = System::Drawing::Size(28, 20);
			this->textBox9Max->TabIndex = 98;
			this->textBox9Max->Visible = false;
			this->textBox9Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox9Max_TextChanged);
			// 
			// trackBar9
			// 
			this->trackBar9->Enabled = false;
			this->trackBar9->Location = System::Drawing::Point(476, 372);
			this->trackBar9->Margin = System::Windows::Forms::Padding(2);
			this->trackBar9->Name = L"trackBar9";
			this->trackBar9->Size = System::Drawing::Size(131, 45);
			this->trackBar9->TabIndex = 97;
			this->trackBar9->Visible = false;
			// 
			// textBox8A
			// 
			this->textBox8A->Location = System::Drawing::Point(673, 335);
			this->textBox8A->Margin = System::Windows::Forms::Padding(2);
			this->textBox8A->Name = L"textBox8A";
			this->textBox8A->Size = System::Drawing::Size(28, 20);
			this->textBox8A->TabIndex = 96;
			this->textBox8A->Visible = false;
			// 
			// textBox8C
			// 
			this->textBox8C->Location = System::Drawing::Point(732, 335);
			this->textBox8C->Margin = System::Windows::Forms::Padding(2);
			this->textBox8C->Name = L"textBox8C";
			this->textBox8C->Size = System::Drawing::Size(28, 20);
			this->textBox8C->TabIndex = 95;
			this->textBox8C->Visible = false;
			// 
			// textBox8B
			// 
			this->textBox8B->Location = System::Drawing::Point(702, 335);
			this->textBox8B->Margin = System::Windows::Forms::Padding(2);
			this->textBox8B->Name = L"textBox8B";
			this->textBox8B->Size = System::Drawing::Size(28, 20);
			this->textBox8B->TabIndex = 94;
			this->textBox8B->Visible = false;
			// 
			// textBox8E
			// 
			this->textBox8E->Location = System::Drawing::Point(793, 335);
			this->textBox8E->Margin = System::Windows::Forms::Padding(2);
			this->textBox8E->Name = L"textBox8E";
			this->textBox8E->Size = System::Drawing::Size(28, 20);
			this->textBox8E->TabIndex = 93;
			this->textBox8E->Visible = false;
			// 
			// textBox8Chosen
			// 
			this->textBox8Chosen->Location = System::Drawing::Point(633, 336);
			this->textBox8Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox8Chosen->Name = L"textBox8Chosen";
			this->textBox8Chosen->ReadOnly = true;
			this->textBox8Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox8Chosen->TabIndex = 92;
			this->textBox8Chosen->Visible = false;
			// 
			// textBox8D
			// 
			this->textBox8D->Location = System::Drawing::Point(763, 335);
			this->textBox8D->Margin = System::Windows::Forms::Padding(2);
			this->textBox8D->Name = L"textBox8D";
			this->textBox8D->Size = System::Drawing::Size(28, 20);
			this->textBox8D->TabIndex = 91;
			this->textBox8D->Visible = false;
			// 
			// textBox8Min
			// 
			this->textBox8Min->Location = System::Drawing::Point(451, 335);
			this->textBox8Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox8Min->Name = L"textBox8Min";
			this->textBox8Min->Size = System::Drawing::Size(28, 20);
			this->textBox8Min->TabIndex = 90;
			this->textBox8Min->Visible = false;
			this->textBox8Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8Min_TextChanged);
			// 
			// textBox8Max
			// 
			this->textBox8Max->Location = System::Drawing::Point(603, 336);
			this->textBox8Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox8Max->Name = L"textBox8Max";
			this->textBox8Max->Size = System::Drawing::Size(28, 20);
			this->textBox8Max->TabIndex = 89;
			this->textBox8Max->Visible = false;
			this->textBox8Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox8Max_TextChanged);
			// 
			// trackBar8
			// 
			this->trackBar8->Enabled = false;
			this->trackBar8->Location = System::Drawing::Point(476, 335);
			this->trackBar8->Margin = System::Windows::Forms::Padding(2);
			this->trackBar8->Name = L"trackBar8";
			this->trackBar8->Size = System::Drawing::Size(131, 45);
			this->trackBar8->TabIndex = 88;
			this->trackBar8->Visible = false;
			// 
			// textBox7A
			// 
			this->textBox7A->Location = System::Drawing::Point(673, 299);
			this->textBox7A->Margin = System::Windows::Forms::Padding(2);
			this->textBox7A->Name = L"textBox7A";
			this->textBox7A->Size = System::Drawing::Size(28, 20);
			this->textBox7A->TabIndex = 87;
			this->textBox7A->Visible = false;
			// 
			// textBox7C
			// 
			this->textBox7C->Location = System::Drawing::Point(732, 299);
			this->textBox7C->Margin = System::Windows::Forms::Padding(2);
			this->textBox7C->Name = L"textBox7C";
			this->textBox7C->Size = System::Drawing::Size(28, 20);
			this->textBox7C->TabIndex = 86;
			this->textBox7C->Visible = false;
			// 
			// textBox7B
			// 
			this->textBox7B->Location = System::Drawing::Point(702, 299);
			this->textBox7B->Margin = System::Windows::Forms::Padding(2);
			this->textBox7B->Name = L"textBox7B";
			this->textBox7B->Size = System::Drawing::Size(28, 20);
			this->textBox7B->TabIndex = 85;
			this->textBox7B->Visible = false;
			// 
			// textBox7E
			// 
			this->textBox7E->Location = System::Drawing::Point(793, 299);
			this->textBox7E->Margin = System::Windows::Forms::Padding(2);
			this->textBox7E->Name = L"textBox7E";
			this->textBox7E->Size = System::Drawing::Size(28, 20);
			this->textBox7E->TabIndex = 84;
			this->textBox7E->Visible = false;
			// 
			// textBox7Chosen
			// 
			this->textBox7Chosen->Location = System::Drawing::Point(633, 300);
			this->textBox7Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox7Chosen->Name = L"textBox7Chosen";
			this->textBox7Chosen->ReadOnly = true;
			this->textBox7Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox7Chosen->TabIndex = 83;
			this->textBox7Chosen->Visible = false;
			// 
			// textBox7D
			// 
			this->textBox7D->Location = System::Drawing::Point(763, 299);
			this->textBox7D->Margin = System::Windows::Forms::Padding(2);
			this->textBox7D->Name = L"textBox7D";
			this->textBox7D->Size = System::Drawing::Size(28, 20);
			this->textBox7D->TabIndex = 82;
			this->textBox7D->Visible = false;
			// 
			// textBox7Min
			// 
			this->textBox7Min->Location = System::Drawing::Point(451, 299);
			this->textBox7Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox7Min->Name = L"textBox7Min";
			this->textBox7Min->Size = System::Drawing::Size(28, 20);
			this->textBox7Min->TabIndex = 81;
			this->textBox7Min->Visible = false;
			this->textBox7Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7Min_TextChanged);
			// 
			// textBox7Max
			// 
			this->textBox7Max->Location = System::Drawing::Point(603, 300);
			this->textBox7Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox7Max->Name = L"textBox7Max";
			this->textBox7Max->Size = System::Drawing::Size(28, 20);
			this->textBox7Max->TabIndex = 80;
			this->textBox7Max->Visible = false;
			this->textBox7Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox7Max_TextChanged);
			// 
			// trackBar7
			// 
			this->trackBar7->Enabled = false;
			this->trackBar7->Location = System::Drawing::Point(476, 299);
			this->trackBar7->Margin = System::Windows::Forms::Padding(2);
			this->trackBar7->Name = L"trackBar7";
			this->trackBar7->Size = System::Drawing::Size(131, 45);
			this->trackBar7->TabIndex = 79;
			this->trackBar7->Visible = false;
			// 
			// textBox6A
			// 
			this->textBox6A->Location = System::Drawing::Point(673, 260);
			this->textBox6A->Margin = System::Windows::Forms::Padding(2);
			this->textBox6A->Name = L"textBox6A";
			this->textBox6A->Size = System::Drawing::Size(28, 20);
			this->textBox6A->TabIndex = 78;
			this->textBox6A->Visible = false;
			// 
			// textBox6C
			// 
			this->textBox6C->Location = System::Drawing::Point(732, 260);
			this->textBox6C->Margin = System::Windows::Forms::Padding(2);
			this->textBox6C->Name = L"textBox6C";
			this->textBox6C->Size = System::Drawing::Size(28, 20);
			this->textBox6C->TabIndex = 77;
			this->textBox6C->Visible = false;
			// 
			// textBox6B
			// 
			this->textBox6B->Location = System::Drawing::Point(702, 260);
			this->textBox6B->Margin = System::Windows::Forms::Padding(2);
			this->textBox6B->Name = L"textBox6B";
			this->textBox6B->Size = System::Drawing::Size(28, 20);
			this->textBox6B->TabIndex = 76;
			this->textBox6B->Visible = false;
			// 
			// textBox6E
			// 
			this->textBox6E->Location = System::Drawing::Point(793, 260);
			this->textBox6E->Margin = System::Windows::Forms::Padding(2);
			this->textBox6E->Name = L"textBox6E";
			this->textBox6E->Size = System::Drawing::Size(28, 20);
			this->textBox6E->TabIndex = 75;
			this->textBox6E->Visible = false;
			// 
			// textBox6Chosen
			// 
			this->textBox6Chosen->Location = System::Drawing::Point(633, 261);
			this->textBox6Chosen->Margin = System::Windows::Forms::Padding(2);
			this->textBox6Chosen->Name = L"textBox6Chosen";
			this->textBox6Chosen->ReadOnly = true;
			this->textBox6Chosen->Size = System::Drawing::Size(28, 20);
			this->textBox6Chosen->TabIndex = 74;
			this->textBox6Chosen->Visible = false;
			// 
			// textBox6D
			// 
			this->textBox6D->Location = System::Drawing::Point(763, 260);
			this->textBox6D->Margin = System::Windows::Forms::Padding(2);
			this->textBox6D->Name = L"textBox6D";
			this->textBox6D->Size = System::Drawing::Size(28, 20);
			this->textBox6D->TabIndex = 73;
			this->textBox6D->Visible = false;
			// 
			// textBox6Min
			// 
			this->textBox6Min->Location = System::Drawing::Point(451, 260);
			this->textBox6Min->Margin = System::Windows::Forms::Padding(2);
			this->textBox6Min->Name = L"textBox6Min";
			this->textBox6Min->Size = System::Drawing::Size(28, 20);
			this->textBox6Min->TabIndex = 72;
			this->textBox6Min->Visible = false;
			this->textBox6Min->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6Min_TextChanged);
			// 
			// textBox6Max
			// 
			this->textBox6Max->Location = System::Drawing::Point(603, 261);
			this->textBox6Max->Margin = System::Windows::Forms::Padding(2);
			this->textBox6Max->Name = L"textBox6Max";
			this->textBox6Max->Size = System::Drawing::Size(28, 20);
			this->textBox6Max->TabIndex = 71;
			this->textBox6Max->Visible = false;
			this->textBox6Max->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6Max_TextChanged);
			// 
			// trackBar6
			// 
			this->trackBar6->Enabled = false;
			this->trackBar6->Location = System::Drawing::Point(476, 260);
			this->trackBar6->Margin = System::Windows::Forms::Padding(2);
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(131, 45);
			this->trackBar6->TabIndex = 70;
			this->trackBar6->Visible = false;
			// 
			// labelDim1
			// 
			this->labelDim1->AutoSize = true;
			this->labelDim1->Location = System::Drawing::Point(419, 78);
			this->labelDim1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim1->Name = L"labelDim1";
			this->labelDim1->Size = System::Drawing::Size(13, 13);
			this->labelDim1->TabIndex = 115;
			this->labelDim1->Text = L"1";
			this->labelDim1->Visible = false;
			// 
			// labelDim10
			// 
			this->labelDim10->AutoSize = true;
			this->labelDim10->Location = System::Drawing::Point(413, 413);
			this->labelDim10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim10->Name = L"labelDim10";
			this->labelDim10->Size = System::Drawing::Size(19, 13);
			this->labelDim10->TabIndex = 116;
			this->labelDim10->Text = L"10";
			this->labelDim10->Visible = false;
			// 
			// labelDim6
			// 
			this->labelDim6->AutoSize = true;
			this->labelDim6->Location = System::Drawing::Point(419, 264);
			this->labelDim6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim6->Name = L"labelDim6";
			this->labelDim6->Size = System::Drawing::Size(13, 13);
			this->labelDim6->TabIndex = 117;
			this->labelDim6->Text = L"6";
			this->labelDim6->Visible = false;
			// 
			// labelDim3
			// 
			this->labelDim3->AutoSize = true;
			this->labelDim3->Location = System::Drawing::Point(419, 153);
			this->labelDim3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim3->Name = L"labelDim3";
			this->labelDim3->Size = System::Drawing::Size(13, 13);
			this->labelDim3->TabIndex = 118;
			this->labelDim3->Text = L"3";
			this->labelDim3->Visible = false;
			// 
			// labelDim4
			// 
			this->labelDim4->AutoSize = true;
			this->labelDim4->Location = System::Drawing::Point(419, 190);
			this->labelDim4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim4->Name = L"labelDim4";
			this->labelDim4->Size = System::Drawing::Size(13, 13);
			this->labelDim4->TabIndex = 119;
			this->labelDim4->Text = L"4";
			this->labelDim4->Visible = false;
			// 
			// labelDim2
			// 
			this->labelDim2->AutoSize = true;
			this->labelDim2->Location = System::Drawing::Point(419, 117);
			this->labelDim2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim2->Name = L"labelDim2";
			this->labelDim2->Size = System::Drawing::Size(13, 13);
			this->labelDim2->TabIndex = 120;
			this->labelDim2->Text = L"2";
			this->labelDim2->Visible = false;
			// 
			// labelDim5
			// 
			this->labelDim5->AutoSize = true;
			this->labelDim5->Location = System::Drawing::Point(419, 227);
			this->labelDim5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim5->Name = L"labelDim5";
			this->labelDim5->Size = System::Drawing::Size(13, 13);
			this->labelDim5->TabIndex = 121;
			this->labelDim5->Text = L"5";
			this->labelDim5->Visible = false;
			// 
			// labelDim7
			// 
			this->labelDim7->AutoSize = true;
			this->labelDim7->Location = System::Drawing::Point(419, 303);
			this->labelDim7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim7->Name = L"labelDim7";
			this->labelDim7->Size = System::Drawing::Size(13, 13);
			this->labelDim7->TabIndex = 122;
			this->labelDim7->Text = L"7";
			this->labelDim7->Visible = false;
			// 
			// labelDim9
			// 
			this->labelDim9->AutoSize = true;
			this->labelDim9->Location = System::Drawing::Point(419, 376);
			this->labelDim9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim9->Name = L"labelDim9";
			this->labelDim9->Size = System::Drawing::Size(13, 13);
			this->labelDim9->TabIndex = 123;
			this->labelDim9->Text = L"9";
			this->labelDim9->Visible = false;
			// 
			// labelDim8
			// 
			this->labelDim8->AutoSize = true;
			this->labelDim8->Location = System::Drawing::Point(419, 339);
			this->labelDim8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelDim8->Name = L"labelDim8";
			this->labelDim8->Size = System::Drawing::Size(13, 13);
			this->labelDim8->TabIndex = 124;
			this->labelDim8->Text = L"8";
			this->labelDim8->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(5, 46);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 390);
			this->pictureBox1->TabIndex = 125;
			this->pictureBox1->TabStop = false;
			// 
			// buttonStart
			// 
			this->buttonStart->Enabled = false;
			this->buttonStart->Location = System::Drawing::Point(63, 21);
			this->buttonStart->Margin = System::Windows::Forms::Padding(2);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(37, 21);
			this->buttonStart->TabIndex = 126;
			this->buttonStart->Text = L"start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MainForm::buttonStart_Click);
			// 
			// buttonStep
			// 
			this->buttonStep->Enabled = false;
			this->buttonStep->Location = System::Drawing::Point(104, 21);
			this->buttonStep->Margin = System::Windows::Forms::Padding(2);
			this->buttonStep->Name = L"buttonStep";
			this->buttonStep->Size = System::Drawing::Size(37, 21);
			this->buttonStep->TabIndex = 127;
			this->buttonStep->Text = L"step";
			this->buttonStep->UseVisualStyleBackColor = true;
			this->buttonStep->Click += gcnew System::EventHandler(this, &MainForm::buttonStep_Click);
			// 
			// buttonStop
			// 
			this->buttonStop->Enabled = false;
			this->buttonStop->Location = System::Drawing::Point(143, 21);
			this->buttonStop->Margin = System::Windows::Forms::Padding(2);
			this->buttonStop->Name = L"buttonStop";
			this->buttonStop->Size = System::Drawing::Size(37, 21);
			this->buttonStop->TabIndex = 128;
			this->buttonStop->Text = L"stop";
			this->buttonStop->UseVisualStyleBackColor = true;
			this->buttonStop->Click += gcnew System::EventHandler(this, &MainForm::buttonStop_Click);
			// 
			// buttonApply
			// 
			this->buttonApply->Location = System::Drawing::Point(8, 21);
			this->buttonApply->Margin = System::Windows::Forms::Padding(2);
			this->buttonApply->Name = L"buttonApply";
			this->buttonApply->Size = System::Drawing::Size(51, 21);
			this->buttonApply->TabIndex = 129;
			this->buttonApply->Text = L"apply";
			this->buttonApply->UseVisualStyleBackColor = true;
			this->buttonApply->Click += gcnew System::EventHandler(this, &MainForm::buttonApply_Click);
			// 
			// checkBoxDim1
			// 
			this->checkBoxDim1->AutoSize = true;
			this->checkBoxDim1->Enabled = false;
			this->checkBoxDim1->Location = System::Drawing::Point(433, 78);
			this->checkBoxDim1->Name = L"checkBoxDim1";
			this->checkBoxDim1->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim1->TabIndex = 130;
			this->checkBoxDim1->UseVisualStyleBackColor = true;
			this->checkBoxDim1->Visible = false;
			this->checkBoxDim1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim1_CheckedChanged);
			// 
			// checkBoxDim2
			// 
			this->checkBoxDim2->AutoSize = true;
			this->checkBoxDim2->Enabled = false;
			this->checkBoxDim2->Location = System::Drawing::Point(433, 117);
			this->checkBoxDim2->Name = L"checkBoxDim2";
			this->checkBoxDim2->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim2->TabIndex = 131;
			this->checkBoxDim2->UseVisualStyleBackColor = true;
			this->checkBoxDim2->Visible = false;
			this->checkBoxDim2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim2_CheckedChanged);
			// 
			// checkBoxDim3
			// 
			this->checkBoxDim3->AutoSize = true;
			this->checkBoxDim3->Enabled = false;
			this->checkBoxDim3->Location = System::Drawing::Point(433, 153);
			this->checkBoxDim3->Name = L"checkBoxDim3";
			this->checkBoxDim3->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim3->TabIndex = 132;
			this->checkBoxDim3->UseVisualStyleBackColor = true;
			this->checkBoxDim3->Visible = false;
			this->checkBoxDim3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim3_CheckedChanged);
			// 
			// checkBoxDim4
			// 
			this->checkBoxDim4->AutoSize = true;
			this->checkBoxDim4->Enabled = false;
			this->checkBoxDim4->Location = System::Drawing::Point(433, 190);
			this->checkBoxDim4->Name = L"checkBoxDim4";
			this->checkBoxDim4->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim4->TabIndex = 133;
			this->checkBoxDim4->UseVisualStyleBackColor = true;
			this->checkBoxDim4->Visible = false;
			this->checkBoxDim4->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim4_CheckedChanged);
			// 
			// checkBoxDim5
			// 
			this->checkBoxDim5->AutoSize = true;
			this->checkBoxDim5->Enabled = false;
			this->checkBoxDim5->Location = System::Drawing::Point(433, 227);
			this->checkBoxDim5->Name = L"checkBoxDim5";
			this->checkBoxDim5->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim5->TabIndex = 134;
			this->checkBoxDim5->UseVisualStyleBackColor = true;
			this->checkBoxDim5->Visible = false;
			this->checkBoxDim5->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim5_CheckedChanged);
			// 
			// checkBoxDim6
			// 
			this->checkBoxDim6->AutoSize = true;
			this->checkBoxDim6->Enabled = false;
			this->checkBoxDim6->Location = System::Drawing::Point(433, 264);
			this->checkBoxDim6->Name = L"checkBoxDim6";
			this->checkBoxDim6->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim6->TabIndex = 135;
			this->checkBoxDim6->UseVisualStyleBackColor = true;
			this->checkBoxDim6->Visible = false;
			this->checkBoxDim6->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim6_CheckedChanged);
			// 
			// checkBoxDim7
			// 
			this->checkBoxDim7->AutoSize = true;
			this->checkBoxDim7->Enabled = false;
			this->checkBoxDim7->Location = System::Drawing::Point(433, 303);
			this->checkBoxDim7->Name = L"checkBoxDim7";
			this->checkBoxDim7->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim7->TabIndex = 136;
			this->checkBoxDim7->UseVisualStyleBackColor = true;
			this->checkBoxDim7->Visible = false;
			this->checkBoxDim7->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim7_CheckedChanged);
			// 
			// checkBoxDim8
			// 
			this->checkBoxDim8->AutoSize = true;
			this->checkBoxDim8->Enabled = false;
			this->checkBoxDim8->Location = System::Drawing::Point(433, 339);
			this->checkBoxDim8->Name = L"checkBoxDim8";
			this->checkBoxDim8->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim8->TabIndex = 137;
			this->checkBoxDim8->UseVisualStyleBackColor = true;
			this->checkBoxDim8->Visible = false;
			this->checkBoxDim8->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim8_CheckedChanged);
			// 
			// checkBoxDim9
			// 
			this->checkBoxDim9->AutoSize = true;
			this->checkBoxDim9->Enabled = false;
			this->checkBoxDim9->Location = System::Drawing::Point(433, 376);
			this->checkBoxDim9->Name = L"checkBoxDim9";
			this->checkBoxDim9->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim9->TabIndex = 138;
			this->checkBoxDim9->UseVisualStyleBackColor = true;
			this->checkBoxDim9->Visible = false;
			this->checkBoxDim9->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim9_CheckedChanged);
			// 
			// checkBoxDim10
			// 
			this->checkBoxDim10->AutoSize = true;
			this->checkBoxDim10->Enabled = false;
			this->checkBoxDim10->Location = System::Drawing::Point(433, 412);
			this->checkBoxDim10->Name = L"checkBoxDim10";
			this->checkBoxDim10->Size = System::Drawing::Size(15, 14);
			this->checkBoxDim10->TabIndex = 139;
			this->checkBoxDim10->UseVisualStyleBackColor = true;
			this->checkBoxDim10->Visible = false;
			this->checkBoxDim10->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxDim10_CheckedChanged);
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Location = System::Drawing::Point(-1, 46);
			this->chart->Margin = System::Windows::Forms::Padding(2);
			this->chart->Name = L"chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Name = L"Series1";
			dataPoint1->IsValueShownAsLabel = false;
			dataPoint1->Label = L"a1";
			series1->Points->Add(dataPoint1);
			this->chart->Series->Add(series1);
			this->chart->Size = System::Drawing::Size(406, 387);
			this->chart->TabIndex = 140;
			this->chart->Text = L"chart1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 441);
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
			this->Controls->Add(this->pictureBox1);
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
			this->MinimumSize = System::Drawing::Size(855, 474);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	private: System::Void buttonApply_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonStep_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonStop_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void comboDimensionsNumber_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		number_dimensions = this->comboDimensionsNumber->SelectedIndex + 1;
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
		//	labelCoeffs->Visible = true;
			//labelA->Visible = true;
			//labelB->Visible = true;
			//labelC->Visible = true;
		if (number_special_dimensions > 0)
		{
			labelD->Visible = true;
			labelE->Visible = true;
		}

		for (int i = 0; i < number_special_dimensions; i++)
		{
			List<TextBox^>^ current = listCoeffs[i];
			current[3]->Visible = true;
			current[4]->Visible = true;
		}
		for (int i = number_dimensions; i < 10; i++)
		{
			List<TextBox^>^ current = listCoeffs[i];
			current[3]->Visible = false;
			current[4]->Visible = false;
		}
	}

	private: System::Void comboFunctions_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboFunctions->SelectedIndex == 0) {/// y = x
			///*	for (int i = 0; i < number_dimensions + 1; i++)
			//	{
			//		List<TextBox^>^ current = listCoeffs[i];
			//		current[0]->Visible = false;
			//		current[1]->Visible = false;
			//		current[2]->Visible = false;
			//	}*/
			this->comboSpecialDimensionsNumber->Visible = false;
			this->comboSpecialDimensionsNumber->Items->Clear();
		}
		else  if (this->comboFunctions->SelectedIndex == 1) {/// y = x**2
			///*	for (int i = 0; i < number_dimensions + 1; i++)
			//	{
			//		List<TextBox^>^ current = listCoeffs[i];
			//		current[0]->Visible = false;
			//		current[1]->Visible = false;
			//		current[2]->Visible = false;
			//	}*/
			this->comboSpecialDimensionsNumber->Visible = false;
			this->comboSpecialDimensionsNumber->Items->Clear();
		}
		else if (this->comboFunctions->SelectedIndex == 2) {/// opf
			number_dimensions;
			///*	for (int i = 0; i < number_dimensions + 1; i++)
			//	{
			//		List<TextBox^>^ current = listCoeffs[i];
			//		current[0]->Visible = true;
			//		current[1]->Visible = true;
			//		current[2]->Visible = true;
			//		this->comboSpecialDimensionsNumber->Items->Add(i);
			//	}*/
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

			numbermin = Convert::ToInt32(textBox1Min->Text);
			if (!max1Set) {
				min1Set = true;
				trackBar1->Enabled = false;
				checkBoxDim1->Enabled = false;
				check1Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox1Max->Text);
				min1Set = (numbermin < numbermax);
				trackBar1->Minimum = numbermin;
				trackBar1->Maximum = numbermax;
				trackBar1->Enabled = min1Set;
				checkBoxDim1->Enabled = number_checked < 2 && min1Set;
				check1Enabled = min1Set;
			}
		}
		catch (Exception^ e)
		{
			min1Set = false;
			trackBar1->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox1Max->Text);
			if (!min1Set) {
				max1Set = true;
				trackBar1->Enabled = false;
				checkBoxDim1->Enabled = false;
				check1Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox1Min->Text);
				max1Set = (numbermin < numbermax);
				trackBar1->Minimum = numbermin;
				trackBar1->Maximum = numbermax;
				trackBar1->Enabled = max1Set;
				checkBoxDim1->Enabled = number_checked < 2 && max1Set;
				check1Enabled = max1Set;
			}
		}
		catch (Exception^ e)
		{
			max1Set = false;
			trackBar1->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox2Min->Text);
			if (!max2Set) {
				min2Set = true;
				trackBar2->Enabled = false;
				checkBoxDim2->Enabled = false;
				check2Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox2Max->Text);
				min2Set = (numbermin < numbermax);
				trackBar2->Minimum = numbermin;
				trackBar2->Maximum = numbermax;
				trackBar2->Enabled = min2Set;
				checkBoxDim2->Enabled = number_checked < 2 && min2Set;
				check2Enabled = min2Set;
			}
		}
		catch (Exception^ e)
		{
			min2Set = false;
			trackBar2->Enabled = false;
			checkBoxDim2->Enabled = false;
			check2Enabled = false;
		}
	}
	private: System::Void textBox2Max_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2Chosen->Text = "";
		try
		{
			int numbermin;
			int numbermax;

			numbermax = Convert::ToInt32(textBox2Max->Text);
			if (!min2Set) {
				max2Set = true;
				trackBar2->Enabled = false;
				checkBoxDim2->Enabled = false;
				check2Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox2Min->Text);
				max2Set = (numbermin < numbermax);
				trackBar2->Minimum = numbermin;
				trackBar2->Maximum = numbermax;
				trackBar2->Enabled = max2Set;
				checkBoxDim2->Enabled = number_checked < 2 && max2Set;
				check2Enabled = max2Set;
			}
		}
		catch (Exception^ e)
		{
			max2Set = false;
			trackBar2->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox3Min->Text);
			if (!max3Set) {
				min3Set = true;
				trackBar3->Enabled = false;
				checkBoxDim3->Enabled = false;
				check3Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox3Max->Text);
				min3Set = (numbermin < numbermax);
				trackBar3->Minimum = numbermin;
				trackBar3->Maximum = numbermax;
				trackBar3->Enabled = min3Set;
				checkBoxDim3->Enabled = number_checked < 2 && min3Set;
				check3Enabled = min3Set;
			}
		}
		catch (Exception^ e)
		{
			min3Set = false;
			trackBar3->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox3Max->Text);
			if (!min3Set) {
				max3Set = true;
				trackBar3->Enabled = false;
				checkBoxDim3->Enabled = false;
				check3Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox3Min->Text);
				max3Set = (numbermin < numbermax);
				trackBar3->Minimum = numbermin;
				trackBar3->Maximum = numbermax;
				trackBar3->Enabled = max3Set;
				checkBoxDim3->Enabled = number_checked < 2 && max3Set;
				check3Enabled = max3Set;
			}
		}
		catch (Exception^ e)
		{
			max3Set = false;
			trackBar3->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox4Min->Text);
			if (!max4Set) {
				min4Set = true;
				trackBar4->Enabled = false;
				checkBoxDim4->Enabled = false;
				check4Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox4Max->Text);
				min4Set = (numbermin < numbermax);
				trackBar4->Minimum = numbermin;
				trackBar4->Maximum = numbermax;
				trackBar4->Enabled = min4Set;
				checkBoxDim4->Enabled = number_checked < 2 && min4Set;
				check4Enabled = min4Set;
			}
		}
		catch (Exception^ e)
		{
			min4Set = false;
			trackBar4->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox4Max->Text);
			if (!min4Set) {
				max4Set = true;
				trackBar4->Enabled = false;
				checkBoxDim4->Enabled = false;
				check4Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox4Min->Text);
				max4Set = (numbermin < numbermax);
				trackBar4->Minimum = numbermin;
				trackBar4->Maximum = numbermax;
				trackBar4->Enabled = max4Set;
				checkBoxDim4->Enabled = number_checked < 2 && max4Set;
				check4Enabled = max4Set;
			}
		}
		catch (Exception^ e)
		{
			max4Set = false;
			trackBar4->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox5Min->Text);
			if (!max5Set) {
				min5Set = true;
				trackBar5->Enabled = false;
				checkBoxDim5->Enabled = false;
				check5Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox5Max->Text);
				min5Set = (numbermin < numbermax);
				trackBar5->Minimum = numbermin;
				trackBar5->Maximum = numbermax;
				trackBar5->Enabled = min5Set;
				checkBoxDim5->Enabled = number_checked < 2 && min5Set;
				check5Enabled = min5Set;
			}
		}
		catch (Exception^ e)
		{
			min5Set = false;
			trackBar5->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox5Max->Text);
			if (!min5Set) {
				max5Set = true;
				trackBar5->Enabled = false;
				checkBoxDim5->Enabled = false;
				check5Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox5Min->Text);
				max5Set = (numbermin < numbermax);
				trackBar5->Minimum = numbermin;
				trackBar5->Maximum = numbermax;
				trackBar5->Enabled = max5Set;
				checkBoxDim5->Enabled = number_checked < 2 && max5Set;
				check1Enabled = max5Set;
			}
		}
		catch (Exception^ e)
		{
			max5Set = false;
			trackBar5->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox6Min->Text);
			if (!max6Set) {
				min6Set = true;
				trackBar6->Enabled = false;
				checkBoxDim6->Enabled = false;
				check6Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox6Max->Text);
				min6Set = (numbermin < numbermax);
				trackBar6->Minimum = numbermin;
				trackBar6->Maximum = numbermax;
				trackBar6->Enabled = min6Set;
				checkBoxDim6->Enabled = number_checked < 2 && min6Set;
				check6Enabled = min6Set;
			}
		}
		catch (Exception^ e)
		{
			min6Set = false;
			trackBar6->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox6Max->Text);
			if (!min6Set) {
				max6Set = true;
				trackBar6->Enabled = false;
				checkBoxDim6->Enabled = false;
				check6Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox6Min->Text);
				max6Set = (numbermin < numbermax);
				trackBar6->Minimum = numbermin;
				trackBar6->Maximum = numbermax;
				trackBar6->Enabled = max6Set;
				checkBoxDim6->Enabled = number_checked < 2 && max6Set;
				check6Enabled = max6Set;
			}
		}
		catch (Exception^ e)
		{
			max6Set = false;
			trackBar6->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox7Min->Text);
			if (!max7Set) {
				min7Set = true;
				trackBar7->Enabled = false;
				checkBoxDim7->Enabled = false;
				check7Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox7Max->Text);
				min7Set = (numbermin < numbermax);
				trackBar7->Minimum = numbermin;
				trackBar7->Maximum = numbermax;
				trackBar7->Enabled = min7Set;
				checkBoxDim7->Enabled = number_checked < 2 && min7Set;
				check7Enabled = min7Set;
			}
		}
		catch (Exception^ e)
		{
			min7Set = false;
			trackBar7->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox7Max->Text);
			if (!min7Set) {
				max7Set = true;
				trackBar7->Enabled = false;
				checkBoxDim7->Enabled = false;
				check7Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox7Min->Text);
				max7Set = (numbermin < numbermax);
				trackBar7->Minimum = numbermin;
				trackBar7->Maximum = numbermax;
				trackBar7->Enabled = max7Set;
				checkBoxDim7->Enabled = number_checked < 2 && max7Set;
				check7Enabled = max7Set;
			}
		}
		catch (Exception^ e)
		{
			max7Set = false;
			trackBar7->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox8Min->Text);
			if (!max8Set) {
				min8Set = true;
				trackBar8->Enabled = false;
				checkBoxDim8->Enabled = false;
				check8Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox8Max->Text);
				min8Set = (numbermin < numbermax);
				trackBar8->Minimum = numbermin;
				trackBar8->Maximum = numbermax;
				trackBar8->Enabled = min8Set;
				checkBoxDim8->Enabled = number_checked < 2 && min8Set;
				check8Enabled = min8Set;
			}
		}
		catch (Exception^ e)
		{
			min8Set = false;
			trackBar8->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox8Max->Text);
			if (!min8Set) {
				max8Set = true;
				trackBar8->Enabled = false;
				checkBoxDim8->Enabled = false;
				check8Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox8Min->Text);
				max8Set = (numbermin < numbermax);
				trackBar8->Minimum = numbermin;
				trackBar8->Maximum = numbermax;
				trackBar8->Enabled = max8Set;
				checkBoxDim8->Enabled = number_checked < 2 && max8Set;
				check8Enabled = max8Set;
			}
		}
		catch (Exception^ e)
		{
			max8Set = false;
			trackBar8->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox9Min->Text);
			if (!max9Set) {
				min9Set = true;
				trackBar9->Enabled = false;
				checkBoxDim9->Enabled = false;
				check9Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox9Max->Text);
				min9Set = (numbermin < numbermax);
				trackBar9->Minimum = numbermin;
				trackBar9->Maximum = numbermax;
				trackBar9->Enabled = min9Set;
				checkBoxDim9->Enabled = number_checked < 2 && min9Set;
				check9Enabled = min9Set;
			}
		}
		catch (Exception^ e)
		{
			min9Set = false;
			trackBar9->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox9Max->Text);
			if (!min9Set) {
				max9Set = true;
				trackBar9->Enabled = false;
				checkBoxDim9->Enabled = false;
				check9Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox9Min->Text);
				max9Set = (numbermin < numbermax);
				trackBar9->Minimum = numbermin;
				trackBar9->Maximum = numbermax;
				trackBar9->Enabled = max9Set;
				checkBoxDim9->Enabled = number_checked < 2 && max9Set;
				check9Enabled = max9Set;
			}
		}
		catch (Exception^ e)
		{
			max9Set = false;
			trackBar9->Enabled = false;
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

			numbermin = Convert::ToInt32(textBox10Min->Text);
			if (!max10Set) {
				min10Set = true;
				trackBar10->Enabled = false;
				checkBoxDim10->Enabled = false;
				check10Enabled = false;
				return;
			}
			else {
				numbermax = Convert::ToInt32(textBox10Max->Text);
				min10Set = (numbermin < numbermax);
				trackBar10->Minimum = numbermin;
				trackBar10->Maximum = numbermax;
				trackBar10->Enabled = min10Set;
				checkBoxDim10->Enabled = number_checked < 2 && min10Set;
				check10Enabled = min10Set;
			}
		}
		catch (Exception^ e)
		{
			min10Set = false;
			trackBar10->Enabled = false;
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

			numbermax = Convert::ToInt32(textBox10Max->Text);
			if (!min10Set) {
				max10Set = true;
				trackBar10->Enabled = false;
				checkBoxDim10->Enabled = false;
				check10Enabled = false;
				return;
			}
			else {
				numbermin = Convert::ToInt32(textBox10Min->Text);
				max10Set = (numbermin < numbermax);
				trackBar10->Minimum = numbermin;
				trackBar10->Maximum = numbermax;
				trackBar10->Enabled = max10Set;
				checkBoxDim10->Enabled = number_checked < 2 && max10Set;
				check10Enabled = max10Set;
			}
		}
		catch (Exception^ e)
		{
			max10Set = false;
			trackBar10->Enabled = false;
			checkBoxDim10->Enabled = false;
			check10Enabled = false;
		}

	}

	private: System::Void comboConversionType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboConversionType->SelectedIndex == 0) {/// number_of_iters
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
			this->comboConversion->Items->Clear();
			  this->comboConversion->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
			   L"0.00001",  L"0.0001",  L"0.001",    L"0.01", L"0.1", L"1", L"10"
			  });
			labelConversion->Visible = true;
			comboConversion->Visible = true;
			labelConversion->Text = "difference between iterations";
		}
	}
};
}