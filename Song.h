#ifndef Song_H
#define Song_H
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
class Song{ 
public:
	Song();
	Song(string);
	Song(const Song &);
	void operator=(const Song&);
  	//void setTitle(string);
  	string getName();
  	void addListen();
  	void resetListens();
  	unsigned int getListens();
  	void setListens(unsigned int);
  	void setIndex(unsigned int);
  	unsigned int getIndex();
	void reinit();
private:
  	string title;
  	unsigned int listens;
  	unsigned int heapIndex;
};

#endif