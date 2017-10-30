CC := gcc-7
CFLAGS := -std=c99 -ansi -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w

default: all

libcat.so: cat.c dlopen_sample.c
	@echo CCLD $@
	@$(CC) $(CFLAGS) -shared $? -o $@

libdog.so: dog.c dlopen_sample.c
	@echo CCLD $@
	@$(CC) $(CFLAGS) -shared $? -o $@

dlopen_sample: dlopen_sample.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $< -ldl

run: 
	./dlopen_sample cat
	./dlopen_sample dog

all: dlopen_sample libcat.so libdog.so

clean:
	@echo Removing compiled files
	@rm -f dlopen_sample libcat.so libdog.so

