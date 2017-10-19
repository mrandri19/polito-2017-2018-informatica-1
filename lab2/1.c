#include <stdio.h>
int main()
{
    float N1, N2;
    float ris;
    char op;
    printf("Inserisci calcolo nella forma <n1> <op> <n2>\n");
    scanf("%f %c %f", &N1, &op, &N2);
    if (op == '+')
    {
        //somma
        ris = N1 + N2;
        printf("Risultato: %f\n", ris);
    }
    else if (op == '-')
    {
        //differenza
        ris = N1 - N2;
        printf("Risultato: %f\n", ris);
    }
    else if (op == '*')
    {
        //molt
        ris = N1 * N2;
        printf("Risultato: %f\n", ris);
    }
    else if (op == '/')
    {
        //divisione
        if (N2 == 0)
        {
            printf("Cannot divide by 0\n");
            return 1;
        }
        ris = (float)N1 / N2;
        printf("Risultato: %f\n", ris);
    }
    else
    {
        printf("Operatore sconosciuto\n");
    }
    return 0;
}