#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *buffer;

	// Allocate storage for 20 integers
	buffer = (int *)malloc(sizeof(int) * 20);
	if (buffer == NULL)
	{
		puts("Unable to allocate memory");
		exit(1);
	}

	// Fill and display the buffer
	for (int i = 0; i < 20; i++)
	{
		*(buffer + i) = 10 * (i + 1);
		printf("%d\n", *(buffer + i));
	}

	free(buffer);
	return (0);
}
