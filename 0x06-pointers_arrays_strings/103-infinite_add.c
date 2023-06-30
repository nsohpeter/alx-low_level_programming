#include "main.h"

/**
* infinite_add - add 2 numbers together
* @n1: text representation of 1st number to add
* @n2: text representation of 2nd number to add
* @r: pointer to buffer
* @size_r: buffer size
* Return: pointer to calling function
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, max_len = 0, carry = 0, sum = 0;
int i, j;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
max_len = (len1 > len2) ? len1 : len2;


if (size_r <= max_len)
return (0);

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--, max_len--)
{
sum = carry;

if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
r[max_len] = (sum % 10) + '0';
}
if (carry != 0)
{
if (max_len <= 0)
return (0);

r[max_len] = carry + '0';
}
if (max_len < 0)
max_len++;
for (i = 0; i <= len1 || i <= len2; i++, max_len++)
r[i] = r[max_len];

r[i] = '\0';

return (r);
}
