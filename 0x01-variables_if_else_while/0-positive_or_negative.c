#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- Entry of program
 * This program checks if the value stored in the variable n is positive or negative
 * Return 0 (Success)
 */

int main(void)

{

int n;
srand(time(0));

n = rand() - RAND_MAX / 2;
if (n < 0)
{
	printf("%i is negative\n", n);
}
else
{
if (n > 0)
{
	printf("%i is positive\n", n);
}
else
{
	printf("%i is zero\n", n);
}
}
return (0);

}
