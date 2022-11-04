#include "Productos.h"

using namespace std;

void Productos::setTodo() {
    string _nombre;
    string _ciudad;
    double _precio;
    int _disp;

    cout<<"ingrese el nombre del producto, luego el precio, la disponibilidad (0 o 1) y por ultimo la ciudad \n";
    cin >> _nombre >> _precio >> _disp >> _ciudad ;

    nombre = _nombre;
    precio= _precio;
    disponibilidad = _disp;
    ciudad = _ciudad;
}

void Productos::ver(){
    cout << "Nombre: " << nombre << "\n" << "Precio: " << precio << "\n"
    << "Disponibilidad: " << disponibilidad << "\n" << "Ciudad: " << ciudad << "\n" << endl;
}

string Productos::getNombre() {
    return nombre;
}

string Productos::getCiudad() {
    return ciudad;
}

double Productos::getPrecio() {
    return precio;
}

int Productos::getDisponibilidad() {
    return disponibilidad;
}

