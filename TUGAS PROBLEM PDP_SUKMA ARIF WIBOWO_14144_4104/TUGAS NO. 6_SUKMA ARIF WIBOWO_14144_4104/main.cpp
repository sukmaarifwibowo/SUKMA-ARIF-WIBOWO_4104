#include <iostream>

using namespace std;

int main()
{
    int jml_index, maks, minim, nilai;
    cout << "Banyak Data = ";
    cin >> jml_index;
    for (int a = 1; a <= jml_index; a++){
        cout << "Masukkan Data Ke-" << a << " = ";
        cin >> nilai;
        if( a == 1){
            minim = nilai;
            maks = nilai;
        } else {
            if(nilai > maks){
                maks = nilai;
            }
            if(nilai < minim) {
            minim = nilai;
        }
        }

    }
    cout << "Nilai Maksimal = " << maks << endl;
    cout << "nilai Minimal = " << minim << endl;
    return 0;
}
