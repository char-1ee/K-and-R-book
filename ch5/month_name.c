/* month_name: return the name of n-th month */
char* month_name(int n)
{
    /* name: pointers array (not 2D array) */
    static char* name[] = { 
        "Illegal month",
        "January", "Februrary", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };
    return (n < 1 || n > 12) ? name[0] : name[n];
}