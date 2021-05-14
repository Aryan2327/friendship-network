#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

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

	visited = new bool[vtx_count];
	for(int i = 0; i < vtx_count; i++)
		visited[i] = false; 		

	list<int> queue;
	queue.push(node);
	visited[node] = true;
	distance[node] = 0; 
	parent[node] = NULL;
	
	
	while(!queue.empty()){
		int front_node = queue.front();
		queue.pop();
		for(int i = fren_vertex.begin(front_node); i <= radius; i++){
			if(visited[*i] == false){
				visited[*i] = true;
				distance[*i] = distance[front_node]+ 1; 
				parent[*i] = front_node;

			}
		visited[front_node] = true;
	
		}
	
	}	
	//creates a radius within a certain level; return true if found
}
