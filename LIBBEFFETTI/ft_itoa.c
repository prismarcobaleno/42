#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	conta(int n)
{
	size_t	i;
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

	conta (n);
	stri = malloc(n);
	if (!stri)
		return (NULL);
	return (stri);
}

int		main ()
{
	printf("%lu \n", conta(-9999));
	return (0);
}