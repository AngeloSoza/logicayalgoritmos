/*Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number, fact=1;

    cout << "Dime un numero: ";
    cin >> number;

    if (number > 0)
    {
        while (number != 1)
        {
            fact *= number;
            number--;
        }
        cout << fact << endl;
    }else{
        cout << "El numero debe ser positivo" << endl;
    }

return 0;
}