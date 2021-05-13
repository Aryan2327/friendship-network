#include <iostream>
#include <iostream>
#include <cstdlib>
#include <vector>

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
		int g;  
		int vtx_count;
		int node; //<<

		vector<UserClass> fren_vertex;
		//vector of friend vertices
		
		list<int> queue;
		//BFS queue
		
		vector<string> color;
		//vector of color for BFS
		
		vectot<int> distance;
		//vector of distances for BFS

		/vector<int> parent;
		//vector of parent nodes for BFS

		
		
};
