#include "ft_printf.h"

void	ft_precision(t_flags *flags, int size, int zero)
{
	int	i;

	i = 0;
	while (flags->precision > size)
	{
		if (zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		flags->precision--;
		i++;
	}
	flags->char_num += i;
}

void	ft_width(t_flags *flags, int size, int zero)
{
	int	i;

	i = 0;
	while ((flags->width - size) > 0)
	{
		if (zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		flags->width--;
		i++;
	}
	flags->char_num += i;
}

void	ft_hash(t_flags *flags, int input)
{
	if (input && flags->octo)
		flags->char_num += write(1, "0X", 2);
	else if (!(input) && flags->octo)
		flags->char_num += write(1, "0x", 2);
}

void	ft_str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
}
