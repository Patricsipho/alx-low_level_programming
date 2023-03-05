#include main.h

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the charecter _ should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
