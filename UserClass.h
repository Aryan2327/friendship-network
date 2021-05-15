#include <iostream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <list>

using namespace std;

class UserClass {
	public:
		UserClass();
		//dummy class constructor

		UserClass(string n);
		//stores user attributes << name & friendships
		
		string getName();
		//get user's name

		void addUser(UserClass user);
		//adds user to container for adding friends

		void addFren(UserClass user, UserClass user2);
		//add user to friends vector 

		void remFren(UserClass user, UserClass user2);
		//remove user vertex from friends vector 
		
		void BFS(map<string, vector<string> > adj_list, int node);
		//Breadth First Search creates a radius within a 3 levels

	private:
		//Variables
		string saved_n; 
		int rem_user;
		
		int node;
		int radius;

		map<string, vector<string> > adj_list;
		//Adj list that maps out names and friends

		vector<string> fren_vertex;
		//vector of friendship edges
	
		const char adj_array[];
		//vector iterator

		bool* visited;
		//ptr to a boolean of visited vertices

		list<int> queue;
		//BFS queue	
			
	
		
		
};
