﻿#include <iostream>
using namespace std;
int main()
{
	// 0% -100%, zdał od 50% włącznie
	int num;
	cout << "Enter a precentage (0 - 100) to check if you've passed.";
		cin >> num;
		if (num < 0 || num > 100){
			cout << "Wrong number.";
		}
		else {
			if (num < 50) {
				cout << "You've failed the exam.";
			}
			else {
				cout << "You've passed the exam.";

			}


		}










}