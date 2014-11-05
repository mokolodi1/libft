/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:56:15 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 19:11:50 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

static int		ft_bzero_test(size_t len, int more);

int				ft_bzero_test_all(void)
{
	printf("ft_bzero:");
	ft_bzero_test(0, 0);
	ft_bzero_test(1, 0);
	ft_bzero_test(2, 0);
	ft_bzero_test(1000, 0);
	ft_bzero_test(MAX_ARRAY_THING, 0);
	printf("\n");
	return (0);
}

static int		ft_bzero_test(size_t len, int more)
{
	unsigned char	*ft = malloc(sizeof(char) * (len + more));
	unsigned char	*theirs = malloc(sizeof(char) * (len + more));

	memset(ft, 'a', len);
	memset(theirs, 'a', len);
	ft_bzero(ft, '\0');
	bzero(theirs, '\0');
	if (memcmp(ft, theirs, len + more))
	{
		if (len > 200)
			printf("[ft_bzero(%zu)]", len);
		else
			printf("[ft_bzero(%zu)]", len);
		return (1);
	}
	else
	{
		printf(".");
		return (0);
	}
}
