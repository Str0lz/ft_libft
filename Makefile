# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rballage <rballage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/07 15:12:58 by rballage          #+#    #+#              #
#    Updated: 2020/01/10 12:08:39 by rballage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalnum.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strlcpy.c \
	ft_strrchr.c \
	ft_bzero.c \
	ft_isascii.c \
	ft_memccpy.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strnstr.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_strdup.c \
	ft_split.c

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}

HEADERS = libft.h
CC = gcc -I includes
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus :  ${OBJS} ${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}
clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean re fclean bonus
