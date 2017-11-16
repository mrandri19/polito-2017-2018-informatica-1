#include <stdio.h>

#define N 10

#define true 1
#define false 0
#define unset -1

int main()
{
    int v[10];
    int crescente = unset;
    int i = 0;

    while (i < N)
    {
        int tmp;
        scanf("%d", &tmp);

        if (crescente == unset)
        {
            // if we aren't at the start but is still unset eg. 1 1 1 1
            if (i != 0)
            {
                if (v[i - 1] < tmp)
                {
                    crescente = true;
                }
                else if (v[i - 1] > tmp)
                {
                    crescente = false;
                }
                else
                {
                    // if they are equal we leave crescente unchanged
                    v[i] = tmp;
                    i++;
                }
            }
            else
            {
                // we are at the start, just assign it
                v[i] = tmp;
                i++;
            }
        }
        if (crescente == true)
        {
            // we can use i-1 beacuse since crescente is set we cant be at i=0
            if (tmp >= v[i - 1])
            {
                v[i] = tmp;
                i++;
            }
            else
            {
                printf("Exiting, i=%d, you inserted %d\n", i, tmp);
                return -1;
            }
        }
        if (crescente == false)
        {
            if (tmp <= v[i - 1])
            {
                v[i] = tmp;
                i++;
            }
            else
            {
                printf("Exiting, i=%d, you inserted %d\n", i, tmp);
                return -1;
            }
        }
    }
    return 0;
}