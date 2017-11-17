# foobar.Makefile
# Vue, Athit
# avue

# This rule tells make how to "make" the executable sentence
main: main.o bar.o foo.o
	g++ -Wall -pedantic -std=c++11 -g -o foobar main.o bar.o foo.o

# This rule tells make how to "make" the object file main.o 
main.o: main.cpp bar.h foo.h
	g++ -Wall -pedantic -std=c++11 -g -c main.cpp

# This rule tells make how to "make" the object file sentence.o
bar.o: bar.cpp bar.h 
	g++ -Wall -pedantic -std=c++11 -g -c bar.cpp

# This rule tells make how to "make" the object file sentence.o
foo.o: foo.cpp foo.h
	g++ -Wall -pedantic -std=c++11 -g -c foo.cpp



# This rule tells make what to delete when the user type "make clean"
# BE VERY CAREFUL to only put generated files here
clean:
	rm -f main.o bar.o foo.o main