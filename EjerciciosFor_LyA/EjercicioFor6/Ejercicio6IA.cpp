/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/
#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    // Sumar los números pares comprendidos entre 100 y 200
    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    // Imprimir el resultado
    cout << "La suma de los números pares comprendidos entre 100 y 200 es: " << suma << endl;

    return 0;
}