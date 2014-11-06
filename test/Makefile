#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 16:46:58 by tfleming          #+#    #+#              #
#    Updated: 2014/11/06 20:32:05 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_lib_test

CC =			gcc
FLAGS =			-Wall -Werror -Wextra

LIB_DIR =		../
LIB_MAKE =		$(LIB_DIR)Makefile

TEST_COMPILED =	main.o \
				ft_islower_test.o \
				ft_isupper_test.o \
				ft_test_all.o \
				ft_tolower_test.o \
				ft_toupper_test.o \
				ft_isdigit_test.o \
				ft_isalpha_test.o \
				ft_isalnum_test.o \
				ft_isascii_test.o \
				ft_isprint_test.o \
				ft_strlen_test.o \
				ft_strnlen_test.o \
				ft_strstr_test.o \
				ft_strcpy_test.o \
				ft_strncpy_test.o \
				ft_strdup_test.o \
				ft_memcmp_test.o \
				ft_memcpy_test.o \
				ft_memccpy_test.o \
				ft_memmove_test.o \
				ft_memset_test.o \
				ft_memchr_test.o \
				ft_bzero_test.o \
				ft_atoi_test.o

all: $(NAME)

$(NAME): $(TEST_COMPILED)
	make -C $(LIB_DIR)
	$(CC) -o $(NAME) $(FLAGS) \
		$(TEST_COMPILED) \
		-L $(LIB_DIR) -lft

$(TEST_COMPILED): %.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
	-/bin/rm -f $(TEST_COMPILED)

fclean: clean
	-/bin/rm -f $(NAME) $(FT_LIB) $(LIST_LIB) $(FILE_LIB)

re:
	make -C $(LIB_DIR) re
	make fclean
	make all