#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> wektor) {
	for (int i = 0; i < wektor.size(); i++) {

		cout << wektor.at(i) << " ";
	}
}
int onlyPositive(vector<int> wektor2) {
	int suma = 0;
	for (int i = 0; i < wektor2.size(); i++) {
		if (wektor2.at(i) > 0) {
			suma = suma + wektor2.at(i);
		}
	}
	return suma;
}
vector<int> evenVector(vector<int> wektor3) {
	vector <int> nowy;
	for (int i = 0; i < wektor3.size(); i++) {
		if (wektor3.at(i) % 2 ==0) {
			nowy.push_back(wektor3.at(i));
		}
	}
	return nowy;
}

int main() {
	vector<int> wektor = { -3,4,5 };
	printVector(wektor);

	vector<int> wektor2 = { -5,-10,-2,6,8,10,2 };

	cout << "\nZadanie 2: " << onlyPositive(wektor2);

	vector<int> wektor3 = { 1,2,3,4 };
	cout << "\nZadanie 3: ";
	printVector(evenVector(wektor3));

}