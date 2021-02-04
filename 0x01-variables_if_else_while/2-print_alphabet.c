#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Desc: using putchar prints a-z
 * Return: 0 if success
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
