#include <iostream>

using namespace std;

int main()
{
int i, j, a=0, angka, mins, maks, b=0, sum, c, z, p=0, m, n=0;
float ra, f;

cout << "\n------------------" << endl;
cout << "Soal no. 11" << endl;
cout << "------------------" << endl;
cout << "Masukan angka = ";
cin >> angka;
for(i = 1; i <= 10; i++) {
    sum = i*angka;
   cout << i << " x " << angka << " = " << sum << endl;
}
    return 0;
}
