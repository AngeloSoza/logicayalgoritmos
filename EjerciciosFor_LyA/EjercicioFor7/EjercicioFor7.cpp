/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int longitud;
    cout <<"Ingresa la longitud de los vectores:";
    cin>>longitud;

    vector<int> vector1 (longitud);
    vector<int> vector2 (longitud);
    vector<int> vectorSuma (longitud);

    cout <<"Ingresa los elementos del primer vector:"<< endl;
    for (int i = 0; i < longitud; i++){
        cout << "Elemento"<< i+1 <<endl;
        cin >> vector1[i];
    }

    cout <<"Ingresa los elementos del primer vector:"<< endl;
    for (int i = 0; i < longitud; i++){
        cout << "Elemento"<< i+1 <<endl;
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; i++){
        vectorSuma[i] = vector1[i] + vector2[i]; 
    }
    cout <<"La suma de los vectores es igual:"<< endl;
    for(int i = 0; i < longitud; i++){
        cout << vectorSuma[i]<< " ";
    }
    return 0;
}
