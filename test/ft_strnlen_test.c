/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:15:58 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:08 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

static int		ft_strnlen_test(char *str, size_t max);

int				ft_strnlen_test_all(void)
{
	printf("ft_strnlen:");
	ft_strnlen_test("", 5);
	ft_strnlen_test(" ", 5);
	ft_strnlen_test("\0", 5);
	ft_strnlen_test("\200", 5);
	ft_strnlen_test("a", 5);
	ft_strnlen_test("asdfasdf", 100);
	ft_strnlen_test("Hello World!", 100);
	ft_strnlen_test("", 0);
	ft_strnlen_test(" ", 0);
	ft_strnlen_test("\0", 0);
	ft_strnlen_test("\200", 0);
	ft_strnlen_test("a", 0);
	ft_strnlen_test("asdfasdf", 4);
	ft_strnlen_test("Hello World!", 1);
	printf("\n");
	return (0);
}

static int		ft_strnlen_test(char *str, size_t max)
{
	if (strnlen(str, max) == ft_strnlen(str, max))
	{
		printf(".");
		return (1);
	}
	else
	{
		printf("[ft_strnlen(%s, %zu)]", str, max);
		return (0);
	}
}
