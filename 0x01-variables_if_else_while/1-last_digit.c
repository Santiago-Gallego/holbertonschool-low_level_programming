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
int n, j;
srand(time(0));
n = rand() - RAND_MAX / 2;
j =  n % 10;
printf("Last digit of %i is %i ", n, j);
if (j > 5)
printf("and is greater than 5\n");
else if (j < 6 && n != 0)
printf("and is less than 6 and not 0\n");
else
printf("and is 0\n");
return (0);
}
