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
		
		void createFren();
		//create friends vector		

		void addFren(string n);
		//add user to friend vector
		
		void remFren();
		//removes a friendship from friend vector

		
	private:
		string saved_n; 
		//saved name 
};
