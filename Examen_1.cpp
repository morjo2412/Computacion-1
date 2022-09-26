//Author: Jorge Antonio Montes Ríos
//Montes.24@comunidad.unam.mx
//29 sept, 2022
//Entradas: Un arreglo de n elementos
//Salidas: el numero maximo, el numero minimo, arreglo sin elementos repetidos

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 10;
    int Max= -999, Min= 999, m=0;
    array <int, n> A {};
    array <int, n> B {};

    srand((int)time(0));

    cout << "Se usara un arreglo aleatorio" << endl;
    cout << "El arreglo generado aleatoriamente es: (";

    for(int i=0; i<n; i++){
        A[i]=(rand() % 100)+1;
        cout << A[i] << " ";
        if(A[i] < Min){
            Min = A[i];
        }
        else if(A[i] > Max){
            Max = A[i];
        }
        for(int j=0; j<n; j++) {
            if (A[i] == B[j]) {
                break;
            } else if (j == m) {
                B[m] = A[i];
                m++;
                break;
            }
        }
    }

    cout << ")"<< endl << "El arreglo sin elementos repetidos es: (";
    for(int i=0; i< n; i++){
        if(B[i] != 0) {
            cout << B[i] << " ";
        }
    }

    cout << ")"<< endl << "El menor de los valores del arreglo es " << Min << endl;
    cout << "El mayor de los valores del arreglo es " << Max << endl;

    return 0;
}

