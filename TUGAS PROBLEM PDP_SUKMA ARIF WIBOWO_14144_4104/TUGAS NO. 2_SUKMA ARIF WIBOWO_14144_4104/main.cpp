#include <iostream>

using namespace std;

int main()
{
    int bilgenap;
    cout << "PROGRAM BILANGAN GENAP 100 SAMPAI 1";

    for(bilgenap=100; bilgenap>=1; bilgenap--) {
        if(bilgenap %2==0){
            cout << "\n Nilai Genap Adalah :  " << bilgenap << " ";
        }
    }
    return 0;
}
