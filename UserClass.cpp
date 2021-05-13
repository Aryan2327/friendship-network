#include <iostream>
#include <cstdlib>
#include <vector>
#include "UserClass.h"

using namespace std;

UserClass::UserClass(){
//stores new user information
}

<<<<<<< HEAD
UserClass::UserClass(string n, fren_vertex){
=======
UserClass::UserClass(string n){
	saved_n = n;
}
		
void UserClass::setName(string n){
>>>>>>> a72b401390369230064b63a55978278a1e6c1269
	saved_n = n;
}
		
string UserClass::getName(){
	return saved_n;	
}

void UserClass::addFren(UserClass user){
	fren_vertex.push_back(user);
	int vtx_count++;
}

void UserClass::remFren(UserClass user){
	for(int i = 0; i < fren_vertex.size(); i++){
		if(user.getName() == fren_vertex[i].getName()){
			fren_vertex.erase(fren_vertex.begin() + i);
		}
	}
}

<<<<<<< HEAD
void UserClass::BFS(fren_vertex, node){
=======
/*
void UserClass::BFS(){
>>>>>>> a72b401390369230064b63a55978278a1e6c1269
	list<int> queue;
	
	//for(vertex in graph)
		distance[node] = 0; //or infinity? 
		color[node] = "white";
		parent[node] = NIL;
	
	while(queue != NULL){
		return 0;
		//Dequeue
		//for(vertex in graph arry of nodes)
			//if(vertex: color[*node] == "white"){
				//vertex color[*node] = "grey";
				//vertex: distance[*node]+= 1; <<check
				//vertex: parent[*node] = vertex?
				//Enqueue
		//color[node] = black; 
			
			}
	
	}	
	
}
*/
