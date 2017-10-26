#include <stdio.h>
#define BASE_PRICE 100
#define FEATURE_BONUS 40
#define MONTHS_PENALTY 20

int main()
{
    int price, features, months, years;

    printf("Inserisci le features, e gli anni: ");
    scanf("%d %d", &features, &years);
    months = years * 12;
    price = BASE_PRICE + features * FEATURE_BONUS - months * MONTHS_PENALTY;
    printf("Il prezzo sara': %d euro\n", price);
    return 0;
}