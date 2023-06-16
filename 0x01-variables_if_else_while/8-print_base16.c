#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all the numbers of base 16 in lowercase,,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char digits;
for (digits = '0'; digits <= '9'; digits++)
{
putchar(digits);
}
for (digits = 'a'; digits <= 'f'; digits++)
{
putchar(digits);
}
putchar('\n');
return (0);
}
