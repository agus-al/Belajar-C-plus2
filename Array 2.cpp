
#include <iostream>
using namespace std;

int main()
{

    int contohArray[3][2] = { { 1, 2}, { 3, 4}, { 5, 6} };
    int baris;
    int kolom;

    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 2; kolom++) {
            cout << contohArray[baris][kolom] << " ";
        }
        cout << "\n";

    }


}

