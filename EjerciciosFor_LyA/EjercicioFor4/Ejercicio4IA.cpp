/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include<iostream>
using namespace std;

int main(){

	int notas[10];
        int suma = 0;
        float promedio;
    
        // Pedir al usuario que ingrese las notas de los 10 estudiantes
        for (int i = 0; i < 10; i++) {
            cout << "Ingrese la nota del estudiante " << i+1 << ": ";
            cin >> notas[i];
            suma += notas[i];
        }
    
        // Calcular el promedio general
        promedio = suma / 10.0;
    
        // Mostrar el promedio general
        cout << "El promedio general es: " << promedio << endl;

	return 0;
}