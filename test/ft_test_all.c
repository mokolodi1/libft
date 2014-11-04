/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:08:50 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/04 23:05:15 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

int				ft_test_all(void)
{
	int			problems;

	problems = 0;

	// need to fix this
	ft_isupper_test_all();
	ft_islower_test_all();
	ft_tolower_test_all();
	ft_toupper_test_all();
	ft_isdigit_test_all();
	ft_isalpha_test_all();
	ft_isalnum_test_all();
	return (problems);
}
