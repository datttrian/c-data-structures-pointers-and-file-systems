#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat";

	struct person
	{
		char name[32];
		int inauguration;
		int age;
	} president;
	int x;
	FILE *fp;

	// Open the file
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Unable to open %s\n", filename);
		return (1);
	}

	// Prompt to read a specific record
	printf("Enter record to read (1-10): ");
	scanf("%d", &x);

	// Validate the input
	if (x < 1 || x > 10)
	{
		puts("Invalid input");
		return (1);
	}

	// Decrement x to reference the proper offset
	x--;

	// Set the file position indicator
	fseek(fp, sizeof(struct person) * x, SEEK_SET);

	// Fetch the record
	fread(&president, sizeof(struct person), 1, fp);

	// Print the result
	printf("President %s was %d years old when inaugurated in %d\n", president.name, president.age, president.inauguration);
}
