
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
int		ft_puthexa(unsigned int i);
int		ft_putxaddr(unsigned long i);
int		ft_check(const char *s, va_list ptr);

#endif