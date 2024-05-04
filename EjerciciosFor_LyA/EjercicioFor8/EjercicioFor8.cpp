/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int longitud, productoPunto = 0;

    cout<<"Ingrese la longitud de los vectores: ";
    cin>>longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);

    cout <<"Ingrese los componentes del primer vector: ";
    for (int i = 0; i < longitud; i++)
    {
        cout << "Elemento" << i+1 << ": ";
        cin >> vector1[i];
    }
    cout <<"Ingrese los componentes del segundo vector: ";
    for (int i = 0; i < longitud; i++)
    {
        cout << "Elemento" << i+1 << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; i++)
    {
productoPunto += vector1[i] * vector2[i];
    }

    cout << "El producto Punto de los dos vectores es igual a: " << productoPunto << endl;

return 0;
}