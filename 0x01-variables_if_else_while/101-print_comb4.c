#include <stdio.h>

/**
 *main-prints out all different combo of three digits
 *no same combos, seperated by comma, and space
 *Return: 0
 */


int main(void)
{
int i = 48;
int j = 49;
int k = 50;
while (i < 58)
{
while (j < 58)
{
while (k < 58)
{
if (i != j && i != k && j != k && i < j && j < k)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56 || k != 57)
{
putchar(44);
putchar(32);
}
}
k++;
}
k = 48;
j++;
}
j = 48;
i++;
}
putchar('\n');
return (0);
}
