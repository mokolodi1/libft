/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 21:24:36 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 22:01:21 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *first, const char *second)
{
	char	*end;
	size_t	i;

	end = ft_strstr(first, "");//change to strchr
	i = 0;
	while (second[i] && end[i])
	{
		first[i] = end[i];
		i++;
	}
	return (first);
}
