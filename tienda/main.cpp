#include "Productos.h"

void ventas(double p1, double p2, double p3, double p4);
void existencias(int p1, int p2, int p3, int p4);
void numventas(int nv);
int main() {
    int nv=0;

    Productos prod1, prod2, prod3, prod4;

    prod1.setTodo();
    nv++;
    prod2.setTodo();
    nv++;
    prod3.setTodo();
    nv++;
    prod4.setTodo();
    nv++;

    ventas(prod1.getPrecio(),prod2.getPrecio(), prod3.getPrecio(), prod4.getPrecio() );
    existencias(prod1.getDisponibilidad(), prod2.getDisponibilidad(), prod3.getDisponibilidad(), prod4.getDisponibilidad() );
    numventas(nv);

    cout << "\n VENTA 1" << endl;
    prod1.ver();
    cout << "VENTA 2" << endl;
    prod2.ver();
    cout << "VENTA 3" << endl;
    prod3.ver();
    cout << "VENTA 4" << endl;
    prod4.ver();

    return 0;
}

void ventas(double p1, double p2, double p3, double p4){
    cout << "\n El promedio de ventas es: " << (p1+p2+p3+p4)/4 << endl;
}

void existencias(int p1, int p2, int p3, int p4){
    cout << "Hay "<< (p1+p2+p3+p4) << " productos en existencia" << endl;
}

void numventas(int nv){
    cout<< "Se vendieron " << nv << "productos " <<endl;
}
