# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nschat <nschat@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/30 15:45:04 by nschat        #+#    #+#                  #
#    Updated: 2021/11/30 15:57:58 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC := c++

CPPFLAGS ?= -Wall -Wextra -Werror -std=c++98 -pedantic
LDFlAGS ?= 

SRC := main.cpp \
	   Fixed.cpp

OBJ := $(SRC:.cpp=.o)

HDR := Fixed.hpp

NAME := a.out

.PHONY: fclean clean re

all: $(NAME)

$(NAME): $(HDR) | $(OBJ)
	$(CC) $(LDFLAGS) $| -o $@

%.o: %.c
	$(CC) $(CPPFLAGS) -c $^

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJ)

re: fclean all
