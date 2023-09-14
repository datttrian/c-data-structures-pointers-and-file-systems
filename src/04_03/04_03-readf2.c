#include <stdio.h>

int main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int a;

	// Create and open the file
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Unable to create %s\n", filename);
		return (1);
	}

	// Read integers
	for (int i = 0; i < 10; i++)
	{
		fread(&a, sizeof(int), 1, fp);
		printf("%d\n", a);
	}

	// Close the file
	fclose(fp);

	return (0);
}
