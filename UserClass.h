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
		
		void BFS();
		//Breadth First Search

	private:
		//Variables
		string saved_n; 
		string rem_user;
		int vtx_count;
		int g;
		int node;
		int radius;

		bool* visited;
		//ptr to a boolean of visited vertices

		vector<UserClass> fren_vertex;
		//vector of friend vertices
		
		list<int> queue;
		//BFS queue
		
			
		vector<int> distance;
		//vector of distances for BFS

		vector<int> parent;
		//vector of parent nodes for BFS

		
		
};
