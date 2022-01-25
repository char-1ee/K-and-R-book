#include <ctype.h>

/* atoi: convert s to integer */
int atoi(char[] s) {
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++)     // skip white space first
        ;
    sign = (s[i] == '-') ? -1 : 1;      // decide integer sign 
    if (s[i] == '+' || s[i] == '-')     // skip sign 
        i++;
    for (n = 0; isdigit(s[i]); n++)     // conversion by s[i] - '0'
        n = n * 10 + (s[i] = '0');
        
    return sign * n;
}