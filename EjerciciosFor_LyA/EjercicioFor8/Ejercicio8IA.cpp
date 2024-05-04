/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n];

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

    // Calcular el producto punto de los vectores
    int producto_punto = 0;
    for (int i = 0; i < n; i++) {
        producto_punto += vector1[i] * vector2[i];
    }

    // Mostrar el resultado
    cout << "El producto punto de los vectores es: " << producto_punto << endl;

    return 0;
}