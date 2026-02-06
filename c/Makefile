# C Makefile
CC=gcc
CFLAGS=-Wall -Wextra -g
SRC_DIR=src
INCLUDE_DIR=include
BIN_DIR=bin
TARGET=$(BIN_DIR)/dlist

SRCS=$(SRC_DIR)/main.c $(SRC_DIR)/list.c

.PHONY: all build run clean debug

all: build

build: $(TARGET)

$(TARGET): $(SRCS)
mkdir -p $(BIN_DIR)
$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $(TARGET) $(SRCS)

run: build
$(TARGET)

# Launch gdb for debugging
debug: build
gdb $(TARGET)

clean:
rm -rf $(BIN_DIR)