#include <iostream>
using namespace std;

int main()
{
	int czas, skip, nowy;
    string am = "am";
	string pm = "pm";
	string lam = "am";
	string lpm = "pm";
	string time; 
		
		
		cout << "Wpisz godzine ( 1 - 12): ";
	cin >> czas;
	
	if (czas < 1 or czas > 12) {
		cout << "Godzina mniejsza niż 1 lub większa niż 12.";
	}
	cout << "am czy pm?: ";
	cin >> time;
	if (time == am or time == pm or time == lam or time == lpm) {
		cout << "Ile godzin w przod?: ";
		cin >> skip;
		nowy = czas + skip;
		// 12 am --> 0:00
		// 12 pm --> 12:00
	}
	if (time == am or time == lam) {
		if (nowy < 12) {
			cout << "Nowy czas to: " << nowy << " " << time;
		}
		else if (nowy > 12) {
			nowy = nowy % 12 == 0;
			cout << "Nowy czas to: " << nowy << " " << time;
		}
	}


	else {
		cout << "Nie wybrano pory dnia";
	}










}