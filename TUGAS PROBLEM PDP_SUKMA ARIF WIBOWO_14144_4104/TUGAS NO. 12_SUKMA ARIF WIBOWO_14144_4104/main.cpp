#include <iostream>

using namespace std;

int main()
{
int i, j, a=0, angka, mins, maks, b=0, sum, c, z, p=0, m, n=0;
float ra, f;

cout << "\n------------------" << endl;
cout << "Soal no. 12" << endl;
cout << "------------------" << endl;
cout << "-------------------------" << endl;
cout << "Celcius     Fahrenheit" << endl;
cout << "-------------------------" << endl;
for(c = 0; c <= 100; c++) {
  f = ((9.0/5)*c)+32;
  printf("%d \t|\t %.1f |\n",c, f);
}
    return 0;
}
