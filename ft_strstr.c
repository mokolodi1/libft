/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 12:04:43 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 21:40:31 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t		inner;

	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		inner = 0;
		while (haystack[inner] == needle[inner])
		{
			if (needle[inner + 1] == '\0')
				return ((char*)haystack);
			inner++;
		}
		haystack++;
	}
	return (NULL);
}
