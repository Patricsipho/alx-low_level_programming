#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not
 */

int _slower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
