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
 * @n: buffer size
 * @file_from: pointer to the file to copy from
 * @file_to: pointer to the file to copy to
 */
void copyfile(int ffrom, int fto, char *buf, size_t BUFFSIZE, char *file_from, char *file_to)
{
	ssize_t readfile = read(ffrom, buf, BUFFSIZE);

	while (readfile > 0)
	{
	ssize_t writefile = write(fto, buf, readfile);

	if (writefile != readfile)
	{
		errorfunc("Error: Can't write to %s", file_to, 99);
	}
	}
	if (readfile == -1)
	{
		errorfunc("Error: Can't read to %s", file_from, 98);
	}
}
#define BUFFSIZE 1024
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
	char buf[BUFFSIZE];

	if (argc != 3)
	{
		errorfunc("Usage: %s file_from file_to", argv[0], 97);
	}
	file_from = argv[1];
	file_to = argv[2];

	ffrom = open(file_from, O_RDONLY);
	if (ffrom == -1)
		errorfunc("Error: Can't read from file %s", argv[1], 98);

	fto = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto == -1)
	{
		close(ffrom);
		errorfunc("Error: Can't write to %s", argv[2], 99);
	}

	copyfile(ffrom, fto, buf, BUFFSIZE, file_from, file_to);

	if (close(ffrom) == -1)
		errorfunc("Error: Can't close fd %d", "ffrom", 100);
	if (close(fto) == -1)
		errorfunc("Error: Can't close fd %d", "fto", 100);
	return (0);
}
