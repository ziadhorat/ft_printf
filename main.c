#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

void varstrings(const char *format, ...)
{
	int i;
	va_list args;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'i')
				ft_putnbr(va_arg(args, int));
			if (format[i + 1] == 'd' || format[i + 1] == 'D')
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

int main(void)
{
    varstrings("%%i:\t%i\n%%d:\t%d\n%%D:\t%D\n%%c:\t%c\n%%s:\t%s\n", 80, 2, 5,'c',"Word 1");
}
