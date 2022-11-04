#include <iostream>
#include <string>
using namespace std;

#ifndef TIENDA_PRODUCTOS_H
#define TIENDA_PRODUCTOS_H


class Productos {
    private:
        string nombre;
        string ciudad;
        double precio;
        int disponibilidad;
    public:
        //explicit Productos(string, double, int, string);
        //explicit Productos();
        void setTodo();
        void ver();
        string getNombre();
        string getCiudad();
        double getPrecio();
        int getDisponibilidad();
};


#endif //TIENDA_PRODUCTOS_H
