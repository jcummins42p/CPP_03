# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <jcummins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2024/11/19 17:06:30 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serena

CXX = c++
CXXFLAGS = -g -Werror -Wextra -Wall -pedantic -std=c++98

SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp
OBJS = $(SRCS:%.cpp=%.o)
HEADS = ClapTrap.hpp ScavTrap.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "✅ Linking object files into executable $@"

%.o: %.cpp $(HEADS)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "✅ Complied object file $@ from source file $<"

clean:
	@echo "💥 Removing all object files"
	@rm -f $(OBJS)

fclean: clean
	@echo "💥 Removing all object files and executable"
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
