#include "ft_printf.h"
void ft_printf(const char *format, ...)
{
	int i;
	va_list args;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'i' || format[i + 1] ==  'd' || format[i + 1] == 'D')
				ft_putnbr(va_arg(args, int));
			if (format[i + 1] == 'c')
				ft_putchar(va_arg(args, int));
			if (format[i + 1] == 's')
				ft_putstr(va_arg(args, char*));
			i+=2;
		}
		else
		{
			ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
}
