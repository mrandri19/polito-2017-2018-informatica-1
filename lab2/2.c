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
    if (a < 0 || b < 0 || c < 0)
    {
        printf("this is not a triangle\n");
        return 1;
    }

    // Check if triangle
    if ((a > b + c) || (b > a + c) || (c > a + b))
    {
        printf("this is not a triangle");
        return 1;
    }

    // Check type of triangle
    if ((a == b) && (b == c) && (c == a))
    {
        printf("the triangle is equilateral\n");
        return 0;
    }

    if ((a == b) || (a == c) || (b == c))
    {
        printf("the triangle is isosceles\n");
    }

    if ((a != b) && (b != c) && (c != a))
    {
        printf("the triangle is scalene\n");
    }

    // Check if square triangle
    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
    {
        printf("the triangle is rectangled\n");
        return 0;
    }

    return 0;
}