/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>
using namespace std;

int main() {
    int notas[8];
    int aprobados = 0;
    int reprobados = 0;
    int suma = 0;
    float promedio;

    // Pedir al usuario que ingrese las notas de los 8 estudiantes
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la nota del estudiante " << i+1 << ": ";
        cin >> notas[i];
        suma += notas[i];

        // Contar la cantidad de aprobados y reprobados
        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    // Calcular el promedio general
    promedio = (float)suma / 8;

    // Imprimir la cantidad de aprobados, reprobados y el promedio general
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}