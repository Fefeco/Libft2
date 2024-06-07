# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 10:09:12 by fcarranz          #+#    #+#              #
#    Updated: 2024/06/06 20:20:30 by fcarranz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -MMD
HEADER = $(INC_DIR)libft.h

#### DIRECTORIES ####
SRC_DIR = src/
SRC_BONUS_DIR = $(SRC_DIR)bonus/
OBJ_DIR = obj/
OBJ_BONUS_DIR = $(OBJ_DIR)bonus/
DEP_DIR = dep/
INC_DIR = inc/
#####################

OBJECTS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))
BONUS_OBJECTS = $(addprefix $(OBJ_BONUS_DIR), $(SRC_BONUS_FILES:.c=.o))
DEPENDENCIES = $(patsubst %.c, $(DEP_DIR)%.d, $(SRC_BONUS_FILES))

#### FILES ####
SRC_FILES = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c\
			ft_split.c \
			ft_strmapi.c\
			ft_striteri.c \
			ft_putchar_fd.c\
			ft_putstr_fd.c \
			ft_putendl_fd.c\
			ft_putnbr_fd.c
SRC_BONUS_FILES = $(SRC_FILES) \
					ft_lstnew_bonus.c \
					ft_lstadd_front_bonus.c \
					ft_lstsize_bonus.c \
					ft_lstlast_bonus.c \
					ft_lstadd_back_bonus.c \
					ft_lstdelone_bonus.c \
					ft_lstclear_bonus.c \
					ft_lstiter_bonus.c \
					ft_lstmap_bonus.c

################

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER) Makefile
	ar rcs $(NAME) $(OBJECTS)

bonus: $(BONUS_OBJECTS) $(HEADER) Makefile
	ar rcs $(NAME) $(BONUS_OBJECTS)
	@touch bonus

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR) $(DEP_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@mv $(OBJ_DIR)$*.d $(DEP_DIR)

$(OBJ_BONUS_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_BONUS_DIR) $(DEP_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	mv $(OBJ_BONUS_DIR)$*.d $(DEP_DIR)

clean:
	@rm -rf $(OBJ_DIR) $(DEP_DIR) bonus
	@echo "\n## Objects and dependencies removed"

fclean:	clean
	@rm -f $(NAME)
	@echo "## $(NAME) removed\n"

re:	fclean all

-include $(DEPENDENCIES)