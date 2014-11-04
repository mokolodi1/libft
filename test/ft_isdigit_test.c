/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 21:39:11 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/04 21:45:36 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

#define			METHOD			ft_isdigit
#define			METHOD_TEST		ft_isdigit_test
#define			METHOD_TEST_ALL	ft_isdigit_test_all
#define			METHOD_QUOTES	"ft_isdigit"
#define			IN_TYPE			int
#define			EXPECT_TYPE		int
#define			NUM_TESTS		23
#define			TO_STRING		// nothing

int				METHOD_TEST_ALL(void)
{
	unsigned int	i;
	unsigned int	problems;

	IN_TYPE			ins[] = {	// input
		'0',
		'1',
		'0' - 1,
		'9',
		'9' + 1,
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
		-10000000,
		128 + '3',
		256 + '3'
	};
	EXPECT_TYPE		expects[] = {	// output
		1,
		1,
		0,
		1,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0, // -10000000
		0,
		0,
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
