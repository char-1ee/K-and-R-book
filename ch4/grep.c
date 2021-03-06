/**
 * @file grep.c
 * @brief A special case of UNIX function `grep` which
 *        prints each line of input that contains a particular pattern.
 */

#include <stdio.h>
#define MAXLINE 1000    /* maximum input line length */

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "gotcha";         /* external variable */

/* find all lines matching pattern */
main(void) 
{
    char line[MAXLINE];
    int cnt;
    while (getline(line, MAXLINE) > 0)
    {
        if (strindex(line, pattern) >= 0)
        {
            printf("%s", line);
            cnt++;
        }
    }
    return cnt;
}

/* getline: get line into s, return length */
int getline(char s[], int lim)
{
    int c, i = 0;

    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; ++i) {
        for (j = 1, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return i;
} /* However, better string matching algo can applied */
