#include <iostream>
#include <cstdlib>
#include "UserClass.h"

using namespace std;

UserClass::UserClass(){
//stores new user information
}

UserClass::User(string n){

}
		
void UserClass::setName(string n){
	saved_n = n;

}

string UserClass::getName(){
	return saved_n;	
}

void UserClass::createFren(){
	vector<string> frenVector;
}

void UserClass::addFren(string n){
	frenVector.push_back(n);
}

void UserClass::remFren(){

}
		
