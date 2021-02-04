#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int one, two;

	for (one = 0; one < 9; one++)
{
	for (two = one + 1; two < 10; two++)
{
	putchar((one % 10) + '0');
	putchar((two % 10) + '0');

	if (one == 8 && two == 9)
		continue;

	putchar(',');
	putchar(' ');
}
}

	putchar('\n');

	return (0);
}
