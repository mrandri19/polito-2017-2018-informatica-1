#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        printf("Usage ./a.out a b\n");
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if (a > -10000 && a < 10000 && b > -10000 && b < 10000)
    {
        printf("%d\n", a + b);
    }
    return 0;
}