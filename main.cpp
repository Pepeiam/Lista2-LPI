#include <iostream>
#include <string>

#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Triangulo *tri = new Triangulo(3.5, 5, "triangulo");
    Quadrado *qua = new Quadrado(7.5, "quadrado");
    Circulo *cir = new Circulo(9.8, "circulo");

    cout << "Nome obj 1: " << tri->getNome() << endl;
    cout << "Altura: " << tri->getAltura() << " / " << "Base: " << tri->getBase() << endl;
    cout << "Area triangulo: " << tri->calcularArea(3.5, 5) << endl;

    cout << "\nNome obj 2: " << qua->getNome() << endl;
    cout << "Lado: " << qua->getLado() << endl;
    cout << "Area quadrado: " << qua->calcularArea(7.5) << endl;

    cout << "\nNome obj 3: " << cir->getNome() << endl;
    cout << "Raio: " << cir->getRaio() << endl;
    cout << "Area circulo: " << cir->calcularArea(9.8) << endl;

    return 0;
}
