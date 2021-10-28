SRCS = 	main.cpp\
		ClapTrap.cpp\

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Clap_Trap


all : $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)
clean :
	rm -Rf $(NAME)

fclean: clean

re : fclean all