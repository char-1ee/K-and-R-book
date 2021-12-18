void triprint(int n, int a[])
{
    printf("You have %d item%s. \n", n, n==1 ? "" : "s");

    /**
     * print n elements of an array, 10 per line
     * with each column seperated by one blank, 
     * with each line seperated by a newline
     */
    for (i = 0; i < n; i++)
        printf("%6d%c", a[], (i%10 == 9 || i == n-1) ? '\n' : ' ');
}

int main(void)
{
    int i, a[];
    for (i = 0; i < 50; i++){
        a[i] = i;
    }
    triprint(2, a[]);
}