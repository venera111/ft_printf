#include "ft_printf.h"
#include <stdio.h>

void	ft_print_char(t_flags *flags)
{
	if (!(flags->minus))
		ft_width(flags, 1, 0);
	ft_putchar((unsigned char)va_arg(flags->ap, int));
	flags->char_num++;
	if (flags->minus)
		ft_width(flags, 1, 0);
	ft_reset_flags(flags);
}

void	ft_print_string(t_flags *flags)
{
	int		size;
	char	*str;
	char	*res;

	res = va_arg(flags->ap, char *);
	if (res == NULL)
		str = ft_strdup("(null)");
	else
		str = ft_strdup(res);
	size = ft_strlen(str);
	if (flags->dot)
		size = ft_min(flags->precision, size);
	if (!(flags->minus))
		ft_width(flags, size, 0);
	flags->char_num += write(1, str, size);
	if (flags->minus)
		ft_width(flags, size, 0);
	free(str);
	ft_reset_flags(flags);
}
