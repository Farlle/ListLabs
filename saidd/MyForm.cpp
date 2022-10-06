#include "MyForm.h"
#include "msclr\marshal_cppstd.h"
using namespace msclr::interop;
//#include "list.cpp"
List<int> *listInt = new List<int>;
List<double> *listDouble = new List<double>;
List<char> *listChar = new List<char>;
dList<int> *dListInt = new dList<int>;
dList<double> *dListDouble = new dList<double>;
dList<char> *dListChar = new dList<char>;
cSList<int> *cSListInt = new cSList<int>;
cSList<double> *cSListDouble = new cSList<double>;
cSList<char> *cSListChar = new cSList<char>;
cDList<int> *cDListInt = new cDList<int>;
cDList<double> *cDListDouble = new cDList<double>;
cDList<char> *cDListChar = new cDList<char>;

System::Void saidd::MyForm::radioButton1_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	
}
System::Void saidd::MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e) //enter
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			listInt->head = new Node<int>;
			listInt->current = listInt->head;
			int k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[0]->Value);
			listInt->head->inf = k;
			listInt->head->link = NULL;
			Node<int> *current = listInt->head; // Создание последующих звеньев
			Node<int> *tmp;
			std::cin >> listInt->head->inf;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new Node<int>;
				//	std::cin >> tmp->inf;
				k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				current->link = tmp;
				current = tmp;
			}
		}
		else if (radioButton2->Checked == true)
		{
			listDouble->head = new Node<double>;

			listDouble->current = listDouble->head;
			double k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
			listDouble->head->inf = k;
			listDouble->head->link = NULL;
			Node<double> *current = listDouble->head; // Создание последующих звеньев
			Node<double> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new Node<double>;
				//	std::cin >> tmp->inf;
				k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				current->link = tmp;
				current = tmp;
			}
		}
		else if (radioButton3->Checked == true)
		{
			listChar->head = new Node<char>;
			listChar->current = listChar->head;
			char k = Convert::ToChar(dataGridView1->Rows[0]->Cells[0]->Value);
			listChar->head->inf = k;
			listChar->head->link = NULL;
			Node<char> *current = listChar->head; // Создание последующих звеньев
			Node<char> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new Node<char>;
				//	std::cin >> tmp->inf;
				k = Convert::ToChar(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				current->link = tmp;
				current = tmp;
			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true) {

			dListInt->head = new dNode<int>;
			dListInt->current = dListInt->head;
			int k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[0]->Value);
			dListInt->head->inf = k;
			dListInt->head->linkNext = NULL;
			dListInt->head->linkPrev = NULL;	
			//dListInt->head = dListInt->tail;
			dNode<int> *current = dListInt->head; // Создание последующих звеньев
			dNode<int> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new dNode<int>;
				//	std::cin >> tmp->inf;
				k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->linkNext = NULL;
				tmp->linkPrev = current;
				current->linkNext = tmp;
				current = current->linkNext;
				//current->linkPrev = current;
				//current = tmp;
				
			}
		}
		if (radioButton2->Checked == true)
		{
			dListDouble->head = new dNode<double>;
			dListDouble->current = dListDouble->head;
			double k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
			dListDouble->head->inf = k;
			dListDouble->head->linkNext = NULL;
			dListDouble->head->linkPrev = NULL;
			//dListInt->head = dListInt->tail;
			dNode<double> *current = dListDouble->head; // Создание последующих звеньев
			dNode<double> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new dNode<double>;
				//	std::cin >> tmp->inf;
				k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->linkNext = NULL;
				tmp->linkPrev = current;
				current->linkNext = tmp;
				current = current->linkNext;
				//current->linkPrev = current;
				//current = tmp;

			}
		}
		if (radioButton3->Checked == true)
		{
			dListChar->head = new dNode<char>;
			dListChar->current = dListChar->head;
			char k = Convert::ToChar(dataGridView1->Rows[0]->Cells[0]->Value);
			dListChar->head->inf = k;
			dListChar->head->linkNext = NULL;
			dListChar->head->linkPrev = NULL;
			//dListInt->head = dListInt->tail;
			dNode<char> *current = dListChar->head; // Создание последующих звеньев
			dNode<char> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new dNode<char>;
				//	std::cin >> tmp->inf;
				k = Convert::ToChar(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->linkNext = NULL;
				tmp->linkPrev = current;
				current->linkNext = tmp;
				current = current->linkNext;
				//current->linkPrev = current;
				//current = tmp;

			}
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
	
		if (radioButton2->Checked == true)
		{
			cSListDouble->head = new cSNode<double>;
			cSListDouble->current = cSListDouble->head;
			double k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
			cSListDouble->head->inf = k;
			cSListDouble->head->link = cSListDouble->head;
			cSNode<double> *current = cSListDouble->head; // Создание последующих звеньев
			cSNode<double> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new cSNode<double>;
				//	std::cin >> tmp->inf;
				k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				tmp->linkPrev = current;
				current->link = tmp;
				current = tmp;
			}
			current->link = cSListDouble->head;
		}
		if (radioButton1->Checked == true)
		{
			cSListInt->head = new cSNode<int>;
			cSListInt->current = cSListInt->head;
			int k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[0]->Value);
			cSListInt->head->inf = k;
			cSListInt->head->link = cSListInt->head;
			cSNode<int> *current = cSListInt->head; // Создание последующих звеньев
			cSNode<int> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new cSNode<int>;
				//	std::cin >> tmp->inf;
				k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				tmp->linkPrev = current;
				current->link = tmp;
				current = tmp;
			}
			current->link = cSListInt->head;
		}
		if (radioButton3->Checked == true)
		{
			cSListChar->head = new cSNode<char>;
			cSListChar->current = cSListChar->head;
			char k = Convert::ToChar(dataGridView1->Rows[0]->Cells[0]->Value);
			cSListChar->head->inf = k;
			cSListChar->head->link = cSListChar->head;
			cSNode<char> *current = cSListChar->head; // Создание последующих звеньев
			cSNode<char> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new cSNode<char>;
				//	std::cin >> tmp->inf;
				k = Convert::ToChar(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				current->link = tmp;
				current = tmp;
			}
			current->link = cSListChar->head;
		}
	}
	if (comboBox1->SelectedIndex == 3)
	{

		if (radioButton2->Checked == true)
		{
			cDListDouble->head = new cDNode<double>;
			cDListDouble->current = cDListDouble->head;
			double k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[0]->Value);
			cDListDouble->head->inf = k;
			cDListDouble->head->link = cDListDouble->head;
			cDNode<double> *current = cDListDouble->head; // Создание последующих звеньев
			cDNode<double> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new cDNode<double>;
				//	std::cin >> tmp->inf;
				k = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				tmp->linkPrev = current;
				current->link = tmp;
				current = tmp;
			}
			current->link = cDListDouble->head;
			cDListDouble->head->linkPrev = current;			//current->linkPrev = current->linkPrev->linkPrev;

		}
		if (radioButton1->Checked == true)
		{
			cDListInt->head = new cDNode<int>;
			cDListInt->current = cDListInt->head;
			int k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[0]->Value);
			cDListInt->head->inf = k;
			cDListInt->head->link = cDListInt->head;
			//cDListInt->head->linkPrev = NULL;
			cDNode<int> *current = cDListInt->head; // Создание последующих звеньев
			cDNode<int> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new cDNode<int>;
				//	std::cin >> tmp->inf;
				k = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				tmp->linkPrev = current;
				current->link = tmp;
				current = tmp;
			}
			current->link = cDListInt->head;
			cDListInt->head->linkPrev = current;			//current->linkPrev = current->linkPrev->linkPrev;
		}
		if (radioButton3->Checked == true)
		{
			cDListChar->head = new cDNode<char>;
			cDListChar->current = cDListChar->head;
			int k = Convert::ToChar(dataGridView1->Rows[0]->Cells[0]->Value);
			cDListChar->head->inf = k;
			cDListChar->head->link = cDListChar->head;
			cDListChar->head->linkPrev = NULL;
			cDNode<char> *current = cDListChar->head; // Создание последующих звеньев
			cDNode<char> *tmp;
			for (int i = 1; i <= 7; i++)
			{
				tmp = new cDNode<char>;
				//	std::cin >> tmp->inf;
				k = Convert::ToChar(dataGridView1->Rows[0]->Cells[i]->Value);
				tmp->inf = k;
				tmp->link = NULL;
				current->link = tmp;
				current = tmp;
			}
			current->link = cDListChar->head;
			cDListChar->head->linkPrev = current;			//current->linkPrev = current->linkPrev->linkPrev;

		}
	}

}

