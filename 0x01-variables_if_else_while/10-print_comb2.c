#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description prints numbers from 00 to 99
 *
 * Return: 0 if success
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 100; numbers++)
	{
		putchar((numbers / 10) + '0');
		putchar((numbers % 10) + '0');
		if (numbers != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
