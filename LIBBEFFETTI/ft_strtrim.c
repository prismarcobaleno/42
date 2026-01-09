#include <string.h>
#include <stdlib.h>
// TOGLI!!!!!!!!!!!!!!!!!!!!!!!
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	long int	i;
	long int	j;
	char		*stri;

	stri = ft_strdup(s1);
	i = 0;
	j = 0;
	while (set[j++])
	{
		while (s1[i++] == set[j])
		{
			stri[i] = '\0';
		}
	}
	return (stri);
}

/*int	main ()
{	
	printf("%s \n", ft_strtrim("tripouille", "x"));
	return (0);
}*/
