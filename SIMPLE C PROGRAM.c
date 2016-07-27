#include <stdio.h> /* printf function */
int main (int argc, char* argv[])
{
double r, s; /* declare variables in the beginning */
r = atof(argv[1]); /* convert the text argv[1] to double */
s = sin(r);
printf("Hello, World! sin(%g)=%g\n", r, s);
return 0; /* success execution of the program */
}
