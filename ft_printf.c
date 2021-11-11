#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_flags	*flags;
	int		char_num;
	int		index;

	flags = (t_flags *)malloc(sizeof(t_flags));
	if (!flags)
		return (-1);
	ft_init_flags(flags);
	va_start(flags->ap, format);
	char_num = 0;
	index = -1;
	while (format[++index] != '\0')
	{
		if (format[index] == '%')
			index += ft_parsing(flags, &format[index + 1]);
		else
			char_num += write(1, &format[index], 1);
	}
	va_end(flags->ap);
	free(flags);
	char_num += flags->char_num;
	return (char_num);
}
