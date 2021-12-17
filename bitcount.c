/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
    {
        if (x & 01 == 1)
            b++;
    }
    return b;
}

/* bitcount2: a faster version of above */
int bitcount2(unsigned x)
{
    int b;
    
    /* what x &= (x-1) does is, continuous remove rightmost 1s */
    for (b = 0; x != 0; x &= (x-1))
        b++;
    return b;
}