//Author: Jorge Antonio Montes Rios
//Montes.24@comunidad.unam.mx
//19 sept, 2022

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

#define n 10
using namespace std;

void inicializarMatrices();
void imprimirMatrices(array<array<int, n>, n> mat);

array<array<int, n>, n> sumaMatrices(array<array<int, n>, n> A, array<array<int, n>, n> B);
array<array<int, n>, n> restaMatrices(array<array<int, n>, n> A, array<array<int, n>, n> C);
array<array<int, n>, n> multiplicacionMatrices();

array<array<int, n>, n> A{};
array<array<int, n>, n> B{};
array<array<int, n>, n> C{};

int main() {

    inicializarMatrices();
    imprimirMatrices(A);
    imprimirMatrices(B);
    sumaMatrices(A, B);
    restaMatrices(A, B);


}

void inicializarMatrices(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            A[i][j]=(rand() % 100)+1;
            B[i][j]=(rand() % 100)+1;
        }
    }
}

void imprimirMatrices(array<array<int, n>, n> mat){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< mat[i][j]<< " ";
        }
    }
}

array<array<int, n>, n> sumaMatrices(array<array<int, n>, n> A, array<array<int, n>, n> B){
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

array<array<int, n>, n> restaMatrices(array<array<int, n>, n> A, array<array<int, n>, n> B){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            C[i][j]=A[i][j]- B[i][j];
        }
    }
}
