#include <iostream>
#include <cstdlib>  // Untuk rand() dan srand()
#include <ctime>    // Untuk time()

using namespace std;

int lemparDadu() {
    return rand() % 6 + 1; // Menghasilkan angka antara 1 hingga 6
}

int main() {
    srand(time(0)); // Seed untuk menghasilkan angka acak berbeda setiap dijalankan

    char ulang;
    do {
        int hasil = lemparDadu();
        cout << "Hasil lemparan dadu: " << hasil << endl;

        cout << "Ingin melempar lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih telah bermain!" << endl;

    return 0;
}
