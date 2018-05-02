CFLAGS=-O -Wall -Werror

CFILES	:= $(wildcard *.c)
OFILES	:= $(patsubst %.c,%.o,$(CFILES))
TARGETS	:= emirp 

.PHONY: all clean

all: $(TARGETS)

# remove -DUSEGMP and -lgmp unless you use gmp
emirp: reverse.c reverse.h emirp.c
	gcc $(CFLAGS) -c reverse.c 
	gcc $(CFLAGS) reverse.o emirp.c -o emirp

emirp.pdf: emirp.tex
	latexmk -pdf emirp.tex && latexmk -c

clean:
	$(RM) $(OFILES) $(TARGETS) *.gch emirp.pdf && latexmk -c
