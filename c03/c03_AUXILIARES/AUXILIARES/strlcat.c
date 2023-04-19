#include <stdio.h>
#include <string.h>
#include <strings.h> 
 
int main(int ac, char *av[])
{
  (void) ac;
  int *ptr;
  int size;

  size = *av[3] - 48;
 
  ptr = strlcat(av[1], av[2], size);
  printf( "Result:%i\n", ptr);
 
}
