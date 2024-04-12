//Suma de diez nunmeros flotantes

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[10];

    num[0] = 20;
    num[1] = 30;
    num[2] = 60;
    num[3] = 40;
    num[4] = 1000;
    num[5] = 2024;
    num[6] = 2007;
    num[7] = 56;
    num[8] = 8664;
    num[9] = 5552;
    

    printf("El numero #1: %d\n", num[0]);
    printf("El numero #2: %d\n", num[1]);
    printf("El numero #3: %d\n", num[2]);
    printf("El numero #4: %d\n", num[3]);
    printf("El numero #5: %d\n", num[4]);
    printf("El numero #6: %d\n", num[5]);
    printf("El numero #7: %d\n", num[6]);
    printf("El numero #8: %d\n", num[7]);
    printf("El numero #9: %d\n", num[8]);
    printf("El numero #10: %d\n", num[9]);

    int sum = num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9] + num[10]; 
    printf("La suma es %d\n", sum);
    return 0;
}
