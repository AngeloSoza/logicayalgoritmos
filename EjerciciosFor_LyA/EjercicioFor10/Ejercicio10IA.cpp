/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
using namespace std;

int main() {
    int matriz[10][10], transpuesta[10][10];
    int filas, columnas;

    // Pedir al usuario que ingrese las dimensiones de la matriz
    cout << "Ingrese las filas y columnas de la matriz: ";
    cin >> filas >> columnas;

    // Pedir al usuario que ingrese los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la transposición de la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Mostrar la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}