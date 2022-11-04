#include <iostream>
#include <string>
#include <array>
#include <vector>
#include "Animales.h"
//recuerda incluir nuestra libreria Animales

using namespace std;

vector <float > presa ;
vector <float> depredadores ;

int main() {
    Animales leonObj, cheetaObj , unicornioObj , elefanteObj;
    //establecemos los objetos que (animales) pertenece a la clase Animales
    // establecemos valores atributos
    leonObj.setNombre("jacinto el leon");
    leonObj.setPeso(500.5);
    leonObj.setJaula(11);
    leonObj.setTipo(1);
    //0 = presa 1 = depredador
    leonObj.setType(1);

    // unicamente asignamos los valores a los atributos
    //ahora tendremos una imprecion de los valores
    cout << "nombre: " << leonObj.getNombre() << "\n";
    cout << "peso: " << leonObj.getPeso() << "\n";
    cout << "tipo: " << leonObj.getTipo() << "\n";
    cout << "type: " << leonObj.getType() << "\n";
//esta parte no es del examen

    cheetaObj.setNombre("chetos");
    cheetaObj.setPeso(105);
    cheetaObj.setJaula(19);
    cheetaObj.setTipo(1);
    //0 = presa 1 = depredador
    cheetaObj.setType(1);

    unicornioObj.setNombre("pepe");
    unicornioObj.setPeso(1011.2);
    unicornioObj.setJaula(3);
    unicornioObj.setTipo(0);
    //0 = presa 1 = depredador
    unicornioObj.setType(0);

    elefanteObj.setNombre("juan");
    elefanteObj.setPeso(17.7);
    elefanteObj.setJaula(9);
    elefanteObj.setTipo(0);
    //0 = presa 1 = depredador
    elefanteObj.setType(0);




    cout << "animales y jaulas: " <<"\n" << leonObj.getNombre() << " " << leonObj.getJaula() << "\n" <<  cheetaObj.getNombre() << cheetaObj.getJaula() << "\n" << unicornioObj.getNombre() << unicornioObj.getJaula() <<"\n" << elefanteObj.getNombre() << elefanteObj.getJaula() << "\n";
    cout << "el promedio del peso de los carnivoros tipo(1) es: " << (leonObj.getPeso() + cheetaObj.getPeso())/2 << endl;
    cout << "el promedio del peso de las presas tipo(0) es: " << (unicornioObj.getPeso() + elefanteObj.getPeso())/2 << endl;








    return 0;
}

/*
float Animales::promedioPesotipo() {

    Animales

    if (tipo==1){
        promedio = (leonObj.getPeso() +  cheetaObj.getPeso())/2;
    }
    return promedio;
}
*/
