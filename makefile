CXX = g++
CXX_FLAGS = -std=c++11 -Wall -Wextra -Werror -g -c

make: clean libparser.so newton.o copy
	$(CXX) -o nm.out main.o newton.o libparser.so

copy:
	cp ../MathFunctionParser/libparser.so .

libparser.so:
	$(MAKE) -C ../MathFunctionParser

newton.o:
	$(CXX) $(CXX_FLAGS) main.cpp newton.cpp

clean:
	rm -rf *.o *.so nm.out
