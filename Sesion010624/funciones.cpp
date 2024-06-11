#include <iostream>

#include <string.h>
#include "variables.h"

using namespace std;

CIUDAD ciudades[MAX_RG];
int pos = 0;
//crud
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(int id);
int menu();
void principal();
void pedirDatos();
void mostrarDatos();
void buscarxID();
void editarDatos();

void agregar(CIUDAD *c){
    ciudades[pos]= *c;
    pos++;
}

CIUDAD buscar(int id){
    for (int i = 0; i < pos; i++)
    {
        if (id == ciudades[i].id == id)
        {
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;
}
int obtPos(int id){
    for (int i = 0; i < pos; i++)
    {
        if (id == ciudades[i].id == id)
        {
            return i;
        }
    }
    return -1;

}
void editar(CIUDAD *c, int id){
    int posi = obtPos(id);
    strcpy(ciudades[posi].nombre, c -> nombre);
    strcpy(ciudades[posi].descripcion, c -> descripcion);

}

void eliminar(int id){
    int posi = obtPos(id);
    for (int i = posi; i < pos; i++)
    {
        ciudades[i] = ciudades[i+1];
        }

        pos --;
    }

    int menu(){
        int op;
        cout << " Menu\n";
        cout << "1. Agregar\n";
        cout << "2. Editar\n";
        cout << "3. Eliminar\n";
        cout << "4. Buscar\n";
        cout << "5. Mostrar todo\n";
        cout << "6. Salir\n";
        cout << "Digite la opcion: ";
        cin >> op;
        return op;
    }

    void principal(){
        int op;
        do
        {
            op = menu();
        switch (op)
            {
        case 1:
            pedirDatos();
            break;
        case 4:
            buscarxID();
            break;
        case 5:
            mostrarDatos();
            break;
        case 6:
            cout << "Adios, mi rey\n";
            break;
        default:
            cout << "No seas neofito si solo hay 6\n";
            break;
        }
        } while (op != 6);

    } 

    void pedirDatos(){
        CIUDAD ciudad;
        cout << "Datos de la ciudad\n";
        cout << "ID: ";
        cin >> ciudad.id;
        cout << "Nombre: ";
        scanf(" %[^\n]", ciudad.nombre);
        cout << "Descripcion: ";
        scanf(" %[^\n]", ciudad.descripcion);
        agregar(&ciudad);
        cout << "Registro Agregado...\n";
    }
    
    void mostrarDatos(){
        for (int i = 0; i < pos; i++)
        {
            cout << "ID: " << ciudades[i].id << endl;
            cout << "Nombre: " << ciudades[i].nombre << endl;
            cout << "Descripcion: " << ciudades[i].descripcion << endl;
        }
    }
    void buscarxID(){
        int id;
        cout << "Dime el ID de la ciudad a buscar: ";
        cin >> id;
        CIUDAD c;
        c = buscar(id);
        cout << "=================================" << endl;
        cout << c.id << endl;
        cout << c.nombre << endl;
        cout << c.descripcion << endl;
        cout << "=================================" << endl;
    }
    void editarDatos(){
        int id;

    }

    
