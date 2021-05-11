#include <string>
#include "Song.h"
#include <string.h>
#include <cctype>

using namespace std;

Song::Song(){}

Song::Song(string name){
	title = name;
}

void Song::setTitle(string t){
  title = t;
}
string Song::getName(){
  return title;
}
void Song::addListen(){
	listens++;
}
void Song::resetListens(){
	listens = 0;
}
unsigned int Song::getListens(){
	return listens;
}