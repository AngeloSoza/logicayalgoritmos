#include <stdio.h>
//Almacenar 6 numeros flotantes

int main(int argc, char const *argv[])
{
    float numbers[6]; 

    numbers[0] = 12;
    numbers[1] = 1.68;
    numbers[2] = 2.680;
    numbers[3] = 3.5;
    numbers[4] = 1512.99545455;
    numbers[5] = 3.14165252;

    printf("Elemento #1 %.2f\n", numbers[0]);
    printf("Elemento #1 %.2f\n", numbers[1]);
    printf("Elemento #1 %.2f\n", numbers[2]);
    printf("Elemento #1 %.2f\n", numbers[3]);
    printf("Elemento #1 %.2f\n", numbers[4]);
    printf("Elemento #1 %.2f\n", numbers[5]);
    return 0;
}
