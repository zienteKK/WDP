#include <iostream>
using namespace std;
int main()
{
	int n;
	long long silnia = 1;
	cout << "Wpisz liczbe: ";
	cin >> n;
	if (n < 0) {
		cout << "Podana liczba nie jest naturalna!";
	}
	else if (n == 0) {
		cout << "Rozwiaznie: " << n << "! = " << "1" << endl;
	}
	else {
		for (int i = 1; i <= n; ++i) {
			silnia = silnia * i;
		}
		cout << "Rozwiaznie: " << n << "! = " << silnia << endl;
	}






}

	

	



