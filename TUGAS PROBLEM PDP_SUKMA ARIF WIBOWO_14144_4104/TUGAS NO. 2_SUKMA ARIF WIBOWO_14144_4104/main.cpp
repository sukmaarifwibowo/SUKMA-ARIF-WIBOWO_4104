#include <iostream>

using namespace std;

int main()
{
    int bilgenap;
    cout << "PROGRAM BILANGAN GENAP 100 SAMPAI 1";

    for(bilgenap=100; bilgenap>=1; bilgenap--) {
        if(bilgenap %2==0){
            cout << "\n " << bilgenap << " ";
            continue;
        }
    }

    cout << "\n\n";
    cout << "\tEnd";
    cout << "\n===============================";
    cout << "";
    cout << "\n\nNama : Sukma Arif Wibowo";
    cout << "\n\nNIM : A11.2022.14144";
    cout << "\n\nKelompok : 4104";
    cout << "\n\n";
    cout << "===============================";
    return 0;
}
