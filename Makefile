CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)
NAME = executable
RM = rm
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89

VALGRIND = valgrind
V_FLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes

BT = betty
HEADER = $(wildcard *.h)

MAIN_DIR = mains
MAIN_FILES = main0 main1 main2 main3
BINARIES = $(MAIN_FILES:%=%)

all: $(BINARIES)

# Rule to build a specific main file
$(BINARIES): %: $(OBJ) $(MAIN_DIR)/%.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@

.PHONY: $(BINARIES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -rf *~ $(NAME) $(BINARIES) $(OBJ)

betty:
	$(BT) $(SRC) $(HEADER)

memory:
	$(VALGRIND) $(V_FLAGS) ./$(NAME)