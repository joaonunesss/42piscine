#include <stdio.h>
#include <string.h>

int main (int ac, char *av[])
{
   int result;
   int n;

   n = *av[3] - 48;

  if (ac == 4)
  {
   result = strncmp(av[1], av[2], n);

   if(result < 0)
      printf("str1 is less than str2");
   else if(result > 0)
      printf("str2 is less than str1");
   else
      printf("str1 is equal to str2");
   
  }
  else
	  printf("Invalid Input\n");
   
   return(0);
}
