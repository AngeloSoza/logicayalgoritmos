/**/

#include <iostream>
#include "variables.h"
using namespace std;

int main(int argc, char const *argv[])
{
    PERSON teacher;
    cout << "CIF: ";
    cin >> teacher.cif;
    cout << "Nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout << "Apellido: ";
    scanf(" %[^\n]", teacher.lastname);

    PERSON student[MAXREGISTER];  
    int op, i = 0;  
    do {
        system ("cls || clear");
        cout << "CIF: ";
        scanf(" %[^\n]", student[i].cif);
        cout << "Nombre: ";
        scanf(" %[^\n]", student[i].name);
         cout << "Apellido:";
        scanf(" %[^\n]", student[i].lastname);
        printf("Nota:");
        scanf("%d", &student[i].grade);

    printf("Desea ingresar otro registro \n 1. Si \n 0. No\n");
    cin >> op;
    i++; 
    } while (op!=0);

    printf("Datos del profesor\n CIF: %s\n", teacher.cif);
    printf("Nombre completo: %s %s\n", teacher.name, teacher.lastname);
    cout << "Listado de estudiante\n";
    for (int j = 0; j < i; j++){
        printf("Nombre: %s \nApellidos: %s \nNota: %d\n", student[j].name, student[j].lastname, student[j].grade);
    }
    return 0;
}
