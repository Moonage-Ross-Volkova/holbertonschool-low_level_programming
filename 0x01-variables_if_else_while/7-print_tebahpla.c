#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet in reverse using putchar
 *
 * Return: returns 0 if success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
