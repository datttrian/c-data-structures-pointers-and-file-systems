#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 51
#define BALLS 6

int main()
{
	int lottoball[COUNT];
	int draw, b;

	// Seed the randomizer
	srand((unsigned)time(NULL));

	// Initialize the array
	for (int i = 0; i < COUNT; i++)
		lottoball[i] = 0;

	// Pull the lotto balls
	draw = 0;
	while (draw < BALLS)
	{
		// Generate a random number
		b = rand() % COUNT;

		// Confirm that it hasn't yet been drawn
		if (lottoball[b] == 0)
		{
			// Mark the ball as drawn
			lottoball[b] = 1;

			// Update the winners array
			draw++;
		} // if the number has been drawn, the loop repeats
	}

	// Show the winners, which are naturally in ascending order
	puts("Winning Lotto Numbers: ");
	for (int i = 0; i < COUNT; i++)
	{
		if (lottoball[i] == 1)
		{
			// Add one to the output to account for element zero
			printf("%3d", i + 1);
		}
	}
	putchar('\n');

	return (0);
}
