/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

//introducimos las librerias:
#include <iostream> //El archivo iostream proporciona funciones de entrada y salida estándar

using namespace std;//Esta línea indica que se utilizará el espacio de nombres std para acceder a las funciones y clases de la biblioteca estándar de C++. 

//Declaramos la funcion principal del programa -> int devuelve un valor entero
int main()
{
    int suma = 0; //Declaramos que la suma empezara en 0; esta variable se ocupa para almacenar la suma de los cuadrados de los num entre el 1 y el 100.
    
    //Declaramos el ciclo for
    for (int i = 1; i<= 100; i++){ //esta linea significa que "i" iniciara en 1 y va a ir incrementando en 1, la condicion es que se ejecutara mientras i sea menor o igual a 100.
        suma += i*i;// Esta linea calculara el cuadrado de i y lo suma a la variable "suma".
    }

cout << "La suma de los cuadrados de los numeros entre 1 y 100 es:"<< suma<<endl;
    return 0;
}

 
