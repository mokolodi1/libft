/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 22:05:59 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:10 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

#define			METHOD			ft_isupper
#define			METHOD_TEST		ft_isupper_test
#define			METHOD_TEST_ALL	ft_isupper_test_all
#define			METHOD_QUOTES	"ft_isupper"
#define			IN_TYPE			int
#define			EXPECT_TYPE		int
#define			NUM_TESTS		13
#define			TO_STRING		// nothing

int				METHOD_TEST_ALL(void)
{
	unsigned int	i;
	unsigned int	problems;

	IN_TYPE			ins[] = {	// input
		'0',
		'9',
		'a',
		'A',
		'z',
		'Z',
		'A' - 1,
		'Z' + 1,
		0,
		1,
		500,
		-10000000,
		'K'
	};
	EXPECT_TYPE		expects[] = {	// output
		0,
		0,
		0,
		1,
		0,
		1,
		0,
		0,
		0,
		0,
		0,
		0,
		1
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
			// printf when not correct
			printf("["METHOD_QUOTES"(%i, %i) = %i]"		\
				   , ins[i], expects[i], TO_STRING(METHOD(ins[i])));
			problems++;
		}
		i++;
	}
	printf("\n");
	return (problems);
}

// whether it worked
int				METHOD_TEST(IN_TYPE input, EXPECT_TYPE expect)
{
	return (METHOD(input) == expect);
}

