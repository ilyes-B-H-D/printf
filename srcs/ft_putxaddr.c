#include "ft_printf.h"

static	int	ft_puthexa(unsigned long i)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789abcdef";
	if (i < 16)
	{
		ft_putchar(s[i]);
		count++;
	}
	else
	{
		count += ft_puthexa(i / 16);
		count += ft_puthexa(i % 16);
	}
	return (count);
}

int	ft_putxaddr(unsigned long i)
{
	int	count;

	count = 0;
	write(1, "0x", 2);
	count += 2;
	count += ft_puthexa(i);
	return (count);
}