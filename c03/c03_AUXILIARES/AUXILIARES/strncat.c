#include<stdio.h>
#include<string.h>

int main(int ac, char *av[])
{
	(void) ac;
	
	int	size;
	char	*dest;

	size = *av[3] - 48;
	dest = strncat(av[1], av[2], size);
	printf("%s\n", dest);
}
