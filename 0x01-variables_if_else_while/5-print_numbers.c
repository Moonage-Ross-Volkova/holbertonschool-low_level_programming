#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: prints numbers from 0 to 9
 *
 * Return: 0 if success
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		printf("%d", numbers);
	printf("\n");

	return (0);
}
