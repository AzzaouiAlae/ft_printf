/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowercase_hex.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:50:09 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/17 20:10:34 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_lowercase_hex(unsigned long n)
{
	char			*hex;
	char			hex_to_printf[20];
	int				i;
	unsigned int	num;

	hex = "0123456789abcdef";
	i = 0;
	num = (unsigned int)n;
	if (num == 0)
	{
		ft_print_char((unsigned long) '0');
		return ;
	}
	while (i < 20)
		hex_to_printf[i++] = '\0';
	i = 0;
	while (num > 0)
	{
		hex_to_printf[i++] = hex[num % 16];
		num /= 16;
	}
	while (--i >= 0)
		ft_print_char((unsigned long)hex_to_printf[i]);
}
