# Compiler and flags
CC = gcc
CFLAGS = -Wall -I/usr/include/libxml2/libxml
LIBS = -L/cygdrive/c/cygwin64/usr/lib -lxml2

# Target executable
TARGET = program.exe

# Source file
SRC = sourcecode.c

# Object file
OBJ = sourcecode.o

# Default target
all: $(TARGET)

# Build the executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)

# Build the object file
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

# Clean the build files
clean:
	rm -f $(OBJ) $(TARGET)
