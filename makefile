# Use the first FLAGS definition for debugging, the 2nd for optimizing your code
FLAGS = -Wall -Wextra -g

CA = 5
EXECUTABLE = Main

## ADD TARGETS TO SEPARATELY COMPILE YOUR CODE FOR CA3 AND CREATE AN EXECUTABLE.

all:	Main

replaceme:
	echo "Did you remember to set the variables in the makefile?!"

scrub: clean
	rm ~* *.swp *\#

run: $(EXECUTABLE)
	./$(EXECUTABLE) < commands.txt

memcheck: $(EXECUTABLE)
	valgrind ./$(EXECUTABLE) $(inputdir) $(workdir)

Main:	Main.o
		g++ Main.o -o Main

Main.o:	Main.cpp
		g++ -c Main.cpp


## test for heap, use with make HeapTest, ./HeapTest
##feel free to adjust HeapTest.cpp with any other tests you want
HeapTest: HeapTest.o
		g++ HeapTest.o -o HeapTest

HeapTest.o:	HeapTest.cpp Heap.cpp
		g++ -c HeapTest.cpp Heap.cpp