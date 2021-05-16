#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <list>
#include <climits>

#include "UserClass.h"

using namespace std;

UserClass::UserClass(){
//stores new user information
}

UserClass::UserClass(string n){
	saved_n = n;
	color = "white";
	distance = INT_MAX;
}
		
string UserClass::getName(){
	return saved_n;	
}

string UserClass::getColor(){
	return color;
}

void UserClass::setColor(string color){
	this->color = color;
}

int UserClass::getDistance(){
	return distance;
}

void UserClass::setDistance(int d){
	distance = d;
}

void UserClass::addFren(UserClass* user){
	fren_vertex.push_back(user);
}

void UserClass::remFren(UserClass* user){
	for (int i = 0; i < fren_vertex.size(); i++){
		if (user->getName() == fren_vertex[i]->getName()){
			fren_vertex.erase(fren_vertex.begin() + i);
		}
	}
}

vector<UserClass*> UserClass::getFren(){
	return fren_vertex;
}

void UserClass::reinit(){
	color = "white";
	distance = INT_MAX;
}

int UserClass::showFrens(){
	cout << "Your friends are:" << endl;
	for(int i = 0; i < fren_vertex.size(); i++){
		cout<< fren_vertex[i]->getName() << endl;
	} 
	cout << "That is all your friends." << endl;
	return 0;
}

