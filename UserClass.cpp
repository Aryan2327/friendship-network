#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
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
	vector<string> fren_vertex;
	adj_arr[user] = fren_vertex;
}


void UserClass::addFren(UserClass user, UserClass user2){
	if(user != NULL)
		if(user2 != NULL){
		fren_vertex[user].push_back(user2);
		fren_vertex[user2].push_back(user);
		}
	} else 
		cout << "Invalid user(s)." << endl; 
}

void UserClass::remFren(UserClass user, UserClass user2){
	rem_user = adj_arr[user];
	for(int i = 0; i < adj_arr[user].size(); i++ ){
		if(rem_user == aj_arr[i]) 
			adj_arr[i].erase(rem_user); 
	}
	rem_user = adj_arr[user2];
	for(int i = 0; i < adj_arr[user2].size(); i++ ){
		if(rem_user == aj_arr[i]) 
			adj_arr[i].erase(rem_user); 
	}
}

void UserClass::BFS(map<string, vector<string> > adj_list, int node){
	int radius = 3;	

	//visited = new bool[vtx_count];
	for(int i = 0; i < adj_arr[user].size(); i++)
		visited[i] = false; 		

	list<int> queue;
	queue.push_back(node);
	visited[node] = true;
		
	while(!queue.empty()){
		int front_node = queue.front();
		queue.pop_front();
		for(auto i = fren_vertex[front_node].begin(); i <= radius; i++){ //<<auto/node
			if(visited[*i] == false){
				visited[*i] = true;
				queue.push_back(*i);
			}
		//visited[front_node] = true;
		}
	}	
}
