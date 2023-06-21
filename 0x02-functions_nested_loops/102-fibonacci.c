#include <stdio.h>

/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
* separated by a comma followed by a space.
* Return: Always 0.
*/


int main(void)
{
int i;
unsigned long long fib1 = 1, fib2 = 2, fib;

printf("%llu, %llu", fib1, fib2);

for (i = 3; i <= 50; i++) {
fib = fib1 + fib2;
printf(", %llu", fib);
fib1 = fib2;
fib2 = fib;
}

printf("\n");

return (0);
}
