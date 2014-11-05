/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:11:30 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 19:05:45 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

static void		ft_memset_test_general();
static int		ft_memset_test(int value, size_t len);
static void		ft_memset_test_large();
static int		ft_memset_test_touches_other(int value, size_t len);
static int		ft_memset_test_upper_values();

int				ft_memset_test_all(void)
{
	printf("ft_memset:");
	ft_memset_test_general();
	ft_memset_test_large();
	ft_memset_test_upper_values();
	printf("\n");
	return (0);
}

static int		ft_memset_test_upper_values()
{
	unsigned char	*ft = malloc(sizeof(char));
	unsigned char	*theirs = malloc(sizeof(char));

	bzero(ft, '\0');
	bzero(theirs, '\0');
	ft_memset(ft, 200, 1);
	memset(theirs, 200, 1);
	if (memcmp(ft, theirs, 1))
	{
		printf("[ft_memset(%s, %i, %i)]", "asdf", 200, 1);
		return (1);
	}
	else
	{
		printf(".");
		return (0);
	}
}

static void		ft_memset_test_large()
{
	ft_memset_test('a', (size_t)MAX_ARRAY_THING + (size_t)5);
	ft_memset_test('b', (size_t)MAX_ARRAY_THING + (size_t)100);
}

static void		ft_memset_test_general()
{
	ft_memset_test(0, 0);
	ft_memset_test(0, 1);
	ft_memset_test(0, 2);
	ft_memset_test(0, (size_t)MAX_ARRAY_THING + (size_t)3);
	ft_memset_test(4, 0);
	ft_memset_test(4, 2);
	ft_memset_test(-1, 100);
	ft_memset_test(200, 200);
	ft_memset_test(500, 200);
	ft_memset_test_touches_other(0, 0);
	ft_memset_test_touches_other(0, 1);
	ft_memset_test_touches_other(0, 2);
	ft_memset_test_touches_other(0, (size_t)MAX_ARRAY_THING + (size_t)3);
	ft_memset_test_touches_other(4, 0);
	ft_memset_test_touches_other(4, 2);
}

static int		ft_memset_test_touches_other(int value, size_t len)
{
	unsigned char	*ft = malloc(sizeof(char) * (len + 1));
	unsigned char	*theirs = malloc(sizeof(char) * (len + 1));

	bzero(ft, '\0');
	bzero(theirs, '\0');
	ft_memset(ft, value, len);
	memset(theirs, value, len);
	if (memcmp(ft, theirs, len + 1))
	{
		if (len > 200)
			printf("[ft_memset(!big_string!, %i, %zu)]", value, len);
		else
			printf("[ft_memset(stuff, %i, %zu)]", value, len);
		return (1);
	}
	else
	{
		printf(".");
		return (0);
	}
}

static int		ft_memset_test(int value, size_t len)
{
	unsigned char	*ft = malloc(sizeof(char) * len);
	unsigned char	*theirs = malloc(sizeof(char) * len);

	bzero(ft, '\0');
	bzero(theirs, '\0');
	ft_memset(ft, value, len);
	memset(theirs, value, len);
	if (memcmp(ft, theirs, len))
	{
		if (len > 200)
			printf("[ft_memset(!big_string!, %i, %zu)]", value, len);
		else
			printf("[ft_memset(stuff, %i, %zu)]", value, len);
		return (1);
	}
	else
	{
		printf(".");
		return (0);
	}
}
