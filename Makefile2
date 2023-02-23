# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckretsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 12:05:11 by ckretsch          #+#    #+#              #
#    Updated: 2023/02/20 12:24:38 by ckretsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c

OBJS		= $(SRCS:.c=.o)

BONUS		=	

BONUS_OBJS	= $(BONUS:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS		= -Wall -Wextra -Werror -I.

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
		$(RM) $(NAME)


re:		fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re bonus
