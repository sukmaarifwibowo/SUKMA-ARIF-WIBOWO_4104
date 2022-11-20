#include <iostream>

using namespace std;

int main()
{
    cout << "Mencetak Angka 100 Sampai 1 Dengan Menggunakan Looping For Dan Break";
    for (int a = 100; a >= 1; a--) {
        if (a == 55){
            break;
        }
        cout << a << endl;
    }
    return 0;
}
