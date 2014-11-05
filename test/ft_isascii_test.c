/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:14:05 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 19:21:36 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

static int		ft_isascii_test(int c);

int				ft_isascii_test_all(void)
{
	printf("ft_isascii:");
	ft_isascii_test(0);
	ft_isascii_test(-1);
	ft_isascii_test(1);
	ft_isascii_test(378);
	ft_isascii_test(100);
	ft_isascii_test(177);
	ft_isascii_test(176);
	ft_isascii_test(178);
	ft_isascii_test(1000000);
	printf("\n");
	return (0);
}

static int		ft_isascii_test(int c)
{
	if (isascii(c) == ft_isascii(c))
	{
		printf(".");
		return (1);
	}
	else
	{
		printf("[ft_isascii(%i)]", c);
		return (0);
	}
}
