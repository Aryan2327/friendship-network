#include <iostream>
#include <cstdlib>
#include "UserClass.h"

using namespace std;

UserClass::UserClass(){
//stores new user information
}

UserClass::UserClass(string n, fren_vertex){

}
		
void UserClass::setName(string n){
	saved_n = n;

}

string UserClass::getName(){
	return saved_n;	
}

void UserClass::addFren(string user){
	user.getName();
	fren_vertex.push_back(user);
}

void UserClass::remFren(string user){
	rem_user = user.getName();
	for(int i = 0; i < fren_vertex.size(); i++ ){
		if(rem_user == fren_vector.at(g))
		fren_vertex.erase(rem_user);

	}
}
		
