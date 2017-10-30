CC := gcc-7
CFLAGS := -std=c99 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w

default: all

demo_dynamic: demo_dynamic.o
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ $< -ldl

demo_shared: demo_use.o libhello.so
	@echo CC $@
	@$(CC) $(CFLAGS) -L. $< -o $@ -lhello

demo_static: demo_use.o libhello-static.a
	@echo CC $@
	@$(CC) $(CFLAGS) -L. $< -o $@ -lhello-static

demo_dynamic.o: demo_dynamic.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o demo_dynamic.o -c $<

libhello.o: libhello.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o libhello.o -c $<

libhello.so: libhello.o
	@echo CCLD $@
	@$(CC) $(CFLAGS) -shared -o libhello.so $< -lc

demo_use.o: demo_use.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o demo_use.o -c $<

libhello-static.o: libhello.c
	@echo CC $@
	@$(CC) $(CFLAGS) -o $@ -c $<

libhello-static.a: libhello-static.o
	@echo CCLD $@
	@aarch64-linux-android-ar rcs $@ $<

all: demo_dynamic demo_shared demo_static libhello-static.a libhello.so demo_dynamic.o libhello.o demo_use.o libhello-static.o

clean:
	@echo Removing compiled files
	@rm -f demo_dynamic demo_shared demo_static libhello-static.a libhello.so demo_dynamic.o libhello.o demo_use.o libhello-static.o

.PHONY: clean
