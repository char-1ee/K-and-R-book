/* strcat: concatenate t to end of s; s must be big enough */
void strcat(char s[], char t[])
{
    int i = 0, j = 0;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
}