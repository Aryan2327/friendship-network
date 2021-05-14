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

		void addFren(UserClass user);
		//add user to friends vector 

		void remFren(UserClass user);
		//remove user vertex from friends vector 
		
		void BFS(vector<UserClass> fren_vertex, int node);
		//Breadth First Search creates a radius within a 3 levels

	private:
		//Variables
		string saved_n; 
		string rem_user;
		int vtx_count;
		int node;
		int radius;

		vector<UserClass> fren_vertex;
		//vector of friend vertices

		bool* visited;//<<bool
		//ptr to a boolean of visited vertices

		list<int> queue;
		//BFS queue	
			
		vector<int> distance;
		//vector of distances for BFS

		vector<int> parent;
		//vector of parent nodes for BFS

		
		
};
