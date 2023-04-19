#include <stdio.h>
#include <string.h>

int	main(int ac, char *av[])
{	
	if(ac == 3)
	{
  int result;

  // comparing strings str1 and str2
  result = strcmp(av[1], av[2]);
  printf("strcmp(str1, str2) = %d\n", result);
	}
  return 0;
}
