#include <iostream>

using namespace std;

int main()
{
    int x;
    int uang = 5000;
    int permen;
    cin >> x;

    if(x==500){
        permen = 5;
    }
    else if (x==1000){
        permen = uang/1000;
        while (x <= uang){
            cout <<x<< " ";
            x = x + 300;
        }
        permen = uang/300;
    }

    cout << "\nPermen Dito Berjumlah :" << permen;
    return 0;
}
