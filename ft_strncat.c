/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 21:35:06 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 22:01:35 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *first, const char *second, size_t len)
{
	char	*end;
	size_t	i;

	end = ft_strstr(first, "");//change to strcat
	i = 0;
	while (second[i] && end[i] && i < len)
	{
		first[i] = end[i];
		i++;
	}
	return (first);
}
