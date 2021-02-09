COMP_FLAGS = -Wall -Wextra -Werror
NAME = megaphone
SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(COMP_FLAGS) -o $@ $^

%.o : %.cpp
	clang++ -c $< -o $@

clean:
	rm -f megaphone.o

fclean: clean
	rm -f megaphone

re:	fclean all

.PHONY: all clean fclean re
