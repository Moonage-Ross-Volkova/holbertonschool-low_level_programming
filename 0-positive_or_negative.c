#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - tells if random number is negative positive or zero
 *
 *  Description: Prints if number is negative, positive or zero
 *  Return zero if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
