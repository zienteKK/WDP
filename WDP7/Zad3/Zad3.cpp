#include <iostream>
using namespace std;

void zad3(int tab3[])
{
	int wartosc = 0;
	for (int i = 0; i < 20; i++)
	{
		if (tab3[i] > wartosc)
		{
			wartosc = tab3[i];
		}
	}
	cout << wartosc;
}
int main()
{
	srand(time(NULL));
	int tablica[20];
	for (int i = 0; i < 20; i++)
	{
		tablica[i] = rand() % 100;
		cout << tablica[i] << endl;
	}
	cout << "Najwieksza wartosc: ";
	zad3(tablica);
}