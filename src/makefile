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
	$(CC) -o $@ $^ $(CFLAGS)

../tests/obj/check_hellomake.o: ../tests/check_hellomake.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: ../tests/obj/check_hellomake.o hellofunc.o 
	$(CC) -pthread -o $@ -o $@ $^ $(CFLAGS) -l check -lm -lrt

run-test: test
	./test

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ ./hellomake ../tests/$(ODIR)/*.o ./test 

