#include <iostream>
using namespace std;



void zad1(int argument[])
{
	int suma = 0;
	for (int i = 0; i < 20; i++)
	{
		suma = suma + argument[i];
	}
	cout << suma;
}
int main()
{
	int tab1[20];
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		tab1[i] = rand() % 100;
		cout << tab1[i] << endl;
	}
	cout << "Suma wynosi: ";
	zad1(tab1);
}