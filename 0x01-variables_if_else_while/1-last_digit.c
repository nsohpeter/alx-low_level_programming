#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * assign a random number to the variable n each time it is executed
 *  followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, m);
if (m == 0)
printf("Last digit of %d is %d and is 0\n", n, m);
if (m < 6 && m != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
return (0);
}
