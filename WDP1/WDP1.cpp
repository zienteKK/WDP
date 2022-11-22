//#include <iostream>

//using namespace std;
//int main() {
	//zad 1  
	   //double x = 5.64;
	   //double y = 5.34;
	   //double suma = x + y;
	   //cout << "Wynik sumy x i y wynosi: " << suma;
//}

//int main() {
//zad 2
	//int a = 12;
	//int b = 15;
	// int c;
//c = a;
//a = b;
//b = c;

	//cout << "a: " << a << '\n' << "b: " << b;
//}


//#include <iostream>

//using namespace std;

//int main()
//{
//zad 3
	//double Kelwin, Celcjusz;
	//cout << "Wpisz temperature w Kelwinach:\n";

//	cin >> Kelwin;

//	Celcjusz = -272.16 * Celcjusz;

//	cout << "Temperatura w Kelwinach to: " << Kelwin;
//	cout << "Temperatura w Celcjuszach to: " << Celcjusz;


//}

//zad 4

//#include <iostream>

//int main () {
//using namespace std;

//int a, b; //a - dzielna, b = dzielnik,

//cout << "Wpisz dzielna: ";
//cin >> a;
//cout << "Wpisz dzielnik: ";
//cin >> b;
//cout << "Wynik z dzielenia to: " << a / b << ", reszta = " << a % b;

//}


//zad 5 

#include <iostream>

using namespace std;

bool pierwsza(int x) {

	if (x < 2)
		return false;
	for (int y = 2; y * y <= x; y++)
		if (x % y == 0)
			return false;
	return true;
	
	
	int x;
	cout << "podaj liczbe: ";
	cin >> x;
	if (pierwsza(x) == 1)
		cout << "liczba" << x << "jest pierwsza";
	else 
		cout << "liczba "
}
