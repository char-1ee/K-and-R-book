#include <ctype.h>

/* atof: convert string s to double */
double atof(char s[])
{
    int i, sign;
    double val, power;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? '-' : '+';
    if (s[i] == '+' || s[i] == '-')
        i++;
    
    for (val = 0.0; isdigit(s[i]); i++)
        val = val * 10.0 + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = val * 10.0 + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}