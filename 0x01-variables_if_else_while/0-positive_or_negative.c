#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 * Disciption: 'Check for number if it positive or negative'
 * Return: Always 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("5d is positive\n".n);
}
else if (n == 0)
{
printf("%d is zero\n".n);
{
else
{
printf("%d is negative\n".n);
}
return (0);
}
