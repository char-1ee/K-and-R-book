
/* itoa: convert n to characters in s */
void itoa(int n, char[] s) {
    int i = 0, sign;

    if ((sign = n) < 0)
        n = -n;
    do {
        s[i++] = n % 10 + '0';  /* type conversion */
    } while (n /= 10 > 0)
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';                /* remeber '\0' */
    reverse(s);
}