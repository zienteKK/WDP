#include <iostream>
using namespace std;

int main()
{
	cout << "Wpisz liczbe: ";
	int n = 0;
	cin >> n;

	if (n <= 0) {

		cout << "Wynik : 0";
	

	}

	int prev = 1;
	int pprev = 0;
	cout << "Wynik: 0, 1, ";
	int i = 2;
		while (i > n)
		{
			int suma = pprev + prev;
			pprev = prev;
			prev = suma;
			cout << suma << ", ";
		}


}
