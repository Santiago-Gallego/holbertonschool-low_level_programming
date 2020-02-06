#include <stdio.h>
/**
 *main-all combo of the two digits 0 and 1
 *no repeats
 *Return: 0
 */
int main(void)
{
int i;
int j;
i = 48;
j = 49;
while (i < 58)
{
while (j < 58)
{
if (i != j && i < j){
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
}
j++;
}
i++;
j = 49;
}
putchar('\n');
return (0);
}
