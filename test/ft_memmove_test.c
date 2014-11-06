/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:23:54 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:09 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

void			ft_memmove_test(char *source, size_t len, size_t more);
static void		big();
static void		overlap();

int				ft_memmove_test_all()
{
	printf("ft_memmove:");
	ft_memmove_test("hello", 5, 5);
	ft_memmove_test("", 0, 0);
	ft_memmove_test("", 0, 1);
	ft_memmove_test("", 0, 5);
	ft_memmove_test("a", 0, 0);
	ft_memmove_test("", 1, 1);
	ft_memmove_test("", 5, 0);
	ft_memmove_test("", 1, 0);
	ft_memmove_test("h", 1, 5);
	ft_memmove_test("h", 2, 5);
	ft_memmove_test("h", 2, 0);
	ft_memmove_test("\0", 2, 5);
	ft_memmove_test("h", 1, 5);
	ft_memmove_test("hello", 6, 5);
	overlap();
	big();
	printf("\n");
	return (0);
}

static void		overlap()
{
	char	ft[] = "Hello World!";
	char	theirs[] = "Hello World!";

	memmove(theirs + 2, theirs, 5);
	ft_memmove(ft + 2, ft, 5);
	if (memcmp(ft, theirs, 13))
		printf("[ft_memmove(overlap)]");
	else
	printf(".");
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
	ft_memmove_test(stuff, MAX_ARRAY_THING, 10);
	free(stuff);
}

void			ft_memmove_test(char *source, size_t len, size_t more)
{
	char	*ft = malloc(sizeof(char) * (len + more));
	char	*theirs = malloc(sizeof(char) * (len + more));
	char	*ft_ret;
	char	*theirs_ret;
	
	bzero(ft, len + more);
	bzero(theirs, len + more);
	ft_ret = ft_memmove(ft, source, len);
	theirs_ret = memmove(theirs, source, len);
	if (ft != ft_ret || theirs != theirs_ret)
		printf("[ft_memmove(dest, %s, %zu)::pointers]", source, len);
	else
	{
		if (memcmp(ft, theirs, len + more))
		{
			printf("\nft: |%s|; theirs: |%s|\n", ft, theirs);
			printf("[ft_memmove(dest, %s, %zu)::compare]", source, len);
		}
		else
			printf(".");
	}
	free(ft);
	free(theirs);
}
