#include "main.h"

/**
 * main - positive or negative
 * check whether a number is positive or negative
 *  followed by a new line.
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return;
}
