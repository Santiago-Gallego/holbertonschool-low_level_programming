#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
  int a = '0';
  char b = 'a';
      
    while  (a <= '9')
      putchar(a++);
      while( b <= 'f' )
	putchar(b++);
  putchar ('\n');
  return 0;
}
