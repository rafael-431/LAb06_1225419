#pragma once
#include "DoubleLinkedList.h";
#include "Node.h";
#include "FiguraGeometrica.h";
#include "Circulo.h";
#include "Rectangulo.h";
namespace lab061225419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		DoubleLinkedList<FiguraGeometrica*>* myFigureList;
		MyForm(void)
		{
			InitializeComponent();
			myFigureList = new DoubleLinkedList<FiguraGeometrica*>();
			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlList;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnRectangulo;
	private: System::Windows::Forms::TextBox^ txtRectAncho;
	private: System::Windows::Forms::TextBox^ txtRectAlto;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnInsertarCirculo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtCirculoCircuferencia;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtcuadrado;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;

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
			this->pnlList = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->txtRectAncho = (gcnew System::Windows::Forms::TextBox());
			this->txtRectAlto = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnInsertarCirculo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCirculoCircuferencia = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtcuadrado = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlList
			// 
			this->pnlList->BackColor = System::Drawing::Color::White;
			this->pnlList->Location = System::Drawing::Point(40, 217);
			this->pnlList->Margin = System::Windows::Forms::Padding(4);
			this->pnlList->Name = L"pnlList";
			this->pnlList->Size = System::Drawing::Size(1395, 404);
			this->pnlList->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnRectangulo);
			this->groupBox2->Controls->Add(this->txtRectAncho);
			this->groupBox2->Controls->Add(this->txtRectAlto);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(368, 31);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(267, 160);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Rectangulo";
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->Location = System::Drawing::Point(33, 124);
			this->btnRectangulo->Margin = System::Windows::Forms::Padding(4);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(209, 28);
			this->btnRectangulo->TabIndex = 4;
			this->btnRectangulo->Text = L"Insertar Rectángulo";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			this->btnRectangulo->Click += gcnew System::EventHandler(this, &MyForm::btnRectangulo_Click);
			// 
			// txtRectAncho
			// 
			this->txtRectAncho->Location = System::Drawing::Point(109, 82);
			this->txtRectAncho->Margin = System::Windows::Forms::Padding(4);
			this->txtRectAncho->Name = L"txtRectAncho";
			this->txtRectAncho->Size = System::Drawing::Size(132, 22);
			this->txtRectAncho->TabIndex = 3;
			// 
			// txtRectAlto
			// 
			this->txtRectAlto->Location = System::Drawing::Point(109, 42);
			this->txtRectAlto->Margin = System::Windows::Forms::Padding(4);
			this->txtRectAlto->Name = L"txtRectAlto";
			this->txtRectAlto->Size = System::Drawing::Size(132, 22);
			this->txtRectAlto->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 82);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ancho:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 47);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Alto:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnInsertarCirculo);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtCirculoCircuferencia);
			this->groupBox1->Location = System::Drawing::Point(40, 31);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(275, 160);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Circulo";
			// 
			// btnInsertarCirculo
			// 
			this->btnInsertarCirculo->Location = System::Drawing::Point(28, 124);
			this->btnInsertarCirculo->Margin = System::Windows::Forms::Padding(4);
			this->btnInsertarCirculo->Name = L"btnInsertarCirculo";
			this->btnInsertarCirculo->Size = System::Drawing::Size(239, 28);
			this->btnInsertarCirculo->TabIndex = 3;
			this->btnInsertarCirculo->Text = L"Insertar Circulo";
			this->btnInsertarCirculo->UseVisualStyleBackColor = true;
			this->btnInsertarCirculo->Click += gcnew System::EventHandler(this, &MyForm::btnInsertarCirculo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 46);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Circunferencia:";
			// 
			// txtCirculoCircuferencia
			// 
			this->txtCirculoCircuferencia->Location = System::Drawing::Point(133, 42);
			this->txtCirculoCircuferencia->Margin = System::Windows::Forms::Padding(4);
			this->txtCirculoCircuferencia->Name = L"txtCirculoCircuferencia";
			this->txtCirculoCircuferencia->Size = System::Drawing::Size(132, 22);
			this->txtCirculoCircuferencia->TabIndex = 2;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->txtcuadrado);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(703, 31);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(267, 160);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cuadrado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 124);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Insertar Cuadrado";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtcuadrado
			// 
			this->txtcuadrado->Location = System::Drawing::Point(109, 42);
			this->txtcuadrado->Margin = System::Windows::Forms::Padding(4);
			this->txtcuadrado->Name = L"txtcuadrado";
			this->txtcuadrado->Size = System::Drawing::Size(132, 22);
			this->txtcuadrado->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 47);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Alto:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(1042, 31);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(267, 160);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Triangulo";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(33, 124);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 28);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Insertar Cuadrado";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 42);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 47);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Alto:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 87);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ancho:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(109, 87);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1474, 652);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->pnlList);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnInsertarCirculo_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCirculoCircuferencia->Text->Trim() != "") {
			FiguraGeometrica* newCircle = new Circulo();
			newCircle->width = Convert::ToDouble(txtCirculoCircuferencia->Text);
			newCircle->type = 1;
			newCircle->area = newCircle->GetArea();
			newCircle->perimeter = newCircle->GetPerimeter();
			myFigureList->InsertAtEnd(newCircle);


			/*inicia dibujo de lista*/
			if (!myFigureList->IsEmpty()) {
				Node<FiguraGeometrica*>* temp = myFigureList->start;

				for (int i = 0; i < myFigureList->count; i++) {
					FiguraGeometrica* actual = temp->value;
					DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->width, actual->width);
					temp = temp->next;
				}

			}
			/*Finaliza dibujo de lista*/

			MessageBox::Show("Circulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
		   void DrawNode(Graphics^ canvas, int posx, int posy, int type, double area, double perimeter, double height, double width) {
			   Brush^ brush = gcnew SolidBrush(Color::Navy);
			   Brush^ brushstring = gcnew SolidBrush(Color::White);
			   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);

			   switch (type)
			   {
			   case 1: {
				   canvas->FillEllipse(brush, RectangleF(posx, posy, width * 5, width * 5));
			   }break;
			   case 2: {
				   canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));
			   }break;
			   default:
				   break;
			   }

			   canvas->DrawString("Area: " + area, fuente, brushstring, posx + 1, posy + 20);
		   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((txtcuadrado->Text->Trim() != "") && (txtRectAncho->Text->Trim() != "")) {
		FiguraGeometrica* newCuadrado = new Rectangulo();
		newCuadrado->height = Convert::ToDouble(txtRectAlto->Text);
		newCuadrado->width = Convert::ToDouble(txtRectAncho->Text);
		newCuadrado->type = 2;
		newCuadrado->area = newCuadrado->GetArea();
		myFigureList->InsertAtEnd(newCuadrado);

		/*inicia dibujo de lista*/
		if (!myFigureList->IsEmpty()) {
			Node<FiguraGeometrica*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				FiguraGeometrica* actual = temp->value;
				DrawNode(pnlList->CreateGraphics(), i * 125, 30, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
				temp = temp->next;
			}

		}
		/*Finaliza dibujo de lista*/

		MessageBox::Show("Rectangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



}


private: System::Void btnRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtRectAlto->Text->Trim() != "") && (txtRectAncho->Text->Trim() != "")) {
		FiguraGeometrica* newRectangle = new Rectangulo();
		newRectangle->height = Convert::ToDouble(txtRectAlto->Text);
		newRectangle->width = Convert::ToDouble(txtRectAncho->Text);
		newRectangle->type = 2;
		newRectangle->area = newRectangle->GetArea();
		newRectangle->perimeter = newRectangle->GetPerimeter();
		myFigureList->InsertAtEnd(newRectangle);

		/*inicia dibujo de lista*/
		if (!myFigureList->IsEmpty()) {
			Node<FiguraGeometrica*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				FiguraGeometrica* actual = temp->value;
				DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
				temp = temp->next;
			}

		}
		/*Finaliza dibujo de lista*/

		MessageBox::Show("Rectangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	if ((txtRectAlto->Text->Trim() != "") && (txtRectAncho->Text->Trim() != "")) {
		FiguraGeometrica* newTriangulo = new Rectangulo();
		newTriangulo->height = Convert::ToDouble(txtRectAlto->Text);
		newTriangulo->width = Convert::ToDouble(txtRectAncho->Text);
		newTriangulo->type = 2;
		newTriangulo->area = newTriangulo->GetArea();
		newTriangulo->perimeter = newTriangulo->GetPerimeter();
		myFigureList->InsertAtEnd(newTriangulo);

		/*inicia dibujo de lista*/
		if (!myFigureList->IsEmpty()) {
			Node<FiguraGeometrica*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				FiguraGeometrica* actual = temp->value;
				DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
				temp = temp->next;
			}

		}
		/*Finaliza dibujo de lista*/

		MessageBox::Show("Rectangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
