/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:34:27 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/05 22:27:32 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			FT_LIB_H
# define		FT_LIB_H

/*
** Included for NULL, size_t
*/

# include		<stdlib.h>
# include		<unistd.h>
# include		<string.h>

/*
** memory
*/
int				ft_memcmp(const void *original, const void *new, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *string, size_t len);

/*
** character
*/
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

/*
** string
*/
size_t			ft_strlen(char *str);
char			*ft_strstr(const char *str, const char *to_find);

/*
** printing
*/
void			ft_putchar(char c);

/*
** other
*/
int				ft_atoi(const char *str);

#endif
