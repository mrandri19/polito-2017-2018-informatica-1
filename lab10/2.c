#include <stdio.h>
#include <string.h>

int find(char haystack[][3 + 1], int len, char *needle)
{
    for (int i = 0; i < len; i++)
    {
        if (strcmp(haystack[i], needle) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    FILE *fp;
    if ((fp = fopen("./nazioni.txt", "r")) == NULL)
    {
        return 1;
    }

    char gara[5 + 1];
    char atleta[10 + 1];
    char nazione[3 + 1];
    int posizione;

    char nazioni_partecipanti[207][3 + 1];
    int n_nazioni = 0;
    float nazioni_medaglie[207] = {0.0};

    while (fscanf(fp, "%s %s %s %d", gara, atleta, nazione, &posizione) != EOF)
    {
        int index;

        if ((index = find(nazioni_partecipanti, n_nazioni, nazione)) == -1)
        {
            strcpy(nazioni_partecipanti[n_nazioni], nazione);
            index = n_nazioni;
            n_nazioni++;
        }
        switch (posizione)
        {
        case 1:
            nazioni_medaglie[index] += 1;
            break;
        case 2:
            nazioni_medaglie[index] += .1;
            break;
        case 3:
            nazioni_medaglie[index] += .05;
            break;
        }
    }

    puts("Medaglie d'oro equivalenti:");
    for (int i = 0; i < n_nazioni; i++)
    {
        if (nazioni_medaglie[i] == 0)
            continue;
        printf("nazione: %s, medaglie: %.2f\n", nazioni_partecipanti[i], nazioni_medaglie[i]);
    }

    puts("Le prime tre nazioni del medagliere sono:");
    for (int j = 0; j < 3; j++)
    {
        int i_max = 0;
        for (int i = 0; i < n_nazioni; i++)
        {
            if (nazioni_medaglie[i] > nazioni_medaglie[i_max])
            {
                i_max = i;
            }
        }
        nazioni_medaglie[i_max] = -1000;
        printf("%d.\t%s\n", j + 1, nazioni_partecipanti[i_max]);
    }
}