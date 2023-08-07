#include "main.h"
/**
 * read_text - reads a text file and prints it out
 * @filename: pointer to a filename
 * @letters: number of characters to print out
 *
 * Return: number of characters to print out
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *p;
	char *buf;
	ssize_t readfile, writefile;

	p = fopen("filename", O_RDONLY);
	if (p == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(p);
		return (0);
	}
	readfile = fread(buf, sizeof(char), letters, p);
	if (readfile == -1)
	{
		free(buf);
		return (0);
	}
	writefile = write(STDOUT_FILENO, buf, readfile);
	free(buf);
	fclose(p);
	if (writefile != readfile)
	{
		return (0);
	}
	return (writefile);
}
