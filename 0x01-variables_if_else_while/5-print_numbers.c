#include <stdio.h>

/**
 * main - Entry point
 * program that prints all single digit numbers of base 10
 * starting from 0,followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
int digits;
for (digits = 0; digits < 10; digits++)
{
printf("%d", digits);
}
printf("\n");

return (0);
}
