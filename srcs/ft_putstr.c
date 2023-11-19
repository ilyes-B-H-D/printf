#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
		count++;
	}
	return (count);
}
