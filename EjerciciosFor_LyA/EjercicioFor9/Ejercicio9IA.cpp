/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], C[10][10];
    int filasA, columnasA, filasB, columnasB;

    // Pedir al usuario que ingrese las dimensiones de la primera matriz
    cout << "Ingrese las filas y columnas de la primera matriz: ";
    cin >> filasA >> columnasA;

    // Pedir al usuario que ingrese los elementos de la primera matriz
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Pedir al usuario que ingrese las dimensiones de la segunda matriz
    cout << "Ingrese las filas y columnas de la segunda matriz: ";
    cin >> filasB >> columnasB;

    // Verificar que las dimensiones de las matrices sean compatibles para la multiplicación
    if (columnasA!= filasB) {
        cout << "Las matrices no son compatibles para la multiplicación." << endl;
        return 0;
    }

    // Pedir al usuario que ingrese los elementos de la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filasB; i++) {
        for (int j = 0; j < columnasB; j++) {
            cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> B[i][j];
        }
    }

    // Realizar la multiplicación de matrices
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < columnasA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mostrar la matriz resultante
    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}