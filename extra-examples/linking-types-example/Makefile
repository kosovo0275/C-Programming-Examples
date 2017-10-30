CC := gcc-7
CFLAGS=-Wall -std=c99 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2

default: all

libfoo.a:
	@echo CCLD libfoo.a
	@${CC} ${CFLAGS} -c one.c two.c
	@ar cr libfoo.a one.o two.o

libfoo.so: one.c two.c
	@echo CCLD libfoo.so
	@${CC} ${CFLAGS} -fPIC -c one.c two.c
	@${CC} -shared -o libfoo.so one.o two.o

shared: libfoo.so main.c
	@echo CC shared
	@rm -f libfoo.a  # force use of .so file
	@${CC} ${CFLAGS} -o shared main.c  -L. -lfoo 

static: libfoo.a main.c
	@echo CC static
	@rm -f libfoo.so  # force use of .a file
	@${CC} ${CFLAGS} -o static main.c -L. -lfoo

dynamic: libfoo.so dlexample.c
	@echo CC dynamic
	@rm -f libfoo.a  # force use of .so file
	@${CC} ${CFLAGS} -o dynamic dlexample.c -ldl

all: shared static dynamic

clean:
	@echo Removing compiled files
	@rm -f libfoo.a libfoo.so *.o static dynamic shared
