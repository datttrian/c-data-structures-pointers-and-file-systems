#include <stdio.h>

int main()
{
	FILE *fh;

	// Open/create the file
	fh = fopen("output.txt", "w");
	if (fh == NULL)
	{
		puts("Failed to create file.");
		return (1);
	}

	// Output a line of text
	fprintf(fh, "Hello there, file!\n");

	// Close the file
	fclose(fh);

	return (0);
}
