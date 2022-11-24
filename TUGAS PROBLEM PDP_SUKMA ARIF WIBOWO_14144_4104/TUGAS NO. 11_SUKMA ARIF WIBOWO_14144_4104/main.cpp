#include<iostream>
using namespace std ;

int main() {
    int perkalian;
    cout << "\n\t\t Program Perkalian 7 \n\n" << endl;
    cout << "Masukkan Angka : " << endl;
    cin >> perkalian;

    for (int i = 1; i <=7; i++){
        for (int j = 1; j <= 7; j++){
            cout << " " << i * j << " ";
        }
            cout << endl << endl;
    }



}
