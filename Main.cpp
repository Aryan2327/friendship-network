#include <iostream>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <string>
#include "Parser.h"

int main(int argc, char *argv[]){
   std::string input;
   while (input != "exit"){
	   getline(std::cin, input);
	   Parser command(input);

	   if (command.getOperation() == "add"){
		   if (command.getArg1() == "song"){
			   // Insert song into system (BST)
		   }
		   else if (command.getArg1() == "user"){
			   // Add user/vertex to graph
		   }
	   }
   }
}