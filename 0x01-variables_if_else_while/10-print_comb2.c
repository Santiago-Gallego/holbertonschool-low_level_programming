#include <stdio.h>
/**
 *
 *Return: 0
 */
int main(void)
{
int i, j;
i = '0';
j = '0';
while (i <= '9')
{
while (j <= '9')
{
putchar(i);
putchar(j);
if (i != '9' ||  j != '9')
{
putchar(',');
putchar(' ');
}
j++;
}      
j = '0';
i++;
}
putchar('\n');
return (0);
}
