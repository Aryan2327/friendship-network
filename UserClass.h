#include <iostream>
#include <cstdlib>

using namespace std;

class UserClass {
	public:
		UserClass();
		//dummy class constructor

		User(string n);
		//holds all user attributes << just name?

		void setName(string n);
		//add new user's name
		
		string getName();
		//get user's name
	
	private:
		string saved_n; 
		//saved name 
};
