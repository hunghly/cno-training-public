# 1. Run `make` to create the binary
# 2. Run `make clean` to clean up artifacts

# Folder locations
SRC_FOLDER = src
INCLUDES_FOLDER = include
OUTPUT_FOLDER = output

# Compiler and flags
CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -Loutput -Wl,-rpath='$$ORIGIN'

# Targets/libraries
MAIN = main
UTILS = utils
LIB = -l$(UTILS)
OBJ_LIB = $(UTILS).o
SHARED_LIB = lib$(UTILS).so


all: $(MAIN)

$(OBJ_LIB): $(SRC_FOLDER)/$(UTILS).c
	$(CC) -c -fPIC -o $(OUTPUT_FOLDER)/$(OBJ_LIB) $<
	@echo "Object file '$@' created."

$(SHARED_LIB): $(OBJ_LIB)
	$(CC) -shared -o $(OUTPUT_FOLDER)/$@ $(OUTPUT_FOLDER)/$(OBJ_LIB)
	@echo "Shared library file '$@' created."

$(MAIN): $(SRC_FOLDER)/$(MAIN).c $(SHARED_LIB)
	$(CC) $(CFLAGS) -o $(OUTPUT_FOLDER)/$@ $< $(LDFLAGS) $(LIB)
	@echo "Binary executable file '$@' created."

clean:
	rm -f $(OUTPUT_FOLDER)/$(MAIN)
	rm -f $(OUTPUT_FOLDER)/$(OBJ_LIB)
	rm -f $(OUTPUT_FOLDER)/$(SHARED_LIB)