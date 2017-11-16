#include <stdio.h>

#define LEN 10

int main()
{
    int v[LEN];
    int i;
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < LEN; i++)
    {
        printf("%d\n", v[i]);
    }
    int tot = 0;
    for (i = 0; i < LEN; i++)
    {
        tot += v[i];
    }
    printf("media: %f\n", ((float)tot / i));

    int max = v[0];
    int max_pos = 0;
    for (i = 1; i < LEN; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            max_pos = i;
        }
    }
    printf("v[%d]:%d\n", max_pos, max);

    return 0;
}