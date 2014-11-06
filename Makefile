#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 17:52:57 by tfleming          #+#    #+#              #
#    Updated: 2014/11/06 21:58:38 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =			libft.a

CC =			gcc
FLAGS =			-Wall -Werror -Wextra

COMPILED =		ft_islower.o \
				ft_isupper.o \
				ft_tolower.o \
				ft_toupper.o \
				ft_isdigit.o \
				ft_isalpha.o \
				ft_isalnum.o \
				ft_isascii.o \
				ft_isprint.o \
				ft_strlen.o \
				ft_strnlen.o \
				ft_strstr.o \
				ft_strcpy.o \
				ft_strncpy.o \
				ft_strdup.o \
				ft_strcat.o \
				ft_strncat.o \
				ft_memcpy.o \
				ft_memccpy.o \
				ft_memmove.o \
				ft_memcmp.o \
				ft_memset.o \
				ft_memchr.o \
				ft_bzero.o \
				ft_putchar.o \
				ft_atoi.o

all: $(NAME)

$(NAME): $(COMPILED)
	ar rc $(NAME) $(COMPILED)
	ranlib $(NAME)

$(COMPILED): %.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
	-/bin/rm -f $(COMPILED)

fclean: clean
	-/bin/rm -f $(NAME)

re: fclean all
