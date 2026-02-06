# Java Makefile
JAVAC=javac
JAVA=java
SRC_DIR=src
BIN_DIR=bin
MAIN_CLASS=HelloWorld

.PHONY: all build run clean debug

all: build

build:
mkdir -p $(BIN_DIR)
$(JAVAC) -d $(BIN_DIR) $(SRC_DIR)/*.java

run: build
$(JAVA) -cp $(BIN_DIR) $(MAIN_CLASS)

# run with jdb (Java debugger)
debug: build
jdb -classpath $(BIN_DIR) $(MAIN_CLASS)

clean:
rm -rf $(BIN_DIR)