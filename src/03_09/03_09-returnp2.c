#include <stdio.h>
#include <stdlib.h>

int *makearray(int size)
{
	int *p;
	// Allocate storage for `size` integers
	p = (int *)malloc(sizeof(int) * size);

	if (p == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	// Fill the array
	for (int i = 0; i < size; i++)
	{
		*(p + i) = (i + 1) * 10;
	}
	return (p);
}

int main()
{
	int *x;
	x = makearray(5);

	for (int i = 0; i < 5; i++)
		printf("%d\n", *(x + i));

	return (0);
}
