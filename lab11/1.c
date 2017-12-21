#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

int main(int argc, char *argv[])
{
    typedef struct
    {
        char nome[31];
        char cognome[31];
        char data[11];
        int visita_effettuata;
        int cancellato;
    } paziente;

    paziente pazienti[N];

    int pazienti_len = 0;

    char nome[31], cognome[31], data[11];

    FILE *fp;

    if (argc != 3)
    {
        printf("Usage ./a.out filename date(GG-MM-HHHH)\n");
        return 1;
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open file %s\n", argv[2]);
        return 1;
    }

    while (fscanf(fp, "%s %s %s", nome, cognome, data) != EOF)
    {
        if (strcmp(data, argv[2]) == 0)
        {
            strcpy(pazienti[pazienti_len].nome, nome);
            strcpy(pazienti[pazienti_len].cognome, cognome);
            strcpy(pazienti[pazienti_len].data, data);
            pazienti[pazienti_len].cancellato = 0;
            pazienti[pazienti_len].visita_effettuata = 0;
            pazienti_len++;
        }
    }

    int risposta;
    while (1)
    {
        puts("Inserire comando (1/2/3/4)");

        scanf("%d", &risposta);

        if (risposta == 4)
            return 1;

        switch (risposta)
        {
        case 1:
        {
            int i = 0;
            while (i < pazienti_len)
            {
                if (!pazienti[i].cancellato && !pazienti[i].visita_effettuata)
                {
                    printf("%s %s\n", pazienti[i].nome, pazienti[i].cognome);
                    pazienti[i].visita_effettuata = 1;
                    break;
                }
                else
                {
                    i++;
                }
            }
            break;
        }
        case 2:
        {
            int i = 0;
            scanf("%s %s", nome, cognome);
            while (i < pazienti_len)
            {
                if (strcmp(nome, pazienti[i].nome) == 0 && strcmp(cognome, pazienti[i].cognome) == 0)
                {
                    pazienti[i].cancellato = 1;
                    break;
                }
                else
                {
                    i++;
                }
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < pazienti_len; i++)
            {
                if (!pazienti[i].cancellato)
                {
                    printf("%s %s %s\n", pazienti[i].nome, pazienti[i].cognome, (pazienti[i].visita_effettuata ? "Visita effettuata" : "Da effettuare"));
                }
            }
            break;
        }
        }
    }

    return 0;
}
