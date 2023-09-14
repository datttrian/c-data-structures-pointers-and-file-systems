#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *fruit[10];
	char buffer[32];

	for (int i = 0; i < 10; i++)
	{
		// Read the string to get its length
		printf("Enter fruit #%d: ", i + 1);
		fgets(buffer, 32, stdin);

		// Allocate memory based on the string size
		fruit[i] = (char *)malloc(strlen(buffer) + 1);
		if (fruit[i] == NULL)
		{
			puts("Memory allocation failed");
			exit(1);
		}

		// Copy the string's address
		// strcpy(fruit[i], buffer);
		strcpy(*(fruit + i), buffer);
	}

	// Display the strings
	for (int i = 0; i < 10; i++)
		// printf("%s", fruit[i]);
		printf("%s", *(fruit + i));

	return (0);
}
