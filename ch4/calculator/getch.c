#include <stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE]   /* buffer for ungetch */
int bufp = 0;       /* next free position in buf */

int getch(void)     /* get a possible pushed back character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many chararcters\n");
    else
        buf[bufp++] = c;
}