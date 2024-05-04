/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
        int filas1;
        int filas2;
        int columnas1;
        int columnas2;

    cout << "Ingrese el número de filas y columnas de la primera matriz: ";
    cin >> filas1 >> columnas1;
    cout << "Ingrese el número de filas y columnas de la segunda matriz: ";
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no permiten su multiplicacion" << endl;
        return 1; 
    }

    vector<vector<int>> matriz1(filas1, vector<int>(columnas1, 0));
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2, 0));

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; ++i)
        for (int j = 0; j < columnas1; ++j)
            cin >> matriz1[i][j];

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; ++i)
        for (int j = 0; j < columnas2; ++j)
            cin >> matriz2[i][j];

    // Calcular la matriz resultante
    vector<vector<int>> matrizResultado(filas1, vector<int>(columnas2, 0));
    for (int i = 0; i < filas1; ++i)
        for (int j = 0; j < columnas2; ++j)
            for (int k = 0; k < columnas1; ++k)
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];

    // Mostrar la matriz resultante
    cout << "La matriz resultante de la multiplicación es:" << endl;
    for (const auto& fila : matrizResultado) {
        for (int elemento : fila)
            cout << elemento << " ";
        cout << endl;
    }

    return 0;
    return 0;
}

