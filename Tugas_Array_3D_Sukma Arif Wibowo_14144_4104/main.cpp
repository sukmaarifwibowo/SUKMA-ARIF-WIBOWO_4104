#include <iostream>

using namespace std;

int main(){
int x = 0, y = 1, z = 0, i = 2;
int j[3][2][2];
float rata_rata;

for (int o = 0; o < 3; o++){
    for (int k = 0; k < 2; k++){
        for (int e = 0; e < 2; e++){
            j[o][k][e] = i;
            i += 2;
            cout << i << " ";
            z += i;
            x += y;
            rata_rata = (float) z / x;
        }
    }
}
cout << "\n";
cout << "Sum Kelipatan 4 = " << z << endl;
cout << "Rata - Rata Sum Kelipatan 4 = " << rata_rata << endl;

return 0;
}
