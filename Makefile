NAME = math_modelling
HEADER = INCLUDES/header.h
SRCS = SRCS/main.cpp SRCS/tools.cpp

CFLAGS = -Wall -Werror -Wextra

CC = g++

run:
	g++ $(SRCS) -I $(HEADER) -o $(NAME)

binrun:
	./$(NAME)

all: run binrun

fclean:
	rm -f $(NAME)

.PHONY: run binrun
.SILENT: run binrun
