CC = gcc  
CFLAGS = -Wall -Wextra -O2  

SRC = src/strutil.c  
BIN = bin/strutil  

all: $(BIN)  

$(BIN): $(SRC)  
    $(CC) $(CFLAGS) -o $@ $<  

clean:  
    rm -f $(BIN)  

.PHONY: all clean  