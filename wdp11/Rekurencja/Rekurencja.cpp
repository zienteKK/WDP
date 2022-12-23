#include <iostream>
using namespace std;

/*int sumaLiczb(int n) {
    if (n < 1) {
        cout << "\nThe sum of numbers is: ";
        return 0;
    }
    cout << n << " ";
    return n + sumaLiczb(n - 1);
}*/
/*int factorial(int n) {
    if (n == 0) {
        
        return 1;
    }
    else if (n < 0) {
        cout << " You've entered negative number!";
        return 0;
    }
    else {
        return n * factorial(n - 1);
    }
}*/
/*int elementCiag(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return (-n * elementCiag(n - 1) + 4);
    }
}*/
int Fibb(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n < 0) {
        return 0;
    }
    else {
        return Fibb(n - 1) + Fibb(n - 2);
    }
}
int main()
{
    int n, result;
    cout << "Enter a number: ";
        cin >> n;

       // result = sumaLiczb(n);
        //result = factorial(n);
        //result = elementCiag(n);
        result = Fibb(n);
        cout << "Wynik dla n = " << n <<" wynosi: ";
        cout << result;
}

