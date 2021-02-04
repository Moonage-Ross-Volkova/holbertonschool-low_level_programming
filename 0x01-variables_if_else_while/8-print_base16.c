#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: prints numbers in base 16
 *
 * Return: 0 if success
 */
int main(void)
{
	int numbers;
	char low;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
