COMP_FLAGS = -Wall -Wextra -Werror
NAME = phonebook
SRCS = Phonebook.class.cpp main.cpp Contact.class.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(COMP_FLAGS) -o $@ $^

%.o : %.cpp
	clang++ -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
