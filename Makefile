CC = gcc
CFLAGS = -Wall -Wextra

SRC = main.c sauces/mayo.h sauces/ketchup.h spice_library/basil.c recipe.h ingredients.h
OBJ = $(SRC:.c=.o)
TARGET = sauceware

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
