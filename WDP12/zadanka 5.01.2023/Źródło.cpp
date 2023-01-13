#include <iostream>

using namespace std;
/*reference/pointer to unqualified type can be
converted to reference/pointer to const*/
const int Size = 5;
 

int sumOfArray(int tab[], int size)
{
    if (size == 1) 
        return tab[0]; 
    else
        return tab[size - 1] + sumOfArray(tab, size - 1);
}

int main()
{

    int tab[Size];

    for (int i = 0; i < Size; i++)
        tab[i] = i;


    cout << "Zawartosc tablicy: ";

    for (int i = 0; i < Size; i++) 
        cout << tab[i] << " ";
        cout << endl;
    

    
    cout << "Suma elementow tablicy: " << sumOfArray(tab, Size) << endl;

    return 0;
}
