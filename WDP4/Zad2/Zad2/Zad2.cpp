#include <iostream>
using namespace std;
int main()
{
	int parzyste[5] = {2,4,6,8,10};
	int wielkosc = sizeof(parzyste) / sizeof(int);

	cout << "Lenght of an array: " << wielkosc;
}

