#include <iostream> 
#include <windows.h> // �����ֲ���� ���Ѳ� 

using namespace std;

void Create(int* m, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "m[" << i << "] = "; cin >> m[i];
		cout << endl;
	}
}

void printCreate(int* m, int size)
{
	for (int i = 0; i < size; i++)
		cout << m[i] << "  ";
	cout << endl;
}
int Inverse(int* m, int size)
{
	int tmp;
	for (int i = 0; i < size / 2; i++)
	{
		tmp = m[i];
		m[i] = m[size - 1 - i];
		m[size - 1 - i] = tmp;
	}
	return 0;
}


// ������� 

template <typename T>

void Create(T* m, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "m[" << i << "] = "; cin >> m[i];
		cout << endl;
	}
}

template < typename T>

void printCreate(T* m, int size)
{
	for (int i = 0; i < size; i++)
		cout << m[i] << "  ";
	cout << endl;
}

template < typename T>

T Inverse(T* m, int size)
{
	T tmp;
	for (int i = 0; i < size / 2; i++)
	{
		tmp = m[i];
		m[i] = m[size - 1 - i];
		m[size - 1 - i] = tmp;
	}
	return 0;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	int i;
	cout << "������ ������� �������� ������:" << endl;
	cin >> size;

	double* m = new double[size];
	cout << "������ �������� ������:" << endl;
	Create(m, size);
	cout << endl;
	cout << "�����: " << endl;
	printCreate(m, size);
	cout << "��������� �����:" << endl;
	Inverse(m, size);
	printCreate(m, size);

	delete[] m;
	return 0;
}
