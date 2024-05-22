#include <iostream>
#include "variables.h"
using namespace std;

/*Prototipos de funciones*/
void menu();
void addAges();
void Start();
void showAges();
void EdadMayor();
void EdadMenor();
void PromedioEdades();

/*Funciones*/
void menu(){
    system("cls || clear");
    cout << "1. Ingresar edades" << endl;
    cout << "2. Mostrar edades" << endl;
    cout << "3. Edad mayor" << endl; 
    cout << "4. Edad menor" << endl;
    cout << "5. Promedio de edades" << endl;
    cout << "6. Salir" << endl;
}
/*Agregar edades*/
void addAges()
{
    system("cls || clear");
    cout << "Dime una edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}
void Start(){
     int option;
    while (option != 6){
        menu ();
        cout << "Dime una opcion: ";
        cin >> option;
        switch (option)
        {
        case 1:
            addAges();
            break;
        case 2:
            showAges();
            break;
        case 3:
            EdadMayor();
            break;
        case 4:
            EdadMenor();
            break;
        case 5:
            PromedioEdades();
            break;

        case 6:
            cout << "Adios" << endl;

        default:
            break;
    }
    }
}
void showAges(){
    system("cls || clear");
    cout << "Edades" << endl;
    for (int i = 0; i < pos; i++)
    {
        cout << ages[i] << endl;
    }
    system("pause");
}
void EdadMayor()
{
    system("cls || clear");
    int mayor = ages[0];
    for (int i = 0; i < pos; i++)
    {
        if (ages[i] > mayor)
        {
            mayor = ages[i];
        }
    }
    cout << "La edad mayor es: " << mayor << endl;
    system("pause");
}
void EdadMenor(){
    system("cls || clear");
    int menor = ages[0];
    for (int i = 0; i < pos; i++)
    {
        if (ages[i] < menor)
        {
            menor = ages[i];
        }
    }
    cout << "La edad menor es: " << menor << endl;
    system("pause");
}
void PromedioEdades()
{
    system("cls || clear");
    for (int i = 0; i < pos; i++)
    {
        promedio += ages[i];
    }
    promedio = promedio / pos;
    cout << "El promedio de edades es: " << promedio << endl;
    system("pause");
}
