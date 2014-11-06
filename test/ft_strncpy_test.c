/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:14:53 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:08 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

void			ft_strncpy_test(char *source, size_t max);
static void		big();

int				ft_strncpy_test_all()
{
	printf("ft_strncpy:");
	ft_strncpy_test("", 1);
	ft_strncpy_test("a", 2);
	ft_strncpy_test("\0", 2);
	ft_strncpy_test("\200", 1);
	ft_strncpy_test("Hello World!", 0);
	ft_strncpy_test("Hello World!", 1);
	ft_strncpy_test("Hello World!", 2);
	ft_strncpy_test("Hello World!", 13);
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
	ft_strncpy_test(stuff, MAX_ARRAY_THING - 2);
	free(stuff);
}

void			ft_strncpy_test(char *source, size_t max)
{
	void	*ft;
	void	*theirs;
	void	*ret_ft;
	void	*ret_theirs;

	ft = malloc(sizeof(char) * strlen(source));
	theirs = malloc(sizeof(char) * strlen(source));
	ret_ft = ft_strncpy(ft, source, max);
	ret_theirs = strncpy(theirs, source, max);
	if (!memcmp(ft, theirs, max) && ret_ft == ft && ret_theirs == theirs)
		printf(".");
	else
	{
		if (strlen(source) > 200)
			printf("[ft_strncpy(%s, %zu)]", source, max);
		else
			printf("[ft_strncpy(!big!, %zu)]", max);
	}
}
