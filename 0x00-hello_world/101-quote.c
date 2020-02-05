#include <stdio.h>
#include <unistd.h>
/**
 * main - prints standard variable size to stdout
 * description: uses sizeof to determine variable size
 * Return: void
 */
int main(void)
{
int l;
l = sizeof("and that piece of art is useful - Dora Korpar, 2015-10-19");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", l);
return (1);
}
