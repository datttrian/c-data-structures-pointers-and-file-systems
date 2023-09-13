#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	buffer = (char *)malloc(sizeof(char) * 128);

	if (buffer == NULL)
	{
		puts("Unable to allocate memory");
	}

	puts("Buffer allocated");
	free(buffer);
	puts("Buffer freed");
}
