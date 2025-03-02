/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:02:33 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/27 15:55:50 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(unsigned long num)
{
	char	c;

	c = (char)num;
	if (ft_is_error_occurred(0, 0) == -1)
		return ;
	ft_count(write(1, &c, 1), 0);
}
