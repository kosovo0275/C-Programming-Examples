CC := gcc-7
CFLAGS := -std=c99 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie

default: all

array-functions: array-functions.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

array-of-pointers: array-of-pointers.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

array-of-structs: array-of-structs.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

array-pointers: array-pointers.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

block-scope: block-scope.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

calloc: calloc.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

cli-args: cli-args.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

conditional-loop: conditional-loop.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

do-while-loop: do-while-loop.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

enums-usage: enums-usage.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

enums: enums.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

for-multiple-expr: for-multiple-expr.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

forward-ref-struct: forward-ref-struct.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

free: free.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

functions: functions.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

gets: gets.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

hex: hex.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

init-string: init-string.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

linked-list: linked-list-driver.c linked-list.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $?

malloc: malloc.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

multidimensional-arrays: multidimensional-arrays.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

mygets: mygets.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

mystrcpy: mystrcpy.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

mystrlen: mystrlen.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

nested-loop: nested-loop.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

nested-structs: nested-structs.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

pass-struct-to-func: pass-struct-to-func.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

pointer-arithmetic: pointer-arithmetic.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

pointer-function: pointer-function.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

pointer-subtraction: pointer-subtraction.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

pointer-to-function: pointer-to-function.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

pointer-to-struct: pointer-to-struct.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

realloc: realloc.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

recursive-function: recursive-function.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

scanf: scanf.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

scope: scope.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

static-specifier: static-specifier.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

strcpy: strcpy.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

strlen: strlen.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

struct-init: struct-init.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

struct: struct.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

sum: sum.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

typedefs: typedefs.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

variable-args: variable-args.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

void-prototype: void-prototype.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

while-loop: while-loop.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $<

all: array-functions array-of-pointers array-of-structs array-pointers block-scope calloc cli-args conditional-loop do-while-loop enums-usage enums for-multiple-expr forward-ref-struct free functions gets hex init-string linked-list malloc multidimensional-arrays mygets mystrcpy mystrlen nested-loop nested-structs pass-struct-to-func pointer-arithmetic pointer-function pointer-subtraction pointer-to-function pointer-to-struct realloc recursive-function scanf scope static-specifier strcpy strlen struct-init struct sum typedefs variable-args void-prototype while-loop 

clean:
	@echo Removing compiled files
	@rm -f array-functions array-of-pointers array-of-structs array-pointers block-scope calloc cli-args conditional-loop do-while-loop enums-usage enums for-multiple-expr forward-ref-struct free functions gets hex init-string linked-list malloc multidimensional-arrays mygets mystrcpy mystrlen nested-loop nested-structs pass-struct-to-func pointer-arithmetic pointer-function pointer-subtraction pointer-to-function pointer-to-struct realloc recursive-function scanf scope static-specifier strcpy strlen struct-init struct sum typedefs variable-args void-prototype while-loop 
