/*Una compañía dedicada al alquiler de automóviles, cobra $30
hasta un máximo de 500 KM de distancia recorrida. Para más de 500
KM y hasta 1,000 KM, cobra $30 más un monto adicional del 5% por cada
kilómetro en exceso sobre 500. Para más de 1,000 KM, cobra $30 más un
monto adicional del 8% por cada kilómetro en exceso sobre 1,000. Los precios ya incluyen el 15% del impuesto (IVA).
Escriba un programa, que determine el monto a pagar por el alquiler de un vehículo sin
impuesto, y el monto a pagar con el impuesto incluido. Dar énfasis al uso de la estructura
de decisión anidada.*/

#include <iostream>

using namespace std;

int main() {
    int distanciaRecorrida;
    double montoBase = 30.0;
    double montoAdicional = 0.0;
    double montoTotalSinImpuesto = 0.0;
    double montoTotalConImpuesto = 0.0;
    const double IVA = 0.15;

    cout << "Ingrese la distancia recorrida en kilómetros: ";
    cin >> distanciaRecorrida;

    if (distanciaRecorrida <= 500) {
        montoTotalSinImpuesto = montoBase;
    } else if (distanciaRecorrida <= 1000) {
        montoAdicional = (distanciaRecorrida - 500) * 0.05;
        montoTotalSinImpuesto = montoBase + montoAdicional;
    } else {
        montoAdicional = (distanciaRecorrida - 1000) * 0.08 + (500 * 0.05);
        montoTotalSinImpuesto = montoBase + montoAdicional;
    }

    montoTotalConImpuesto = montoTotalSinImpuesto * (1 + IVA);

    cout << "Monto a pagar sin impuesto: $" << montoTotalSinImpuesto << endl;
    cout << "Monto a pagar con impuesto: $" << montoTotalConImpuesto << endl;

    return 0;
}
