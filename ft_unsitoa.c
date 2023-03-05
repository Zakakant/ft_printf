/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:57:27 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/23 09:21:59 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_n_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_unsitoa(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_n_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	while (n)
	{
		str[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
	return (str);
}
