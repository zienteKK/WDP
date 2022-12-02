#include <iostream>
using namespace std;

void zad2(int tab2[])
{
	int suma = 0;
	int i;
	for (i = 0; i < 20; i++)
	{
		if (tab2[i] % 2 == 0)
			suma = suma + tab2[i];
	}
	cout << suma;
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
	cout << "Suma parzystych elementow wynosi: ";
	zad2(tablica);
}