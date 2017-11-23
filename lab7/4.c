#include <stdio.h>

#define N 5

void mult(int v[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        v[i] *= x;
    }
}

int main()
{
    int v[N], x;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);

    mult(v, N, x);

    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    puts("");

    return 0;
}