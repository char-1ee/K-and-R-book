#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline(char* line, int max);

/* find: print lines that match pattern from 1st arg */
main(int argc, char* argv[])
{
    char line[MAXLINE];
    int found;

    if (argc != 2)
        printf("Usage: find pattern");
    else
        while (getline(line, MAXLINE) > 0)
            if (strstr(line, argv[1]) != NULL) {
                printf("%s", line);
                found++;
            }
    return found;
}

/* find -x -n pattern: refer to chapter 5 117 */