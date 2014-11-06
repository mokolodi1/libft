/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:11:12 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:58:11 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libft_test.h"

static void		ft_atoi_test(char *input);

int				ft_atoi_test_all(void)
{
	printf("ft_atoi:");
	ft_atoi_test("");
	ft_atoi_test("a");
	ft_atoi_test("d");
	ft_atoi_test("\47");
	ft_atoi_test("\58");
	ft_atoi_test("-");
	ft_atoi_test("-----");
	ft_atoi_test("------0");
	ft_atoi_test("0");
	ft_atoi_test("-1");
	ft_atoi_test("-300");
	ft_atoi_test("1");
	ft_atoi_test(" -0");
	ft_atoi_test(" 0");
	ft_atoi_test("1234");
	ft_atoi_test("987");
	ft_atoi_test("29384792834792837468572364826");
	ft_atoi_test("29384798723");
	ft_atoi_test("29384798723234786");
	ft_atoi_test("293847987232347867");
	
	ft_atoi_test("9223372036854775807");
	ft_atoi_test("9223372036854775808");
	
	
	ft_atoi_test("9999999999999999999");
	ft_atoi_test("10000000000000000000");
	ft_atoi_test("29384798723892374234");
	ft_atoi_test("293847987238923742347");
	ft_atoi_test("23478923478234789234782367895789236497826");
	ft_atoi_test("2147483647");
	ft_atoi_test("2147483648");
	ft_atoi_test("999999999");
	ft_atoi_test("9999");
	ft_atoi_test("---3");
	ft_atoi_test("----3");
	ft_atoi_test("------------------3");
	ft_atoi_test("01");
	ft_atoi_test("004");
	ft_atoi_test("%4");
	ft_atoi_test("1");
	printf("\n");
	return (0);
}

static void		ft_atoi_test(char *input)
{
	int		ft;
	int		theirs;

	ft = ft_atoi(input);
	theirs = atoi(input);
	if (ft == theirs)
		printf(".");
	else
		printf("[ft_atoi(%s)::%i!=%i]", input, ft, theirs);
}
