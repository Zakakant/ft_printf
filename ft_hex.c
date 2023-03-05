/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:08:19 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/19 23:42:35 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	ft_lorhex(unsigned long int n)
{
	if (n <= 15)
	{
		ft_putchar("0123456789abcdef"[n]);
	}
	else if (n > 15)
	{
		ft_lorhex(n / 16);
		ft_lorhex(n % 16);
	}
}

void	ft_upperhex(unsigned long int n)
{
	if (n <= 15)
	{
		ft_putchar("0123456789ABCDEF"[n]);
	}
	else if (n > 15)
	{
		ft_upperhex(n / 16);
		ft_upperhex(n % 16);
	}
}
