CC = gcc
TARGET = main

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,obj/%.o,$(SRC))

# Target
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compile each .c file into .o 
obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)
