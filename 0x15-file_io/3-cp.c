#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * errorfunc - prints out error message
 * @msg: error message to be printed
 * @filename: pointer to the file name
 * @code: error code
 */
void errorfunc(const char *msg, const char *filename, int code)
{
	dprintf(STDERR_FILENO, msg, filename);
	dprintf(STDERR_FILENO, "\n");
	exit(code);
}
/**
 * copyfile - copies daata from one file to another
 * @ffrom: file to copy from
 * @fto: file to copy to
 * @buf: buffer
 * @file_from: pointer to the file to copy from
 * @file_to: pointer to the file to copy to
 */
void copyfile(int ffrom, int fto, char *buf, char *file_from, char *file_to)
{
	ssize_t readfile, writefile;

	readfile = read(ffrom, buf, 1024);
	while (readfile > 0)
	{
		writefile = write(fto, buf, readfile);
		if (writefile == -1)
		{
		errorfunc("Error: Can't write to %s", file_to, 99);
		}
		readfile = read(ffrom, buf, 1024);
	}
	if (readfile == -1)
	{
		errorfunc("Error: Can't read from %s", file_from, 98);
	}
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	int fto;
	int ffrom;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	ffrom = open(file_from, O_RDONLY);
	if (ffrom == -1)
		errorfunc("Error: Can't read from file %s", argv[1], 98);

	fto = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto == -1)
	{
		errorfunc("Error: Can't write to %s", argv[2], 99);
	}

	copyfile(ffrom, fto, buf, file_from, file_to);

	if (close(ffrom) == -1)
		errorfunc("Error: Can't close fd %d", "ffrom", 100);
	if (close(fto) == -1)
		errorfunc("Error: Can't close fd %d", "fto", 100);
	return (0);
}
