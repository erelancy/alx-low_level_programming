#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c on stdout
 * @c: characters to print
 * Return: On success 1.
 * On error, -1 is return, and error is set as it should be
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
