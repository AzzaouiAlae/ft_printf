/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_error_occurred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:53:37 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/11/23 20:51:26 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_error_occurred(int n, int first_time)
{
	static int	is_error;

	if (first_time)
		is_error = 0;
	if (n == -1)
		is_error = -1;
	return (is_error);
}

