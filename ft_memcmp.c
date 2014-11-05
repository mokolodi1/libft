/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:31:43 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 18:50:56 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib.h"

int				ft_memcmp(const void *first_void, const void *second_void
							, size_t len)
{
	size_t				i;
	unsigned char		*first;
	unsigned char		*second;

	first = (unsigned char*)first_void;
	second = (unsigned char*)second_void;
	i = 0;
	while (i < len)
	{
		if (*(first + i) != *(second + i))
			return (*(first + i) - *(second + i));
		i++;
	}
	return (0);
}
