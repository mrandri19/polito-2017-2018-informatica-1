#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char dna[100 + 1];
    char subs[4 + 1];

    if(gets(dna)==0) return 1;
    if(gets(subs)==0) return 1;

    puts(dna);

    int occurrences = 0;
    int occurrences_pos[25];
    int len = strlen(dna);

    for(int i = 0; i<len; i++) {
        for(int j = 0; j<4; j++) {
            if(dna[i+j] != subs[j]) {
                break;
            }
            if(j==3) {
                occurrences_pos[occurrences] = i;
                occurrences++;
            };
        }
    }

    printf("Occurrences: %d\n", occurrences);

    for(int i=0; i<occurrences; i++) {
        printf("occurrence %d at pos %d\n", i+1, occurrences_pos[i]+1);
    }

    for(int i=0; i<len; i++) {
        dna[i] = tolower(dna[i]);
    }

    // Per ogni carattere in dna
    for(int i = 0; i<len; i++) {
        // per ogni occorrenza
        for(int j = 0; j<occurrences; j++) {
            // se siamo alla posizione dell' occorrenza
            if(i == occurrences_pos[j]) {
                // fa diventare maiuscole le prossime 4;
                for(int k = occurrences_pos[j]; k<(occurrences_pos[j]+4); k++) {
                    dna[k] = toupper(dna[k]);
                }
            }
        }
    }

    puts(dna);

    return 0;
}