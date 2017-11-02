#include <stdio.h>

int main()
{
    int number;

    printf("Inserisci un numero tra 0 e 100: ");
    scanf("%d", &number);

    printf("Hai inserito %d\n", number);
    while (number > 100 || number < 0)
    {
        printf("Inserisci un numero tra 0 e 100: ");
        scanf("%d", &number);
    }

    int upper_bound = 100;
    int lower_bound = 0;

    int guess = (upper_bound - lower_bound) / 2;
    while (guess != number)
    {
        guess = lower_bound + (float)((upper_bound - lower_bound) / 2);

        char res;
        printf("e' maggiore o uguale a %d? (y/n) ", guess);
        scanf(" %c", &res);
        printf("Hai detto %c\n", res);

        while (res != 'y' && res != 'n')
        {
            printf("Inserisci 'y' oppure 'n': ");
            scanf(" %c", &res);
            printf("Hai detto: %c\n", res);
        }

        if (res == 'y')
        {
            lower_bound = guess;
        }
        if (res == 'n')
        {
            upper_bound = guess;
        }

        printf("guess = %d\n", guess);
    }

    return 0;
}