NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC		=	megaphone.cpp
			
#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all: $(NAME)
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

$(NAME): 
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: clean all

.PHONY: all clean re
