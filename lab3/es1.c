#include <stdio.h>

int main()
{
    int int_1, int_2;
    float float_1, float_2;

    printf("Inserisci i 2 int: ");
    scanf("%d %d", &int_1, &int_2);

    printf("Inserisci i 2 float: ");
    scanf("%f %f", &float_1, &float_2);

    printf("Variabile\tValue\n");
    printf("int_1 int_2\t%5d %5d\n", int_1, int_2);
    printf("float_1 \t%f\n", float_1);
    printf("float_2 \t%f\n", float_2);

    return 0;
}