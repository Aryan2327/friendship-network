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
	valgrind ./$(EXECUTABLE) < commands.txt

Main:	Main.o Song.o
		g++ Main.o Song.o -o Main

Main.o:	Main.cpp
		g++ -c Main.cpp

Song.o: Song.cpp
		g++ -c Song.cpp

clean:
	rm -f *.o $(EXECUTABLE)
