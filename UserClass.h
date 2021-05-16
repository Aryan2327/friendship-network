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

		string getColor();
		//get color

		void setColor(string color);
		//set color

		int getDistance();
		//get distance

		void setDistance(int d);
		//set distance

		void addFren(UserClass* user);
		//add user to friends vector 

		void remFren(UserClass* user);
		//remove user vertex from friends vector

		vector<UserClass*> getFren();
		//return friends vector

		void reinit();
		//reinitializes vars
	
		int showFrens();	
		//show user's friends 

	private:
		//Variables
		string saved_n;

		string color;

		int distance;

		vector<UserClass*> fren_vertex;
		//vector of friendship edges
};
