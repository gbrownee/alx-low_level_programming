#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string(Success), Null (Error)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++, l++)
			l++;
	}
	l++;
	s = malloc(sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++, k++)
			*(s + k) = *(*(av + i ) + j);

		s[k] = '\n';
		k++;
	}
	*(s + k) = '\0';
	return (s);
}
