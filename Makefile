# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 21:32:04 by yait-ouc          #+#    #+#              #
#    Updated: 2021/11/23 21:37:33 by yait-ouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c \
	  ft_putchar_fd.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_isprint.c \
	  ft_putendl_fd.c \
	  ft_strlcat.c \
	  ft_substr.c \
	  ft_atoi.c \
	  ft_itoa.c	\
	  ft_putnbr_fd.c \
	  ft_strlcpy.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_memchr.c \
	  ft_putstr_fd.c \
	  ft_strlen.c \
	  ft_toupper.c \
	  ft_calloc.c \
	  ft_memcmp.c \
	  ft_strmapi.c \
	  ft_isalnum.c \
	  ft_memcpy.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_isalpha.c \
	  ft_memmove.c \
	  ft_strdup.c \
	  ft_strnstr.c \
	  ft_isascii.c \
	  ft_split.c \
	  ft_memset.c \
	  ft_striteri.c \
	  ft_strrchr.c \

bonus_src = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c


OBJ = $(SRC:.c=.o)

bonus_obj = $(bonus_src:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) libft.h
	ar rcs $@ $^   

bonus : $(bonus_obj) libft.h 
	ar rcs $(NAME) $^ 

%.o : %.c libft.h
	$(CC) $(FLAGS)  -c $< -o $@ 

clean :
	rm -rf $(OBJ) $(bonus_obj)
fclean : clean
	rm -rf $(NAME)

re : fclean all
