#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 'z';
while (a >= 'a')
putchar(a--);
putchar ('\n');
return (0);
}
