unsigned long next = 1;

/* rand: return pseudo-random integer on 0..32767 */
int rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32767;
}

/* srand: set seed or salt for rand() */
void srand(unsigned int seed)
{
    next = seed;
}