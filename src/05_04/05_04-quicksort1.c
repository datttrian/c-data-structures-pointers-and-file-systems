#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	int list[SIZE];

	// Seed the randomizer
	srand((unsigned)time(NULL));

	// Build and display the random values
	printf("%d random values, unsorted:\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		list[i] = rand() % 100 + 1; // values from 1 to 100
		printf("%4d", list[i]);
	}
	putchar('\n');

	// Perform the quicksort
	qsort(list, SIZE, sizeof(int), compare);

	// Display the sorted list
	printf("%d random values, sorted:\n", SIZE);
	for (int i = 0; i < SIZE; i++)
		printf("%4d", list[i]);
	putchar('\n');

	return (0);
}
