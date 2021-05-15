#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

#include "UserClass.h"

using namespace std;

UserClass::UserClass(){
//stores new user information
}

UserClass::UserClass(string n){
	saved_n = n;
}
		
string UserClass::getName(){
	return saved_n;	
}

void UserClass::addUser(UserClass user){
	vector<UserClass> fren_vector;
	adj_arr[user] = fren_vector;
}


void UserClass::addFren(UserClass user, UserClass user2){
	if(user = true && user2 = true){
		fren_vector[user].push_back(user2);
		fren_vector[user2].push_back(user);
	} else 
		cout << "Invalid user(s)." << endl; 
}

void UserClass::remFren(UserClass user, UserClass user2){
	rem_user = fren_vertex[user];
	for(int i = 0; i < fren_vector.size(); i++ ){
		if(rem_user == fren_vector.at(i)) 
			fren_vector.erase(rem_user); 

	}
}

void UserClass::BFS(adj_list, int node){
	int radius = 3;	

	//visited = new bool[vtx_count];
	for(int i = 0; i < vtx_count; i++)
		visited[i] = false; 		

	list<int> queue;
	queue.push_back(node);
	visited[node] = true;
		
	while(!queue.empty()){
		int front_node = queue.front();
		queue.pop_front();
		for(auto i = fren_vector[front_node].begin(); i <= radius; i++){ //<<auto/node
			if(visited[*i] == false){
				visited[*i] = true;
				queue.push_back(*i);
			}
		//visited[front_node] = true;
		}
	}	
}
