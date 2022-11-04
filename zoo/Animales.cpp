//
// Created by ander on 11/3/2022.
//
#include <array>
#include "Animales.h"

//funciones set()
void Animales::setNombre(std::string n) {
    nombre = n ;
}
void Animales::setPeso(float p) {
    peso = p;
}
void Animales::setJaula(int j) {
    jaula = j ;
}
void Animales::setTipo(int i) {
    tipo = i ;
}
void Animales::setType(bool b) {
    type = b ;
}

//funciones get

string Animales::getNombre() {
    return nombre;
}
float Animales::getPeso() {
    return peso;
}
int Animales::getJaula() {
    return jaula;
}
int Animales::getTipo() {
    return tipo;
}
bool Animales::getType() {
    return type;
}
//retornas lo que declaraste en atributos





//metodo promedio de peso por tipo de animal

void promedioPesotype();

//metodo contar numero de animales por tipo
void numeroTipo();
void numeroType();

//metodo numero total animales
void numeroTotalanimales();

//metodo animales y sus jaulas
void imprimirAnimalesjaulas();


float promedioPesotipo(float peso1, float peso2){
    float promedio =0 ;
    promedio = (peso1 + peso2) / 2 ;
    return promedio ;
}
