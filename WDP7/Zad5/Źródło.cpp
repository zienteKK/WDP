#include <iostream>
using namespace std;

int zad5a(string arg) {
    int n = arg.length();
    int amounta = 0;
    for (int i = 0; i < n; i++) {
        if (arg[i] >= 'a' && arg[i] <= 'z')
            amounta++;
    }
    return amounta;
}

int zad5b(string arg) {
    int n = arg.length();
    int amountb = 0;
    for (int i = 0; i < n; i++) {
        if (!(arg[i] >= 'a' && arg[i] <= 'z') && !(arg[i] >= 'A' && arg[i] <= 'Z'))
            amountb++;
    }
    return amountb;
    }


int main() {
    int zad5[20];
    int size;
    size = sizeof(zad5) / sizeof(int);
    srand(time(NULL));
    
    string str;
    cout << "\nWprowadz dowolny ciag znakow:" << endl;
    cin >> str;
    int amounta = zad5a(str);
    int amountb = zad5b(str);
    cout << "Ilosc malych liter: " << amounta << endl;
    cout << "Liczba znakow ktore nie sa literami lacinskimi: " << amountb << endl;
}