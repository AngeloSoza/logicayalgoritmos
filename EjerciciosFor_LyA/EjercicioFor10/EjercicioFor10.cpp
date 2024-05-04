/*.Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }

    vector<vector<int>> transpuesta(columnas, vector<int>(filas));

//bucle para transponer la matriz 
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < columnas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

