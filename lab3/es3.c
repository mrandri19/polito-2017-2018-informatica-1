#include <stdio.h>
#define K 10

int main(int argc, char *argv[])
{
    int a, b, c, d;
    printf("Inserire a,b,c,d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    double result = (double)(-d * K) / (a + b * c);
    printf("%lf\n", result);
    return 0;
}