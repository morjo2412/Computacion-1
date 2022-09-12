//Author: Jorge Antonio Montes Ríos
// Montes.24@comunidad.unam.mx
//09 sept, 2022

#include <iostream>

using namespace std;

#define N 10

int main() {
    //definicion del arreglo
    int arr[10]{0};

    //interar el arreglo
    for(int i=0; i<N; i++){
        arr[i]= i + i;
        cout << arr[i] << "\t";

    }

    return 0;
}
