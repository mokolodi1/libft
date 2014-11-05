/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:08:50 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 22:20:48 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_lib_test.h"

int				ft_test_all(void)
{
	int			problems;

	problems = 0;

	//* non-obligatory
	ft_isupper_test_all();
	ft_islower_test_all();
	//*/ end of non-obligatory
	ft_tolower_test_all();
	ft_toupper_test_all();
	ft_isdigit_test_all();
	ft_isalpha_test_all();
	ft_isalnum_test_all();
	ft_isascii_test_all();
	ft_isprint_test_all();

	// memory
	ft_memcmp_test_all();
	ft_memset_test_all();
	ft_bzero_test_all();

	// strings
	ft_strlen_test_all();
	ft_strstr_test_all();

	// other
	ft_atoi_test_all();
	
	return (problems);
}
