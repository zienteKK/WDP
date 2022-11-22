#include <iostream>
using namespace std;

int main()
{
int cena, sprzedaz, zysk;

cout << "Wpisz cene produktu: ";
cin >> cena;
cout << "Wpisz cene sprzedazy: ";
cin >> sprzedaz;
zysk = sprzedaz - cena;

if (zysk < 0) {
	cout << "Strata: " << zysk << endl;
}
else {
	cout << "Zysk: " << zysk << endl;
}

}