CC := gcc-7
CFLAGS := -std=c99 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w

lib_test:
	@echo CC $@
	@$(CC) $(CFLAGS) -I. *.c -o lib_test

all: lib_test

clean:
	@echo Removing compiled files
	@rm -f lib_test
