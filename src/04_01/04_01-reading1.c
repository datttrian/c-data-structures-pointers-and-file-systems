#include <stdio.h>

int main()
{
	const char filename[] = "sonnet18.txt";

	FILE *fh;

	// Open the file
	fh = fopen(filename, "r");
	if (fh == NULL)
	{
		printf("Unable to read from file %s\n", filename);

		return (1);
	}

	printf("File '%s' opened \n", filename);

	// Close when you're done
	fclose(fh);

	return (0);
}
