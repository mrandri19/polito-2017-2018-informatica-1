#include <stdio.h>

#define N 5

void print_matrix(int m[5][5])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    print_matrix(m);

    for (int i = 0; i < N; i++)
    {
        // int needle = m[i][0];
        int needle = 0;
        int finds_in_a_row = 0;

        // Iterate on row
        for (int j = 0; j < N; j++)
        {
            if (m[i][j] == needle)
            {
                finds_in_a_row++;
            }
            else
            {
                // needle = m[i][j];
                needle = 0;
                finds_in_a_row = 0;
            }
            if (finds_in_a_row == 3)
            {
                printf("found 3 in a row at row %d, col %d\n", i + 1, j + 1);
                break;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        // int needle = m[0][i];
        int needle = 0;
        int finds_in_a_row = 0;

        // Iterate on row
        for (int j = 0; j < N; j++)
        {
            if (m[j][i] == needle)
            {
                finds_in_a_row++;
            }
            else
            {
                // needle = m[j][i];
                needle = 0;
                finds_in_a_row = 0;
            }
            if (finds_in_a_row == 3)
            {
                printf("found 3 in a col at row %d, col %d\n", i + 1, j + 1);
                break;
            }
        }
    }
}