System::Void saidd::MyForm::button2_Click(System::Object ^ sender, System::EventArgs ^ e)//enter
{
	listBox1->Items->Add("Список:");
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			listInt->current = listInt->head;
			int key = listInt->current->inf;

			//Node<T> *p = head;
			while (listInt->current)
			{
				key = listInt->current->inf;
				listInt->current = listInt->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
				//(textBox1->Text) += "/n";

			}
			listInt->current = listInt->head;


		}
		if (radioButton2->Checked == true)
		{
			listDouble->current = listDouble->head;
			double key = listDouble->head->inf;

			//Node<T> *p = head;
			while (listDouble->current)
			{
				key = listDouble->current->inf;
				listDouble->current = listDouble->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
				//(textBox1->Text) += "/n";

			}
			listDouble->current = listDouble->head;

		}
		if (radioButton3->Checked == true)
		{
			listChar->current = listChar->head;
			char key = listChar->head->inf;
			String^ k;
			k = marshal_as<String^>(&key);
			while (listChar->current)
			{
				key = listChar->current->inf;

				k = marshal_as<String^>(&key);
				listChar->current = listChar->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(k);
				//(textBox1->Text) += "/n";

			}
			listChar->current = listChar->head;

	
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{
			dListInt->current = dListInt->head;
			int key = dListInt->current->inf;

			//Node<T> *p = head;
			while (dListInt->current)
			{
				key = dListInt->current->inf;
				dListInt->current = dListInt->current->linkNext;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
				//(textBox1->Text) += "/n";

			}
			dListInt->current = dListInt->head;

		}
		if (radioButton2->Checked == true)
		{
			dListDouble->current = dListDouble->head;
			double key = dListDouble->head->inf;

			//Node<T> *p = head;
			while (dListDouble->current)
			{
				key = dListDouble->current->inf;
				dListDouble->current = dListDouble->current->linkNext;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
				//(textBox1->Text) += "/n";

			}
			dListDouble->current = dListDouble->head;

		}
		if (radioButton3->Checked == true)
		{
			dListChar->current = dListChar->head;
			char key = dListChar->head->inf;
			String^ k;
			k = marshal_as<String^>(&key);
			while (dListChar->current)
			{
				key = dListChar->current->inf;

				k = marshal_as<String^>(&key);
				dListChar->current = dListChar->current->linkNext;
				//(textBox1->Text) += key;
				listBox1->Items->Add(k);
				//(textBox1->Text) += "/n";

			}
			dListChar->current = dListChar->head;

		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButton1->Checked == true)
		{
			cSListInt->current = cSListInt->head;
			int key = cSListInt->current->inf;

	
			do
			{
				key = cSListInt->current->inf;
				cSListInt->current = cSListInt->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
			} while (cSListInt->current != cSListInt->head);
			cSListInt->current = cSListInt->head;

		}
		if (radioButton2->Checked == true)
		{
			cSListDouble->current = cSListDouble->head;
			double key = cSListDouble->current->inf;


			do
			{
				key = cSListDouble->current->inf;
				cSListDouble->current = cSListDouble->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
			} while (cSListDouble->current != cSListDouble->head);
			cSListDouble->current = cSListDouble->head;

		}
		if (radioButton3->Checked == true)
		{
			cSListChar->current = cSListChar->head;
			char key = cSListChar->head->inf;
			String^ k;
			k = marshal_as<String^>(&key);
			do 
			{
				key = cSListChar->current->inf;
				k = marshal_as<String^>(&key);
				cSListChar->current = cSListChar->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(k);

			} while (cSListChar->current != cSListChar->head);
			cSListChar->current = cSListChar->head;

		}
	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{
			cDListInt->current = cDListInt->head;
			int key = cDListInt->current->inf;


			do
			{
				key = cDListInt->current->inf;
				cDListInt->current = cDListInt->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
			} while (cDListInt->current != cDListInt->head);
			cDListInt->current = cDListInt->head;

		}
		if (radioButton2->Checked == true)
		{
			cDListDouble->current = cDListDouble->head;
			double key = cDListDouble->current->inf;


			do
			{
				key = cDListDouble->current->inf;
				cDListDouble->current = cDListDouble->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(key);
			} while (cDListDouble->current != cDListDouble->head);
			cDListDouble->current = cDListDouble->head;

		}
		if (radioButton3->Checked == true)
		{
			cDListChar->current = cDListChar->head;
			char key = cDListChar->head->inf;
			String^ k;
			k = marshal_as<String^>(&key);
			do
			{
				key = cDListChar->current->inf;
				k = marshal_as<String^>(&key);
				cDListChar->current = cDListChar->current->link;
				//(textBox1->Text) += key;
				listBox1->Items->Add(k);

			} while (cDListChar->current != cDListChar->head);
			cDListChar->current = cDListChar->head;

		}
	}

}


