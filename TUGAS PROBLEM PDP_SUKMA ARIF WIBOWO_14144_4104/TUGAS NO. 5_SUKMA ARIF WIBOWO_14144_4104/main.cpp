#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Program Ini Akan Berhenti Jika Anda Menginputkan Angka -99";
    cout << "\nMasukkan Nilai Anda :";
    scanf ("%d", &nilai);

    while (nilai != 0){
        if (nilai == -99)
            break;
        cout << "Masukkan Nilai Anda :";
        scanf ("%d", &nilai);
    }
    cout << "Keluar Karena Break";
    return 0;
}
