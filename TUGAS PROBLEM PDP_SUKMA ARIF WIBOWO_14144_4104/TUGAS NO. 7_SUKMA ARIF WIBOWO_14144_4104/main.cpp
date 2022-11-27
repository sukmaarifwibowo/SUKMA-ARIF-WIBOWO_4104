#include <iostream>

using namespace std;

int main()
{
    int i, j, a=0, angka, mins, maks, b=0, sum, c, z, p=0, m, n=0;
    float ra, f;

    cout << "------------------" << endl;
    cout << "Soal no. 7" << endl;
    cout << "------------------" << endl;

    for(j = 1; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> z;
    if(z == 9999) {
        break;
    }
    cout << z << endl;
    p = p + z;
}
cout << "Jumlah angka = " << p << endl;
    return 0;
}
