#include <stdio.h>

/**
 * main - Entry point
 * a program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
