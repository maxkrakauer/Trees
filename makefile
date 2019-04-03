#!make -f

demo: Node.o Tree.o TreeTest.o 
	clang++-6.0 -std=c++17 $^ -o demo

test: Node.o Tree.o tester2.o 
	clang++-6.0 -std=c++17 $^ -o test

%.o: %.cpp
	clang++-6.0 -std=c++17 --compile $< -o $@

TreeTest.o: Tree.hpp TreeTest.cpp badkan.hpp
	clang++-6.0 -std=c++17 --compile TreeTest.cpp -o TreeTest.o

tester2.o: Tree.hpp tester2.cpp badkan.hpp
	clang++-6.0 -std=c++17 --compile tester2.cpp -o tester2.o

Tree.o: Tree.cpp Node.hpp layout.hpp
	clang++-6.0 -std=c++17 --compile Tree.cpp -o Tree.o	

Node.o: Node.cpp
	clang++-6.0 -std=c++17 --compile Node.cpp -o Node.o
	
clean:
	m -f *.o demo test