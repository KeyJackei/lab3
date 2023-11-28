#pragma once


#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <ctime> 
#include <cmath> 
#include "Header1.h"
#include "Header2.h"



namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }

  protected:


  private: System::Windows::Forms::TextBox^ textBoxA;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::TextBox^ textBoxN;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::TextBox^ textBox4;
  private: System::Windows::Forms::ListView^ listView2;
  private: System::Windows::Forms::ColumnHeader^ columnHeader3;
  private: System::Windows::Forms::ColumnHeader^ columnHeader4;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::ListView^ listView1;
  private: System::Windows::Forms::ColumnHeader^ columnHeader1;
  private: System::Windows::Forms::ColumnHeader^ columnHeader2;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::Label^ label9;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::TextBox^ textBoxB;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::TextBox^ textBox25;
  private: System::Windows::Forms::Panel^ panel4;
  private: System::Windows::Forms::Label^ label17;
  private: System::Windows::Forms::Label^ label16;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::TextBox^ textBox24;
  private: System::Windows::Forms::TextBox^ textBox23;
  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::Panel^ panel3;

  private: System::Windows::Forms::TextBox^ textBox19;
  private: System::Windows::Forms::TextBox^ textBox18;
  private: System::Windows::Forms::Label^ label19;
  private: System::Windows::Forms::Label^ label20;
  private: System::Windows::Forms::Panel^ panel1;
  private: System::Windows::Forms::Label^ label21;
  private: System::Windows::Forms::TextBox^ textBox22;
  private: System::Windows::Forms::Label^ label22;
  private: System::Windows::Forms::TextBox^ textBox21;
  private: System::Windows::Forms::Label^ label23;
  private: System::Windows::Forms::Panel^ panel2;
  private: System::Windows::Forms::TextBox^ textBox12;
  private: System::Windows::Forms::TextBox^ textBox15;
  private: System::Windows::Forms::TextBox^ textBox13;
  private: System::Windows::Forms::TextBox^ textBox17;
  private: System::Windows::Forms::TextBox^ textBox14;
  private: System::Windows::Forms::TextBox^ textBox16;
  private: System::Windows::Forms::Label^ label24;
  private: System::Windows::Forms::Label^ label25;
  private: System::Windows::Forms::Label^ label26;
  private: System::Windows::Forms::Label^ label27;
  private: System::Windows::Forms::Label^ label28;
  private: System::Windows::Forms::Label^ label29;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::TextBox^ textBox11;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TextBox^ textBox6;
  private: System::Windows::Forms::Label^ label30;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::TextBox^ textBox5;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::TextBox^ textBox20;
  private: System::Windows::Forms::TextBox^ textBox26;
  private: System::Windows::Forms::TextBox^ textBox27;
  private: System::Windows::Forms::ListView^ listView3;
  private: System::Windows::Forms::ColumnHeader^ columnHeader5;
  private: System::Windows::Forms::ColumnHeader^ columnHeader6;
  private: System::Windows::Forms::ColumnHeader^ columnHeader7;
  private: System::Windows::Forms::ColumnHeader^ columnHeader8;
  private: System::Windows::Forms::ColumnHeader^ columnHeader9;
  private: System::Windows::Forms::ColumnHeader^ columnHeader10;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
