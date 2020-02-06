#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
  int a = '0';
  while (a <= '9')
    putchar(a++);
  putchar ('\n');
  return 0;
}
