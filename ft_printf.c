/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:24:25 by rhssayn           #+#    #+#             */
/*   Updated: 2025/11/03 17:09:05 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_handler(va_list args, const char *format, int *len)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (*format == 'p')
		ft_putaddress(va_arg(args, void *), len);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (*format == 'u')
		ft_putunsigned(va_arg(args, unsigned int), len);
	else if (*format == 'x' || *format == 'X')
		ft_puthex(va_arg(args, unsigned int), *format, len);
	else
		ft_putchar('%', len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			format_handler(args, &format[++i], &len);
			if (format[i] != '\0')
				i++;
		}
		else
			ft_putchar(format[i++], &len);
	}
	va_end(args);
	return (len);
}
