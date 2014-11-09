/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:52:27 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/08 12:02:33 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *source, size_t start, size_t len)
{
	char		*substring;

	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	ft_strncpy(substring, source + (start * sizeof(char)), len);
	return (substring);
}
