#include <iostream>
using namespace std;


int main()
{
    int i;
    for (i = 0; i <= 50; i = i + 2)
        cout << i << ", ";
    
    while (i <= 100) {
        cout << i << ", ";
        i = i+2;

    }
   
    return 0;
}

