#include <stdio.h>

/*Funcion*/
int suma(int num1, int num2){
    return num1 + num2;
}
int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2;
    printf("Dime el primer valor: ");
    scanf("%d", &num1); 
    printf("Dime el segundo valor: ");
    scanf("%d", &num2); 
    printf("La suma de %d + %d es\n", num1, num2);
    printf("%d", suma(num1, num2));


    return 0;
}