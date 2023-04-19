#include <stdio.h>
#include <string.h>

int main (int ac, char *av[])
{
	char *ptr;

  if (ac == 3)
	{
   ptr = strstr(av[1], av[2]);
  printf("%s\n", ptr);
	}
  else
	  printf("Invalid Input\n");
   
   return(0);
}
