CC := gcc-7
CFLAGS := -std=c99 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w

default: all

custom_cleaner: custom_cleaner.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

example: example_main.c example_secondary.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $?

memcpy: memcpy.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

memmove: memmove.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

memory: memory.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

myfgets: myfgets.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

mymemcpy: mymemcpy.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

putchar: putchar.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

reading_text: reading_text.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

regex: regex.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

replace_str: replace_str.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

rmblanks: rmblanks.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

rmcomments: rmcomments.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

searchstringinfile: searchstringinfile.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

all: custom_cleaner example memcpy memmove memory myfgets mymemcpy putchar reading_text regex replace_str rmblanks rmcomments searchstringinfile

clean:
	@echo Removing compiled files
	@rm -f custom_cleaner example memcpy memmove memory myfgets mymemcpy putchar reading_text regex replace_str rmblanks rmcomments searchstringinfile



