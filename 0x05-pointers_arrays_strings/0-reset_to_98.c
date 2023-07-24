#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to 98
 * @n: input
 * Return: n
 */
void reset_to_98(int *n)
{
	*n = 98;
}
int main(void)
{
	int num = 5;
	printf("Before: %d\n", num);
	reset_to_98(&num);
	printf("After: %d\n", num);

	return 0;
}
