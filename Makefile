# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybringui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 11:49:04 by ybringui          #+#    #+#              #
#    Updated: 2023/03/07 11:02:26 by ybringui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
      ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
      ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
      ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
      ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
      ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
      ft_tolower.c ft_toupper.c\
       
SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	ft_lstclear.c ft_lstiter.c ft_lstmap.c\

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = $(SRCSBONUS:.c=.o)

CC	= clang

RM	= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJS}
	ar rsc ${NAME} ${OBJS}

bonus : $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

all:	${NAME}

topall:	${NAME} bonus

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all
