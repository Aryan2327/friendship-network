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
