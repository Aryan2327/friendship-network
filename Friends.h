#include <iostream>
#include <cstdlib>
#include <vector>

#include "UserClass.h"

using namespace std;

class Friends{
	public:
		Friends();
		//dummy class constructor
			
		void createFren();
		//create friends vector		

		void addFren(string user);
		//add user vertex to friends vector 
		
		void bondFren(int fromfren1, int tofren2);
		//adds friendship edge in friends vector
		
		void remFren(int fromfren1, int tofren2);
		//breaks friendship edge in friends vector

		//BFS?

	private:
		//variables
		string user;
		

		vector<string> fren_vertex;
		//vector of friend vertices

		vector <edges> fren_edge;	
		//vector of egdes to connect friends

		typedef pair<int,int> edges;
		//Indecies of fren_vertex
		
		
			

};
