#include <iostream>
#include "funciones.cpp"
#include <locale.h> //sirve para que se pueda usar la ñ y las tildes
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Spanish");
    principal();
    return 0;
}


