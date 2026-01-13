#include <string.h>
#include <stdlib.h>
// TOGLI!!!!!!!!!!!!!!!!!!!!!!!
#include "libft.h"


static	int rientra(char c, char const *qui)
{
	unsigned long i;
	i = 0;

	while (qui[i++])
	{
		if (qui[i] == c)
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	long int	i;
//	long int	iniz;
//	long int	fine;
	char		*stri;

	stri = ft_strdup(s1);
	i = 0;
	while (s1[i++] && rientra(stri[i], set))
	{
		stri[i] = '\0';
	}
	//metti variabili alla fine della parte iniziale da tagliare e all'inizio della parte finale
	i = ft_strlen(s1);
	while (s1[i--] && rientra(stri[i], set))
	{
		stri[i] = '\0';
	}
	return (stri);
}

/*int	main ()
{	
	printf("%s \n", ft_strtrim("dgfhdhhfhdfhd", "x"));
	return (0);
}*/
