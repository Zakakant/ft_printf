/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:40:16 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/19 23:43:37 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(int c, va_list pus)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_char(va_arg(pus, int));
	else if (c == 's')
		i = ft_printstr(va_arg(pus, char *));
	else if (c == 'i' || c == 'd')
		i = ft_decimal_frm(va_arg(pus, int));
	else if (c == 'p')
		i = ft_address(va_arg(pus, unsigned long));
	else if (c == 'u')
		i = ft_usig_decimal(va_arg(pus, unsigned int));
	else if (c == 'x')
		i = ft_hexadecimal(va_arg(pus, unsigned int));
	else if (c == 'X')
		i = ft_cs_hexadecimal(va_arg(pus, unsigned int));
	else if (c == '%')
		i = ft_putchar('%');
	return (i);
}
