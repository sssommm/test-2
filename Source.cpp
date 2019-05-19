#include<iostream>
using namespace std;
class Massiv
{
private:
	double*ar;
	int size;
	//double array[];
	
public:
	Massiv() {};       //- ����������� �� ���������
	Massiv(int size)   //- ����������� - ������ ������ ������������� ������� � �������������� ��� ������.
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

	Massiv(double arP[], int size) // - ����������� - ������ ������ � �������������� ��� �������� ���������� �� ������������. 
	{
		double* arr = new double[size];
		this->size = size;
		for (int i = 0; i < size; i++)
		{
			ar = arr;
			*(ar + i) = *(arP + i);
			//ar[i] = arP[i];    //��� ���
		}
		cout << endl;
	}

	~Massiv()
	{
		delete[] ar;
	}


	void SetMas(int size, double n)  // ������  - �������� ����� ������� ������� �� �����
	{
		ar[size-1] = n;
	}

	double GetMas()
	{
		return ar[size];
	}

	void input()       //  ����� ����� ������� � ������
	{
		 
		 
		cout << " Enter array size : ";
		cin >> size;
		cout << " Enter to array \n";
		for (int i = 0; i < size; i++)
			cin >> *(ar+i);
	}

	void output()     // ����� ������
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
	double massP[s]{ 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};    // ���������������� ������, ��� �������� ��� � �����������.
	//Massiv a;              // - �������� ������� " � " (����������� �� ���������).
	Massiv a(20);            // - �������� ������� " � " (�����������  ������ ������ ������������� ������� � �������������� ��� ������).
	//Massiv a(massP,s);     // - �������� ������� " � " (�����������  ������ ������������ ������ � � �������������� ��� ��������, ���������� �� ������������).
	a.output();
	//a.SetMas(3,9.9);       // - ������  - �������� ����� ������� ������� �� ����� (��� ������� " � ")
	a.input();               // - ����� ����� ������� � ������ (��� ������� " � ")
	a.output();              // - ����� ������ (��� ������� " � ")
	system("pause");
}