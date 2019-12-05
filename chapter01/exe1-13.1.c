#include <stdio.h>

int main()
{
    int c, nWhite, nOther;
    nWhite = nOther = 0;
    int nDigits[10];

    for (int i = 0; i < 10; ++i)
        nDigits[i] = 0;
    
    while ((c = getchar()) != '!') {
        if (c >= '0' && c <= '9')
            ++nDigits[c-'0'];
        else if (c == ' ' || c == '\n' ||c == '\t')
            ++nWhite;
        else
            ++nOther;
    }

    printf("Digits = ");
    for (int i = 0; i < 10; ++i)
        printf(" %d", nDigits[i]);
    
    printf(", white space = %d, other = %d\n", nWhite, nOther);

    return 0;
}