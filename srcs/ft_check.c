#include "ft_printf.h"

int	ft_check(const char *s, va_list ptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] == 'p')
		count += ft_putxaddr(va_arg(ptr, unsigned long));
	if (s[i] == 'd')
		count += ft_putnbr(va_arg(ptr, int));
	if (s[i] == 'c')
		count += ft_putchar((char)va_arg(ptr, int));
	if (s[i] == 's')
		count += ft_putstr(va_arg(ptr, char *));
    if (s[i] == 'i')
		count += ft_putnbr(va_arg(ptr, int));
	if (s[i] == 'u')
		count += ft_putunbr(va_arg(ptr, unsigned int));
	if (s[i] == 'x')
		count += ft_putsmallhexa(va_arg(ptr, unsigned int));
	if (s[i] == 'X')
		count += ft_putcaphexa(va_arg(ptr, unsigned int));
	if (s[i] == '%')
	{
		write(1, "%", 1);
		count++;
	}
    else{
		write(1, &s[i], 1);
    }
	return (count);
}