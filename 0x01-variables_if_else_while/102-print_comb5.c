#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one, two;

	for (one = 0; one <= 99; one++)
	{
		for (two = one; two <= 99; two++)

		{
			if (one != two)
{
				putchar((one / 10) + 48);
				putchar((one % 10) + 48);
				putchar(' ');
				putchar((two / 10) + 48);
				putchar((two % 10) + 48);

				if (one != 98 || two != 99)
{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
