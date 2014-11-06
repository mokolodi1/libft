/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:44:14 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:07 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

#define			METHOD			ft_tolower
#define			METHOD_TEST		ft_tolower_test
#define			METHOD_TEST_ALL	ft_tolower_test_all
#define			METHOD_QUOTES	"ft_tolower"
#define			IN_TYPE			int
#define			EXPECT_TYPE		int
#define			NUM_TESTS		16
#define			TO_STRING		// nothing

int				METHOD_TEST_ALL(void)
{
	unsigned int	i;
	unsigned int	problems;

	// data stuff
	IN_TYPE			ins[] = {
		'a',
		'A',
		'b',
		'N',
		'u',
		'z',
		'Z',
		',',
		'@',
		'[',
		'`',
		'{',
		0,
		1,
		500,
		-10000000
	};
	EXPECT_TYPE		expects[] = {
		'a',
		'a',
		'b',
		'n',
		'u',
		'z',
		'z',
		',',
		'@',
		'[',
		'`',
		'{',
		0,
		1,
		500,
		-10000000
	};
	printf(METHOD_QUOTES":");
	problems = 0;
	i = 0;
	while (i < NUM_TESTS)
	{
		if (METHOD_TEST(ins[i], expects[i]))
		{
			printf(".");
		}
		else
		{
			printf("["METHOD_QUOTES"(%i, %i) = %i]"		\
				   , ins[i], expects[i], TO_STRING(METHOD(ins[i])));
			problems++;
		}
		i++;
	}
	printf("\n");
	return (problems);
}

// other important method
int				METHOD_TEST(IN_TYPE input, EXPECT_TYPE expect)
{
	return (METHOD(input) == expect);
}
