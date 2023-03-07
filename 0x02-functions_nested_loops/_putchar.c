#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charecter c to stdout
 * @c: The charecter to print
 *
 */

int _putchar(char c)
{
	return (write(0, &c, 1));
}
