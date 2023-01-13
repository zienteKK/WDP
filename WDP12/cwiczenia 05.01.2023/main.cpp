#include <iostream>
using namespace std;

void zmienPtr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}



int main() {
	/*char* ptr = nullptr;
	int Liczba = 5;
	int* pLiczba = &Liczba;
	cout << pLiczba << endl;
	cout << *pLiczba;*/

	/*int a = 4, b = 3;
	cout << a << " " << b << endl;
	zmienPtr(&a, &b);
	cout << a << " " << b << endl;*/

	int rozmiar;
	cin >> rozmiar;
	int tab[rozmiar];
	delete; //- zwalnia pamiec
}