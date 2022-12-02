#include <iostream>
using namespace std;

int zad5a(string b) {
	int counter = 0;
	for (int i = 0; i < b.length(); i++) {
		if (b[i] >= 'a' and b[i] <= 'z') {
			counter++;
		}
	}
	return counter;
}
int zad5b(string b) {
	int counter = 0;
	for (int i = 0; i < b.length(); i++) {
		if ((!b[i] >= 'a' and !b[i] <= 'z') and(!b[i] >= 'A' and !b[i] <= 'Z')) {
			counter++;
		}
	}
	return counter;
}

int main(){
	string a;
	int result_a;
	int result_b;
	cout << "Enter some text" << " ";
	cin >> a;
	result_a = zad5a;
	result_b = zad5b;
	cout << result_a;

}

