//wektory
#include <iostream>
#include <vector>

using namespace std;

int main() {
	//vector<int> wektor (5,1);
	// vetor<int> wektor = {1,1,1,1,1} - to sam oco wy¿ej
	//vector<int> wektor2 (wektor);
	vector<int> wektor = { 1,2,3,4 };
	//wektor[0] = 4; //dla indexu 0 przypisuje 4
	//int rozmiar = 4;
	wektor.push_back(15);
	wektor.pop_back();
	for (int i = 0; i < wektor.size(); i++) {
		
		cout << wektor.at(i) << " ";
	}


}
