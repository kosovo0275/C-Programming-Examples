CXX := g++-7
CXXFLAGS := -std=c++11 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w

default: all

example3: main.cpp hello.so
	@echo CXX $@
	@$(CXX) $(CXXFLAGS) -o example3 main.cpp -ldl

hello.so: hello.cpp
	@echo CXXLD $@
	@$(CXX) $(CXXFLAGS) -shared -o hello.so hello.cpp

all: example3 hello.so

clean:
	@echo Removing compiled files
	@rm -f example3 hello.so

.PHONY: clean
