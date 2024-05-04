/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n], suma[n];

    // Pedir al usuario que ingrese los elementos del primer vector
    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector1[i];
    }

    // Pedir al usuario que ingrese los elementos del segundo vector
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector2[i];
    }

    // Calcular la suma de los vectores
    for (int i = 0; i < n; i++) {
        suma[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado en el tercer vector
    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": " << suma[i] << endl;
    }

    return 0;
}