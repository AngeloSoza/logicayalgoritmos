/*: El director de una escuela, está organizando un viaje de estudios, y requiere
determinar, cuánto debe cobrar a cada alumno, y cuánto debe pagar a la compañía de
viajes por el servicio. La forma de cobrar es la siguiente: si son 100 alumnos o más, el
costo por cada alumno es de $60.00; de 50 a 99 alumnos, el costo es de $70.00; de
30 a 49, de $100.00; y si son menos de 30, el costo de la renta del autobús es de
$4,500.00, sin importar el número de alumnos. Escriba un programa que permita
determinar el pago a la compañía de autobuses y lo que debe pagar cada alumno por el
viaje. Dar énfasis al uso de la estructura de decisión múltiple (switch-case). Además, utilice
un menú de opciones por consola con sus respectivas funciones (módulos).*/

#include <iostream>

using namespace std;

void calcularPago(int numAlumnos, double &pagoCompania, double &pagoAlumno) {
    switch (numAlumnos) {
        case 100:
            pagoCompania = numAlumnos * 60.0;
            pagoAlumno = 60.0;
            break;
        case 50 ... 99:
            pagoCompania = numAlumnos * 70.0;
            pagoAlumno = 70.0;
            break;
        case 30 ... 49:
            pagoCompania = numAlumnos * 100.0;
            pagoAlumno = 100.0;
            break;
        default:
            pagoCompania = 4500.0;
            pagoAlumno = pagoCompania / numAlumnos;
            break;
    }
}

void mostrarResultados(double pagoCompania, double pagoAlumno) {
    cout << "Pago a la compañía de autobuses: $" << pagoCompania << endl;
    cout << "Pago por cada alumno: $" << pagoAlumno << endl;
}

int main() {
    int numAlumnos;
    double pagoCompania = 0.0;
    double pagoAlumno = 0.0;

    cout << "Bienvenido al programa de viaje de estudios" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "1. Calcular pago" << endl;
    cout << "2. Salir" << endl;
    cout << "Ingrese una opción: ";
    int opcion;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el número de alumnos: ";
            cin >> numAlumnos;
            calcularPago(numAlumnos, pagoCompania, pagoAlumno);
            mostrarResultados(pagoCompania, pagoAlumno);
            break;
        case 2:
            cout << "Adiós!" << endl;
            return 0;
        default:
            cout << "Opción inválida" << endl;
            return 1;
    }

    return 0;
}
