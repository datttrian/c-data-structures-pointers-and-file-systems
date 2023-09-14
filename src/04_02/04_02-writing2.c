#include <stdio.h>

int main()
{
	FILE *fh;

	// Open/create the file
	fh = fopen("alphabet.txt", "w");
	if (fh == NULL)
	{
		puts("Failed to create file.");
		return (1);
	}

	// Output the alphabet
	for (int i = 'A'; i <= 'Z'; i++)
		fputc(i, fh);

	// Close the file
	fclose(fh);

	return (0);
}
