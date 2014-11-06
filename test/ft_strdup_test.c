/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:59:31 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:08 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

void			ft_strdup_test(char *source);
static void		big();

int				ft_strdup_test_all()
{
	printf("ft_strdup:");
	ft_strdup_test("");
	ft_strdup_test("a");
	ft_strdup_test("\0");
	ft_strdup_test("\200");
	ft_strdup_test("Hello World!");
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
	ft_strdup_test(stuff);
	free(stuff);
}

void			ft_strdup_test(char *source)
{
	void	*ft;
	void	*theirs;

	ft = ft_strdup(source);
	theirs = strdup(source);
	if (!strcmp(ft, theirs))
		printf(".");
	else
	{
		if (strlen(source) > 200)
			printf("[ft_strdup(%s)]", source);
		else
			printf("[ft_strdup(!big!)]");
	}
}
