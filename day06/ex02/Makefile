COMP_FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = identifier
SRCS = identifier.cpp
OBJS_DIR = objs/

OBJS = $(addprefix $(OBJS_DIR), $(SRCS:%.cpp=%.o))

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(NAME): $(OBJS)
	clang++ $(COMP_FLAGS) -o $@ $^

$(OBJS): $(OBJS_DIR)%.o: %.cpp
	clang++ $(COMP_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
