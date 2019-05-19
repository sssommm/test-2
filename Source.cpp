#include<iostream>
using namespace std;
class Massiv
{
private:
	double*ar;
	int size;
	//double array[];
	
public:
	Massiv() {};       //- Конструктор по умолчанию
	Massiv(int size)   //- Конструктор - создаёт массив произвольного размера и инициализирует его нулями.
	{
		double* arr = new double[size];
		this->size = size;
		for (int i = 0; i < size; i++)
		{
			ar = arr;
			*(ar+i) = 0;
		}
		cout << endl;
	}

	Massiv(double arP[], int size) // - Конструктор - создаёт массив и инициализирует его массивом полученным от пользователя. 
	{
		double* arr = new double[size];
		this->size = size;
		for (int i = 0; i < size; i++)
		{
			ar = arr;
			*(ar + i) = *(arP + i);
			//ar[i] = arP[i];    //или так
		}
		cout << endl;
	}

	~Massiv()
	{
		delete[] ar;
	}


	void SetMas(int size, double n)  // Сеттер  - заменяет любой элемент массива на выбор
	{
		ar[size-1] = n;
	}

	double GetMas()
	{
		return ar[size];
	}

	void input()       //  Метод ввода массива в ручную
	{
		 
		 
		cout << " Enter array size : ";
		cin >> size;
		cout << " Enter to array \n";
		for (int i = 0; i < size; i++)
			cin >> *(ar+i);
	}

	void output()     // Метод вывода
	{
		for (int i = 0; i < size; i++)
		{
			cout << *(ar+i) << " ";
		}
		cout << endl;
	}
	
};
void main()
{
	const int s = 8;
	double massP[s]{ 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};    // пользовательский массив, для передачи его в конструктор.
	//Massiv a;              // - Создание объекта " а " (конструктор по умолчанию).
	Massiv a(20);            // - Создание объекта " а " (конструктор  создаёт массив произвольного размера и инициализирует его нулями).
	//Massiv a(massP,s);     // - Создание объекта " а " (Конструктор  создаёт динамический массив и и инициализирует его массивом, полученным от пользователя).
	a.output();
	//a.SetMas(3,9.9);       // - Сеттер  - заменяет любой элемент массива на выбор (для объекта " а ")
	a.input();               // - Метод ввода массива в ручную (для объекта " а ")
	a.output();              // - Метод вывода (для объекта " а ")
	system("pause");
}