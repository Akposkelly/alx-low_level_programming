#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabets in lowercase
 * Return: 0 Always (success)
 */

int main(void)
{
	char low;


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
