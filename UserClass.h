#include <iostream>
#include <cstdlib>

using namespace std;

class UserClass {
	public:
		UserClass();
		//dummy class constructor

		User(string n);
		//holds all user attributes << add vector of friends

		void setName(string n);
		//add new user's name
		
		string getName();
		//get user's name
		
		void createFriends();
		//create friends vector		

		void addFriends();
		//add user's friends using a vector

		
	private:
		string saved_n; 
		//saved name 
};
