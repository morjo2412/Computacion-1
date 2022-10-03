#include <iostream>

using namespace std;

template <typename T>
T division(T ultimo, T penultimo);

template <typename T>
T fibonacci(T n);

int main() {
    cout << "Hello, World!" << std::endl;
    return 0;
}

template <typename T>
T fibonacci(T n){
    int a=0, b=1, c=0;
    cout << "ingrese el numero de terminos para la serie: ";
    for(int i; i <= n; i++){
        c= a+b;
        a=b;
        b=c;
        if(i=n-1)
            penultimo=c;
        if(i=n)
            ultimo=c
    }
}

template <typename T>
T division(T ultimo, T penultimo){
    fibonacci
    return ultimo/penultimo
}
