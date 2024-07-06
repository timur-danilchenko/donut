SOURCE=main.c
CC=gcc
FLAGS=-Wall -g
BIN=donut

all:
	@$(CC) $(FLAGS) -o ./$(BIN) $(SOURCE)
	@./$(BIN)