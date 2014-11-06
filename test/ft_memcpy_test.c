/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:04:09 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:09 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

void			ft_memcpy_test(const char *source, size_t len, size_t more);
static void		big();

int				ft_memcpy_test_all()
{
	printf("ft_memcpy:");
	ft_memcpy_test("hello", 5, 5);
	ft_memcpy_test("hello", 5, 0);
	ft_memcpy_test("hello", 6, 0);
	ft_memcpy_test("hello", 0, 5);
	ft_memcpy_test("", 5, 5);
	ft_memcpy_test("h", 5, 5);
	ft_memcpy_test("\0", 5, 5);
	ft_memcpy_test("", 0, 5);
	ft_memcpy_test("", 1, 0);
	ft_memcpy_test("h", 0, 5);
	ft_memcpy_test("\0", 0, 5);
	ft_memcpy_test("hello", 6, 5);
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
	ft_memcpy_test(stuff, MAX_ARRAY_THING, 10);
	free(stuff);
	}

void			ft_memcpy_test(const char *source, size_t len, size_t more)
{
	char	*ft = malloc(sizeof(char) * (len + more));
	char	*theirs = malloc(sizeof(char) * (len + more));
	char	*ft_ret;
	char	*theirs_ret;
	
	bzero(ft, len + more);
	bzero(theirs, len + more);
	ft_ret = ft_memcpy(ft, source, len);
	theirs_ret = memcpy(theirs, source, len);
	if (ft != ft_ret || theirs != theirs_ret)
		printf("[ft_memcpy(dest, %s, %zu)::pointers]", source, len);
	else
	{
		if (memcmp(ft, theirs, len + more))
			printf("[ft_memcpy(dest, %s, %zu)::compare]", source, len);
		else
			printf(".");
	}
	free(ft);
	free(theirs);
}
