#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
  int a = 'z';
  while (a >= 'a')
    putchar(a--);
  putchar ('\n');
  return 0;
}
