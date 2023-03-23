#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return:1 On success.
 * On error,returns -1, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
