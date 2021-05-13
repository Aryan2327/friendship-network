#include <iostream>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class UserClass {
	public:
		UserClass();
		//dummy class constructor

		UserClass(string n, vector<UserClass> fren_vertex);
		//stores user attributes << name & friendships

		void setName(string n);
		//add new user's name
		
		string getName();
		//get user's name

		void addFren(string user);
		//add user to friends vector 

		void remFren(string user);
		//remove user vertex from friends vector 
		
		void BFS();
		//Breadth First Search

	private:
		//Variables
		string saved_n;
		string rem_user;
		int g;  


		vector<UserClass> fren_vertex;
		//vector of friend vertices
		//object user?
		
		//vector vector<string> edges;
		//vector of vector

};
