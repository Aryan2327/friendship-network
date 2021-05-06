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
	./$(EXECUTABLE) $(inputdir) $(workdir)

memcheck: $(EXECUTABLE)
	valgrind ./$(EXECUTABLE) $(inputdir) $(workdir)
