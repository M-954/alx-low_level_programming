#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename: pointer to a filename
 * @text_content: text to be appended
 *
 * Return: 1 Success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *p;
	int len;

	p = fopen(filename, "a");
	if (p == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		fwrite(text_content, sizeof(char), len, p);
	}
	fclose(p);
	return (1);
}
