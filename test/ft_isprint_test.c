/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:41:06 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:10 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

static int		ft_isprint_test(int c);

int				ft_isprint_test_all(void)
{
	printf("ft_isprint:");
	ft_isprint_test(0);
	ft_isprint_test(-1);
	ft_isprint_test(1);
	ft_isprint_test(' ');
	ft_isprint_test(' ' - 1);
	ft_isprint_test(' ' + 1);
	ft_isprint_test('a');
	ft_isprint_test('&');
	ft_isprint_test('~');
	ft_isprint_test('~' - 1);
	ft_isprint_test('~' + 1);
	ft_isprint_test(1000000);
	printf("\n");
	return (0);
}

static int		ft_isprint_test(int c)
{
	if (isprint(c) == ft_isprint(c))
	{
		printf(".");
		return (1);
	}
	else
	{
		printf("[ft_isprint(%i)]", c);
		return (0);
	}
}

