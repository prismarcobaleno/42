#include <stdio.h>
#include <stdlib.h>

unsigned long		conta(int n)
{
	unsigned long i;
	
	i = 0;
	if (n < 0)
	{
		i = 1;
		n *= -1;
	}	
	while(n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*stri;
	
	stri = malloc(conta (n));
	return (stri);
}

int		main ()
{
	printf("%lu \n", conta(-9999));
	return (0);
}