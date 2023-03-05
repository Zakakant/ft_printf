/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:20:12 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/23 04:55:08 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_input(const char *str, va_list args)
{
	int	pus;
	int	i;

	pus = 0;
	i = 0;
	while (str[pus])
	{
		if (str[pus] != '%')
			i += ft_putchar(str[pus]);
		else if ((str[pus] == '%') && str[pus + 1])
		{
			pus++;
			if (ft_argument(str[pus]))
				i += ft_formats(str[pus], args);
			else if (str[pus])
				i += ft_putchar(str[pus]);
		}
		pus++;
	}
	return (i);
}
