#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += f_check(&str[i], ptr);
		}
		else
			len += ft_putchar(str[i]);
		if (str[i])
			i++;
	}
	va_end(ptr);
	return (len);
}
