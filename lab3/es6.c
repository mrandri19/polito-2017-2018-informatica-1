#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Syntax: ./a.out a b\n");
        return 1;
    }
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d, %d\n", a, b);
    printf("%f\n", (float)(a + b) / 2);
    return 0;
}