#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Menghitung Luas Lingkaran  ##" << endl;
  cout << "=============================================" << endl;
  cout << endl;

  float r, luas;

  cout << "Input jari-jari lingkaran: ";
  cin >> r;
  luas = 3.14 * r * r;

  cout << "Luas lingkaran = "<< luas << endl;

  return 0;
}
