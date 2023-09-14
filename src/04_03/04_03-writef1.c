#include <stdio.h>

int main()
{
	const char filename[] = "integers.dat";
	FILE *fp;
	int a;

	// Open and create the file
	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		printf("Unable to create %s\n", filename);
		return (1);
	}

	// Write the integers
	a = 10;
	for (int i = 0; i < 10; i++)
	{
		fwrite(&a, sizeof(int), 1, fp);
		a += 5;
	}

	// Close the file
	fclose(fp);

	return (0);
}
