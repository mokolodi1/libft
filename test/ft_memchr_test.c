/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:39:43 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:10 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

void			ft_memchr_test(const void *haystack, int needle, size_t len);
static void		big();

int				ft_memchr_test_all()
{
	printf("ft_memchr:");
	ft_memchr_test("", 0, 1);
	ft_memchr_test("", 0, 0);
	ft_memchr_test("a", 'a', 1);
	ft_memchr_test("\200", '\200', 1);
	ft_memchr_test("hello", 'o', 6);
	ft_memchr_test("hello", 'o', 60);
	ft_memchr_test("hello", 'o', 4);
	ft_memchr_test("hello", 'o', 0);
	big();
	printf("\n");
	return (0);
}

static void		big()
{
	size_t	i = 0;
	char	*stuff = malloc(sizeof(char) * MAX_ARRAY_THING);

	while (i < MAX_ARRAY_THING)
	{
		stuff[i] = 'a';
		i++;
	}
	stuff[MAX_ARRAY_THING - 2] = 'b';
	stuff[MAX_ARRAY_THING - 1] = '\0';
	ft_memchr_test(stuff, 'b', MAX_ARRAY_THING);
	free(stuff);
}

void			ft_memchr_test(const void *haystack, int needle, size_t len)
{
	void	*ft;
	void	*theirs;

	ft = ft_memchr(haystack, needle, len);
	theirs = memchr(haystack, needle, len);
	if (ft == theirs)
		printf(".");
	else
		printf("[ft_memchr(%s, %i, %zu)::%p::%p]"
			   , (char*)haystack, needle, len, ft, theirs);
}
