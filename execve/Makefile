CC := gcc-7
CFLAGS := -std=c99 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w

default: all

myexecl: myexecl.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

myexecve: myexecve.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

mymkdir: mymkdir.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

myecho: myecho.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

mymv: mymv.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

strcat: strcat.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

all: myexecl myexecve mymkdir myecho mymv strcat

clean:
	@echo Removing compiled files
	@rm -f myexecl myexecve mymkdir myecho mymv strcat
