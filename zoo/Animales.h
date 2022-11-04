#ifndef ZOO_ANIMALES_H
#define ZOO_ANIMALES_H
#include <string>

using namespace std;

class Animales {

public:
    //metodos o funciones de mi clase animales
    // funciones establecer(set)
    void setNombre (string n);
    void setPeso (float p);
    void setJaula (int j);
    void setTipo (int i);
    void setType (bool b);

    //metodos get

    string getNombre();
    float getPeso();
    int getJaula();
    int getTipo();
    bool getType();

    float promedioPesotipo(float peso1, float peso2);


private:
    //estos son los atributos de los animales

    string nombre ;
    float peso, promedio ;
    int tipo , jaula ;
    bool type ;
    //ponemos los atributos privados de diferente tipo de variable




};


#endif //ZOO_ANIMALES_H
