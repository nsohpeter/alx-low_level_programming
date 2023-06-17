#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all possible different combinations of two digits.,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens, ones;
for (tens = 0; tens < 9; tens++) 
{

for (ones = tens + 1; ones < 10; ones++)
{
putchar(tens + '0');
putchar(ones + '0');

if (tens != 8 || ones != 9)	
{ 
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
