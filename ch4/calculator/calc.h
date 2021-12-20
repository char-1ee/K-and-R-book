#define NUMBER '0'  /* signal that a number was found */

/* push: push f onto value stack */
void push(double);

/* pop: pop and return the top value form the stack */
double pop(void);

/* getop: get next operator or numberic operand */
int getop(char []);

/* getch: get a possible pushed back character */
int getch(void);

/* ungetch: push character back on input */
void ungetch(int);