CC= gcc 
CFLAGS= -Wall

all: lec.dvi reverse.dvi 

lec.dvi: lec.tex reverse.tex # strrev2.tex strrev3.tex strcmp1.tex strcmp2.tex
	latex lec.tex

reverse.dvi: reverse.tex
	tex reverse.tex

reverse.tex: reverse.c
#	c2latex reverse.c reverse.tex
	tgrind -f reverse.c > reverse.tex
 
strrev:	reverse.o
	$(CC) reverse.c -o reverse

strrev2.tex: strrev2.c
	c2latex strrev2.c strrev2.tex
 
strrev2:	strrev2.o
	$(CC) strrev2.o -o strrev2
 
strrev3.tex: strrev3.c
	c2latex strrev3.c strrev3.tex
 
strrev3:	strrev3.o
	$(CC) strrev3.o -o strrev3
 
strcmp1.tex: strcmp1.c
	c2latex strcmp1.c strcmp1.tex
 
strcmp1:	strcmp1.o
	$(CC) strcmp1.o -o strcmp1

strcmp2.tex: strcmp2.c
	c2latex strcmp2.c strcmp2.tex
 
strcmp2:	strcmp2.o
	$(CC) strcmp2.o -o strcmp2

lec.ps: lec.dvi
	dvips-rok lec.dvi


print: lec.ps
	psprint lec.ps
