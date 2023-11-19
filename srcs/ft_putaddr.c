#include "../ft_printf.h"

int	ft_putaddr(unsigned long adress)
{
	if (!adress)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (2 + ft_puthexa(adress, "0123456789abcdef"));
}