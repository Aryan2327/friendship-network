#include <iostream>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <string>
#include <queue>

#include "Parser.h"
#include "Song.h"
#include "UserClass.h"
#include "BST.h"

const int EFN = 4;

bool BFS(UserClass source, UserClass* target){
	// Must initialize user objects in BST
	 		
	source.setColor("grey");
	source.setDistance(0);
	std::queue<UserClass> queue;
	queue.push(source);
		
	while(!queue.empty()){
		UserClass u = queue.front();
		//std::cout << u.getName() << std::endl;
		queue.pop();
		auto friends = u.getFren();
		for(int i = 0; i < friends.size(); i++){ // friends of user
			auto v = friends[i];
			if (v->getColor() == "white"){
				v->setColor("grey");
				v->setDistance(u.getDistance()+1);

				//std::cout << v.getName() << std::endl;
				if (v->getName() == target->getName()){
					if (v->getDistance() <= EFN){
						return true;
					}
					else {
						return false;
					}
				}

				queue.push(*v);
			}
		}
		u.setColor("black");
	}
	return false;	
}

int main(int argc, char *argv[]){
	std::string input;
	UserClass primary("Rick");  //primary user
	BST<UserClass> users;
	BST<Song> library;
	BST<Song> system;
	std::cout << "['add' 'befriend' 'unfriend' 'listen' 'recommend' 'remove' 'show']" << std::endl;
	while (input != "exit"){
		getline(std::cin, input);
		Parser command(input);

	   if (command.getOperation() == "add"){
		   if (command.getArg1() == "song"){
			   // Insert song into system (BST)
			   Song song(command.getArg2());
			   Song* song_ptr = system.insert(song);
			   // Insert pointer to song into heap

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
			UserClass user1(command.getArg1());
			UserClass user2(command.getArg2());


			if (command.getArg2().empty()){
				// One argument implies that a friendship is created b/w primary user and another user
				UserClass* user_ptr1 = users.search(user1);

				if (user_ptr1 != nullptr){
					primary.addFren(user_ptr1);
					user_ptr1->addFren(&primary);
					
				}
				else{
					std::cout << "Error: User not found." << std::endl;
				}
			}
			else if (!command.getArg1().empty() && !command.getArg2().empty()){
				// Two arguments imply that a friendship is created b/w two other users
				UserClass* user_ptr1 = users.search(user1);
				UserClass* user_ptr2 = users.search(user2);

				if (user_ptr1 != nullptr && user_ptr2 != nullptr) {
					user_ptr1->addFren(user_ptr2);
					user_ptr2->addFren(user_ptr1);
				}
				else{
					std::cout << "Error: User not found." << std::endl;
				}

			}
		}

		else if (command.getOperation() == "unfriend"){
			// Remove existing users from friends vector
			UserClass user1(command.getArg1());
			UserClass user2(command.getArg2());

			if (command.getArg2().empty()){
				// One argument implies that a friendship is destroyed b/w primary user and another user
				UserClass* user_ptr1 = users.search(user1);

				if (user_ptr1 != nullptr){
					primary.remFren(user_ptr1);
					user_ptr1->remFren(&primary);
					
				}
				else{
					std::cout << "Error: User not found." << std::endl;
				}
			}
			else if (!command.getArg1().empty() && !command.getArg2().empty()){
				// Two arguments imply that a friendship is destroyed b/w two other users
				UserClass* user_ptr1 = users.search(user1);
				UserClass* user_ptr2 = users.search(user2);

				if (user_ptr1 != nullptr && user_ptr2 != nullptr) {
					user_ptr1->remFren(user_ptr2);
					user_ptr2->remFren(user_ptr1);
				}
				else{
					std::cout << "Error: User not found." << std::endl;
				}
			}
		}

		else if (command.getOperation() == "listen"){
			UserClass user(command.getArg1());
			UserClass* user_ptr = users.search(user);
			Song song(command.getArg2());
			Song* song_ptr = system.search(song);

			if (user_ptr != nullptr && song_ptr != nullptr){
				// Check if user is within EFN using BFS
				users.inorder_reinit();
				if (BFS(primary, user_ptr)) {
					// Increment corresponding song listened to in heap N times (Must maintain heap property)
				}
			


				
			}
		}

		else if (command.getOperation() == "remove"){
			// Remove song from primary library and set the song listens in the heap to 0
			Song song(command.getArg1());
			system.remove(song);
			//system.print();


		}

		else if (command.getOperation() == "show"){
			if (command.getArg1() == "songs"){
				if (command.getArg2() == "library"){
					library.print();
				}
				else if (command.getArg2() == "system"){
					system.print();
				}
				else {
					std::cout << "Error: Second arg incorrect." << std::endl;
				}
			}

			else if (command.getArg1() == "friends"){

			}
		}

		else if (command.getOperation() == "recommend"){
			int radius;
			stringstream(command.getOperation()) >> radius;
			

		}

	}
}
