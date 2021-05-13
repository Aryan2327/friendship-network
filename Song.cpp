#include <string>
#include "Song.h"
#include <string.h>
#include <cctype>

using namespace std;
Song::Song(string t) {
	title = t;
	listens = 0;
	heapIndex = -1;
}
/*void Song::setTitle(string t){
  title = t;
}*/
string Song::getTitle(){
  return title;
}
void Song::addListen(){
	listens++;
}
void Song::setListens(unsigned int i){
	listens = i;
}
void Song::resetListens(){
	listens = 0;
}
unsigned int Song::getListens(){
	return listens;
}
void Song::setIndex(unsigned int i) {
	heapIndex = i;
}
unsigned int Song::getIndex() {
	return heapIndex;
}