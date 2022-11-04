
#include "rectangulo.h"

using namespace std;
Rectangulo::Rectangulo(float _largo, float _ancho) {
    largo= _largo;
    ancho= _ancho;
}

void Rectangulo::perimetro() {
    float _perimetro;
    _perimetro= (largo*2)+(ancho*2);
    cout<<"El perimetro es: " << _perimetro<< endl;
}
void Rectangulo::area(){
    float _area;
    _area=(largo * ancho);
    cout<< "El area es: "<< _area<<endl;
}
