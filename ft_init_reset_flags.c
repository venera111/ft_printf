#include "ft_printf.h"

void	ft_init_flags(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->width = 0;
	flags->precision = 1;
	flags->char_num = 0;
	flags->plus = 0;
	flags->dot = 0;
	flags->space = 0;
	flags->octo = 0;
	flags->printed = 0;
}

void	ft_reset_flags(t_flags *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->width = 0;
	flags->precision = 1;
	flags->plus = 0;
	flags->dot = 0;
	flags->space = 0;
	flags->octo = 0;
	flags->printed = 0;
}
