#include <stdio.h>
#include <string.h>
 
#define SIZE 40
 
 
int main(int ac, char *av[])
{
  (void) ac;
  char *ptr;
 
  ptr = strcat(av[1], av[2]);
  printf( "Result:%s\n", ptr);
 
}
