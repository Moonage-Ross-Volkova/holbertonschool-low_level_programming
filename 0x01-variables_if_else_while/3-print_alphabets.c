#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in upper and lower case
 * Return: 0 if success
 */
int main(void)
{
	char low;
	char upper;

	for (low = 'a' ; low <= 'z' ; low++)
		putchar(low);
	for (upper = 'A' ; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
