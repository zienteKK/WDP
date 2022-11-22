#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int tab[20];
        int suma = 0;
    for (int i = 0; i < 20; i++) {
        int v1 = rand () % 100 +1;
        tab[i] = v1;
        suma = suma + tab[i];
        cout << tab[i] << endl;
    }
    cout << "------" << endl;
    cout << suma << " " << endl;
}

