#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to a file name
 * @text_content: the text in created file
 *
 * Return: 1 on Success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int p;
	int len;
	ssize_t writefile;

	p = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (p == -1)
		return (-1);
	if (text_content != NULL)
	{
	len = strlen(text_content);
	writefile = write(p, text_content, len);
	if (writefile == -1)
	{
		close(p);
		return (-1);
	}
	}
	close(p);
	return (1);
}
