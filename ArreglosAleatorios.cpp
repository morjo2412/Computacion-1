//Author: Jorge Antonio Montes Rios
//Montes.24@comunidad.unam.mx
//12 sept, 2022

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

int main() {
    array <int, 1000> A {};
    array <int, 1000> B {};
    array <int, 1000> C {};
    int Max= -999, Min= 999;

    srand((int)time(0));

    for(int i=0; i<1000;i++){
        A[i]=(rand() % 100)+1;
        B[i]=(rand() % 100)+1;
        C[i]=A[i]+B[i];
        if(C[i]>Max)
            Max=C[i];
        else if(C[i]<Min)
            Min= C[i];

        cout << A[i] << " + " << B[i] << " = " << C[i] << endl;
    }

    cout << "El menor de los resultados es " << Min << endl;
    cout << "El mayor de los resultados es " << Max << endl;

    return 0;
}
