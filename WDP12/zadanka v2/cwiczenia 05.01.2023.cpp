#include <iostream>
using namespace std;
/*reference/pointer to unqualified type can be
converted to reference/pointer to const*/
const int Size = 5;


int sumOfArray(int tab[], int size)
{
    if (size == 1)
        return tab[0];
    else
        return tab[size - 1] + sumOfArray(tab, size - 1);
}


void zad1() {
/*int* ptr = 0;
	int a = 10;
	*ptr = a;
	cout << *ptr;*/
	cout << "zad1\nOdp C, Przez dereferencje nie mozemy nadac wartosci pointerowi\n";

}
void zad2() {
	float f = 10.5;
	float p = 2.5;
	float* ptr = &f;
	(*ptr)++;
	*ptr = p;
	//cout << *ptr << " " << f << " " << p;
	cout << "zad2\nOdp C: Przypisujac wartosci do pointera wykonuje te¿ jednoczesnie zmiany wartosci f "<<endl;
}
void zamien(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void zamienPtr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


	
int main()
{

    int tab[Size];

    for (int i = 0; i < Size; i++)
        tab[i] = i;


    cout << "Zawartosc tablicy: ";

    for (int i = 0; i < Size; i++)
        cout << tab[i] << " ";
    cout << endl;



    cout << "Suma elementow tablicy: " << sumOfArray(tab, Size) << endl;
	
	zad1();
	zad2();
	//zmienPtr
	cout << "zad3\n";
	int a = 4;
	int b = 3;
	zamien(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	zamienPtr(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;
    return 0;
}