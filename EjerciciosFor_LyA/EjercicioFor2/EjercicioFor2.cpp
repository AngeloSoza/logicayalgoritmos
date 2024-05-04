/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

//introducimos las librerias:
#include <iostream>
using namespace std; //Esta línea indica que se utilizará el espacio de nombres std (standard) para acceder a las funciones y clases de la biblioteca estándar de C++. 

int main()
{
    for (int i = 100; i>= 1; i--){ //en esta linea decimos que i empieza en 100 e ira de una manera descendente hasta llegar a uno
        if (i % 2 != 0){ //Para cada iteración, verificamos si el número actual "i" es impar usando el operador de módulo %. 
            cout << i << " ";
        }
    }
    return 0;
}

