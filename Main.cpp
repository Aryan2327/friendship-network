#include <iostream>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <string>

#include "Parser.h"
#include "Song.h"
#include "UserClass.h"
#include "BST.h"

int main(int argc, char *argv[]){
   std::string input;
   BST<UserClass> users;
   BST<Song> library;
   BST<Song> system;
   std::cout << "['add' 'befriend' 'unfriend' 'listen' 'remove' 'show']" << std::endl;
   while (input != "exit"){
	   getline(std::cin, input);
	   Parser command(input);

	   if (command.getOperation() == "add"){
		   if (command.getArg1() == "song"){
			   // Insert song into system (BST)
			   Song song(command.getArg2());
			   system.insert(song);
			   //all_songs.print();
			   //std::cout << "added song" << std::endl;
		   }
		   else if (command.getArg1() == "user"){
			   // Add user/vertex to graph
			   UserClass user(command.getArg2());
			   users.insert(user);
		   }
	   }

	   else if (command.getOperation() == "befriend"){
		   // Add existing users to friends vector of another user to simulate friendship

		   
		   if (command.getArg2().empty()){
			   // One argument implies that a friendship is created b/w primary user and another user
		   }
		   else if (!command.getArg1().empty() && !command.getArg2().empty()){
			   // Two arguments imply that a friendship is created b/w two other users
		   }
	   }

	   else if (command.getOperation() == "unfriend"){
		   // Remove existing users from friends vector

		   if (command.getArg2().empty()){
			   // One argument implies that a friendship is destroyed b/w primary user and another user
		   }
		   else if (!command.getArg1().empty() && !command.getArg2().empty()){
			   // Two arguments imply that a friendship is destroyed b/w two other users
		   }
	   }

	   else if (command.getOperation() == "listen"){
		   // Check if user is within EFN using BFS
		   // Increment corresponding song listened to in heap N times
	   }

	   else if (command.getOperation() == "remove"){
		   // Remove song from primary library and set the song listens in the heap to 0
		   Song song(command.getArg1());
		   system.remove(song);
		   system.print();


	   }

	   else if (command.getOperation() == "show"){
		   if (command.getArg1() == "songs"){
			   library.print();
		   }
	   }
   }
}
