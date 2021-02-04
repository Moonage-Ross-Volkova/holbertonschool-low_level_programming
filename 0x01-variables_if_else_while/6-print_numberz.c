#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: prints numbers form 0 to 9
 *
 * Return: 0 if success
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);
	putchar('\n');

	return (0);
}
