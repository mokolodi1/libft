/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:11:40 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/07 15:26:44 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memalloc(size_t size)
{
	void	*fresh;

	if (size == 0)
		return (NULL);
	fresh = malloc(size);
	if (fresh == NULL)
		return (NULL);
	bzero(fresh, size);
	return (fresh);
}
