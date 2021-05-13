#include <iostream>
#include <cstdlib>
#include <vector>
#include "UserClass.h"

using namespace std;

UserClass::UserClass(){
//stores new user information
}

UserClass::UserClass(string n){
	saved_n = n;
}
		
void UserClass::setName(string n){
	saved_n = n;

}

string UserClass::getName(){
	return saved_n;	
}

void UserClass::addFren(UserClass user){
	fren_vertex.push_back(user);
}

void UserClass::remFren(UserClass user){
	for(int i = 0; i < fren_vertex.size(); i++){
		if(user.getName() == fren_vertex[i].getName()){
			fren_vertex.erase(fren_vertex.begin() + i);
		}
	}
}

/*
void UserClass::BFS(){
	list<int> queue;
	
	bool *visited = new bool[];
	for(int i = 0; i <; i++)
		visited[i] = false;

	
}
*/
