
#include "libft.h"

static int	ft_ass(int nbr)
{
	if (nbr < 0)
		return(-nbr);
	else
		return(nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		nega;
	int		i;

	nega = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	i = 0;
	while (n != 0)
	{
		str[i++] = '0' + ft_ass(n % 10);
		n = (n / 10);
	}
	if (nega)
		str[i] = '-';
	else if (i > 0)
		i--;
	while (i >= 0)
		write(fd, &str[i--], 1);
}