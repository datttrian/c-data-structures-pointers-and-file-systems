#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	// Define a constant character array for the filename "alpha.txt".
	const char filename[] = "alpha.txt";

	// Declare a struct to hold file information (stat structure).
	struct stat fstat;

	// Use the stat function to retrieve information about the file "alpha.txt"
	// and store it in the 'fstat' structure.
	stat(filename, &fstat);

	// Print the name of the file and its size in bytes using the information
	// obtained from 'fstat'.
	printf("%s is %ld bytes long\n",
		   filename,	 // File name
		   fstat.st_size // Size of the file in bytes
	);

	// Print the last modification time of the file in a human-readable format.
	printf("It was modified on %s", ctime(&fstat.st_mtime));

	// Return 0 to indicate successful execution of the program.
	return 0;
}
