/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:48:43 byg  tfleming        #+#    #+#             */
/*   Updated: 2014/11/06 20:18:17 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			FT_LIB_TEST_H
# define		FT_LIB_TEST_H

# include		<stdio.h>
# include		<stdlib.h>
# include		<limits.h>
# include		<ctype.h>
# include		"../ft_lib.h"

# define		MAX_ARRAY_THING			10//UINT_MAX

int				main(void);
int				ft_test_all(void);

int				ft_islower_test(int c, int expect);
int				ft_islower_test_all(void);

int				ft_isupper_test(int c, int expect);
int				ft_isupper_test_all(void);

int				ft_tolower_test(int c, int expect);
int				ft_tolower_test_all(void);

int				ft_toupper_test(int c, int expect);
int				ft_toupper_test_all(void);

int				ft_isdigit_test(int c, int expect);
int				ft_isdigit_test_all(void);

int				ft_isalpha_test(int c, int expect);
int				ft_isalpha_test_all(void);

int				ft_isalnum_test(int c, int expect);
int				ft_isalnum_test_all(void);

int				ft_isascii_test_all();
int				ft_isprint_test_all();
int				ft_strlen_test_all();
int				ft_strnlen_test_all();
int				ft_strstr_test_all();
int				ft_strcpy_test_all();
int				ft_strncpy_test_all();
int				ft_strdup_test_all();
int				ft_memcmp_test_all();
int				ft_memcpy_test_all();
int				ft_memccpy_test_all();
int				ft_memmove_test_all();
int				ft_memset_test_all();
int				ft_memchr_test_all();
int				ft_bzero_test_all();
int				ft_atoi_test_all();

#endif
