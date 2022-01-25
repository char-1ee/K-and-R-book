/* strcpy: copt t to s; pointer version 1*/
void strcpy1(char* s, char* t) 
{
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

/* pointer version 2 */
void strcpy2(char* s, char* t) 
{
    while ((*s++ = *t++) != '\0')
        ;
}

/* pointer version 3 */
void strcpy3(char* s, char* t) 
{
    while (*s++ = *t++)
        ;
}

/* array version */
void strcpy(char* s, char* t)
{
    int i; i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}