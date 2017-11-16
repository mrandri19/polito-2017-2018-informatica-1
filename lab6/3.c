#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100+1];
    if(gets(s)==0) return 1;

    int len = strlen(s);
    printf("n. di caratteri: %d\n", len);

    int alphas = 0;
    for(int i = 0; i< len; i++) {
        if(isalpha(s[i])) alphas++;
    }
    printf("n. di caratteri alfabetici: %d\n", alphas);

    int uppers = 0;
    for(int i = 0; i< len; i++) {
        if(isupper(s[i])) uppers++;
    }
    printf("n. di caratteri maiuscoli: %d\n", uppers);
    
    int decimals = 0;
    for(int i = 0; i< len; i++) {
        if(isdigit(s[i])) decimals++;
    }
    (decimals>0) ?printf("n. di cifre decimali: %d\n", decimals) : 0;

    int spaces = 0;
    for(int i = 0; i< len; i++) {
        if(isspace(s[i])) spaces++;
    }
    printf("n. di spazi: %d\n", spaces);

    // sscanf
}