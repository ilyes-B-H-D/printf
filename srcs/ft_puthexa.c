#include "../ft_printf.h"

int	ft_puthexa(unsigned int i, char *base)
{
	int		count;

	count = 0;
	if (i < 16)
	{
		ft_putchar(base[i]);
		count++;
	}
	else
	{
		count += ft_puthexa(i / 16, base);
		count += ft_puthexa(i % 16, base);
	}
	return (count);
}
