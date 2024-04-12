// 7:43

//Arreglos de las vocales
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char vocals[5];
    vocals[0] = 'a';
    vocals[1] = 'e';
    vocals[2] = 'i';
    vocals[3] = 'o';
    vocals[4] = 'u';
//%c sirve para imprimir una letra por cada posicion
//%s sirve para imprimir las letras en cadena
    printf("Vocal #1 %s\n", vocals[0]);
    printf("Vocal #2 %s\n", vocals[1]);
    printf("Vocal #3 %s\n", vocals[2]);
    printf("Vocal #4 %s\n", vocals[3]);
    printf("Vocal #5 %s\n", vocals[4]);



    return 0;
}
