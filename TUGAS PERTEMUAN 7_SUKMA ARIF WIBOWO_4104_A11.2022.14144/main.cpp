#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char Daftar_Jurusan;
    char Kategori_Mahasiswa;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "3. Desain Komunikasi Visual" << endl;
    cout << endl;

    cout << "Masukkan Jurusan Anda :";
    cin >> Daftar_Jurusan;
    cout << endl;
    cout << "1. Semester 1-2 = Freshman" << endl;
    cout << "2. Semester 3-4 = Sophomore" << endl;
    cout << "3. Semester 5-6 = Junior" << endl;
    cout << "4. Semester 7-8 = Senior" << endl;
    cout << endl;
    cout << "Masukkan Semester Anda :";
    cin >> Kategori_Mahasiswa;

    if (Daftar_Jurusan == '1') {
        cout << "Teknik Informatika" << endl;
    }
    else if (Daftar_Jurusan == '2') {
        cout << "Sistem Informasi" << endl;
    }
    else if (Daftar_Jurusan == '3') {
        cout << "Desain Komunikasi Visual" << endl;
    }
    if (Kategori_Mahasiswa == '1') {
        cout << "Semester 1-2 = Freshman" << endl;
    }
    else if (Kategori_Mahasiswa == '2') {
        cout << "Semester 3-4 = Sophomore" << endl;
    }
    else if (Kategori_Mahasiswa == '3') {
        cout << "Semester  5-6 = Junior" << endl;
    }
    else if (Kategori_Mahasiswa == '4') {
        cout << "Semester 7-8 = Senior" << endl;
    }
    return 0;
}