private: System::Windows::Forms::Button^ button5;


  protected:

  protected:



















































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
        System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::ListViewItem^ listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(L""));
        System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
        System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
        System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
        this->textBoxA = (gcnew System::Windows::Forms::TextBox());
        this->label14 = (gcnew System::Windows::Forms::Label());
        this->textBoxN = (gcnew System::Windows::Forms::TextBox());
        this->label12 = (gcnew System::Windows::Forms::Label());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label11 = (gcnew System::Windows::Forms::Label());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label10 = (gcnew System::Windows::Forms::Label());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->listView2 = (gcnew System::Windows::Forms::ListView());
        this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->listView1 = (gcnew System::Windows::Forms::ListView());
        this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->label9 = (gcnew System::Windows::Forms::Label());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->textBoxB = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->label13 = (gcnew System::Windows::Forms::Label());
        this->textBox25 = (gcnew System::Windows::Forms::TextBox());
        this->panel4 = (gcnew System::Windows::Forms::Panel());
        this->label17 = (gcnew System::Windows::Forms::Label());
        this->label16 = (gcnew System::Windows::Forms::Label());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->textBox24 = (gcnew System::Windows::Forms::TextBox());
        this->textBox23 = (gcnew System::Windows::Forms::TextBox());
        this->label18 = (gcnew System::Windows::Forms::Label());
        this->panel3 = (gcnew System::Windows::Forms::Panel());
        this->textBox19 = (gcnew System::Windows::Forms::TextBox());
        this->textBox18 = (gcnew System::Windows::Forms::TextBox());
        this->label19 = (gcnew System::Windows::Forms::Label());
        this->label20 = (gcnew System::Windows::Forms::Label());
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->label21 = (gcnew System::Windows::Forms::Label());
        this->textBox22 = (gcnew System::Windows::Forms::TextBox());
        this->label22 = (gcnew System::Windows::Forms::Label());
        this->textBox21 = (gcnew System::Windows::Forms::TextBox());
        this->label24 = (gcnew System::Windows::Forms::Label());
        this->label25 = (gcnew System::Windows::Forms::Label());
        this->label26 = (gcnew System::Windows::Forms::Label());
        this->label27 = (gcnew System::Windows::Forms::Label());
        this->label28 = (gcnew System::Windows::Forms::Label());
        this->label29 = (gcnew System::Windows::Forms::Label());
        this->textBox10 = (gcnew System::Windows::Forms::TextBox());
        this->textBox11 = (gcnew System::Windows::Forms::TextBox());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        this->textBox9 = (gcnew System::Windows::Forms::TextBox());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->label30 = (gcnew System::Windows::Forms::Label());
        this->label23 = (gcnew System::Windows::Forms::Label());
        this->panel2 = (gcnew System::Windows::Forms::Panel());
        this->textBox12 = (gcnew System::Windows::Forms::TextBox());
        this->textBox15 = (gcnew System::Windows::Forms::TextBox());
        this->textBox13 = (gcnew System::Windows::Forms::TextBox());
        this->textBox17 = (gcnew System::Windows::Forms::TextBox());
        this->textBox14 = (gcnew System::Windows::Forms::TextBox());
        this->textBox16 = (gcnew System::Windows::Forms::TextBox());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->textBox20 = (gcnew System::Windows::Forms::TextBox());
        this->textBox26 = (gcnew System::Windows::Forms::TextBox());
        this->textBox27 = (gcnew System::Windows::Forms::TextBox());
        this->listView3 = (gcnew System::Windows::Forms::ListView());
        this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
        this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
        this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->panel4->SuspendLayout();
        this->panel3->SuspendLayout();
        this->panel1->SuspendLayout();
        this->panel2->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
        this->SuspendLayout();
        // 
        // textBoxA
        // 
        this->textBoxA->Location = System::Drawing::Point(49, 43);
        this->textBoxA->Multiline = true;
        this->textBoxA->Name = L"textBoxA";
        this->textBoxA->Size = System::Drawing::Size(155, 22);
        this->textBoxA->TabIndex = 41;
        // 
        // label14
        // 
        this->label14->AutoSize = true;
        this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->label14->Location = System::Drawing::Point(106, 420);
        this->label14->Name = L"label14";
        this->label14->Size = System::Drawing::Size(132, 20);
        this->label14->TabIndex = 50;
        this->label14->Text = L"exp(-exp((A-x)/B))";
        // 
        // textBoxN
        // 
        this->textBoxN->Location = System::Drawing::Point(49, 120);
        this->textBoxN->Multiline = true;
        this->textBoxN->Name = L"textBoxN";
        this->textBoxN->Size = System::Drawing::Size(155, 22);
        this->textBoxN->TabIndex = 32;
        // 
        // label12
        // 
        this->label12->AutoSize = true;
        this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->label12->Location = System::Drawing::Point(124, 350);
        this->label12->Name = L"label12";
        this->label12->Size = System::Drawing::Size(100, 20);
        this->label12->TabIndex = 49;
        this->label12->Text = L"A-B*ln(-ln(u))";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(441, 350);
        this->textBox2->Multiline = true;
        this->textBox2->Name = L"textBox2";
        this->textBox2->ReadOnly = true;
        this->textBox2->Size = System::Drawing::Size(94, 21);
        this->textBox2->TabIndex = 33;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
        this->label3->Location = System::Drawing::Point(269, 353);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(125, 13);
        this->label3->TabIndex = 34;
        this->label3->Text = L"Время выполнения, мс";
        // 
        // label11
        // 
        this->label11->AutoSize = true;
        this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->label11->Location = System::Drawing::Point(395, 41);
        this->label11->Name = L"label11";
        this->label11->Size = System::Drawing::Size(206, 20);
        this->label11->TabIndex = 48;
        this->label11->Text = L"Отсортированный массив";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(441, 396);
        this->textBox3->Multiline = true;
        this->textBox3->Name = L"textBox3";
        this->textBox3->ReadOnly = true;
        this->textBox3->Size = System::Drawing::Size(94, 21);
        this->textBox3->TabIndex = 35;
        // 
        // label10
        // 
        this->label10->AutoSize = true;
        this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->label10->Location = System::Drawing::Point(231, 41);
        this->label10->Name = L"label10";
        this->label10->Size = System::Drawing::Size(142, 20);
        this->label10->TabIndex = 47;
        this->label10->Text = L"Исходный массив";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(441, 438);
        this->textBox4->Multiline = true;
        this->textBox4->Name = L"textBox4";
        this->textBox4->ReadOnly = true;
        this->textBox4->Size = System::Drawing::Size(94, 20);
        this->textBox4->TabIndex = 36;
        // 
        // listView2
        // 
        this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader3, this->columnHeader4 });
        this->listView2->HideSelection = false;
        this->listView2->Location = System::Drawing::Point(441, 84);
        this->listView2->Name = L"listView2";
        this->listView2->Size = System::Drawing::Size(140, 213);
        this->listView2->TabIndex = 46;
        this->listView2->UseCompatibleStateImageBehavior = false;
        this->listView2->View = System::Windows::Forms::View::Details;
        // 
        // columnHeader3
        // 
        this->columnHeader3->Text = L"Номер";
        // 
        // columnHeader4
        // 
        this->columnHeader4->Text = L"Элемент";
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
        this->label5->Location = System::Drawing::Point(267, 398);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(140, 13);
        this->label5->TabIndex = 37;
        this->label5->Text = L"Количество перестановок";
        // 
        // listView1
        // 
        this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
        this->listView1->HideSelection = false;
        this->listView1->Location = System::Drawing::Point(235, 84);
        this->listView1->Name = L"listView1";
        this->listView1->Size = System::Drawing::Size(138, 213);
        this->listView1->TabIndex = 45;
        this->listView1->UseCompatibleStateImageBehavior = false;
        this->listView1->View = System::Windows::Forms::View::Details;
        // 
        // columnHeader1
        // 
        this->columnHeader1->Text = L"Номер";
        // 
        // columnHeader2
        // 
        this->columnHeader2->Text = L"Элемент";
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
        this->label6->Location = System::Drawing::Point(267, 440);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(123, 13);
        this->label6->TabIndex = 38;
        this->label6->Text = L"Количество сравнений";
        // 
        // label9
        // 
        this->label9->AutoSize = true;
        this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
        this->label9->Location = System::Drawing::Point(72, 254);
        this->label9->Name = L"label9";
        this->label9->Size = System::Drawing::Size(89, 26);
        this->label9->TabIndex = 44;
        this->label9->Text = L"Gumbel";
        // 
        // button1
        // 
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
        this->button1->Location = System::Drawing::Point(27, 482);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(134, 37);
        this->button1->TabIndex = 39;
        this->button1->Text = L"Сортировать";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
        // 
        // label8
        // 
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->label8->Location = System::Drawing::Point(8, 189);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(211, 45);
        this->label8->TabIndex = 43;
        this->label8->Text = L"Вероятностный закон распределения";
        this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        // 
        // button2
        // 
        this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
        this->button2->Location = System::Drawing::Point(426, 482);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(134, 37);
        this->button2->TabIndex = 40;
        this->button2->Text = L"Очистить";
        this->button2->UseVisualStyleBackColor = true;
        this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
        // 
        // textBoxB
        // 
        this->textBoxB->Location = System::Drawing::Point(49, 82);
        this->textBoxB->Multiline = true;
        this->textBoxB->Name = L"textBoxB";
        this->textBoxB->Size = System::Drawing::Size(155, 22);
        this->textBoxB->TabIndex = 42;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->label1->Location = System::Drawing::Point(18, 350);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(57, 20);
        this->label1->TabIndex = 51;
        this->label1->Text = L"F(x)^-1";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->label2->Location = System::Drawing::Point(27, 420);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(36, 20);
        this->label2->TabIndex = 52;
        this->label2->Text = L"F(x)";
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
        this->label4->Location = System::Drawing::Point(7, 37);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(27, 26);
        this->label4->TabIndex = 53;
        this->label4->Text = L"A";
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
        this->label7->Location = System::Drawing::Point(7, 78);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(27, 26);
        this->label7->TabIndex = 54;
        this->label7->Text = L"B";
        // 
        // label13
        // 
        this->label13->AutoSize = true;
        this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
        this->label13->Location = System::Drawing::Point(7, 120);
        this->label13->Name = L"label13";
        this->label13->Size = System::Drawing::Size(28, 26);
        this->label13->TabIndex = 55;
        this->label13->Text = L"N";
        // 
        // textBox25
        // 
        this->textBox25->Enabled = false;
        this->textBox25->Location = System::Drawing::Point(1035, 173);
        this->textBox25->Name = L"textBox25";
        this->textBox25->Size = System::Drawing::Size(77, 20);
        this->textBox25->TabIndex = 67;
        // 
        // panel4
        // 
        this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->panel4->Controls->Add(this->label17);
        this->panel4->Controls->Add(this->label16);
        this->panel4->Controls->Add(this->label15);
        this->panel4->Controls->Add(this->textBox24);
        this->panel4->Controls->Add(this->textBox23);
        this->panel4->Controls->Add(this->label18);
        this->panel4->Location = System::Drawing::Point(998, 430);
        this->panel4->Name = L"panel4";
        this->panel4->Size = System::Drawing::Size(273, 61);
        this->panel4->TabIndex = 66;
        // 
        // label17
        // 
        this->label17->AutoSize = true;
        this->label17->Location = System::Drawing::Point(241, 34);
        this->label17->Name = L"label17";
        this->label17->Size = System::Drawing::Size(25, 13);
        this->label17->TabIndex = 21;
        this->label17->Text = L"* x1";
        // 
        // label16
        // 
        this->label16->AutoSize = true;
        this->label16->Location = System::Drawing::Point(126, 34);
        this->label16->Name = L"label16";
        this->label16->Size = System::Drawing::Size(13, 13);
        this->label16->TabIndex = 20;
        this->label16->Text = L"+";
        // 
        // label15
        // 
        this->label15->AutoSize = true;
        this->label15->Location = System::Drawing::Point(1, 34);
        this->label15->Name = L"label15";
        this->label15->Size = System::Drawing::Size(21, 13);
        this->label15->TabIndex = 19;
        this->label15->Text = L"y =";
        // 
        // textBox24
        // 
        this->textBox24->Enabled = false;
        this->textBox24->Location = System::Drawing::Point(146, 31);
        this->textBox24->Name = L"textBox24";
        this->textBox24->Size = System::Drawing::Size(89, 20);
        this->textBox24->TabIndex = 18;
        // 
        // textBox23
        // 
        this->textBox23->Enabled = false;
        this->textBox23->Location = System::Drawing::Point(29, 31);
        this->textBox23->Name = L"textBox23";
        this->textBox23->Size = System::Drawing::Size(91, 20);
        this->textBox23->TabIndex = 17;
        // 
        // label18
        // 
        this->label18->AutoSize = true;
        this->label18->Location = System::Drawing::Point(3, 8);
        this->label18->Name = L"label18";
        this->label18->Size = System::Drawing::Size(96, 13);
        this->label18->TabIndex = 0;
        this->label18->Text = L"Уравнение связи";
        // 
        // panel3
        // 
        this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->panel3->Controls->Add(this->textBox19);
        this->panel3->Controls->Add(this->textBox18);
        this->panel3->Controls->Add(this->label19);
        this->panel3->Controls->Add(this->label20);
        this->panel3->Location = System::Drawing::Point(616, 462);
        this->panel3->Name = L"panel3";
        this->panel3->Size = System::Drawing::Size(370, 75);
        this->panel3->TabIndex = 65;
        // 
        // textBox19
        // 
        this->textBox19->Enabled = false;
        this->textBox19->Location = System::Drawing::Point(261, 43);
        this->textBox19->Name = L"textBox19";
        this->textBox19->Size = System::Drawing::Size(100, 20);
        this->textBox19->TabIndex = 14;
        // 
        // textBox18
        // 
        this->textBox18->Enabled = false;
        this->textBox18->Location = System::Drawing::Point(261, 8);
        this->textBox18->Name = L"textBox18";
        this->textBox18->Size = System::Drawing::Size(100, 20);
        this->textBox18->TabIndex = 13;
        // 
        // label19
        // 
        this->label19->AutoSize = true;
        this->label19->Location = System::Drawing::Point(3, 46);
        this->label19->Name = L"label19";
        this->label19->Size = System::Drawing::Size(240, 13);
        this->label19->TabIndex = 11;
        this->label19->Text = L"Совокупный коэффициент детерминации R^2";
        // 
        // label20
        // 
        this->label20->AutoSize = true;
        this->label20->Location = System::Drawing::Point(3, 15);
        this->label20->Name = L"label20";
        this->label20->Size = System::Drawing::Size(211, 13);
        this->label20->TabIndex = 10;
        this->label20->Text = L"Парный коэффициент корреляции X и Y";
        // 
        // panel1
        // 
        this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->panel1->Controls->Add(this->label21);
        this->panel1->Controls->Add(this->textBox22);
        this->panel1->Controls->Add(this->label22);
        this->panel1->Controls->Add(this->textBox21);
        this->panel1->Controls->Add(this->label24);
        this->panel1->Controls->Add(this->label25);
        this->panel1->Controls->Add(this->label26);
        this->panel1->Controls->Add(this->label27);
        this->panel1->Controls->Add(this->label28);
        this->panel1->Controls->Add(this->label29);
        this->panel1->Controls->Add(this->textBox10);
        this->panel1->Controls->Add(this->textBox11);
        this->panel1->Controls->Add(this->textBox8);
        this->panel1->Controls->Add(this->textBox9);
        this->panel1->Controls->Add(this->textBox7);
        this->panel1->Controls->Add(this->textBox6);
        this->panel1->Controls->Add(this->label30);
        this->panel1->Location = System::Drawing::Point(616, 199);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(496, 125);
        this->panel1->TabIndex = 64;
        // 
        // label21
        // 
        this->label21->AutoSize = true;
        this->label21->Location = System::Drawing::Point(323, 103);
        this->label21->Name = L"label21";
        this->label21->Size = System::Drawing::Size(28, 13);
        this->label21->TabIndex = 18;
        this->label21->Text = L"a1 =";
        // 
        // textBox22
        // 
        this->textBox22->Enabled = false;
        this->textBox22->Location = System::Drawing::Point(357, 100);
        this->textBox22->Name = L"textBox22";
        this->textBox22->Size = System::Drawing::Size(120, 20);
        this->textBox22->TabIndex = 17;
        // 
        // label22
        // 
        this->label22->AutoSize = true;
        this->label22->Location = System::Drawing::Point(27, 102);
        this->label22->Name = L"label22";
        this->label22->Size = System::Drawing::Size(28, 13);
        this->label22->TabIndex = 16;
        this->label22->Text = L"a0 =";
        // 
        // textBox21
        // 
        this->textBox21->Enabled = false;
        this->textBox21->Location = System::Drawing::Point(59, 99);
        this->textBox21->Name = L"textBox21";
        this->textBox21->Size = System::Drawing::Size(118, 20);
        this->textBox21->TabIndex = 15;
        // 
        // label24
        // 
        this->label24->AutoSize = true;
        this->label24->Location = System::Drawing::Point(322, 71);
        this->label24->Name = L"label24";
        this->label24->Size = System::Drawing::Size(13, 13);
        this->label24->TabIndex = 12;
        this->label24->Text = L"=";
        // 
        // label25
        // 
        this->label25->AutoSize = true;
        this->label25->Location = System::Drawing::Point(322, 41);
        this->label25->Name = L"label25";
        this->label25->Size = System::Drawing::Size(13, 13);
        this->label25->TabIndex = 11;
        this->label25->Text = L"=";
        // 
        // label26
        // 
        this->label26->AutoSize = true;
        this->label26->Location = System::Drawing::Point(142, 67);
        this->label26->Name = L"label26";
        this->label26->Size = System::Drawing::Size(35, 13);
        this->label26->TabIndex = 10;
        this->label26->Text = L"+ a1 *";
        // 
        // label27
        // 
        this->label27->AutoSize = true;
        this->label27->Location = System::Drawing::Point(142, 41);
        this->label27->Name = L"label27";
        this->label27->Size = System::Drawing::Size(35, 13);
        this->label27->TabIndex = 9;
        this->label27->Text = L"+ a1 *";
        // 
        // label28
        // 
        this->label28->AutoSize = true;
        this->label28->Location = System::Drawing::Point(27, 67);
        this->label28->Name = L"label28";
        this->label28->Size = System::Drawing::Size(26, 13);
        this->label28->TabIndex = 8;
        this->label28->Text = L"a0 *";
        // 
        // label29
        // 
        this->label29->AutoSize = true;
        this->label29->Location = System::Drawing::Point(27, 41);
        this->label29->Name = L"label29";
        this->label29->Size = System::Drawing::Size(26, 13);
        this->label29->TabIndex = 7;
        this->label29->Text = L"a0 *";
        // 
        // textBox10
        // 
        this->textBox10->Enabled = false;
        this->textBox10->Location = System::Drawing::Point(341, 64);
        this->textBox10->Name = L"textBox10";
        this->textBox10->Size = System::Drawing::Size(136, 20);
        this->textBox10->TabIndex = 6;
        // 
        // textBox11
        // 
        this->textBox11->Enabled = false;
        this->textBox11->Location = System::Drawing::Point(341, 38);
        this->textBox11->Name = L"textBox11";
        this->textBox11->Size = System::Drawing::Size(136, 20);
        this->textBox11->TabIndex = 5;
        // 
        // textBox8
        // 
        this->textBox8->Enabled = false;
        this->textBox8->Location = System::Drawing::Point(183, 64);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(133, 20);
        this->textBox8->TabIndex = 4;
        // 
        // textBox9
        // 
        this->textBox9->Enabled = false;
        this->textBox9->Location = System::Drawing::Point(183, 38);
        this->textBox9->Name = L"textBox9";
        this->textBox9->Size = System::Drawing::Size(133, 20);
        this->textBox9->TabIndex = 3;
        // 
        // textBox7
        // 
        this->textBox7->Enabled = false;
        this->textBox7->Location = System::Drawing::Point(59, 64);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(77, 20);
        this->textBox7->TabIndex = 2;
        // 
        // textBox6
        // 
        this->textBox6->Enabled = false;
        this->textBox6->Location = System::Drawing::Point(59, 38);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(77, 20);
        this->textBox6->TabIndex = 1;
        // 
        // label30
        // 
        this->label30->AutoSize = true;
        this->label30->Location = System::Drawing::Point(18, 10);
        this->label30->Name = L"label30";
        this->label30->Size = System::Drawing::Size(107, 13);
        this->label30->TabIndex = 0;
        this->label30->Text = L"Система уравнений";
        // 
        // label23
        // 
        this->label23->AutoSize = true;
        this->label23->Location = System::Drawing::Point(3, 18);
        this->label23->Name = L"label23";
        this->label23->Size = System::Drawing::Size(85, 13);
        this->label23->TabIndex = 14;
        this->label23->Text = L"Матричный вид";
        // 
        // panel2
        // 
        this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        this->panel2->Controls->Add(this->textBox12);
        this->panel2->Controls->Add(this->textBox15);
        this->panel2->Controls->Add(this->textBox13);
        this->panel2->Controls->Add(this->textBox17);
        this->panel2->Controls->Add(this->label23);
        this->panel2->Controls->Add(this->textBox14);
        this->panel2->Controls->Add(this->textBox16);
        this->panel2->Location = System::Drawing::Point(616, 331);
        this->panel2->Name = L"panel2";
        this->panel2->Size = System::Drawing::Size(370, 125);
        this->panel2->TabIndex = 13;
        // 
        // textBox12
        // 
        this->textBox12->Enabled = false;
        this->textBox12->Location = System::Drawing::Point(249, 73);
        this->textBox12->Name = L"textBox12";
        this->textBox12->Size = System::Drawing::Size(99, 20);
        this->textBox12->TabIndex = 20;
        // 
        // textBox15
        // 
        this->textBox15->Enabled = false;
        this->textBox15->Location = System::Drawing::Point(88, 47);
        this->textBox15->Name = L"textBox15";
        this->textBox15->Size = System::Drawing::Size(133, 20);
        this->textBox15->TabIndex = 17;
        // 
        // textBox13
        // 
        this->textBox13->Enabled = false;
        this->textBox13->Location = System::Drawing::Point(249, 47);
        this->textBox13->Name = L"textBox13";
        this->textBox13->Size = System::Drawing::Size(99, 20);
        this->textBox13->TabIndex = 19;
        // 
        // textBox17
        // 
        this->textBox17->Enabled = false;
        this->textBox17->Location = System::Drawing::Point(6, 47);
        this->textBox17->Name = L"textBox17";
        this->textBox17->Size = System::Drawing::Size(77, 20);
        this->textBox17->TabIndex = 15;
        // 
        // textBox14
        // 
        this->textBox14->Enabled = false;
        this->textBox14->Location = System::Drawing::Point(88, 73);
        this->textBox14->Name = L"textBox14";
        this->textBox14->Size = System::Drawing::Size(133, 20);
        this->textBox14->TabIndex = 18;
        // 
        // textBox16
        // 
        this->textBox16->Enabled = false;
        this->textBox16->Location = System::Drawing::Point(6, 73);
        this->textBox16->Name = L"textBox16";
        this->textBox16->Size = System::Drawing::Size(77, 20);
        this->textBox16->TabIndex = 16;
        // 
        // button3
        // 
        this->button3->Enabled = false;
        this->button3->Location = System::Drawing::Point(1277, 334);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(333, 55);
        this->button3->TabIndex = 63;
        this->button3->Text = L"Анализировать";
        this->button3->UseVisualStyleBackColor = true;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
        // 
        // button4
        // 
        this->button4->Location = System::Drawing::Point(998, 334);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(273, 55);
        this->button4->TabIndex = 62;
        this->button4->Text = L"Запросить данные";
        this->button4->UseVisualStyleBackColor = true;
        this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
        // 
        // textBox5
        // 
        this->textBox5->Enabled = false;
        this->textBox5->Location = System::Drawing::Point(960, 173);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(69, 20);
        this->textBox5->TabIndex = 61;
        // 
        // textBox1
        // 
        this->textBox1->Enabled = false;
        this->textBox1->Location = System::Drawing::Point(847, 173);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(107, 20);
        this->textBox1->TabIndex = 60;
        // 
        // textBox20
        // 
        this->textBox20->Enabled = false;
        this->textBox20->Location = System::Drawing::Point(771, 173);
        this->textBox20->Name = L"textBox20";
        this->textBox20->Size = System::Drawing::Size(70, 20);
        this->textBox20->TabIndex = 59;
        // 
        // textBox26
        // 
        this->textBox26->Enabled = false;
        this->textBox26->Location = System::Drawing::Point(665, 173);
        this->textBox26->Name = L"textBox26";
        this->textBox26->Size = System::Drawing::Size(100, 20);
        this->textBox26->TabIndex = 58;
        // 
        // textBox27
        // 
        this->textBox27->Enabled = false;
        this->textBox27->Location = System::Drawing::Point(616, 173);
        this->textBox27->Name = L"textBox27";
        this->textBox27->Size = System::Drawing::Size(43, 20);
        this->textBox27->TabIndex = 57;
        // 
        // listView3
        // 
        this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
            this->columnHeader5, this->columnHeader6,
                this->columnHeader7, this->columnHeader8, this->columnHeader9, this->columnHeader10
        });
        this->listView3->HideSelection = false;
        listViewItem1->StateImageIndex = 0;
        this->listView3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(11) {
            listViewItem1, listViewItem2,
                listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10, listViewItem11
        });
        this->listView3->Location = System::Drawing::Point(616, 12);
        this->listView3->Name = L"listView3";
        this->listView3->Size = System::Drawing::Size(503, 155);
        this->listView3->TabIndex = 56;
        this->listView3->UseCompatibleStateImageBehavior = false;
        this->listView3->View = System::Windows::Forms::View::Details;
        this->listView3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView3_SelectedIndexChanged);
        // 
        // columnHeader5
        // 
        this->columnHeader5->Text = L"№";
        this->columnHeader5->Width = 38;
        // 
        // columnHeader6
        // 
        this->columnHeader6->Text = L"Кол-во элементов (X)";
        this->columnHeader6->Width = 121;
        // 
        // columnHeader7
        // 
        this->columnHeader7->Text = L"Время (Y)";
        this->columnHeader7->Width = 65;
        // 
        // columnHeader8
        // 
        this->columnHeader8->Text = L"X ^ 2";
        this->columnHeader8->Width = 109;
        // 
        // columnHeader9
        // 
        this->columnHeader9->Text = L"X * Y";
        this->columnHeader9->Width = 71;
        // 
        // columnHeader10
        // 
        this->columnHeader10->Text = L"Y ^ 2";
        this->columnHeader10->Width = 84;
        // 
        // chart1
        // 
        chartArea1->Name = L"ChartArea1";
        this->chart1->ChartAreas->Add(chartArea1);
        legend1->Name = L"Legend1";
        this->chart1->Legends->Add(legend1);
        this->chart1->Location = System::Drawing::Point(1118, 12);
        this->chart1->Name = L"chart1";
        series1->ChartArea = L"ChartArea1";
        series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
        series1->Legend = L"Legend1";
        series1->Name = L"График";
        this->chart1->Series->Add(series1);
        this->chart1->Size = System::Drawing::Size(492, 312);
        this->chart1->TabIndex = 68;
        this->chart1->Text = L"chart1";
        // 
        // button5
        // 
        this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->button5->Location = System::Drawing::Point(1370, 440);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(164, 69);
        this->button5->TabIndex = 69;
        this->button5->Text = L"Выход";
        this->button5->UseVisualStyleBackColor = true;
        this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1612, 550);
        this->Controls->Add(this->button5);
        this->Controls->Add(this->chart1);
        this->Controls->Add(this->textBox25);
        this->Controls->Add(this->panel4);
        this->Controls->Add(this->panel3);
        this->Controls->Add(this->panel1);
        this->Controls->Add(this->button3);
        this->Controls->Add(this->panel2);
        this->Controls->Add(this->button4);
        this->Controls->Add(this->textBox5);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->textBox20);
        this->Controls->Add(this->textBox26);
        this->Controls->Add(this->textBox27);
        this->Controls->Add(this->listView3);
        this->Controls->Add(this->label13);
        this->Controls->Add(this->label7);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBoxA);
        this->Controls->Add(this->label14);
        this->Controls->Add(this->textBoxN);
        this->Controls->Add(this->label12);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label11);
        this->Controls->Add(this->textBox3);
        this->Controls->Add(this->label10);
        this->Controls->Add(this->textBox4);
        this->Controls->Add(this->listView2);
        this->Controls->Add(this->label5);
        this->Controls->Add(this->listView1);
        this->Controls->Add(this->label6);
        this->Controls->Add(this->label9);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->label8);
        this->Controls->Add(this->button2);
        this->Controls->Add(this->textBoxB);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
        this->MaximizeBox = false;
        this->Name = L"Form1";
        this->Text = L"Курсовая работа";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->panel4->ResumeLayout(false);
        this->panel4->PerformLayout();
        this->panel3->ResumeLayout(false);
        this->panel3->PerformLayout();
        this->panel1->ResumeLayout(false);
        this->panel1->PerformLayout();
        this->panel2->ResumeLayout(false);
        this->panel2->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   
    void MatrixKramer(int a11, int a12, int a13, int a21, int a22, int a23) {
        double det1 = a11 * a22 - a12 * a21;
        double det2 = a13 * a22 - a12 * a23;
        double det3 = a11 * a23 - a13 * a21;

        float a0 = det2 / det1;
        float a1 = det3 / det1;

        textBox21->Text = Convert::ToString(a0);
        textBox22->Text = Convert::ToString(a1);
        textBox23->Text = Convert::ToString(a0);
        textBox24->Text = Convert::ToString(a1);
    }
    

    double Gumbel(double A, double B) {
        
        double r, u;
        int num = rand() * -1;
        u = (double)num / (double)RAND_MAX + 1;
        r = A - B * log(-log(u));
        return r;
    }

    void Mergesort(int n, double* x) {
        int i, j, k, t, s, Fin1, Fin2;
        double* tmp = new double[n];
        k = 1;
        while (k < n) {
            t = 0;
            s = 0;
            while (t + k < n) {

                Fin1 = t + k;
                Fin2 = (t + 2 * k < n ? t + 2 * k : n);
                i = t;
                j = Fin1;

                for (; i < Fin1 && j < Fin2; s++) {
                    if (x[i] < x[j]) {
                        tmp[s] = x[i];
                        i++;
                    }
                    else {
                        tmp[s] = x[j];
                        j++;
                    }

                }
                for (; i < Fin1; i++, s++) {
                    tmp[s] = x[i];
                }
                for (; j < Fin2; j++, s++) {
                    tmp[s] = x[j];

                }
                t = Fin2;
            }
            k *= 2;
            for (s = 0; s < t; s++) {

                x[s] = tmp[s];
            }
        }
        delete(tmp);
    }




