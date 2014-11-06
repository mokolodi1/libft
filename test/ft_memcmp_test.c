/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:34:36 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:09 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

static int		ft_memcmp_test_general();
static int		ft_memcmp_upper_values();
static int		ft_memcmp_large(char add_first, char add_second);
static int		ft_memcmp_test(char *first, char *second
							   , size_t len);
static int		ft_memcmp_test_unsigned(unsigned char *first
										, unsigned char *second
										, size_t len);

int				ft_memcmp_test_all()
{
	printf("ft_memcmp:");
	ft_memcmp_test_general();
	ft_memcmp_large('a', 'a');
	ft_memcmp_large('a', 'b');
	ft_memcmp_upper_values();
	printf("\n");
	return (0);
}

static int		ft_memcmp_upper_values()
{
	unsigned char first = '\200';
	unsigned char second = '\0';

	return (ft_memcmp_test_unsigned(&first, &second, 1));
}

static int		ft_memcmp_large(char add_first, char add_second)
{
	size_t		large;
	size_t		i;
	char		*first;
	char		*second;

	large = (size_t)MAX_ARRAY_THING + (size_t)1;
	first = malloc(sizeof(char) * large);
	second = malloc(sizeof(char) * large);
	i = 0;
	while (i < large)
	{
		first[i] = i % 26 + add_first;
		second[i] = i % 26 + add_second;
		i++;
	}
	free(first);
	free(second);
	return (ft_memcmp_test(first, second, large));
}

static int		ft_memcmp_test_general()
{
	ft_memcmp_test("hello", "hello", 0);
	ft_memcmp_test("hello", "hello", 1);
	ft_memcmp_test("hello", "hello", 2);
	ft_memcmp_test("hello", "hello", 5);
	ft_memcmp_test("hello", "hello", 6);
	ft_memcmp_test("hello", "hell", 0);
	ft_memcmp_test("hello", "hell", 4);
	ft_memcmp_test("hello", "hell", 5);
	
	ft_memcmp_test("", "", 1);
	ft_memcmp_test("", "", 0);
	ft_memcmp_test("a", "b", 0);
	ft_memcmp_test("a", "b", 1);
	ft_memcmp_test("a", "b", 2);
	return (0);
}

static int		ft_memcmp_test_unsigned(unsigned char *first, unsigned char *second
							   , size_t len)
{
	if (memcmp(first, second, len) == ft_memcmp(first, second, len))
	{
		printf(".");
		return (0);
	}
	else
	{
		printf("[ft_memcmp(%s, %s, %zu)]", first, second, len);
		return (1);
	}
}

static int		ft_memcmp_test(char *first, char *second
							   , size_t len)
{
	int		theirs = memcmp(first, second, len);
	int		ft = ft_memcmp(first, second, len);
	if (theirs == ft)
	{
		printf(".");
		return (0);
	}
	else
	{
		if (len > 200)
			printf("[ft_memcmp(s2, s1, %zu)::%i!=%i]", len, ft, theirs);
		else
			printf("[ft_memcmp(%s, %s, %zu)::%i!=%i]", first, second, len
				   , ft, theirs);
		return (1);
	}
}
