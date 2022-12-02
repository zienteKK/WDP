// zadanie 4 jednak zrobilem se bait 
#include <iostream>
using namespace std;

void randomNumbers() {
	srand(time(NULL));
	int result = 0, count5 = 0, count1 = 0;
	while (count5 < 3 or count1 < 2) {
		result = rand() % 11 - 5;
		if (result == 5) {
			count5++;
			cout << result << " ";
		}
		else if (result == 1) {
			count1++;
			cout << result << " ";
		}
	}
}

int main() {
	randomNumbers();
}