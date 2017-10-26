#include <stdio.h>
#define LEN 4

int main()
{
    int numbers[LEN];

    printf("Inserire 4 numeri:");
    scanf("%d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);

    for (int i = 0; i < LEN; i++)
    {
        if (numbers[i] < 0 || numbers[i] >= 1000)
        {
            numbers[i] = 0;
            printf("Il numero alla posizione: %d ha valore %d, non compreso nell'intervallo [0, 1000)\n", i + 1, numbers[i]);
        }
    }

    int max, res;
    // Initialize the max
    max = numbers[0] - numbers[0];

    // Calc all the pairs and get the max
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            res = numbers[i] - numbers[j];
            if (res > max)
            {
                max = res;
            }
        }
    }
    printf("La differenza massima e': %d\n", max);

    return 0;
}