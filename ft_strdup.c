#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*punt;
	unsigned long	i;

	i = ft_strlen(s);

	punt = (void *)malloc(i);
	if (!punt)
		return (((void *)0));
	else
	{
		while (s[i++])
			punt[i] = s[i];
	}
	return(punt);
}