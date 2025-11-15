/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhssayn <rhssayn@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:54:23 by rhssayn           #+#    #+#             */
/*   Updated: 2025/11/03 17:08:56 by rhssayn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlonghex(unsigned long add, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (add >= 16)
		ft_putlonghex(add / 16, len);
	ft_putchar(base[add % 16], len);
}

void	ft_putaddress(void *p, int *len)
{
	unsigned long	add;

	add = (unsigned long)p;
	if (!p)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	ft_putstr("0x", len);
	ft_putlonghex(add, len);
}
