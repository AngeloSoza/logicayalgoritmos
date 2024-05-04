/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

//Introducimos nuestra libreria
#include <iostream>
using namespace std;

//Agregamos nuestra funcion principal
int main()
{
    int suma =0; // Agregamos una variable suma inicializada en 0
    for (int i = 100; i <= 200; i++) { //Agregamos el bucle For, en donde "i" empezara en 100 y si i es menor o igual a 200, aumentara 1 numero
    
        if (i % 2 == 0) { //está verificando si el resto de dividido por 2 es igual a 0. Si es así, se ejecutará i 

            suma += i; //con esta funcion agregamos el valor actual de i, a la variable suma
        }
    }
    cout <<" La suma de los numeros pares comprendidos entre 100 y 200 es de:"<< suma<< endl;

    return 0;
}

