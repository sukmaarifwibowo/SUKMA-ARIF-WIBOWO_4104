#include <iostream>

using namespace std;

int main()
{
    int i, j, a=0, angka, mins, maks, b=0, sum, c, z, p=0, m, n=0;
    float ra, f;

    cout << "\n------------------" << endl;
    cout << "Soal no. 9" << endl;
    cout << "------------------" << endl;

for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> m;
    cout << m << endl;
    if(m == 9999) {
        break;
    } else if(m != 9999) {
        n += m;
    }
    b += 1;
}
cout << "Jumlah angka = " << n << endl;
cout << "Jumlah cacah angka = " << b << endl;
    return 0;
}
