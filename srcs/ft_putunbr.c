#include "ft_printf.h"

int	ft_putunbr(unsigned int k)
{
	char		c;
	int			count;

	count = 0;
	if (k >= 0 && k <= 9)
	{
		c = k + 48;
		write (1, &c, 1);
		count++;
	}
	if (k > 9)
	{
		count += ft_putunbr(k / 10);
		count += ft_putunbr(k % 10);
	}
	return (count);
}
