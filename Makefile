# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 10:09:12 by fcarranz          #+#    #+#              #
#    Updated: 2024/02/01 21:22:44 by fcarranz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
OBJECTS = ft_atoi.o ft_bzero.o \
		  ft_calloc.o ft_isalnum.o \
		  ft_isalpha.o ft_isascii.o \
		  ft_isdigit.o ft_isprint.o \
		  ft_memchr.o ft_memcmp.o \
		  ft_memcpy.o ft_memmove.o \
		  ft_memset.o ft_strchr.o \
		  ft_strdup.o ft_strlcat.o \
		  ft_strlcpy.o ft_strlen.o \
		  ft_strncmp.o ft_strnstr.o \
		  ft_strrchr.o ft_tolower.o \
		  ft_toupper.o ft_substr.o \
		  ft_strjoin.o ft_strtrim.o \
		  ft_itoa.o ft_split.o \
		  ft_strmapi.o ft_striteri.o \
		  ft_putchar_fd.o ft_putstr_fd.o \
		  ft_putendl_fd.o ft_putnbr_fd.o
BONUS_OBJECTS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o \
				ft_lstsize_bonus.o ft_lstlast_bonus.o \
				ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
				ft_lstclear_bonus.o ft_lstiter_bonus.o \
				ft_lstmap_bonus.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c libft.h Makefile
	cc $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS) $(BONUS_OBJECTS) bonus

fclean:	clean
	rm -f $(NAME)

re:	fclean all

bonus: $(BONUS_OBJECTS)
	ar rcs $(NAME) $(BONUS_OBJECTS)
	@touch $@
