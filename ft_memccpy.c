/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:57:59 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:15 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft.h"

void			*ft_memccpy(void *dest_v, const void *source_v
							, int stopper, size_t len)
{
	size_t			i;
	char			curr;
	const char		*source;
	char			*dest;

	source = (char*)source_v;
	dest = (char*)dest_v;
	i = 0;
	while (i < len)
	{
		curr = source[i];
		dest[i] = curr;
		i++;
		if (curr == stopper)
			return (dest + i);
	}
	return (NULL);
}
