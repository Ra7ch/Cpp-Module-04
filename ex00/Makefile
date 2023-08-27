# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 05:23:35 by raitmous          #+#    #+#              #
#    Updated: 2023/08/27 05:25:04 by raitmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp main.cpp
OBJS	= ${SRCS:.cpp=.o}
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= Animal
CXX		= c++

all	: ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

a : all clean
