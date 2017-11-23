#include <stdio.h>
#include <math.h>

#define LEN 5

int main()
{
    int vbase[LEN], vexp[LEN];
    double vres[LEN] = {0};

    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", &vbase[i]);
    }

    for (int i = 0; i < LEN; i++)
    {
        scanf("%d", &vexp[i]);
    }

    for (int i = 0; i < LEN; i++)
    {
        vres[i] = pow(vbase[i], vexp[i]);
        printf("%d ", (int)vres[i]);
    }
    puts("");

    return 0;
}