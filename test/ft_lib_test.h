/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:48:43 byg  tfleming        #+#    #+#             */
/*   Updated: 2014/11/04 23:06:17 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			FT_LIB_TEST_H
# define		FT_LIB_TEST_H

# include		<stdio.h>

int				main(void);
int				ft_test_all(void);

int				ft_islower(int c);
int				ft_islower_test(int c, int expect);
int				ft_islower_test_all(void);

int				ft_isupper(int c);
int				ft_isupper_test(int c, int expect);
int				ft_isupper_test_all(void);

int				ft_tolower(int c);
int				ft_tolower_test(int c, int expect);
int				ft_tolower_test_all(void);

int				ft_toupper(int c);
int				ft_toupper_test(int c, int expect);
int				ft_toupper_test_all(void);

int				ft_isdigit(int c);
int				ft_isdigit_test(int c, int expect);
int				ft_isdigit_test_all(void);

int				ft_isalpha(int c);
int				ft_isalpha_test(int c, int expect);
int				ft_isalpha_test_all(void);

int				ft_isalnum(int c);
int				ft_isalnum_test(int c, int expect);
int				ft_isalnum_test_all(void);

#endif
