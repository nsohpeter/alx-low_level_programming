#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all possible different combinations of three digits., * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{

int hundreds_digit, tens_digit, ones_digit;

for (hundreds_digit = 0; hundreds_digit < 8; hundreds_digit++)
{
for (tens_digit = hundreds_digit + 1; tens_digit < 9; tens_digit++)
{
for (ones_digit = tens_digit + 1; ones_digit < 10; ones_digit++)
{
putchar(hundreds_digit + '0');
putchar(tens_digit + '0');
putchar(ones_digit + '0');

if (hundreds_digit != 7 || tens_digit != 8 || ones_digit != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
 putchar('\n');

return (0);
}
