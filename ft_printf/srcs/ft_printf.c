/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:06:32 by zmahomed          #+#    #+#             */
/*   Updated: 2019/07/11 11:06:40 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
