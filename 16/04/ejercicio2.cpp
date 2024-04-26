/*Escribir un programa que lea los tres lados
de un triángulo. Determinar el tipo de triángulo:
equilátero, si tiene tres lados iguales; o isósceles, si tiene
dos lados iguales. Dar énfasis al uso de la estructura de
decisión doble (if-then-else).*/

#include<iostream>

using namespace std;

void evalTriangulo(int ladoA, int ladoB, int ladoC){
    if(ladoA == ladoB && ladoB == ladoC){
        cout << "Triangulo Equilatero" << endl;

    }else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        cout <<"Triangulo Isoceles" << endl;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int ladoA, ladoB, ladoC;
    cout << "Ingrese el lado A: ";
    cin >> ladoA;
    cout << "Ingrese el lado B: ";
    cin >> ladoB;
    cout << "Ingrese el lado C: ";
    cin >> ladoC;

    evalTriangulo(ladoA, ladoB, ladoC);
    return 0;
}

