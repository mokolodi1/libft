/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:34:27 by tfleming          #+#    #+#             */
/*   Updated: 2014/11/06 21:40:27 by tfleming         ###   ########.fr       */
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
void			*ft_memcpy(void *dest, const void *source, size_t len);
void			*ft_memccpy(void *dest, const void *source, int c, size_t len);
void			*ft_memmove(void *dest, const void *source, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memchr(const void *haystack, int needle, size_t len);
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
size_t			ft_strlen(const char *str);
size_t			ft_strnlen(const char *str, size_t max);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t max);
char			*ft_strdup(const char *source);
char			*ft_strcat(char *first, const char *second);
char			*ft_strncat(char *first, const char *second, size_t len);

/*
** printing
*/
void			ft_putchar(char c);

/*
** other
*/
int				ft_atoi(const char *str);

#endif
