#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 5000;       /* max #lines to be sorted */
char* lineptr[MAXLINE];     /* pointers to text lines */

int readlines(char* lineptr[], int nlines);
int writelines(char* lineptr[], int nlines);

void qsort(void* lineptr[], int left, int right, int (*comp)(void *, void *));  /* pointer to function */
int numcmp(char *, char *);

/* sort input lines */
main(int argc, char *argv[])
{
    int nlines;         /* number of input lines read */
    int numberic = 0;   /* 1 if number is sorted */

    if (argc > 1 && strcmp(argv[1], "-n") == 0)
        numberic = 1;
    if ((nlines = readlines(lineptr, MAXLINE)) >= 0) {
        qsort(void *lineptr[], 0, nlines-1, (int (*) (void *, void *) (numberic ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("input too big to sort\n");
        return 1;
    }
}

/* numcmp: compare s1 and s2 numberically */
int numcmp(char *s1, char *s2) {
    double v1, v2;
    v1 = atof(s1);
    v2 = atof(s2);
    if (v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else 
        return 0;
}

