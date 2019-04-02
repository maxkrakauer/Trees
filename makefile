#!make -f




demo: TreeTest.o Tree.o Node.o
	clang++-6.0 -std=c++17 $^ -o demo

test: tester2.o Tree.o Node.o
	clang++-6.0 -std=c++17 $^ -o test

%.o: %.cpp
	clang++-6.0 -std=c++17 --compile $< -o $@

TreeTest.o: badkan.hpp Tree.hpp Node.hpp layout.hpp
tester2.o: badkan.hpp Tree.hpp Node.hpp layout.hpp
test1.o: badkan.hpp Tree.hpp Node.hpp layout.hpp
Node.o: Node.cpp Node.hpp
	clang++-6.0 -std=c++17 --compile Node.cpp -o Node.o
Tree.o: Node.hpp Tree.hpp
    clang++-6.0 -std=c++17 --compile Tree.cpp -o Tree.o

clean:
	rm -f *.o demo test
