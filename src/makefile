IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

_$(ODIR)/%.o: %.c $(DEPS)
obj/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: hellomake test

hellomake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

../tests/obj/check_hellomake.o: ../tests/check_hellomake.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: ../tests/obj/check_hellomake.o
	gcc -pthread -o $@ -o $@ $^ $(CFLAGS) -l check -lm

run-test: test
	./test

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ ./hellomake ../tests/$(ODIR)/*.o ./test 

