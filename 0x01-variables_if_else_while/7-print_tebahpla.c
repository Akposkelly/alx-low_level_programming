#include <stdio.h>

/**
 * main - entry point
 * Return: 0 Always (success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{

		putchar(low);

	}

	putchar('\n');

	return (0);
}
