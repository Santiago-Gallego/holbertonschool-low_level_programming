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
int a = '0';
char b = 'a';
while (a <= '9')
putchar(a++);
while (b <= 'f')
putchar(b++);
putchar ('\n');
return (0);
}
