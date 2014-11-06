/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:55:14 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:08 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

void			ft_strcpy_test(char *source);
static void		big();

int				ft_strcpy_test_all()
{
	printf("ft_strcpy:");
	ft_strcpy_test("");
	ft_strcpy_test("a");
	ft_strcpy_test("\0");
	ft_strcpy_test("\200");
	ft_strcpy_test("Hello World!");
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
	ft_strcpy_test(stuff);
	free(stuff);
}

void			ft_strcpy_test(char *source)
{
	void	*ft;
	void	*theirs;
	void	*ret_ft;
	void	*ret_theirs;

	ft = malloc(sizeof(char) * strlen(source));
	theirs = malloc(sizeof(char) * strlen(source));
	ret_ft = ft_strcpy(ft, source);
	ret_theirs = strcpy(theirs, source);
	if (!strcmp(ft, theirs) && ret_ft == ft && ret_theirs == theirs)
		printf(".");
	else
	{
		if (strlen(source) > 200)
			printf("[ft_strcpy(%s)]", source);
		else
			printf("[ft_strcpy(!big!)]");
	}
}

