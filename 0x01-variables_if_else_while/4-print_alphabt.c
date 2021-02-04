#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: prints alphabet except for e and q
 * Return: returns 0 if success
 */
int main(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'q' && low != 'e')
		{
			putchar(low);
		}
	}
	putchar('\n');
	return (0);
}
