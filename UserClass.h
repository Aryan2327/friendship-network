#include <iostream>
#include <iostream>
#include <cstdlib>
#include <vector>
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
		
		void BFS(map<UserClass, fren_vector> adj_list, int node);
		//Breadth First Search creates a radius within a 3 levels

	private:
		//Variables
		string saved_n; 
		string rem_user;
		int vtx_count;
		
		int node;
		int radius;

		map<UserClass, fren_vector> adj_list;
		//Adj list that maps out names and friends

		vector<Userclass> fren_vector;
		//vector of friendship edges
	
		//vector<>::iterator itr;
		//vector iterator

		bool* visited;//<<bool
		//ptr to a boolean of visited vertices

		list<int> queue;
		//BFS queue	
			
		vector<int> distance;
		//vector of distances for BFS

		vector<int> parent;
		//vector of parent nodes for BFS

		
		
};
