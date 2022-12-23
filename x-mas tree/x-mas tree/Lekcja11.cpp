#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "The height of the tree: ";
    cin >> height;
    cin.ignore();

    cout << endl << flush;

    int colour[5] = { 31, 34, 35, 36, 37 };
    for (int r = height; r >= 0; r--) {
        for (int c = 0; c < r; c++) {
            cout << " ";
        }
        for (int c = r * 2; c < height * 2 - 1; c++) {
            if (((int)(rand() % 1000 + 1)) > 950) {
                int i = (int)(rand() % 5 + 1);
                cout << "\033[1;" << colour[i] << "m●\033[0m";
            }
            else {
                cout << "\033[0;32m.\033[0m";
            }
        }
        cout << endl;
    }

    int base = height * 2 - 1;
    int logg = (int)base / 5;
    if (logg == 0)
        logg = 1;
    if (logg % 2 == 0)
        logg += 1;

    int log_init = (int)(height - (logg / 2)) - 1;
    for (int r = 0; r < logg; r++) {
        for (int c = 0; c < log_init; c++) {
            cout << " ";
        }
        for (int c = 0; c < logg; c++) {
            cout << "\033[0;33m#\033[0m";
        }
        cout << endl;
    }

    cin.ignore();

    return 0;
}