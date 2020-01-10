# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rballage <rballage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/07 15:12:58 by rballage          #+#    #+#              #
#    Updated: 2020/01/10 14:08:39 by rballage         ###   ########.fr        #
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
	ft_split.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstclear.c \
	ft_lstmap.c

OLD = ft_memdel.c \
	ft_putchar.c \
	ft_strcat.c \
	ft_strclr.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strequ.c \
	ft_strjoinf.c \
	ft_strncat.c \
	ft_strncpy.c \
	ft_strnew.c \
	ft_swap.c \
	ft_strrev

OBJS = ${SRCS:.c=.o}
OBJS_OLD = ${OLD:.c=.o}

HEADERS = libft.h
CC = gcc -I includes
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

old :  ${OBJS} ${OBJS_OLD}
	ar rcs ${NAME} ${OBJS} ${OBJS_OLD}
clean:
	${RM} ${OBJS} ${OBJS_OLD}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean re fclean old
