/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usig_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:34:22 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/23 03:25:22 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_usig_decimal(unsigned long n)
{
	int		i;
	char	*str;

	i = 0;
	if (n == 0)
		i += write(1, "0", 1);
	else
	{
		str = ft_unsitoa(n);
		i = ft_printstr(str);
		free(str);
	}
	return (i);
}
