#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

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
	printf("%-5s %-20s %-10s %s\n", "Type", "Filename", "Size", "Timestamp");

	/* Iterate through the directory entries */
	while ((file = readdir(directory)) != NULL)
	{
		// Use the stat function to get information about the file
		stat(file->d_name, &fstat);

		// Check if the file is a directory
		if (S_ISDIR(fstat.st_mode))
			printf(" Dir "); // If it's a directory, print "Dir"
		else
			printf("File "); // If it's not a directory, print "File"

		// Print the filename, size (formatted to take up 10 characters), and the timestamp
		printf("%20s %10lld %ld\n",
			   file->d_name,  // Filename
			   fstat.st_size, // Size of the file
			   fstat.st_mtime // Timestamp (modification time)
		);
	}

	/* close the directory */
	closedir(directory); // Close the opened directory

	return (0);
}
