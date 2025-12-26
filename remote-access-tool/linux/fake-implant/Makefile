# 1. Run `make` to create the binary
# 2. Run `make clean` to clean up artifacts

# Targets/libraries
MAIN = fake-implant

# Flags
CC = gcc
CFLAGS = -g -Wall

all: $(MAIN)

$(MAIN): $(MAIN).c
	$(CC) $(CFLAGS) -o $@.bin $<
	@echo "Binary executable file '$@' created."

clean:
	rm -f $(MAIN)