#ifndef Song_H
#define Song_H
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
class Song{ 
public:
  Song();
  Song(string name);
  void setTitle(string);
  string getName();
  void addListen();
  void resetListens();
  unsigned int getListens();

private:
  string title;
  unsigned int listens;
};

#endif