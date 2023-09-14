#include <stdio.h>

int main()
{
	FILE *fh;

	// Open/create the file
	fh = fopen("alphabet.txt", "a");
	if (fh == NULL)
	{
		puts("Failed to open file.");
		return (1);
	}

	// Output
	fputc('\n', fh);

	// Close the file
	fclose(fh);

	return (0);
}
