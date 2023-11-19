#include "../ft_printf.h"

int	ft_check(const char *s, va_list ptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] == '%')
	{
		write(1, "%", 1);
		count++;
	}
	else if (s[i] == 'd' || s[i] == 'i')
		count += ft_putnbr(va_arg(ptr, int));
	else if (s[i] == 'c')
		count += ft_putchar((char)va_arg(ptr, int));
	else if (s[i] == 's')
		count += ft_putstr(va_arg(ptr, char *));
	else if (s[i] == 'u')
		count += ft_putunbr(va_arg(ptr, unsigned int));
	else if (s[i] == 'p')
		count += ft_putaddr(va_arg(ptr, unsigned long));
	else if (s[i] == 'x')
		count += ft_puthexa(va_arg(ptr, unsigned int), "0123456789abcdef");
	else if (s[i] == 'X')
		count += ft_puthexa(va_arg(ptr, unsigned int), "0123456789ABCDEF");
	return (count);
}