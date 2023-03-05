/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:53:06 by zkantara          #+#    #+#             */
/*   Updated: 2023/02/15 01:10:01 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *forma, ...);
int		ft_argument(int c);
int		ft_input(const char *str, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_printstr(char *str);
int		ft_hex_len(unsigned int n);
void	ft_lorhex(unsigned long int n);
void	ft_upperhex(unsigned long int n);
int		ft_address(unsigned long n);
int		ft_char(char c);
int		ft_decimal_frm(int n);
int		ft_usig_decimal(unsigned long n);
int		ft_hexadecimal(unsigned int n);
int		ft_cs_hexadecimal(unsigned int n);
char	*ft_itoa(int n);
char	*ft_unsitoa(unsigned int n);
int		ft_formats(int c, va_list pus);

#endif
