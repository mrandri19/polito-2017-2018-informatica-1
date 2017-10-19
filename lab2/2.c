#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Inserisci i 3 lati\n");

    printf("Il primo lato: ");
    scanf("%d", &a);

    printf("Il secondo lato: ");
    scanf("%d", &b);

    printf("Il terzo lato: ");
    scanf("%d", &c);

    printf("Ecco i 3 lati: %d, %d, %d\n", a, b, c);

    // Check variables > 0
    if (a < 0 && b < 0 && c < 0)
    {
        printf("All inputs must be > 0");
        return 1;
    }

    // Check if triangle
    if ((a > b + c) || (b > a + c) || (c > a + b))
    {
        printf("Non e' un triangolo\n");
        return 1;
    }

    // Check type of triangle
    if ((a == b) && (b == c) && (c == a))
    {
        printf("E' equilatero\n");
        return 0;
    }

    if ((a == b) || (a == c) || (b == c))
    {
        printf("E' isoscele\n");
    }

    if ((a != b) && (b != c) && (c != a))
    {
        printf("E' scaleno\n");
    }

    // Check if square triangle
    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
    {
        printf("E' rettangolo\n");
        return 0;
    }

    return 0;
}