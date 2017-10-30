CXX := g++-7
CXXFLAGS := -std=c++11 -g3 -Og -fstack-protector --param ssp-buffer-size=4 -D_FORTIFY_SOURCE=2 -fPIC -pie -w

default: all

example2: main.cpp polygon.hpp triangle.so
	@echo CXX $@
	@$(CXX) $(CXXFLAGS) -o example2 main.cpp -ldl

triangle.so: triangle.cpp polygon.hpp
	@echo CXXLD $@
	@$(CXX) $(CXXFLAGS) -shared -o triangle.so triangle.cpp

all: example2 triangle.so

clean:
	@echo Removing compiled files
	@rm -f example2 triangle.so

.PHONY: clean
