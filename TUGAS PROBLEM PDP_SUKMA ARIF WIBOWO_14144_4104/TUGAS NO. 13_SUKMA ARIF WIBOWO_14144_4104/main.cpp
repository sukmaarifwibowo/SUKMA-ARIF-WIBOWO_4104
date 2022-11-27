#include <iostream>

using namespace std;

int main()
{
int i, j, a=0, angka, mins, maks, b=0, sum, c, z, p=0, m, n=0;
float ra, f;

cout << "\n------------------" << endl;
cout << "Soal no. 13" << endl;
cout << "------------------" << endl;
cout << "------------------------------------------------------------------------------" << endl;
cout << "Celcius \t Fahremheit \t Keterangan" << endl;
cout << "------------------------------------------------------------------------------" << endl;
for(c = 100; c >= -45; c--) {
  f = ((9.0/5)*c)+32;
  if(c == 100) {
  printf("%d \t\t %.1f \t\t Air Mendidih \n",c, f);
  } else if(c == 40) {
  printf("%d \t\t %.1f \t\t Air Mandi Panas \n",c, f);
  } else if(c == 37) {
  printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",c, f);
  } else if(c == 30) {
  printf("%d \t\t %.1f \t\t Cuaca Pantai\n",c, f);
  } else if(c == 21) {
  printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",c, f);
} else if(c == 10) {
  printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",c, f);
} else if(c == 0) {
  printf("%d \t\t %.1f \t\t Titik Beku Air \n",c, f);
} else if(c == -18) {
  printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",c, f);
} else if(c == -40) {
  printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",c, f);
  cout << "------------------------------------------------------------------------------" << endl;
}
}

    return 0;
}
