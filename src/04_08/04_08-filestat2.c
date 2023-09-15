#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	DIR *directory;		 // Pointer to directory structure
	struct dirent *file; // Pointer to directory entry structure
	struct stat fstat;	 // Struct to hold file information

	/* open the directory */
	directory = opendir("."); // Open the current directory (".")
	if (directory == NULL)
	{
		puts("Unable to open current directory");
		return (1);
	}

	/* Print header for the output */
	printf("%-25s %-10s %s\n", "Filename", "Size", "Timestamp");

	/* Iterate through the directory entries */
	while ((file = readdir(directory)) != NULL)
	{
		// Use the stat function to get information about the file
		stat(file->d_name, &fstat);

		// Print the filename, size, and timestamp
		printf("%-25s %10lld ", file->d_name, fstat.st_size);
		printf("%s", ctime(&fstat.st_mtime));
	}

	/* close the directory */
	closedir(directory); // Close the opened directory

	return (0);
}
