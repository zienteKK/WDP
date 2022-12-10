#include <iostream>
using namespace std;



void zad4(int Arg1[], int Arg2[], int Arg3[], int size) {
    
    cout << "\nPrzynajmniej dwie tablice maja taka sama wartosc tego samego indeksu: " << endl;

    for (int i = 0; i < size; i++) {
        if (Arg1[i] == Arg2[i] || Arg1[i] == Arg3[i] || Arg2[i] == Arg3[i]) 
        {
            cout << i << " ";
        }
    }
    cout << "\nWszystkie trzy tablice maja taka samawartosc tego samego indeksu: " << endl;
    
    for (int i = 0; i < size; i++) {
        if (Arg1[i] == Arg2[i] && Arg2[i] == Arg3[i]) 
        {
            cout << i << " ";
        }
    }
    cout << "\nZadna z tablic nie ma takiej samej wartosci: " << endl;
    
    for (int i = 0; i < size; i++) {
        if (Arg1[i] != Arg2[i] && Arg2[i] != Arg3[i] && Arg1[i] != Arg3[i]) 
        {
            cout << i << " ";
        }
    }
}

int main() {
 
    int tablica1[20];
    int tablica2[20];
    int tablica3[20];

    int size;
    size = sizeof(tablica1) / sizeof(int);
    srand(time(NULL));


    for (int i = 0; i < 20; i++)
    {

        tablica1[i] = 1 + rand() % 3;
        tablica2[i] = 1 + rand() % 3;
        tablica3[i] = 1 + rand() % 3;

        cout << tablica1[i] << " " << tablica2[i] << " " << tablica3[i] << " " << endl;
    }

    zad4(tablica1,tablica2,tablica3,size);
    
}