private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    
}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    listView1->Items->Clear();

    listView2->Items->Clear();

    int n;	//Размерность массива 

    double a, b, t;


    try {
        a = Convert::ToDouble(textBoxA->Text);
        b = Convert::ToDouble(textBoxB->Text);
        n = Convert::ToDouble(textBoxN->Text);

    }
    catch (FormatException^ ex) {

        MessageBox::Show("Повторите ввод");
    }

    double* result = new double[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        result[i] = Gumbel(a, b);

        listView1->Items->Add(i.ToString());

        listView1->Items[i]->SubItems->Add(result[i].ToString("n"));

    }



    clock_t start, end;

    start = clock();

    Mergesort(n, result);

    end = clock();

    t = end - start;

    textBox2->Text = t.ToString("n");

    for (int j = 0; j < n; j++) {

        listView2->Items->Add(j.ToString());
        listView2->Items[j]->SubItems->Add(result[j].ToString("n"));

    }

    unsigned __int64 per = n * ((n - 1) / 2);

    unsigned __int64 sr = n * log(n);


    textBox3->Text = per.ToString("n");
    textBox4->Text = sr.ToString("n");


    delete[] result;


}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    listView1->Items->Clear();
    listView2->Items->Clear();
    textBoxA->Clear();
    textBoxB->Clear();
    textBoxN->Clear();
    textBox2->Clear();
    textBox3->Clear();
    textBox4->Clear();
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    int x = 0;
    int y = 0;
    int x1 = 0;
    int y1 = 0;
    int xy = 0;
    int count = 50000;
    double t;

    for (int i = 0; i <= 9; i++) {
        double* arr = new double[count];
        srand(time(NULL));
        for (int k = 0; k < count; k++) {
            arr[k] = Gumbel(1, 5);
        }
        System::Diagnostics::Stopwatch st;
        st.StartNew();
        st.Start();
        Mergesort(count, arr);
        st.Stop();
        TimeSpan ts = st.Elapsed;

        listView3->Items[i]->SubItems->Add(Convert::ToString(i + 1));
        listView3->Items[i]->SubItems->Add(Convert::ToString(count));
        listView3->Items[i]->SubItems->Add(Convert::ToString(ts.TotalMilliseconds));
        listView3->Items[i]->SubItems->Add(Convert::ToString(count * count));
        listView3->Items[i]->SubItems->Add(Convert::ToString(count * ts.TotalMilliseconds));
        listView3->Items[i]->SubItems->Add(Convert::ToString(ts.TotalMilliseconds * ts.TotalMilliseconds));

        chart1->Series[0]->Points->AddXY(count, ts.TotalMilliseconds);

        x += count;
        y += ts.TotalMilliseconds;
        x1 += count * count;
        y1 += ts.TotalMilliseconds * ts.TotalMilliseconds;
        xy += count * ts.TotalMilliseconds;
        count += 4000;
        delete[] arr;
    }
    button4->Enabled = false;
    button3->Enabled = true;
    textBox27->Text = Convert::ToString(10);
    textBox26->Text = Convert::ToString(x);
    textBox20->Text = Convert::ToString(y);
    textBox1->Text = Convert::ToString(x1);
    textBox5->Text = Convert::ToString(xy);
    textBox25->Text = Convert::ToString(y1);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    int m = Convert::ToInt64(textBox27->Text);
    int x = Convert::ToInt64(textBox26->Text);
    int y = Convert::ToInt64(textBox20->Text);
    int x1 = Convert::ToInt64(textBox1->Text);
    int xy = Convert::ToInt64(textBox5->Text);
    int y1 = Convert::ToInt64(textBox25->Text);
    double a0 = 0;
    double a1 = 0;
    textBox6->Text = textBox27->Text;
    textBox7->Text = textBox26->Text;
    textBox8->Text = textBox1->Text;
    textBox9->Text = textBox26->Text;
    textBox10->Text = textBox5->Text;
    textBox11->Text = textBox20->Text;

    textBox17->Text = textBox27->Text;
    textBox16->Text = textBox26->Text;
    textBox15->Text = textBox26->Text;
    textBox14->Text = textBox1->Text;
    textBox13->Text = textBox20->Text;
    textBox12->Text = textBox5->Text;

    //double r = (((m * xy) - (x * y)) / (sqrt(((m * x1) - (x * x)) * ((m * y1) - (y * y))))) * 0.001;
    double temp_r = (m * xy) - (x * y);
    double temp_r_2 = ((m * x1) - (x * x)) * ((m * y1) - (y * y));
    if (temp_r_2 < 0) {
        double temp_r_2 = sqrt(-((m * x1) - (x * x)) * ((m * y1) - (y * y)));
        double r = (temp_r / temp_r_2) * 0.001;
        double r2 = r * r;
        MatrixKramer(m, x, y, x, x1, xy);
        textBox18->Text = Convert::ToString(r);
        textBox19->Text = Convert::ToString(r2);
    }
    else {
        double temp_r_2 = sqrt(((m * x1) - (x * x)) * ((m * y1) - (y * y)));
        double r = (temp_r / temp_r_2) * 0.001;
        double r2 = r * r;
        MatrixKramer(m, x, y, x, x1, xy);
        textBox18->Text = Convert::ToString(r);
        textBox19->Text = Convert::ToString(r2);
    }

    /*if (abs(r) > 0 && abs(r) <= 0.5) {
        textBox28->Text = "Коэффициент корреляции находится на интервале: [0;0.5] -> Слабая связь.";
    }
    if (abs(r) > 0.5 && abs(r) <= 0.8) {
        textBox28->Text = "Коэффициент корреляции находится на интервале: (0.5;0.8] -> Умеренная связь.";
    }
    if (abs(r) > 0 && abs(r) < 1) {
        textBox28->Text = "Коэффициент корреляции находится на интервале: (0.8;1] -> Сильная связь.";
    }
    else  textBox28->Text = String::Format("{0}, {1}, {2}", r, temp_r, temp_r_2 );*/


    /*MatrixKramer(m, x, y, x, x1, xy);

    textBox18->Text = Convert::ToString(r);
    textBox19->Text = Convert::ToString(r2);*/
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void listView3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

