NAME = harlFilter

# Flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 # -g
FLAGS =

# Directories
SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj

# Files
SRC =	main.cpp			\
	Harl.cpp

OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Colors
RESET			= "\033[0m"
GREEN			= "\033[32m"
RED			= "\033[91m"
YELLOW			= "\033[93m"


# Rules
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -I $(INC_DIR) $(FLAGS)
	@$(MAKE) format
	@echo $(GREEN)"--- EXECUTABLE ./$(NAME) is ready ---"$(RESET)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	@echo $(RED)"--- EXECUTABLE ./$(NAME) is removed ---"$(RESET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $< -c -o $@ -I $(INC_DIR)

re: fclean all

# My rules

format:
	@echo $(YELLOW)
	@echo ".---------------------------------------------------------."
	@echo "|                 REGLES STIPULEES DE 42.                 |"
	@echo "|                                                         |"
	@echo "| 1.  Nom de classe au format UpperCamelCase, ainsi que   |"
	@echo "|    les fichiers qui contiennent les classes.            |"
	@echo "|                                                         |"
	@echo "| 2.  Message affiché sur STDOUT avec '\\\n'.               |"
	@echo "|                                                         |"
	@echo "| 3.  Aucune bibliothèque externe. (C++11, Boost          |"
	@echo "|    interdit).                                           |"
	@echo "|                                                         |"
	@echo "| 4. 'Namespace' ou 'friend' interdit.                    |"
	@echo "|                                                         |"
	@echo "| 5. Container, <algorithm> interdit sauf Cpp 08, Cpp 09. |"
	@echo "|                                                         |"
	@echo "| 6. Memory leaks de 'new'.                               |"
	@echo "|                                                         |"
	@echo "| 7. Classe en forme canonique Cpp 02 au Cpp 09.          |"
	@echo "|                                                         |"
	@echo "| 8. Include guards pour les .h                           |"
	@echo "|                                                         |"
	@echo "| 9. Peut ajouter un README.md                            |"
	@echo "|                                                         |"
	@echo ".---------------------------------------------------------."
	@echo $(RESET)

sub:
	git submodule update --init --recursive --remote

rf: re
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)
	@echo $(RED)"--- EXECUTABLE ./$(NAME) is removed ---"$(RESET)

s:
	ls -lh $(NAME)

val:
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)

leak:
	leaks --atExit -- ./$(NAME)

.PHONY: all clean fclean re format sub rf s val leak
