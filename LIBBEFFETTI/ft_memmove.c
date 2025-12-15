#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *fon, unsigned long lun)
{
	char			*destino;
	const char		*fonte;

	destino = (char *)dest;
	fonte = (char *)fon;
	if (destino == fonte)
		return (dest);
	if (destino > fonte)
	{
		fonte = fonte + lun - 1;
		destino = destino + lun - 1;
		while (lun--)
			*destino-- = *fonte--;
	}
	else
	{
		while (lun--)
			*destino++ = *fonte++;
	}
	return (dest);
}