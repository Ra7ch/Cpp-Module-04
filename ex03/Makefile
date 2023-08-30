# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 05:30:26 by raitmous          #+#    #+#              #
#    Updated: 2023/08/30 04:25:12 by raitmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -g3
OBJS = $(SRCS:.cpp=.o)
NAME = main
CXX = c++


all	: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

a : all clean

.PHONY: all clean