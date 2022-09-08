#include "utils.h"

/**
 * _getline - get line from file
 * @line: strong to store line
 * @stream: file to read
 * @idx: idx for read. alwats must be set to 0
 *
 * Return: 0 on sucess -1 on end of file
 */

int _getline(char **line, FILE *stream, int idx)
{
	int c, test;

	c = fgetc(stream);
	if (c != EOF && c != '\n')
	{
		test = _getline(line, stream, idx + 1);
		(*line)[idx] = c;
		return (test);
	}
	else
	{
		*line = malloc(sizeof(char) * (idx + 1));

		if (*line == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}

		(*line)[idx] = '\0';

		if (c == EOF && idx == 0)
			return (-1);
		else
			return (0);
	}
}
