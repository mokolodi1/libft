/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:23:40 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 21:11:48 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

static int		ft_strlen_test(char *str);
static int		big();

int				ft_strlen_test_all(void)
{
	printf("ft_strlen:");
	ft_strlen_test("");
	ft_strlen_test(" ");
	ft_strlen_test("\0");
	ft_strlen_test("\200");
	ft_strlen_test("a");
	ft_strlen_test("asdfasdf");
	ft_strlen_test("Hello World!");
	big();
	printf("\n");
	return (0);
}

static int		big()
{
	char 	*stuff = malloc(sizeof(char) * MAX_ARRAY_THING);
	size_t	i;

	i = 0;
	while (i < MAX_ARRAY_THING)
	{
		stuff[i] = 'a';
		i++;
	}
	stuff[MAX_ARRAY_THING - 1] = '\0';
	if (strlen(stuff) == ft_strlen(stuff))
	{
		printf(".");
		return (1);
	}
	else
	{
		printf("[ft_strlen(I BROKE IT)]");
		return (0);
	}
}

static int		ft_strlen_test(char *str)
{
	if (strlen(str) == ft_strlen(str))
	{
		printf(".");
		return (1);
	}
	else
	{
		printf("[ft_strlen(%s)]", str);
		return (0);
	}
}

