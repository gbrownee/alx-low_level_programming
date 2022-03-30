#include <unistd.h>

/**
 * _putchar - writes the character c to std out
 * @c: The character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
