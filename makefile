CC=g++

HDIR=header

_HEAD = prog.h glob.h game.h board.h
HEAD = $(patsubst %,$(HDIR)/%,$(_HEAD))

build: $(HEAD) prog.cpp
	@$(CC) -o GO prog.cpp

.PHONY: clean

clean: 
	@rm -rf ./GO

