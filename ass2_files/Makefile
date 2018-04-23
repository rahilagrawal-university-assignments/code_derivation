CFLAGS=-O -Wall -Werror

CFILES	:= $(wildcard *.c)
OFILES	:= $(patsubst %.c,%.o,$(CFILES))
TARGETS	:= emirp

.PHONY: all clean

all: emirp emirp.pdf

# remove -DUSEGMP and -lgmp unless you use gmp
emirp: reverse.c reverse.h emirp.c
	gcc $(CFLAGS) -DUSEGMP -c reverse.c 
	gcc $(CFLAGS) -lgmp reverse.o emirp.c -o emirp

emirp.pdf: emirp.tex
	latexmk -pdf emirp && latexmk -c 

clean:
	$(RM) $(OFILES) $(TARGETS) *.gch
	latexmk -C emirp
