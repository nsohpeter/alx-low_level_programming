#include <stdio.h>

/**
 * main - Entry point
 *  a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char letters, caps;
for (letters = 'a'; letters <= 'z'; letters++)
{
putchar(letters);
}
for (caps = 'A'; caps <= 'Z'; caps++)
{
putchar(caps);
}
 putchar('\n');
return (0);
}
