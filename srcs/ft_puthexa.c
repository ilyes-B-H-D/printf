#include "ft_printf.h"

int	ft_puthexa(unsigned int i)
{
	char	*u;
	char	*l;
	int		count;

	count = 0;
	u = "0123456789ABCDEF";
	l = "0123456789abcdef";
	if (i < 16)
	{
		ft_putchar(l[i]);
		count++;
	}
	else
	{
		count += ft_putcaphexa(i / 16);
		count += ft_putcaphexa(i % 16);
	}
	return (count);
}
