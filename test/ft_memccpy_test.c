/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:04:39 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:10 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

static void		big();
void			ft_memccpy_test(char *src, int c
								, size_t len, size_t more);
void			print_error(const char *src, int c, size_t len, size_t more
							, char *other);

int				ft_memccpy_test_all(void)
{
	printf("ft_memccpy:");
	ft_memccpy_test("Hello World!", '\0', 2, 2);
	ft_memccpy_test("Hello World!", '\0', 0, 2);
	ft_memccpy_test("a", '\0', 100, 2);
	ft_memccpy_test("ab", '\0', 100, 2);
	ft_memccpy_test("Hello World!", '\0', 300, 2);
	ft_memccpy_test("Hello World!", '\0', 10, 2);
	ft_memccpy_test("Hello World!", '\0', 11, 2);
	ft_memccpy_test("", '\0', 0, 2);
	ft_memccpy_test("a", 'a', 2, 2);
	ft_memccpy_test("\200\200j\201", '\201', 5, 100);
	ft_memccpy_test("", '\0', 0, 200);
	ft_memccpy_test("hello", 'o', 2, 2);
	ft_memccpy_test("hello", 'o', 5, 2);
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
	ft_memccpy_test(stuff, 'b', MAX_ARRAY_THING, 10);
	free(stuff);
}

void			ft_memccpy_test(char *src, int c, size_t len, size_t more)
{
	char	*ft;
	char	*theirs;
	char	*ret_ft;
	char	*ret_theirs;
	size_t	full;

	full = len + more;
	ft = malloc(sizeof(char) * (full));
	theirs = malloc(sizeof(char) * (full));
	bzero(ft, full);
	bzero(theirs, full);
	ret_ft = ft_memccpy(ft, src, c, len);
	ret_theirs = memccpy(theirs, src, c, len);
	if (memcmp(ft, theirs, full))
		print_error(src, c, len, more, "not_same");
	else
	{
		if (ret_ft == NULL || ret_theirs == NULL)
		{
			if (ret_ft == NULL && ret_theirs == NULL)
				printf(".");
			else
			{
				printf("[ft=%p; theirs=%p]", ret_ft, ret_theirs);
				print_error(src, c, len, more, "NULL pointers");
			}
		}
		else
		{
			if ((size_t)(ft - ret_ft) == (size_t)(theirs - ret_theirs))
				printf(".");
			else
			{
				printf("differences: ft=%lu; theirs=%lu\n", ft - ret_ft
					   , theirs - ret_theirs);
				print_error(src, c, len, more, "pointer diff");
			}
		}
	}
	free(ft);
	free(theirs);
}

void			print_error(const char *src, int c, size_t len, size_t more
							, char *other)
{
	if (len + more > 200)
	{
		printf("[ft_memccpy(!big!, %i, %zu, %zu)::%s]"
			   , c, len, more, other);
	}
	else
	{
		printf("[ft_memccpy(\"%s\", %i, %zu, %zu)::%s]"
			   , src, c, len, more, other);
	}
}
	
