/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 15:28:00 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:17 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	long long	number;
	int			negative;
	size_t		i;

	negative = 0;
	i = 0;
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (str[i] == '0')
		i++;
	number = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
		if (number < 0)
			return (-1);
	}
	if (negative)
		number = -number;
	return (number);
}
