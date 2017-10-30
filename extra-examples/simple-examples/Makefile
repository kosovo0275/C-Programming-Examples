CC=gcc-7
CFLAGS=-Wpedantic -std=c99 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w
LIBS=-lrt -lpthread -lreadline -ldl -lm

SOURCE=$(wildcard *.c)
HEADER=$(wildcard *.h)
EXEC=$(SOURCE:.c=)
UNAME=$(shell uname)

all: ${EXEC}

.SECONDEXPANSION:
${EXEC}: $$(addsuffix .c, $$@) Makefile
	@echo CC $@
	@${CC} ${CFLAGS} -o $@ $@.c ${LIBS}

.PHONY: clean

clean:
	@echo Removing compiled files
	@rm -f a.out file.txt gmon.out *.temp ${EXEC} ${EXEC:=.o} core *~
	@rm -rf ${EXEC:=.dSYM}
