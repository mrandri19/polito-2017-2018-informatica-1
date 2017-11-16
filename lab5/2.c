#include <stdio.h>
#define N 5

int main()
{
    int v1[N], v2[N];
    int i = 0, j = 0;

    while (i < N && j < N)
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp >= 0 || (tmp < 0 && tmp % 3 == 0))
        {
            v1[i] = tmp;
            i++;
        }

        if ((tmp < 0) && (tmp % 3 != 0) && (tmp % 2 == -1))
        {
            v2[j] = tmp;
            j++;
        }
    }

    printf("now printing vectors\n");
    printf("v1\n");
    for (int k = 0; k < i; k++)
    {
        printf("%d\n", v1[k]);
    }

    printf("v2\n");
    for (int k = 0; k < j; k++)
    {
        printf("%d\n", v2[k]);
    }
    return 0;
}