#ifndef Song_H
#define Song_H
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
class Song{ 
public:
	Song(string);
	Song(const Song &);
	Song operator=(const Song&);
  	//void setTitle(string);
  	string getTitle();
  	void addListen();
  	void resetListens();
  	unsigned int getListens();
  	void setListens(unsigned int);
  	void setIndex(unsigned int);
  	unsigned int getIndex();
private:
  	string title;
  	unsigned int listens;
  	unsigned int heapIndex;
};

#endif