System::Void saidd::MyForm::radioButton5_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	return System::Void();
}

System::Void saidd::MyForm::listBox1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
{
	return System::Void();
}

System::Void saidd::MyForm::dataGridView1_CellContentClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellEventArgs ^ e)
{
	return System::Void();
}

System::Void saidd::MyForm::textBox1_TextChanged_1(System::Object ^ sender, System::EventArgs ^ e)
{
	return System::Void();
}

System::Void saidd::MyForm::button4_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			if (listInt->head == NULL)
			{
				MessageBox::Show("List is empty","Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton2->Checked == true)
		{
			if (listDouble->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton3->Checked == true)
		{
			if (listChar->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{
			if (dListInt->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton2->Checked == true)
		{
			if (dListDouble->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton3->Checked == true)
		{
			if (dListChar->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButton1->Checked == true)
		{
			if (cSListInt->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton2->Checked == true)
		{
			if (cSListDouble->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton3->Checked == true)
		{
			if (cSListChar->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{
			if (cDListInt->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton2->Checked == true)
		{
			if (cDListDouble->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
		if (radioButton3->Checked == true)
		{
			if (cDListChar->head == NULL)
			{
				MessageBox::Show("List is empty", "Проверка");
			}
			else
			{
				MessageBox::Show("List isn't empty", "Проверка");
			}
		}
	}
}


System::Void saidd::MyForm::button5_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			Node<int> *predElem = NULL;
			Node<int> *delElem = listInt->head;
			while (listInt->head) // Пока список не пуст
			{
				delElem = listInt->head; // устанавливаем delElem на начало списка
				listInt->head = listInt->head->link; // передвигаем «голову» на следующий элемент
				delete delElem; // удаляем элемент
			}
		}
		if (radioButton2->Checked == true)
		{
			Node<double> *predElem = NULL;
			Node<double> *delElem = listDouble->head;
			while (listDouble->head) // Пока список не пуст
			{
				delElem = listDouble->head; // устанавливаем delElem на начало списка
				listDouble->head = listDouble->head->link; // передвигаем «голову» на следующий элемент
				delete delElem; // удаляем элемент
			}
		}
		if (radioButton3->Checked == true)
		{
			Node<char> *predElem = NULL;
			Node<char> *delElem = listChar->head;
			while (listChar->head) // Пока список не пуст
			{
				delElem = listChar->head; // устанавливаем delElem на начало списка
				listChar->head = listChar->head->link; // передвигаем «голову» на следующий элемент
				delete delElem; // удаляем элемент
			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{

			dNode<int> *predElem = NULL;
			dNode<int> *delElem = dListInt->head;
			while (dListInt->head) // Пока список не пуст
			{
				delElem = dListInt->head; // устанавливаем delElem на начало списка
				dListInt->head = dListInt->head->linkNext;// передвигаем «голову» на следующий элемент

				delete delElem; // удаляем элемент
			}

		}
		if (radioButton2->Checked == true)
		{

			dNode<double> *predElem = NULL;
			dNode<double> *delElem = dListDouble->head;
			while (dListDouble->head) // Пока список не пуст
			{
				delElem = dListDouble->head; // устанавливаем delElem на начало списка
				dListDouble->head = dListDouble->head->linkNext;// передвигаем «голову» на следующий элемент
				delete delElem; // удаляем элемент
			}

		}
		if (radioButton3->Checked == true)
		{

			dNode<char> *predElem = NULL;
			dNode<char> *delElem = dListChar->head;
			while (dListChar->head) // Пока список не пуст
			{
				delElem = dListChar->head; // устанавливаем delElem на начало списка
				dListChar->head = dListChar->head->linkNext;// передвигаем «голову» на следующий элемент
				delete delElem; // удаляем элемент
			}

		}
		
	}
	if (comboBox1->SelectedIndex == 2)
	{

		if (radioButton1->Checked == true)
		{

			cSNode<int> *predElem = NULL;
			cSNode<int> *delElem = cSListInt->head;

			do
			{
				cSListInt->current = cSListInt->current->link;
			} while (cSListInt->current->link != cSListInt->head);
			cSListInt->current->link = NULL;
			//delete cSListInt->current;
			
			
				//delElem = cSListInt->head; // устанавливаем delElem на начало списка
				//cSListInt->head = cSListInt->head->link;// передвигаем «голову» на следующий элемент

				//delete delElem; // у
			 while (cSListInt->head)

			{
				 delElem = cSListInt->head; // устанавливаем delElem на начало списка
				 cSListInt->head = cSListInt->head->link;// передвигаем «голову» на следующий элемент

				 delete delElem; // у
			}// Пока список не пуст
			//{
			//	delElem = cSListInt->head; // устанавливаем delElem на начало списка
			//	cSListInt->head = cSListInt->head->link;// передвигаем «голову» на следующий элемент

			//	delete delElem; // удаляем элемент
			//}

		}
		if (radioButton2->Checked == true)
		{
			cSNode<double> *predElem = NULL;
			cSNode<double> *delElem = cSListDouble->head;

		/*	do
			{

			} while (dListDouble->);*/
			do
			{
				cSListDouble->current = cSListDouble->current->link;
			} while (cSListDouble->current->link != cSListDouble->head);
			cSListInt->current->link = NULL;
			while (dListDouble->head) // Пока список не пуст
			{
				delElem = cSListDouble->head; // устанавливаем delElem на начало списка
				cSListDouble->head = cSListDouble->head->link;// передвигаем «голову» на следующий элемент

				delete delElem; // удаляем элемент
			}

		}
		if (radioButton3->Checked == true)
		{

			cSNode<char> *predElem = NULL;
			cSNode<char> *delElem = cSListChar->head;
			do
			{
				cSListChar->current = cSListChar->current->link;
			} while (cSListChar->current->link != cSListChar->head);
			cSListInt->current->link = NULL;
			while (cSListChar ->head) // Пока список не пуст
			{
				delElem = cSListChar->head; // устанавливаем delElem на начало списка
				cSListChar->head = cSListChar->head->link;// передвигаем «голову» на следующий элемент

				delete delElem; // удаляем элемент
			}

		}

	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{

			cDNode<int> *predElem = NULL;
			cDNode<int> *delElem = cDListInt->head;

			do
			{
				cDListInt->current = cDListInt->current->link;
			} while (cDListInt->current->link != cDListInt->head);
			cDListInt->current->link = NULL;
			while (cDListInt->head)

			{
				delElem = cDListInt->head; // устанавливаем delElem на начало списка
				cDListInt->head = cDListInt->head->link;// передвигаем «голову» на следующий элемент

				delete delElem; // у
			}
		}

		if (radioButton2->Checked == true)
		{
			cDNode<double> *predElem = NULL;
			cDNode<double> *delElem = cDListDouble->head;

			do
			{
				cDListDouble->current = cDListDouble->current->link;
			} while (cDListDouble->current->link != cDListDouble->head);
			cDListDouble->current->link = NULL;
			while (cDListDouble->head)

			{
				delElem = cDListDouble->head; // устанавливаем delElem на начало списка
				cDListDouble->head = cDListDouble->head->link;// передвигаем «голову» на следующий элемент

				delete delElem; // у

			}
		}
		if (radioButton3->Checked == true)
		{

			cDNode<char> *predElem = NULL;
			cDNode<char> *delElem = cDListChar->head;

			do
			{
				cDListChar->current = cDListChar->current->link;
			} while (cDListChar->current->link != cDListChar->head);
			cDListChar->current->link = NULL;
			while (cDListChar->head)

			{
				delElem = cDListChar->head; // устанавливаем delElem на начало списка
				cDListChar->head = cDListChar->head->link;// передвигаем «голову» на следующий элемент

				delete delElem; // у


			}
		}
	}
	
}


System::Void saidd::MyForm::button6_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			Node<int>* tmp;
			tmp = new Node<int>;
			int k = Convert::ToInt32(textBox2->Text);
			tmp->inf = k;
			tmp->link = listInt->head;
			listInt->head = tmp;
		}
		if (radioButton2->Checked == true)
		{
			Node<double>* tmp;
			tmp = new Node<double>;
			double k = Convert::ToDouble(textBox2->Text);
			tmp->inf = k;
			tmp->link = listDouble->head;
			listDouble->head = tmp;
		}
		if (radioButton3->Checked == true)
		{
			Node<char>* tmp;
			tmp = new Node<char>;
			char k = Convert::ToChar(textBox2->Text);
			tmp->inf = k;
			tmp->link = listChar->head;
			listChar->head = tmp;
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{
			dNode<int>* tmp;
			tmp = new dNode<int>;
			int k = Convert::ToInt32(textBox2->Text);
			tmp->inf = k;
			tmp->linkPrev = NULL;
			tmp->linkNext = dListInt->head;
			dListInt->head->linkPrev = tmp;
			dListInt->head = tmp;
			
		}
		if (radioButton2->Checked == true)
		{
			dNode<double>* tmp;
			tmp = new dNode<double>;
			double k = Convert::ToDouble(textBox2->Text);
			tmp->inf = k;
			tmp->linkPrev = NULL;
			tmp->linkNext = dListDouble->head;
			dListDouble->head->linkPrev = tmp;

			dListDouble->head = tmp;
		}
		if (radioButton3->Checked == true)
		{
			dNode<char>* tmp;
			tmp = new dNode<char>;
			double k = Convert::ToChar(textBox2->Text);
			tmp->inf = k;
			tmp->linkPrev = NULL;
			tmp->linkNext = dListChar->head;
			dListChar->head->linkPrev = tmp;

			dListChar->head = tmp;
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButton1->Checked == true)
		{
			cSNode<int>* tmp;
			tmp = new cSNode<int>;
			int k = Convert::ToInt32(textBox2->Text);
			tmp->inf = k;
			tmp->link = cSListInt->head;
			
				do
				{
					cSListInt->current = cSListInt->current->link;
				} while (cSListInt->current->link != cSListInt->head);

			
			cSListInt->head = tmp;
			cSListInt->current->link = tmp;
		}
		if (radioButton2->Checked == true)
		{
			cSNode<double>* tmp;
			tmp = new cSNode<double>;
			double k = Convert::ToDouble(textBox2->Text);
			tmp->inf = k;
			tmp->link = cSListDouble->head;
			do
			{
				cSListDouble->current = cSListDouble->current->link;
			} while (cSListDouble->current->link != cSListDouble->head);


			cSListDouble->head = tmp;
			cSListDouble->current->link = tmp;

		}
		if (radioButton3->Checked == true)
		{
			cSNode<char>* tmp;
			tmp = new cSNode<char>;
			double k = Convert::ToChar(textBox2->Text);
			tmp->inf = k;
			tmp->link = cSListChar->head;
			do
			{
				cSListChar->current = cSListChar->current->link;
			} while (cSListChar->current->link != cSListChar->head);


			cSListChar->head = tmp;
			cSListChar->current->link = tmp;
		}
	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{
			cDNode<int>* tmp;
			tmp = new cDNode<int>;
			int k = Convert::ToInt32(textBox2->Text);
			tmp->inf = k;
			tmp->link = cDListInt->head;
			cDListInt->head->linkPrev = tmp;
			do
			{
				cDListInt->current = cDListInt->current->link;
			} while (cDListInt->current->link != cDListInt->head);


			cDListInt->current->link = tmp;
			cDListInt->head = tmp;
			tmp->linkPrev = cDListInt->current;


		}
		if (radioButton2->Checked == true)
		{
			cDNode<double>* tmp;
			tmp = new cDNode<double>;
			double k = Convert::ToDouble(textBox2->Text);
			tmp->inf = k;
			tmp->link = cDListDouble->head;
			cDListDouble->head->linkPrev = tmp;

			do
			{
				cDListDouble->current = cDListDouble->current->link;
			} while (cDListDouble->current->link != cDListDouble->head);


			cDListDouble->head = tmp;
			cDListDouble->current->link = tmp;
			tmp->linkPrev = cDListDouble->current;

		}
		if (radioButton3->Checked == true)
		{
			cDNode<char>* tmp;
			tmp = new cDNode<char>;
			double k = Convert::ToChar(textBox2->Text);
			tmp->inf = k;
			tmp->link = cDListChar->head;
			cDListChar->head->linkPrev = tmp;

			do
			{
				cDListChar->current = cDListChar->current->link;
			} while (cDListChar->current->link != cDListChar->head);


			cDListChar->head = tmp;
			cDListChar->current->link = tmp;
			tmp->linkPrev = cDListChar->current;

		}
	}


}

System::Void saidd::MyForm::button7_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			int key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToInt32(textBox3->Text);
			Node<int> *current = listInt->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton2->Checked == true)
		{
			double key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToDouble(textBox3->Text);
			Node<double> *current = listDouble->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton3->Checked == true)
		{
			char key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToChar(textBox3->Text);
			Node<char> *current = listChar->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{
			int key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToInt32(textBox3->Text);
			dNode<int> *current = dListInt->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->linkNext;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton2->Checked == true)
		{
			double key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToDouble(textBox3->Text);
			dNode<double> *current = dListDouble->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->linkNext;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton3->Checked == true)
		{
			char key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToChar(textBox3->Text);
			dNode<char> *current = dListChar->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->linkNext;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
	}

	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButton1->Checked == true)
		{
			int key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToInt32(textBox3->Text);
			cSNode<int> *current = cSListInt->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton2->Checked == true)
		{
			double key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToDouble(textBox3->Text);
			cSNode<double> *current = cSListDouble->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton3->Checked == true)
		{
			char key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToChar(textBox3->Text);
			cSNode<char> *current = cSListChar->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{
			int key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToInt32(textBox3->Text);
			cDNode<int> *current = cDListInt->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton2->Checked == true)
		{
			double key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToDouble(textBox3->Text);
			cDNode<double> *current = cDListDouble->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
		if (radioButton3->Checked == true)
		{
			char key = 0;
			int count; // счетчик узлов
			// Подготовка к поиску
			int numNode = 0;
			count = 0;
			bool found = false;
			std::cin >> key;
			key = Convert::ToChar(textBox3->Text);
			cDNode<char> *current = cDListChar->head;
			// Поиск нужного звена
			do
			{

				found = current->inf == key;
				if (!found)
				{
					count++;
					current = current->link;
				}
				else
				{
					numNode = count;
				}
			} while (current && !found);
			if (found)
			{
				listBox1->Items->Add("Находится под номером:");
				//MessageBox::Show("ad", numNode);
				listBox1->Items->Add(numNode);
			}
		}
	}


}

System::Void saidd::MyForm::button8_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			Node<int> *predElem = NULL;
			Node<int> *delElem;
			delElem = listInt->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			delete delElem;





		}
		if (radioButton2->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			Node<double> *predElem = NULL;
			Node<double> *delElem;
			delElem = listDouble->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			delete delElem;

		}
		if (radioButton3->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			Node<char> *predElem = NULL;
			Node<char> *delElem;
			delElem = listChar->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			delete delElem;
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{

		if (radioButton1->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			dNode<int> *predElem = NULL;
			dNode<int> *delElem;
			delElem = dListInt->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->linkNext;

			}
			predElem->linkNext = delElem->linkNext;
			predElem = delElem->linkNext->linkNext;///////////////////////////////////////////////////////////////////////////
			predElem->linkPrev = delElem->linkPrev;
			//delElem->linkPrev = delElem->linkPrev;
			delete delElem;

		}
		if (radioButton2->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			dNode<double> *predElem = NULL;
			dNode<double> *delElem;
			delElem = dListDouble->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->linkNext;

			}
			predElem->linkNext = delElem->linkNext;
			predElem = delElem->linkNext->linkNext;///////////////////////////////////////////////////////////////////////////
			predElem->linkPrev = delElem->linkPrev;
			//delElem->linkPrev = delElem->linkPrev;
			delete delElem;

		}
		if (radioButton3->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			dNode<char> *predElem = NULL;
			dNode<char> *delElem;
			delElem = dListChar->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->linkNext;

			}
			predElem->linkNext = delElem->linkNext;
			predElem = delElem->linkNext->linkNext;///////////////////////////////////////////////////////////////////////////
			predElem->linkPrev = delElem->linkPrev;
			//delElem->linkPrev = delElem->linkPrev;
			delete delElem;

		} 

	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButton1->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			cSNode<int> *predElem = NULL;
			cSNode<int> *delElem;
			delElem = cSListInt->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			delete delElem;





		}
		if (radioButton2->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			cSNode<double> *predElem = NULL;
			cSNode<double> *delElem;
			delElem = cSListDouble->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			delete delElem;

		}
		if (radioButton3->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			cSNode<char> *predElem = NULL;
			cSNode<char> *delElem;
			delElem = cSListChar->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			delete delElem;
		}
	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			cDNode<int> *predElem = NULL;
			cDNode<int> *delElem;
			delElem = cDListInt->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			predElem = delElem->link->link;///////////////////////////////////////////////////////////////////////////
			predElem->linkPrev = delElem->linkPrev;
			//delElem->linkPrev = delElem->linkPrev;
			delete delElem;





		}
		if (radioButton2->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			cDNode<double> *predElem = NULL;
			cDNode<double> *delElem;
			delElem = cDListDouble->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			predElem = delElem->link->link;///////////////////////////////////////////////////////////////////////////
			predElem->linkPrev = delElem->linkPrev;
			//delElem->linkPrev = delElem->linkPrev;
			delete delElem;

		}
		if (radioButton3->Checked == true)
		{
			bool found = false;
			int i = 0;
			int k = Convert::ToInt32(textBox1->Text);
			cDNode<char> *predElem = NULL;
			cDNode<char> *delElem;
			delElem = cDListChar->head;

			for (i = 0; i < k; i++)
			{
				predElem = delElem;
				delElem = delElem->link;
			}
			predElem->link = delElem->link;
			predElem = delElem->link->link;///////////////////////////////////////////////////////////////////////////
			predElem->linkPrev = delElem->linkPrev;
			//delElem->linkPrev = delElem->linkPrev;
			delete delElem;
		}
	}
}

System::Void saidd::MyForm::button9_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{

		if (radioButton1->Checked == true)
		{
			int key = 0;
			int newInf = 0;
			Node<int> *newElem = new Node<int>;
			bool found = false;
			Node<int> *current = listInt->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToInt32(textBox5->Text);
			
			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
		if (radioButton2->Checked == true)
		{
			int key = 0;
			double newInf = 0;
			Node<double> *newElem = new Node<double>;
			bool found = false;
			// Встаем на 1-й элемент
			Node<double> *current = listDouble->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToDouble(textBox5->Text);
			/*std::cout << "enter number";
			std::cin >> key;*/
			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
		if (radioButton3->Checked == true)
		{
			int key = 0;
			char newInf = 0;
			Node<char> *newElem = new Node<char>;
			bool found = false;
			// Встаем на 1-й элемент
			Node<char> *current = listChar->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToChar(textBox5->Text);
			/*std::cout << "enter number";
			std::cin >> key;*/
			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
	}

	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{
			int key = 0;
			int newInf = 0;
			dNode<int> *newElem = new dNode<int>;
			bool found = false;
			dNode<int> *current = dListInt->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToInt32(textBox5->Text);

			for (int i = 0; i < (key - 1); i++)
			{
				current = current->linkNext;
			}

			newElem->inf = newInf;
			newElem->linkNext = current->linkNext;
			//newElem->linkPrev = current;
			current->linkNext = newElem;
			newElem = newElem->linkNext;
			//newElem->linkPrev = 
			current = current->linkNext;
			current->linkPrev = newElem;
		}
		if (radioButton2->Checked == true)
		{
			int key = 0;
			double newInf = 0;
			dNode<double> *newElem = new dNode<double>;
			bool found = false;
			dNode<double> *current = dListDouble->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToDouble(textBox5->Text);

			for (int i = 0; i < (key - 1); i++)
			{
				current = current->linkNext;
			}

			newElem->inf = newInf;
			newElem->linkNext = current->linkNext;
			current->linkNext = newElem;
			current = current->linkNext;
		}
		if (radioButton3->Checked == true)
		{
			int key = 0;
			char newInf = 0;
			dNode<char> *newElem = new dNode<char>;
			bool found = false;
			dNode<char> *current = dListChar->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToChar(textBox5->Text);

			for (int i = 0; i < (key - 1); i++)
			{
				current = current->linkNext;
			}

			newElem->inf = newInf;
			newElem->linkNext = current->linkNext;
			current->linkNext = newElem;
			current = current->linkNext;
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{

		if (radioButton1->Checked == true)
		{
			int key = 0;
			int newInf = 0;
			cSNode<int> *newElem = new cSNode<int>;
			bool found = false;
			cSNode<int> *current = cSListInt->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToInt32(textBox5->Text);

			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
		if (radioButton2->Checked == true)
		{
			int key = 0;
			double newInf = 0;
			cSNode<double> *newElem = new cSNode<double>;
			bool found = false;
			// Встаем на 1-й элемент
			cSNode<double> *current = cSListDouble->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToDouble(textBox5->Text);
			/*std::cout << "enter number";
			std::cin >> key;*/
			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
		if (radioButton3->Checked == true)
		{
			int key = 0;
			char newInf = 0;
			cSNode<char> *newElem = new cSNode<char>;
			bool found = false;
			// Встаем на 1-й элемент
			cSNode<char> *current = cSListChar->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToChar(textBox5->Text);
			/*std::cout << "enter number";
			std::cin >> key;*/
			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
	}
	if (comboBox1->SelectedIndex == 3)
	{

		if (radioButton1->Checked == true)
		{
			int key = 0;
			int newInf = 0;
			cDNode<int> *newElem = new cDNode<int>;
			bool found = false;
			cDNode<int> *current = cDListInt->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToInt32(textBox5->Text);

			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
		if (radioButton2->Checked == true)
		{
			int key = 0;
			double newInf = 0;
			cDNode<double> *newElem = new cDNode<double>;
			bool found = false;
			// Встаем на 1-й элемент
			cDNode<double> *current = cDListDouble->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToDouble(textBox5->Text);
			/*std::cout << "enter number";
			std::cin >> key;*/
			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
		if (radioButton3->Checked == true)
		{
			int key = 0;
			char newInf = 0;
			cDNode<char> *newElem = new cDNode<char>;
			bool found = false;
			// Встаем на 1-й элемент
			cDNode<char> *current = cDListChar->head;
			key = Convert::ToInt32(textBox4->Text);
			newInf = Convert::ToChar(textBox5->Text);
			/*std::cout << "enter number";
			std::cin >> key;*/
			for (int i = 0; i < (key - 1); i++)
			{
				current = current->link;
			}

			newElem->inf = newInf;
			newElem->link = current->link;
			current->link = newElem;
			current = current->link;
		}
	}
}

System::Void saidd::MyForm::next_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButton1->Checked == true)
		{
			if (listInt->current != NULL)
			{
				int key = listInt->current->inf;
				textBox6->Text = Convert::ToString(key);
				listInt->current = listInt->current->link;
			}
		
		}
		if (radioButton2->Checked == true)
		{
			if (listDouble->current != NULL)
			{
				//listDouble->current = listDouble->head;
				double key = listDouble->current->inf;
				textBox6->Text = Convert::ToString(key);
				listDouble->current = listDouble->current->link;
			}
		}
		if (radioButton3->Checked == true)
		{
			if (listChar->current != NULL) {
				//listChar->current = listChar->head;
				char key = listChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				textBox6->Text = k;
				listChar->current = listChar->current->link;
				//char key = listChar->head->inf;
				//String^ k;
				//k = marshal_as<String^>(&key);
				//for (int i = 0; i <= 4; i++) 
				//{
				//	key = listChar->head->inf;
				//	k = marshal_as<String^>(&key);
				//	textBox1->Text += k;
				//	listBox1->Items->Add(key);

				//	//(textBox1->Text) += key;
				//}
			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{

			if (dListInt->current->linkNext != NULL)
			{
				int key = dListInt->current->inf;
				textBox6->Text = Convert::ToString(key);
				dListInt->current = dListInt->current->linkNext;

			}
			else
			{
				int key = dListInt->current->inf;
				textBox6->Text = Convert::ToString(key);
			}
	
			
		}
		if (radioButton2->Checked == true)
		{


			if (dListDouble->current->linkNext != NULL)
			{
				double key = dListDouble->current->inf;
				textBox6->Text = Convert::ToString(key);
				dListDouble->current = dListDouble->current->linkNext;

			}
			else
			{
				double key = dListDouble->current->inf;
				textBox6->Text = Convert::ToString(key);
			}			
		}
		if (radioButton3->Checked == true)
		{
			//dListChar->current = dListChar->head;
			if (dListChar->current->linkNext != NULL)
			{
				char key = dListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				//key = dListChar->current->inf;
				textBox6->Text = Convert::ToString(k);
				dListChar->current = dListChar->current->linkNext;

			}
			else
			{
				char key = dListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				//key = dListChar->current->inf;
				textBox6->Text = Convert::ToString(k);
			}
	
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButton1->Checked == true)
		{
			if (cSListInt->current != NULL)
			{
				int key = cSListInt->current->inf;
				key = cSListInt->current->inf;
				cSListInt->current = cSListInt->current->link;
				//(textBox1->Text) += key;
				textBox6->Text = Convert::ToString(key);
			}
			//cSListInt->current = cSListInt->head;
			


		}
		if (radioButton2->Checked == true)
		{
			if (cSListDouble->current != NULL)
			{
			double key = cSListDouble->current->inf;
			key = cSListDouble->current->inf;
			cSListDouble->current = cSListDouble->current->link;
			//(textBox1->Text) += key;
			textBox6->Text = Convert::ToString(key);
			}
		}
		if (radioButton3->Checked == true)
		{
			if (cSListChar->current != NULL)
			{
				char key = cSListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
			//	key = cSListChar->current->inf;
				cSListChar->current = cSListChar->current->link;
				//(textBox1->Text) += key;
				textBox6->Text = Convert::ToString(k);
			}
			
			
		}
	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{
			if (cDListInt->current->link != NULL)
			{

				int key = cDListInt->current->inf;
				textBox6->Text = Convert::ToString(key);
				cDListInt->current = cDListInt->current->link;


			}
			else
			{
				int key = cDListInt->current->inf;
				textBox6->Text = Convert::ToString(key);

			}
		
			
		}
		if (radioButton2->Checked == true)
		{
			if (cDListDouble->current->link != NULL)
			{
				double key = cDListDouble->current->inf;

				key = cDListDouble->current->inf;
				textBox6->Text = Convert::ToString(key);

				cDListDouble->current = cDListDouble->current->link;

			}
			else
			{
				double key = cDListDouble->current->inf;

				key = cDListDouble->current->inf;
				textBox6->Text = Convert::ToString(key);

			}

		}
		if (radioButton3->Checked == true)
		{
			if (cDListChar->current->link != NULL)
			{
				char key = cDListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				textBox6->Text = Convert::ToString(k);

				cDListChar->current = cDListChar->current->link;
				//(textBox1->Text) += key;
			}
			else
			{
				char key = cDListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				textBox6->Text = Convert::ToString(k);

			}
			//cDListChar->current = cDListChar->head;
			
			

		}
	}

}

System::Void saidd::MyForm::prev_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButton1->Checked == true)
		{
			if (dListInt->current->linkPrev != NULL)
			{
				dListInt->current = dListInt->current->linkPrev;

				int key = dListInt->current->inf;
				textBox6->Text = Convert::ToString(key);

			}
			else
			{
				int key = dListInt->current->inf;
				textBox6->Text = Convert::ToString(key);
			}
		}
		if (radioButton2->Checked == true)
		{
			//dListDouble->current = dListDouble->head;
			if (dListDouble->current->linkPrev != NULL)
			{
				dListDouble->current = dListDouble->current->linkPrev;

				double key = dListDouble->current->inf;
				textBox6->Text = Convert::ToString(key);

			}
			else
			{
				double key = dListDouble->current->inf;
				textBox6->Text = Convert::ToString(key);
			}
		}
		if (radioButton3->Checked == true)
		{
			if (dListChar->current->linkPrev != NULL)
			{
				dListChar->current = dListChar->current->linkPrev;

				char key = dListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				textBox6->Text = Convert::ToString(k);

			}
			else
			{
				char key = dListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				textBox6->Text = Convert::ToString(k);
			}


		}
	}
	if (comboBox1->SelectedIndex == 3)
	{
		if (radioButton1->Checked == true)
		{
			if (cDListInt->current->linkPrev != NULL)
			{
				cDListInt->current = cDListInt->current->linkPrev;

				int key = cDListInt->current->inf;
				textBox6->Text = Convert::ToString(key);

				//(textBox1->Text) += key;

			}
			else
			{
				int key = cDListInt->current->inf;
				textBox6->Text = Convert::ToString(key);
			}


		}
		if (radioButton2->Checked == true)
		{
			//cDListDouble->current = cDListDouble->head;
			if (cDListDouble->current->linkPrev != NULL)
			{
				cDListDouble->current = cDListDouble->current->linkPrev;

				double key = cDListDouble->current->inf;

				textBox6->Text = Convert::ToString(key);
			}
			else
			{
				double key = cDListDouble->current->inf;
				textBox6->Text = Convert::ToString(key);
			}

		}
		if (radioButton3->Checked == true)
		{
			if (cDListChar->current->linkPrev != NULL)
			{
				cDListChar->current = cDListChar->current->link;
				char key = cDListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				textBox6->Text = Convert::ToString(k);
			}
			else
			{
				char key = cDListChar->current->inf;
				String^ k;
				k = marshal_as<String^>(&key);
				textBox6->Text = Convert::ToString(k);
			}
		}
	}
}

