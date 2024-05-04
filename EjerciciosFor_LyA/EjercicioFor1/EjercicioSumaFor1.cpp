/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

//introducimos las librerias:
#include <iostream>

using namespace std; //Esta línea indica que se utilizará el espacio de nombres std (standard) para acceder a las funciones y clases de la biblioteca estándar de C++. 

//Declaramos nuestra funcion principal:
int main() { // La función main es la entrada del programa y es donde se inicia la ejecución.

    int n, sum = 0; /*Esta línea declara dos variables enteras: num y sum. La variable num se utilizará 
                    para almacenar el valor ingresado por el usuario, mientras que la variable sum se 
                    utilizará para calcular la suma de los números naturales. La variable sum se inicializa con un valor de 0.*/

//Le pedimos al usuario que ingrese un numero:
    cout << "Ingresa un numero natural: ";
    
//Guardamos el numero que el usuario ingreso:
    cin >> n;


    for (int i = 1; i <= n; i++) { /*Esta línea declara un bucle for que se ejecutará desde i = 1 hasta i = n. 
                                    La variable i se incrementará en 1 en cada iteración del bucle.*/

        sum += i; /*En cada iteración del bucle, esta línea suma el valor actual de i a la variable sum. De esta manera, 
                    se va acumulando la suma de los números naturales desde 1 hasta n.*/
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << sum << endl;

    return 0;
}