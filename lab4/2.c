#include <stdio.h>
#define CURRENCIES_LEN 9

int main()
{
    float price_to_pay, price_payed;
    printf("Inserire prezzo da pagare: ");
    scanf("%f", &price_to_pay);

    printf("Inserire totale pagato: ");
    scanf("%f", &price_payed);

    if (price_to_pay > price_payed)
    {
        printf("Importo non sufficiente\n");
        return 1;
    }

    float currencies[CURRENCIES_LEN] = {50, 20, 10, 5, 2, 1, .5, .2, .1};
    int currency_quantity[CURRENCIES_LEN] = {0};

    float change = price_payed - price_to_pay;
    for (int i = 0; i < CURRENCIES_LEN; i++)
    {
        while (change >= currencies[i])
        {
            change -= currencies[i];
            currency_quantity[i]++;
        }
    }

    for (int i = 0; i < CURRENCIES_LEN; i++)
    {
        printf("%d da %.2f €\n", currency_quantity[i], currencies[i]);
    }

    return 0;
}