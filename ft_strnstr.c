
#include "libft.h"

char	*ft_strnstr(const char *libro, const char *parola, unsigned long lun)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	if (!libro || !parola)
		return (NULL);
	if (!parola[0])
		return ((char*)libro);
	while (libro[i] && (i < lun))
	{
		j = 0;
		while (libro[i + j] && parola[j] &&
				i + j < lun && libro[i + j] == parola[j])
			j++;
		if (parola[j] == '\0')
			return ((char*)(libro + i));
		i++;
	}
	return (NULL);
}
