#include <stdio.h>

/* echo command line arguments: array version */
main(int argc, char* argv[]) // argc: #arguments, argv: pointer to an array of pointers
{
    int i;
    for (i = 1; i < argc; i++)
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
    printf("\n");
    return 0;
}

/* pointer version */
ehco(int argc, char* argv[])
{
    while (--argc > 0) 
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    printf("\n");
    return 0;
}