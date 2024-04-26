/*Escribir un programa para deducir si una variable o
expresión numérica es par. Dar énfasis al uso de la estructura de
decisión simple (if-then).*/

#include<iostream>

using namespace std;

void esPar(int num){
    if(num%2 == 0)
    printf("Es par...\n");
}
int main(){
    int num;
    cout<< "Ingrese un numero: ";
    cin >> num;
    esPar(num);
    return 0;
}