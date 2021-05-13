#include <iostream>
#include <cstdlib>
#include <vector>
#include "UserClass.h"

using namespace std;

UserClass::UserClass(){
//stores new user information
}

UserClass::UserClass(string n, fren_vertex){
	saved_n = n;
}
		
string UserClass::getName(){
	return saved_n;	
}

void UserClass::addFren(string user){
	user.getName();
	fren_vertex.push_back(user);
	int vtx_count++;
}

void UserClass::remFren(string user){
	rem_user = user.getName();
	for(int i = 0; i < fren_vertex.size(); i++ ){
		if(rem_user == fren_vector.at(g))
		fren_vertex.erase(rem_user);

	}
}

void UserClass::BFS(fren_vertex, node){
	int radius = 3;
	list<int> queue;
	
	//for(vertex in graph)
		distance[node] = 0; //or infinity? 
		color[node] = "white";
		parent[node] = NULL;
	
	while(queue != NULL){
		return 0;
		//Dequeue
		//int 
		//for(int i = fren_vertex.begin(g); i <= radius; i++){				 	//if(vertex: color[*node] == "white"){
				//vertex color[*node] = "grey";
				//vertex: distance[*node]+= 1; 
				//vertex: parent[*node] = vertex?
				//Enqueue
		//color[node] = black; 
			
			}
	
	}	
	//creates a radius within a certain level; return true if found
}
