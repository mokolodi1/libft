/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 20:58:51 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 21:40:51 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

static int		big();
static int		ft_strstr_test(const char *s1, const char *s2);

int				ft_strstr_test_all(void)
{
	printf("ft_strstr:");
	ft_strstr_test("", "");
	ft_strstr_test("a", "");
	ft_strstr_test("", "a");
	ft_strstr_test("a", "a");
	ft_strstr_test("b", "b");
	ft_strstr_test("", "aa");
	ft_strstr_test("aa", "");
	ft_strstr_test("aa", "aa");
	ft_strstr_test("ab", "a");
	ft_strstr_test("a", "ab");
	ft_strstr_test(" ", "b");
	ft_strstr_test("ab", "abc");
	ft_strstr_test("a", "aba");
	ft_strstr_test("aaaaa", "aaaa");
	big();
	printf("\n");
	return (0);
}

static int		big()
{
	char 	*stuff = malloc(sizeof(char) * MAX_ARRAY_THING);
	size_t	i;
	char	search_for;

	i = 0;
	while (i < MAX_ARRAY_THING)
	{
		stuff[i] = 'a';
		i++;
	}
	stuff[MAX_ARRAY_THING - 2] = 'b';
	stuff[MAX_ARRAY_THING - 1] = '\0';
	search_for = 'b';
	if (ft_strstr(stuff, &search_for) == strstr(stuff, &search_for))
	{
		printf(".");
		return (1);
	}
	else
	{
		printf("[ft_strstr(big one breaks)]");
		return (0);
	}
}

static int		ft_strstr_test(const char *s1, const char *s2)
{
	if (strstr(s1, s2) == ft_strstr(s1, s2))
	{
		printf(".");
		return (0);
	}
	else
	{
		printf("[ft_strstr(%s, %s)]", s1, s2);
		return (1);
	}
}
