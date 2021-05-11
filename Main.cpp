#include <iostream>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <string>
#include "Parser.h"
#include "Song.h"
#include "BST.h"

int main(int argc, char *argv[]){
   std::string input;
   BST<Song> all_songs;
   while (input != "exit"){
	   getline(std::cin, input);
	   Parser command(input);

	   if (command.getOperation() == "add"){
		   if (command.getArg1() == "song"){
			   // Insert song into system (BST)
			   Song song(command.getArg2());
			   all_songs.insert(song);
			   //std::cout << "added song" << std::endl;
		   }
		   else if (command.getArg1() == "user"){
			   // Add user/vertex to graph
		   }
	   }
   }
}